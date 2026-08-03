#pragma once

// Function prototypes for engine/console.cpp
// Generated from Ghidra function signatures

// Original: engine_console.cpp_CConsole_ctor_FUN_0043abe0
// Address: 0043abe0
CConsole * __cdecl CConsole::ctor(CConsole *this_ptr,int width,int height,int screen_x,int screen_y);

// Original: engine_console.cpp_CConsole_dtor_FUN_0043ac50
// Address: 0043ac50
CConsole * __cdecl CConsole::dtor(CConsole *this_ptr,uint flags);

// Original: engine_console.cpp_CConsole_printf_FUN_0043ac60
// Address: 0043ac60
void CConsole::printf(CConsole *param_1,char *param_2);

// Original: engine_console.cpp_CConsole_writeChar_FUN_0043ad30
// Address: 0043ad30
void __cdecl CConsole::writeChar(CConsole *this_ptr,char character);

// Original: engine_console.cpp_CConsole_reset_FUN_0043ae00
// Address: 0043ae00
void __cdecl CConsole::reset(CConsole *this_ptr);

// Original: engine_console.cpp_CConsole_scrollUp_FUN_0043ae40
// Address: 0043ae40
void __cdecl CConsole::scrollUp(CConsole *this_ptr);

// Original: engine_console.cpp_CConsole_render_FUN_0043aec0
// Address: 0043aec0
void __cdecl CConsole::render(CConsole *this_ptr);
