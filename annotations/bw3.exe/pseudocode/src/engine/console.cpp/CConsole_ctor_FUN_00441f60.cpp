// Name: engine_console.cpp_CConsole_ctor_FUN_00441f60
// Address: 00441f60
// Address Range: [[00441f60, 00441fd0]]
// Convention: __cdecl
// Signature: CConsole * __cdecl engine_console_cpp_CConsole_ctor_FUN_00441f60(CConsole *this_ptr,int width,int height,int screen_x,int screen_y)

#include "nocturne.h"

CConsole * __cdecl engine_console_cpp_CConsole_ctor_FUN_00441f60(CConsole *this_ptr,int width,int height,int screen_x,int screen_y)

{
  *(int *)&this_ptr->field_0xfb0 = width;
  *(int *)&this_ptr->field_0xfb4 = height;
  *(int *)&this_ptr->field_0xfb8 = screen_x;
  *(int *)&this_ptr->field_0xfbc = screen_y;
  if (*(int *)&this_ptr->field_0xfb8 < 1) {
    *(uint *)&this_ptr->field_0xfb8 = 1;
  }
  if (*(int *)&this_ptr->field_0xfbc < 1) {
    *(uint *)&this_ptr->field_0xfbc = 1;
  }
  engine_console_cpp_CConsole_reset_FUN_00442190(this_ptr);
  *(uint *)this_ptr = 0;
  *(uint *)&this_ptr->field_0x4 = 0;
  return this_ptr;
}
