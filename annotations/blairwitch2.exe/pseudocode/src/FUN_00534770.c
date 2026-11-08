// Name: FUN_00534770
// Address: 00534770
// Address Range: [[00534770, 005347fe]]
// Convention: unknown
// Signature: void FUN_00534770(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

#include "nocturne.h"

void FUN_00534770(int param_1,uint param_2,uint *param_3,uint *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x19a2c)) {
    iVar4 = 0;
    do {
      piVar1 = (int *)(param_1 + 0x19a30 + iVar4);
      *param_3 = piVar1;
      if (*piVar1 == 0) {
        iVar2 = FUN_005b8130(piVar1 + 1,param_2);
        if (iVar2 == 0) {
          *param_4 = *(uint *)(&DAT_01fc8d04 + iVar5 * 4);
          return;
        }
        iVar5 = iVar5 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x1898;
    } while (iVar3 < *(int *)(param_1 + 0x19a2c));
  }
  *param_3 = 0;
  *param_4 = 0;
  return;
}
