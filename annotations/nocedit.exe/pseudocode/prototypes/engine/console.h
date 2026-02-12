#pragma once

// Function prototypes for engine/console.cpp
// Generated from Ghidra function signatures

// Original: engine_console.cpp_staticInit_FUN_004417e0
// Address: 004417e0
void __cdecl staticInit(void);

// Original: engine_console.cpp_CConsole_ctor_FUN_00441810
// Address: 00441810
CConsole * __cdecl CConsole::ctor(CConsole *this_ptr,int width,int height,int screen_x,int screen_y);

// Original: engine_console.cpp_CConsole_dtor_FUN_00441880
// Address: 00441880
CConsole * __cdecl CConsole::dtor(CConsole *this_ptr,uint flags);

// Original: engine_console.cpp_CConsole_printf_FUN_00441890
// Address: 00441890
void __cdecl CConsole::printf(CConsole *this_ptr,char *format,...);

// Original: engine_console.cpp_CConsole_writeChar_FUN_00441970
// Address: 00441970
void __cdecl CConsole::writeChar(CConsole *this_ptr,char character);

// Original: engine_console.cpp_CConsole_reset_FUN_00441a40
// Address: 00441a40
void __cdecl CConsole::reset(CConsole *this_ptr);

// Original: engine_console.cpp_CConsole_scrollUp_FUN_00441a80
// Address: 00441a80
void __cdecl CConsole::scrollUp(CConsole *this_ptr);

// Original: engine_console.cpp_CConsole_render_FUN_00441b00
// Address: 00441b00
void __cdecl CConsole::render(CConsole *this_ptr);
