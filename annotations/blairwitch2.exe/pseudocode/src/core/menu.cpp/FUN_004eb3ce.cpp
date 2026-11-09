// Name: core_menu.cpp_FUN_004eb3ce
// Address: 004eb3ce
// Address Range: [[004eb3ce, 004eb480]]
// Convention: unknown
// Signature: void core_menu_cpp_FUN_004eb3ce(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_menu_cpp_FUN_004eb3ce(uint param_1)

{
  int iVar1;
  int iVar2;
  char acStack_110 [256];
  
  iVar1 = engine_font_cpp_FUN_004aaf00(_DAT_01511cb8,param_1);
  iVar2 = engine_font_cpp_FUN_004ab560(_DAT_01511cb8,0x58);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cb8,param_1,0x140 - iVar1 / 2,0xf0 - iVar2 / 2,7,0);
  FUN_005b7790(acStack_110,"%d,%d,%x",_DAT_01c38af0,_DAT_01c38af4,_DAT_01c38b00)
  ;
  engine_2d_c_drawText_FUN_00401fe0(acStack_110,0,0);
  return;
}
