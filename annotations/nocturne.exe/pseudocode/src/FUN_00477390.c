// Name: FUN_00477390
// Address: 00477390
// Address Range: [[00477390, 004774a6]]
// Convention: unknown
// Signature: void FUN_00477390(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00477390(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar5 = *(int *)(param_1 + 0x10);
  iVar1 = FUN_00477340(param_1);
  iVar1 = ((iVar6 + iVar2) - iVar1) / 2;
  iVar2 = FUN_00477300(param_1);
  iVar2 = iVar2 + iVar5;
  iVar3 = FUN_00477340(param_1);
  iVar3 = iVar1 + iVar3;
  iVar6 = param_1 + 0x24;
  iVar4 = engine_font_cpp_CBitFont_getTextHeight_FUN_00492e60(_DAT_01bcd070,iVar6,iVar6,iVar3);
  iVar4 = FUN_00477370(param_1,((*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x1c)) - iVar4) / 2,
                       *(uint *)(param_1 + 0xc),0xffffffff);
  engine_font_cpp_CBitFont_drawText_FUN_00490980(_DAT_01bcd070,iVar6,iVar4 + iVar2);
  shape_edittool_cpp_draw3DBorder_FUN_00476260
            (iVar5,iVar1,iVar2,iVar3,*(uint *)(param_1 + 0x20));
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar3 = iVar3 + -1;
    iVar2 = iVar2 + -1;
    if (*(int *)(param_1 + 4) != 1) {
      return;
    }
  }
  else {
    iVar1 = iVar1 + 1;
    iVar5 = iVar5 + 1;
    if (*(int *)(param_1 + 4) != 1) {
      return;
    }
  }
  _DAT_01c00c70 = 0;
  engine_2d_c_clipLineGlobal_FUN_00403940(iVar5 + 1,iVar1 + 1,iVar2 + -2,iVar3 + -2);
  engine_2d_c_clipLineGlobal_FUN_00403940(iVar2 + -2,iVar1 + 1,iVar5 + 1,iVar3 + -2);
  return;
}
