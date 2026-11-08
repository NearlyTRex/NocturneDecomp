// Name: FUN_00505410
// Address: 00505410
// Address Range: [[00505410, 00505482]]
// Convention: unknown
// Signature: void FUN_00505410(undefined4 param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

void FUN_00505410(uint param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  int local_14;
  
  local_14 = 0;
  iVar1 = *(int *)(param_4 + 0x10);
  do {
    iVar4 = 0;
    if (0 < iVar1) {
      puVar3 = (uint *)(local_14 + param_3);
      piVar5 = (int *)(local_14 + param_2);
      do {
        if (*piVar5 == 0) {
          *puVar3 = 0x3f;
        }
        else {
          uVar2 = FUN_00504b00(param_1,6);
          *puVar3 = uVar2;
        }
        puVar3 = puVar3 + 0x60;
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 0x20;
      } while (iVar4 < iVar1);
    }
    local_14 = local_14 + 4;
  } while (local_14 != 0x80);
  return;
}
