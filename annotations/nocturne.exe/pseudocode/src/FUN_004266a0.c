// Name: FUN_004266a0
// Address: 004266a0
// Address Range: [[004266a0, 004269a7]]
// Convention: unknown
// Signature: void FUN_004266a0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004266a0(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  uint *puVar14;
  int iVar15;
  float10 fVar16;
  byte local_68 [12];
  byte local_5c [12];
  float local_50;
  float local_4c;
  float local_48;
  float *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  if (-1 < param_3) {
    iVar10 = -1;
    local_44 = (float *)(param_1 + 0x1a8);
    iVar15 = 0;
    local_24 = 0.0;
    iVar11 = param_2;
    pfVar13 = local_44;
    if (0 < *(int *)(param_2 + 0x28558)) {
      do {
        if ((param_3 == *(int *)(iVar11 + 0x2857c)) &&
           (local_20 = SQRT(pfVar13[2] * pfVar13[2] + *pfVar13 * *pfVar13 + pfVar13[1] * pfVar13[1])
           , local_24 < local_20)) {
          iVar10 = iVar15;
          local_24 = local_20;
        }
        iVar11 = iVar11 + 0x24;
        iVar15 = iVar15 + 1;
        pfVar13 = pfVar13 + 3;
      } while (iVar15 < *(int *)(param_2 + 0x28558));
    }
    if (iVar10 != -1) {
      pfVar12 = local_44 + param_3 * 3;
      pfVar13 = local_44 + iVar10 * 3;
      fVar1 = *pfVar13;
      fVar2 = *pfVar12;
      fVar3 = (float)((float10)pfVar13[1] - (float10)pfVar12[1]);
      fVar16 = (float10)(fVar1 - fVar2);
      fVar4 = (float)((float10)pfVar13[2] - (float10)pfVar12[2]);
      fVar16 = SQRT(((float10)pfVar13[2] - (float10)pfVar12[2]) * (float10)fVar4 +
                    fVar16 * fVar16 + ((float10)pfVar13[1] - (float10)pfVar12[1]) * (float10)fVar3)
               * (float10)_DAT_00579f92;
      FUN_00563a30();
      local_18 = (int)ROUND(fVar16);
      local_2c = local_18 + 1;
      iVar10 = 0;
      if (0 < local_2c) {
        local_40 = param_1 + 0xfd0;
        local_3c = param_1 + 0x33c4;
        local_38 = param_1 + 0x2f14;
        local_30 = param_1 + 0x150;
        local_34 = local_18 + 2;
        while (*(int *)(param_1 + 0x2f08) < 0x32) {
          *(uint *)(param_1 + 0xfc) = 1;
          puVar14 = (uint *)(*(int *)(param_1 + 0x2f08) * 0x18 + local_38);
          *(int *)(param_1 + 0x2f08) = *(int *)(param_1 + 0x2f08) + 1;
          uVar8 = FUN_0051e020(local_30);
          uVar8 = FUN_00519bc0(uVar8,param_3);
          *puVar14 = uVar8;
          local_18 = local_34;
          local_14 = iVar10 + 1;
          puVar14[1] = param_3;
          local_1c = (float)local_14;
          fVar5 = (fVar1 - fVar2) * local_1c;
          fVar7 = fVar3 * local_1c;
          fVar6 = fVar4 * local_1c;
          local_28 = (float)local_34;
          local_48 = 1.0 / local_28;
          local_50 = fVar5 * local_48;
          local_4c = fVar7 * local_48;
          local_48 = fVar6 * local_48;
          if ((float *)(puVar14 + 2) != &local_50) {
            puVar14[2] = local_50;
            puVar14[3] = local_4c;
            puVar14[4] = local_48;
          }
          uVar8 = FUN_0055a8b0(local_68,puVar14 + 2,puVar14[1] * 0x30 + local_40,fVar5,fVar7,fVar6);
          puVar9 = (uint *)FUN_0040a240(param_1,local_5c,uVar8);
          iVar11 = (*(int *)(param_1 + 0x2f08) + -1) * 0x29c + local_3c;
          *(uint *)(iVar11 + 0x20) = *puVar9;
          *(uint *)(iVar11 + 0x24) = puVar9[1];
          *(uint *)(iVar11 + 0x28) = puVar9[2];
          *(uint *)(param_1 + 0x3568 + (*(int *)(param_1 + 0x2f08) + -1) * 0x29c) = 0;
          puVar14[5] = 0x3f000000;
          fVar5 = (float)_DAT_00579f92;
          *(float *)(param_1 + 0x3514 + (*(int *)(param_1 + 0x2f08) + -1) * 0x29c) =
               (float)puVar14[5] * fVar5;
          *(uint *)(param_1 + 0x3518 + (*(int *)(param_1 + 0x2f08) + -1) * 0x29c) = puVar14[5]
          ;
          *(float *)(param_1 + 0x351c + (*(int *)(param_1 + 0x2f08) + -1) * 0x29c) =
               fVar5 * (float)puVar14[5];
          iVar10 = iVar10 + 1;
          *(uint *)(param_1 + 0x3564 + (*(int *)(param_1 + 0x2f08) + -1) * 0x29c) =
               *(uint *)(param_1 + 0x2f0c);
          if (local_2c <= iVar10) {
            return;
          }
        }
      }
    }
  }
  return;
}
