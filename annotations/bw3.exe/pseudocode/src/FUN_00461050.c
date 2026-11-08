// Name: FUN_00461050
// Address: 00461050
// Address Range: [[00461050, 004612f0]]
// Convention: unknown
// Signature: void FUN_00461050(int param_1,int *param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00461050(int param_1,int *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_2c;
  int local_28;
  int *local_24;
  
  if (0 < *(int *)(param_1 + 0x110)) {
    if (*(int *)(param_1 + 0x360) == 0) {
      if ((0 < *(int *)(param_1 + 0x100)) ||
         (fVar1 = *(float *)(param_1 + 0x344) - *(float *)(param_1 + 0x338),
         fVar2 = *(float *)(param_1 + 0x348) - *(float *)(param_1 + 0x33c),
         fVar3 = *(float *)(param_1 + 0x34c) - *(float *)(param_1 + 0x340),
         (float)_DAT_005bb7dc < SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2))) {
        FUN_0046d460(DAT_005f2afc,1);
      }
    }
    else {
      FUN_0046d460(DAT_005f2afc,0);
      FUN_0046d450(DAT_005f2afc,0);
    }
    iVar4 = FUN_0046d540(DAT_005f2afc);
    iVar8 = -1;
    local_2c = 0;
    if (0 < *(int *)(param_1 + 0x244)) {
      local_28 = param_1;
      local_24 = param_2;
      iVar9 = 0;
      do {
        iVar5 = *(int *)(local_28 + 0x24c) + iVar9;
        if ((param_2 == (int *)0x0) || (*local_24 != 0)) {
          if ((*(int *)(param_1 + 0x120) < 2) || (iVar4 != 0)) {
            if (iVar4 == 0) {
              FUN_0046e5e0(DAT_005f2afc,param_1 + 0x124);
            }
            FUN_0053ab80(0x01ED78C8,*(int *)(param_1 + 0x114) + iVar9 * 0x48,iVar5 - iVar9,param_3
                        );
          }
          else {
            while (iVar9 < iVar5) {
              iVar6 = *(int *)(*(int *)(param_1 + 0x118) + iVar9 * 4);
              if (iVar8 != iVar6) {
                FUN_0046e5e0(DAT_005f2afc,iVar6 * 0x48 + param_1 + 0x124);
                iVar8 = *(int *)(iVar9 * 4 + *(int *)(param_1 + 0x118));
              }
              iVar6 = iVar9 * 4;
              iVar7 = iVar9;
              do {
                iVar6 = iVar6 + 4;
                iVar7 = iVar7 + 1;
                if (iVar5 * 4 <= iVar6) break;
              } while (iVar8 == *(int *)(*(int *)(param_1 + 0x118) + iVar6));
              FUN_0053ab80(0x01ED78C8,*(int *)(param_1 + 0x114) + iVar9 * 0x48,iVar7 - iVar9,
                           param_3);
              iVar9 = iVar7;
            }
          }
        }
        local_24 = local_24 + 1;
        local_28 = local_28 + 8;
        local_2c = local_2c + 1;
        iVar9 = iVar5;
      } while (local_2c < *(int *)(param_1 + 0x244));
    }
    FUN_0046d460(DAT_005f2afc,0);
    FUN_0046d500(DAT_005f2afc,1);
  }
  return;
}
