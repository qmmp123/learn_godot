#include "gdexample.h"
#include <iostream>

using namespace godot;

void GDExample::_register_methods()
{
    register_method("_process", &GDExample::_process);
}

GDExample::GDExample()
{
}

void GDExample::_init(){
    std::cerr << "ran it" << std::endl;
    time_passed = 0.0;
}

GDExample::~GDExample()
{}

void GDExample::_process(float delta)
{
    time_passed += delta;

    Vector2 new_position = Vector2(
        10.0 + (10.0 * sin(time_passed * 2.0)), 
        10.0 + (10.0 * cos(time_passed * 1.5))
    );

    set_position(new_position);
}
