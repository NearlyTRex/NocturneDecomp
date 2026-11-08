// Name: FUN_004aa400
// Address: 004aa400
// Address Range: [[004aa400, 004aa545]]
// Convention: unknown
// Signature: void FUN_004aa400(int param_1)

#include "nocturne.h"

void FUN_004aa400(int param_1)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  ulonglong uVar6;
  char local_170 [336];
  ulonglong local_20;
  int local_18;
  int local_14;
  
  local_14 = 0;
  if (0 < *(int *)(param_1 + 0x3ac8)) {
    puVar2 = (uint *)(param_1 + 0x3acc);
    local_18 = param_1 + 0x3bec;
    do {
      uVar6 = FUN_00573660(*puVar2,1);
      *(ulonglong *)(puVar2 + 0x46) = uVar6;
      local_20 = uVar6;
      if (0.0 <= *(double *)(puVar2 + 0x46)) {
        FUN_00572340(local_170);
        iVar3 = FUN_00573620(*puVar2,local_170);
        if (iVar3 == 0) goto LAB_004aa480;
        pcVar5 = (char *)(puVar2 + 6);
        pcVar4 = local_170;
        do {
          cVar1 = *pcVar4;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar5[1] = cVar1;
          pcVar5 = pcVar5 + 2;
        } while (cVar1 != '\0');
        puVar2 = puVar2 + 0x48;
        local_18 = local_18 + 0x120;
        local_14 = local_14 + 1;
      }
      else {
LAB_004aa480:
        iVar3 = *(int *)(param_1 + 0x3ac8) + -1;
        *(int *)(param_1 + 0x3ac8) = iVar3;
        FUN_005c25d0(puVar2,local_18,(iVar3 - local_14) * 0x120);
      }
    } while (local_14 < *(int *)(param_1 + 0x3ac8));
  }
  return;
}
