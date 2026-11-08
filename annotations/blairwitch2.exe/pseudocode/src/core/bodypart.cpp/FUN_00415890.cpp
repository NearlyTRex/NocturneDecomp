// Name: FUN_00415890
// Address: 00415890
// Address Range: [[00415890, 004159d5]]
// Convention: unknown
// Signature: void FUN_00415890(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00415890(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  *(uint *)(param_1 + 0x2d0) = param_2;
  *(uint *)(param_1 + 0x2dc) = param_3;
  uVar1 = FUN_005b8ce0(*(uint *)(param_1 + 0x2d4),*(int *)(param_1 + 0x2d0) * 0xc);
  *(uint *)(param_1 + 0x2d4) = uVar1;
  uVar1 = FUN_005b8ce0(*(uint *)(param_1 + 0x2d8),*(int *)(param_1 + 0x2d0) * 0xc);
  *(uint *)(param_1 + 0x2d8) = uVar1;
  uVar1 = FUN_005b8ce0(*(uint *)(param_1 + 0x2e0),*(int *)(param_1 + 0x2dc) * 0x3c);
  *(uint *)(param_1 + 0x2e0) = uVar1;
  uVar1 = FUN_005b8ce0(*(uint *)(param_1 + 0x2e4),*(int *)(param_1 + 0x2dc) << 2);
  *(uint *)(param_1 + 0x2e4) = uVar1;
  if ((0 < *(int *)(param_1 + 0x2d0)) &&
     ((*(int *)(param_1 + 0x2d4) == 0 || (*(int *)(param_1 + 0x2d8) == 0)))) {
    _DAT_01d046a0 = "..\\core\\bodypart.cpp";
    _DAT_01d046a4 = 0xb2;
    FUN_004e4500("CBodyPart::setCounts - out of memory for vertices - vertexCount = %d",*(uint *)(param_1 + 0x2d0));
  }
  if ((0 < *(int *)(param_1 + 0x2dc)) &&
     ((*(int *)(param_1 + 0x2e0) == 0 || (*(int *)(param_1 + 0x2e4) == 0)))) {
    _DAT_01d046a0 = "..\\core\\bodypart.cpp";
    _DAT_01d046a4 = 0xb7;
    FUN_004e4500("CBodyPart::setCounts - out of memory for triangles - triCount = %d",*(uint *)(param_1 + 0x2dc));
    return;
  }
  return;
}
