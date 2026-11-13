// Name: engine_2d.c_draw320x200SizeDot_FUN_00402ae0
// Address: 00402ae0
// Address Range: [[00402ae0, 00402c5d]]
// Convention: unknown
// Signature: void engine_2d_c_draw320x200SizeDot_FUN_00402ae0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_2d_c_draw320x200SizeDot_FUN_00402ae0(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  if ((((0 < in_stack_0000000c) && (in_stack_00000004 <= in_stack_0000000c)) &&
      (-in_stack_0000000c <= in_stack_00000004)) &&
     ((in_stack_00000008 <= in_stack_0000000c && (-in_stack_0000000c <= in_stack_00000008)))) {
    if (DAT_006141bc < 400) {
      if (DAT_006141bc != 200) {
LAB_00402c36:
        _DAT_01d046a0 = "..\\engine\\2d.c";
        _DAT_01d046a4 = 0x7c0;
        core_main_c_FUN_004e4500("draw320x200SizeDot: unknown graphics option");
        return;
      }
      engine_2d_c_project3DPointToScreen_FUN_00401780
                (in_stack_00000004,in_stack_00000008,in_stack_0000000c);
    }
    else if (DAT_006141bc < 0x191) {
      iVar2 = (int)(((longlong)in_stack_00000004 * (longlong)_DAT_01c35e38) /
                   (longlong)in_stack_0000000c) + _DAT_01c35e40 >> 0x10;
      iVar1 = _DAT_01c35e44 +
              (int)(((longlong)in_stack_00000008 * (longlong)_DAT_01c35e3c) /
                   (longlong)in_stack_0000000c) >> 0x10;
      if (((-1 < iVar2) && (iVar2 < 0x140)) && ((-1 < iVar1 && (iVar1 < 399)))) {
        engine_2d_c_plotPixel_FUN_00401130(iVar2,iVar1);
        engine_2d_c_plotPixel_FUN_00401130(iVar2,iVar1 + 1);
        return;
      }
    }
    else {
      if (DAT_006141bc != 0x1e0) goto LAB_00402c36;
      iVar2 = (int)(((longlong)in_stack_00000004 * (longlong)_DAT_01c35e38) /
                   (longlong)in_stack_0000000c) + _DAT_01c35e40 >> 0x10;
      iVar1 = (int)(((longlong)in_stack_00000008 * (longlong)_DAT_01c35e3c) /
                   (longlong)in_stack_0000000c) + _DAT_01c35e44 >> 0x10;
      if ((((-1 < iVar2) && (iVar2 < 0x27f)) && (-1 < iVar1)) && (iVar1 < 0x1df)) {
        engine_2d_c_plotPixel_FUN_00401130(iVar2,iVar1);
        engine_2d_c_plotPixel_FUN_00401130(iVar2 + 1,iVar1);
        engine_2d_c_plotPixel_FUN_00401130(iVar2 + 1,iVar1 + 1);
        engine_2d_c_plotPixel_FUN_00401130(iVar2,iVar1 + 1);
        return;
      }
    }
  }
  return;
}
