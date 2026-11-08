// Name: FUN_00503470
// Address: 00503470
// Address Range: [[00503470, 00503555]]
// Convention: unknown
// Signature: undefined4 FUN_00503470(int param_1)

#include "nocturne.h"

uint FUN_00503470(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = FUN_005035c0(param_1);
  iVar3 = *(int *)(param_1 + 0x28);
  if ((iVar3 < 0) || (iVar3 == *(int *)(iVar1 + 0x24))) {
    *(uint *)(param_1 + 0x2c) = 0;
    return 0;
  }
  if ((*(int **)(param_1 + 0x2c) == (int *)0x0) || (iVar3 != **(int **)(param_1 + 0x2c))) {
    iVar3 = 0;
    piVar4 = (int *)0x0;
    if (0 < *(int *)(iVar1 + 0x68)) {
      piVar2 = *(int **)(iVar1 + 0x6c);
      do {
        piVar4 = piVar2;
        if (*(int *)(param_1 + 0x28) == *piVar2) break;
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 6;
        piVar4 = (int *)0x0;
      } while (iVar3 < *(int *)(iVar1 + 0x68));
    }
    if ((piVar4 != (int *)0x0) && (piVar4 != *(int **)(param_1 + 0x2c))) {
      *(uint *)(param_1 + 0x2c) = 0;
      FUN_005039e0(param_1);
      switch(piVar4[1]) {
      case 1:
        FUN_00503980(param_1,piVar4[2],piVar4[3]);
        if (piVar4[5] != 0) {
          iVar3 = FUN_005035c0(param_1);
          *(uint *)(param_1 + 0x28) = *(uint *)(iVar3 + 0x24);
        }
        return 1;
      case 2:
        *(int **)(param_1 + 0x2c) = piVar4;
        return 0;
      case 3:
      case 4:
      case 5:
      case 6:
        *(int **)(param_1 + 0x2c) = piVar4;
        FUN_005036e0(param_1,piVar4);
        return 0;
      }
    }
  }
  return 0;
}
