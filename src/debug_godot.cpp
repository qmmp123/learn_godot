#include "debug_godot.h"


namespace GodotDebug{
    void to_console(const godot::String message){
        godot::Godot::print(message);
    }
}
