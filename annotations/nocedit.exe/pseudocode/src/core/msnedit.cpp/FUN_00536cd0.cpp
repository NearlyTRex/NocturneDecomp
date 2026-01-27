// Name: core_msnedit.cpp_FUN_00536cd0
// Address: 00536cd0
// Address Range: [[00536cd0, 00536e11]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_00536cd0()

#include "nocturne.h"

uint core_msnedit_cpp_FUN_00536cd0(void)

{
  int y1;
  bool bVar1;
  int iVar2;
  uint uVar3;
  char *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  uint local_1c;
  
  iVar2 = engine_2d_c_getStringWidth_FUN_004018a0(in_stack_00000004);
  iVar2 = in_stack_00000008 + iVar2;
  y1 = in_stack_0000000c + 0xb;
  if (in_stack_00000014 == 0) {
    local_1c = -1;
  }
  else {
    local_1c = 7;
  }
  bVar1 = false;
  if ((((g_ActiveButton == (CEdButton *)0x0) && (in_stack_00000008 < g_MouseX)) &&
      (g_MouseX < iVar2)) && ((in_stack_0000000c <= g_MouseY && (g_MouseY < y1)))) {
    bVar1 = true;
    local_1c = 1;
  }
  engine_2d_c_drawText_FUN_00401fd0(in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  if (-1 < local_1c) {
    in_stack_0000000c = in_stack_0000000c + -2;
    in_stack_00000008 = in_stack_00000008 + -2;
    g_ActiveRenderColor = local_1c;
    engine_2d_c_drawLine_FUN_004011b0(in_stack_00000008,in_stack_0000000c,iVar2,in_stack_0000000c);
    engine_2d_c_drawLine_FUN_004011b0(in_stack_00000008,y1,iVar2,y1);
    engine_2d_c_drawLine_FUN_004011b0(in_stack_00000008,in_stack_0000000c,in_stack_00000008,y1);
    engine_2d_c_drawLine_FUN_004011b0(iVar2,in_stack_0000000c,iVar2,y1);
  }
  uVar3 = g_MouseButtonFlags & 1;
  if (((in_stack_00000010 == 0) && (0.0 < FLOAT_02f7c630)) &&
     (FLOAT_02f7c630 < (float)0.29999999999999999)) {
    uVar3 = 0;
  }
  if ((bVar1) && (uVar3 != 0)) {
    if (in_stack_00000010 != 0) {
      g_MouseButtonFlags = 0;
    }
    return 1;
  }
  return 0;
}
