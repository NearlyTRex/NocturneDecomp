// Name: engine_console.cpp_CConsole_ctor_FUN_004453a0
// Address: 004453a0
// Address Range: [[004453a0, 00445410]]
// Convention: __cdecl
// Signature: CConsole * __cdecl engine_console_cpp_CConsole_ctor_FUN_004453a0(CConsole *this_ptr,int width,int height,int screen_x,int screen_y)

#include "nocturne.h"

CConsole * __cdecl engine_console_cpp_CConsole_ctor_FUN_004453a0(CConsole *this_ptr,int width,int height,int screen_x,int screen_y)

{
  this_ptr->console_width = width;
  this_ptr->console_height = height;
  this_ptr->screen_x = screen_x;
  this_ptr->screen_y = screen_y;
  if (this_ptr->screen_x < 1) {
    this_ptr->screen_x = 1;
  }
  if (this_ptr->screen_y < 1) {
    this_ptr->screen_y = 1;
  }
  engine_console_cpp_CConsole_reset_FUN_004455d0(this_ptr);
  this_ptr->file_logging_enabled = 0;
  *(uint *)&this_ptr->field_0x4 = 0;
  return this_ptr;
}
