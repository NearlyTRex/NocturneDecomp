// Name: FUN_00475f80
// Address: 00475f80
// Address Range: [[00475f80, 0047603e]]
// Convention: unknown
// Signature: void FUN_00475f80(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00475f80(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    _DAT_01cc4800 = "..\\shape\\edittool.cpp";
    _DAT_01cc4804 = 0xdfa;
    FUN_004c8440("CPickList::enableItem - invalid index");
  }
  if (param_1[0x4c] <= param_2) {
    iVar1 = FUN_00564a70(param_1[0x4d],*param_1 << 2);
    param_1[0x4d] = iVar1;
    if (iVar1 == 0) {
      _DAT_01cc4800 = "..\\shape\\edittool.cpp";
      _DAT_01cc4804 = 0xe01;
      FUN_004c8440("Out of memory");
    }
    while (param_1[0x4c] < *param_1) {
      *(uint *)(param_1[0x4d] + param_1[0x4c] * 4) = 1;
      param_1[0x4c] = param_1[0x4c] + 1;
    }
  }
  *(uint *)(param_1[0x4d] + param_2 * 4) = (uint)(param_3 != 0);
  return;
}
