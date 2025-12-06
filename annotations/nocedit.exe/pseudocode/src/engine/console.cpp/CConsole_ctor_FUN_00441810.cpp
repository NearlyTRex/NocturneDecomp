// Name: engine_console.cpp_CConsole_ctor_FUN_00441810
// Address: 00441810
// Address Range: [[00441810, 00441879]]
// Convention: __cdecl
// Signature: CConsole * engine_console.cpp_CConsole_ctor_FUN_00441810(CConsole * this_ptr, int width, int height, int screen_x, int screen_y)

#include "nocturne.h"

CConsole * __cdecl
engine_console_cpp_CConsole_ctor_FUN_00441810
          (CConsole *this_ptr,int width,int height,int screen_x,int screen_y)

{
  this_ptr->consoleWidth = width;
  this_ptr->consoleHeight = height;
  this_ptr->screenX = screen_x;
  this_ptr->screenY = screen_y;
  if (this_ptr->screenX < 1) {
    this_ptr->screenX = 1;
  }
  if (this_ptr->screenY < 1) {
    this_ptr->screenY = 1;
  }
  engine_console_cpp_CConsole_reset_FUN_00441a40(this_ptr);
  this_ptr->fileLoggingEnabled = 0;
  return this_ptr;
}
