// Name: FUN_0059f980
// Address: 0059f980
// Address Range: [[0059f980, 0059fa10]]
// Convention: unknown
// Signature: undefined4 FUN_0059f980(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0059f980(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  float10 fVar5;
  
  if (*(int *)(param_1 + 0xfc) != 0) {
    fVar5 = (float10)*(float *)(param_1 + 0x113c4) * (float10)_DAT_005ef9c7;
    FUN_005b7ff0();
    FUN_0046b8e0(DAT_0060b280,(int)ROUND(fVar5));
    piVar1 = (int *)(param_1 + 0x2d0c);
    uVar3 = *(uint *)(param_1 + 0x113c4);
    iVar2 = 0;
    piVar4 = piVar1;
    if (0 < *piVar1) {
      do {
        *(uint *)(piVar4[0x65] + 0x37b48) = uVar3;
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar2 < *piVar1);
    }
    uVar3 = FUN_004268b0(param_1);
    return uVar3;
  }
  return 0;
}
