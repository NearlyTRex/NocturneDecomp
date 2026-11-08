// Name: FUN_00414910
// Address: 00414910
// Address Range: [[00414910, 00414a55]]
// Convention: unknown
// Signature: void FUN_00414910(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00414910(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  *(uint *)(param_1 + 0x174) = param_2;
  *(uint *)(param_1 + 0x180) = param_3;
  uVar1 = FUN_005a3e50(*(uint *)(param_1 + 0x178),*(int *)(param_1 + 0x174) * 0xc);
  *(uint *)(param_1 + 0x178) = uVar1;
  uVar1 = FUN_005a3e50(*(uint *)(param_1 + 0x17c),*(int *)(param_1 + 0x174) * 0xc);
  *(uint *)(param_1 + 0x17c) = uVar1;
  uVar1 = FUN_005a3e50(*(uint *)(param_1 + 0x184),*(int *)(param_1 + 0x180) * 0x3c);
  *(uint *)(param_1 + 0x184) = uVar1;
  uVar1 = FUN_005a3e50(*(uint *)(param_1 + 0x188),*(int *)(param_1 + 0x180) << 2);
  *(uint *)(param_1 + 0x188) = uVar1;
  if ((0 < *(int *)(param_1 + 0x174)) &&
     ((*(int *)(param_1 + 0x178) == 0 || (*(int *)(param_1 + 0x17c) == 0)))) {
    _DAT_01d71de0 = "..\\core\\bodypart.cpp";
    _DAT_01d71de4 = 0xba;
    FUN_004e4330("CBodyPart::setCounts - out of memory for vertices - vertexCount = %d",*(uint *)(param_1 + 0x174));
  }
  if ((0 < *(int *)(param_1 + 0x180)) &&
     ((*(int *)(param_1 + 0x184) == 0 || (*(int *)(param_1 + 0x188) == 0)))) {
    _DAT_01d71de0 = "..\\core\\bodypart.cpp";
    _DAT_01d71de4 = 0xbf;
    FUN_004e4330("CBodyPart::setCounts - out of memory for triangles - triCount = %d",*(uint *)(param_1 + 0x180));
    return;
  }
  return;
}
