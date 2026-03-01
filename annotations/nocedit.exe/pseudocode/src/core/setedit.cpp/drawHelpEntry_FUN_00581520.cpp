// Name: core_setedit.cpp_drawHelpEntry_FUN_00581520
// Address: 00581520
// Address Range: [[00581520, 00581583]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_drawHelpEntry_FUN_00581520(int column,int row,char *key_label,char *description)

#include "nocturne.h"

void __cdecl core_setedit_cpp_drawHelpEntry_FUN_00581520(int column,int row,char *key_label,char *description)

{
  int x;
  
  x = (column * g_WindowWidth) / 2;
  engine_2d_c_drawText_FUN_00401fd0(key_label,x,row * 0xb);
  engine_2d_c_drawText_FUN_00401fd0(description,g_WindowWidth / 10 + x,row * 0xb);
  return;
}
