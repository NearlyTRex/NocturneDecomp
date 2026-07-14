// Name: FUN_1000a170
// Address: 1000a170
// Address Range: [[1000a170, 1000a1f0]]
// Convention: unknown
// Signature: bool FUN_1000a170(ushort *param_1,undefined4 *param_2)

#include "nocturne.h"

bool FUN_1000a170(ushort *param_1,uint *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  uint uStack_c;
  uint uStack_8;
  int iStack_4;
  
  uVar1 = param_1[5];
  uStack_c = *(uint *)(param_1 + 3);
  uStack_8 = *(uint *)(param_1 + 1);
  uVar3 = uVar1 & 0x7fff;
  iStack_4 = (uint)*param_1 << 0x10;
  iVar2 = __RoundMan(&uStack_c,0x40);
  if (iVar2 != 0) {
    uStack_c = 0x80000000;
    uVar3 = uVar3 + 1;
  }
  *(ushort *)(param_2 + 2) = uVar1 & 0x8000 | uVar3;
  param_2[1] = uStack_c;
  *param_2 = uStack_8;
  return uVar3 == 0x7fff;
}
