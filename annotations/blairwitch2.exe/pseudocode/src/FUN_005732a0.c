// Name: FUN_005732a0
// Address: 005732a0
// Address Range: [[005732a0, 005732da]]
// Convention: unknown
// Signature: undefined4 FUN_005732a0(int param_1)

#include "nocturne.h"

uint FUN_005732a0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_005035c0(param_1 + 0x2b4,&DAT_005ec542);
  iVar2 = FUN_005b8130(uVar1);
  if (iVar2 == 0) {
    return 1;
  }
  uVar1 = FUN_0040c890(param_1);
  return uVar1;
}
