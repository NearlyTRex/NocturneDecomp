// Name: FUN_0048f090
// Address: 0048f090
// Address Range: [[0048f090, 0048f3b1]]
// Convention: unknown
// Signature: void FUN_0048f090(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048f090(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  double dVar6;
  byte local_50 [12];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  byte local_2c [12];
  ulonglong local_20;
  int local_18;
  
  if (*(int *)(param_1 + 0x2a14) != 0) {
    iVar5 = *(int *)(param_1 + 0x2a00);
    if (iVar5 != 0) {
      local_38 = *(float *)(iVar5 + 0x20) - *(float *)(param_1 + 0x20);
      local_34 = *(float *)(iVar5 + 0x24) - *(float *)(param_1 + 0x24);
      local_30 = *(float *)(iVar5 + 0x28) - *(float *)(param_1 + 0x28);
      if (0.0 < SQRT(local_30 * local_30 + local_38 * local_38 + local_34 * local_34)) {
        pfVar3 = (float *)FUN_0040a220(param_1,local_2c,&local_38);
        local_44 = *pfVar3 * _DAT_00581707;
        local_40 = pfVar3[1] * _DAT_00581707;
        local_3c = _DAT_00581707 * pfVar3[2];
        if (&local_38 != &local_44) {
          local_38 = local_44;
          local_34 = local_40;
          local_30 = local_3c;
        }
        iVar5 = 0;
        if (0 < *(int *)(param_1 + 0x15c)) {
          pfVar3 = (float *)(param_1 + 0x164);
          pfVar4 = (float *)(param_1 + 0x17c);
          do {
            *pfVar3 = *pfVar3 - local_38;
            pfVar3[1] = pfVar3[1] - local_34;
            pfVar3[2] = pfVar3[2] - local_30;
            pfVar3[3] = pfVar3[3] - local_38;
            pfVar3[4] = pfVar3[4] - local_34;
            pfVar3[5] = pfVar3[5] - local_30;
            *pfVar4 = *pfVar4 - local_38;
            pfVar4[1] = pfVar4[1] - local_34;
            pfVar4[2] = pfVar4[2] - local_30;
            pfVar4[3] = pfVar4[3] - local_38;
            pfVar4[4] = pfVar4[4] - local_34;
            iVar5 = iVar5 + 1;
            pfVar4[5] = pfVar4[5] - local_30;
            pfVar3 = pfVar3 + 0xd;
            pfVar4 = pfVar4 + 0xd;
          } while (iVar5 < *(int *)(param_1 + 0x15c));
        }
      }
      iVar5 = *(int *)(param_1 + 0x2a00);
      *(uint *)(param_1 + 0x20) = *(uint *)(iVar5 + 0x20);
      *(uint *)(param_1 + 0x24) = *(uint *)(iVar5 + 0x24);
      *(uint *)(param_1 + 0x28) = *(uint *)(iVar5 + 0x28);
      *(uint *)(param_1 + 0x2c) = *(uint *)(iVar5 + 0x2c);
    }
    if ((0 < *(int *)(param_1 + 0x2a04)) &&
       (fVar1 = *(float *)(param_1 + 0x2a08) - param_2, *(float *)(param_1 + 0x2a08) = fVar1,
       fVar1 <= 0.0)) {
      if (*(int *)(param_1 + 0x15c) < 200) {
        FUN_0048f8f0(param_1,*(int *)(param_1 + 0x15c));
        *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + 1;
        *(uint *)(param_1 + 0x2a08) = *(uint *)(param_1 + 0x2a0c);
        *(int *)(param_1 + 0x2a04) = *(int *)(param_1 + 0x2a04) + -1;
      }
      else {
        *(uint *)(param_1 + 0x2a04) = 0;
      }
    }
    fVar1 = (float)_DAT_0058170f;
    local_18 = 0;
    if (0 < *(int *)(param_1 + 0x15c)) {
      pfVar3 = (float *)(param_1 + 0x160);
      do {
        fVar2 = *pfVar3 + param_2 * fVar1;
        *pfVar3 = fVar2;
        dVar6 = (double)fVar2;
        if (1.0 <= dVar6) {
          dVar6 = (double)FUN_005648c0(dVar6);
          *pfVar3 = *pfVar3 - (float)dVar6;
          if (pfVar3 + 1 != pfVar3 + 4) {
            pfVar3[1] = pfVar3[4];
            pfVar3[2] = pfVar3[5];
            pfVar3[3] = pfVar3[6];
          }
          if (pfVar3 + 4 != pfVar3 + 7) {
            pfVar3[4] = pfVar3[7];
            pfVar3[5] = pfVar3[8];
            pfVar3[6] = pfVar3[9];
          }
          if (pfVar3 + 7 != pfVar3 + 10) {
            pfVar3[7] = pfVar3[10];
            pfVar3[8] = pfVar3[0xb];
            pfVar3[9] = pfVar3[0xc];
          }
          local_20 = dVar6;
          pfVar4 = (float *)FUN_0048f9b0(param_1,local_50,pfVar3 + 7);
          if (pfVar3 + 10 != pfVar4) {
            pfVar3[10] = *pfVar4;
            pfVar3[0xb] = pfVar4[1];
            pfVar3[0xc] = pfVar4[2];
          }
        }
        pfVar3 = pfVar3 + 0xd;
        local_18 = local_18 + 1;
      } while (local_18 < *(int *)(param_1 + 0x15c));
    }
  }
  return;
}
