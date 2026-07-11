// Name: FUN_004e36d0
// Address: 004e36d0
// Address Range: [[004e36d0, 004e37c1]]
// Convention: unknown
// Signature: void FUN_004e36d0(undefined4 param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

void FUN_004e36d0(uint param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *local_18;
  int local_14;
  
  iVar1 = *(int *)(param_4 + 0x10);
  iVar6 = *(int *)(param_4 + 0x14);
  if (0 < iVar6) {
    local_14 = 0;
    do {
      iVar5 = 0;
      if (0 < iVar1) {
        piVar4 = (int *)(local_14 + param_3);
        puVar3 = (uint *)(local_14 + param_2);
        do {
          uVar2 = 0;
          if (*piVar4 != 0) {
            uVar2 = FUN_004e2ac0(param_1,*piVar4 + 1);
          }
          *puVar3 = uVar2;
          puVar3 = puVar3 + 0x60;
          iVar5 = iVar5 + 1;
          piVar4 = piVar4 + 0x20;
        } while (iVar5 < iVar1);
      }
      local_14 = local_14 + 4;
    } while (local_14 < iVar6 << 2);
  }
  if (iVar6 < 0x20) {
    iVar6 = iVar6 * 4;
    local_18 = (int *)(param_3 + iVar6);
    do {
      uVar2 = 0;
      if (*local_18 != 0) {
        uVar2 = FUN_004e2ac0(param_1,*local_18 + 1);
      }
      iVar5 = 0;
      if (0 < iVar1) {
        puVar3 = (uint *)(param_2 + iVar6);
        do {
          iVar5 = iVar5 + 1;
          *puVar3 = uVar2;
          puVar3 = puVar3 + 0x60;
        } while (iVar5 < iVar1);
      }
      local_18 = local_18 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar6 < 0x80);
  }
  return;
}
