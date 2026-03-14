// Name: core_skeledit.cpp_drawInfoRow_FUN_00596860
// Address: 00596860
// Address Range: [[00596860, 005968a1]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_drawInfoRow_FUN_00596860(int row,char *label,char *value)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_drawInfoRow_FUN_00596860(int row,char *label,char *value)

{
  int y;
  
  y = (row + 1) * 0xb;
  engine_2d_c_drawText_FUN_00401fd0(label,7,y);
  engine_2d_c_drawText_FUN_00401fd0(value,0x69,y);
  return;
}
