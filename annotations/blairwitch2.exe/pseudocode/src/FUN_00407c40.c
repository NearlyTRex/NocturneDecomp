// Name: FUN_00407c40
// Address: 00407c40
// Address Range: [[00407c40, 00407cb2]]
// Convention: unknown
// Signature: void FUN_00407c40(int param_1,int param_2)

#include "nocturne.h"

void FUN_00407c40(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint auStack_c8 [12];
  uint auStack_98 [12];
  uint local_68 [12];
  uint local_38 [12];
  
  puVar2 = &DAT_00622014 + param_1 * 0xc;
  puVar3 = local_68;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_00622014 + param_2 * 0xc;
  puVar3 = local_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = local_38;
  puVar3 = auStack_98;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = local_68;
  puVar3 = auStack_c8;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00407cc0();
  return;
}
