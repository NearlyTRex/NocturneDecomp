// Name: FUN_0055d920
// Address: 0055d920
// Address Range: [[0055d920, 0055d9e6]]
// Convention: unknown
// Signature: undefined4 FUN_0055d920(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0055d920(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_02cf5500) {
    iVar2 = 0;
    do {
      FUN_005a28f0(*(uint *)(iVar2 + 0x2cf5490),0,0x20);
      **(uint **)(iVar2 + 0x2cf5490) = *(uint *)(iVar2 + 0x2cf54d0);
      *(int *)(*(int *)(iVar2 + 0x2cf5490) + 0xc) = iVar3;
      *(int *)(*(int *)(iVar2 + 0x2cf5490) + 4) =
           _DAT_02cf54f4 *
           ((int)((_DAT_02cf54f0 + (_DAT_02cf54f0 >> 0x1f) * -8) -
                 (uint)((_DAT_02cf54f0 >> 0x1f) << 2 < 0)) >> 3) * _DAT_02cf54fc;
      iVar1 = FUN_0055d6f0(iVar3);
      if (iVar1 == 0) goto LAB_0055d9d0;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < _DAT_02cf5500);
  }
  iVar3 = FUN_00558d70(((float)_DAT_02cf54fc / (float)_DAT_02cf54f8) * (float)_DAT_005d4fc8);
  if (iVar3 != 0) {
    return 1;
  }
LAB_0055d9d0:
  (**(code **)(*param_1 + 8))(param_1);
  return 0;
}
