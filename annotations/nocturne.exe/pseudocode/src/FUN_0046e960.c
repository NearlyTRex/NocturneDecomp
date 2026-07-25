// Name: FUN_0046e960
// Address: 0046e960
// Address Range: [[0046e960, 0046e9c0]]
// Convention: unknown
// Signature: undefined4 FUN_0046e960(undefined4 param_1)

#include "nocturne.h"

uint FUN_0046e960(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *puVar4;
  byte *puVar5;
  
  iVar1 = FUN_0046e950(param_1);
  iVar3 = 0;
  if (0 < iVar1) {
    iVar2 = 0x1bc9ec8;
    puVar4 = &DAT_01bc9e14;
    puVar5 = &DAT_01bc9e20;
    do {
      iVar3 = iVar3 + 1;
      core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(iVar2,&DAT_01bc9e08,puVar4,puVar5);
      puVar4 = puVar4 + 0xc;
      iVar2 = iVar2 + 0x38;
      puVar5 = puVar5 + 0xc;
    } while (iVar3 < iVar1);
  }
  return 0x1bc9ec8;
}
