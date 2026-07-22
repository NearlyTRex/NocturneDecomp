// Name: core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_004266a0
// Address: 004266a0
// Address Range: [[004266a0, 004269a7]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_004266a0(int param_1,int param_2,int param_3)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_004266a0(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  uint *puVar12;
  int iVar13;
  float10 fVar14;
  float fVar15;
  float local_78;
  float local_6c [3];
  byte auStack_60 [12];
  float fStack_54;
  float local_50;
  float local_4c;
  float *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  float local_2c;
  float local_24;
  float local_20;
  int local_1c;
  int local_18;
  
  if (-1 < param_3) {
    iVar8 = -1;
    local_44 = (float *)(param_1 + 0x1a8);
    iVar13 = 0;
    local_24 = 0.0;
    iVar9 = param_2;
    pfVar11 = local_44;
    if (0 < *(int *)(param_2 + 0x28558)) {
      do {
        if ((param_3 == *(int *)(iVar9 + 0x2857c)) &&
           (local_20 = SQRT(pfVar11[2] * pfVar11[2] + *pfVar11 * *pfVar11 + pfVar11[1] * pfVar11[1])
           , local_24 < local_20)) {
          iVar8 = iVar13;
          local_24 = local_20;
        }
        iVar9 = iVar9 + 0x24;
        iVar13 = iVar13 + 1;
        pfVar11 = pfVar11 + 3;
      } while (iVar13 < *(int *)(param_2 + 0x28558));
    }
    if (iVar8 != -1) {
      pfVar10 = local_44 + param_3 * 3;
      pfVar11 = local_44 + iVar8 * 3;
      fVar1 = *pfVar11;
      fVar2 = *pfVar10;
      fVar3 = (float)((float10)pfVar11[1] - (float10)pfVar10[1]);
      fVar14 = (float10)(fVar1 - fVar2);
      local_6c[0] = (float)((float10)pfVar11[2] - (float10)pfVar10[2]);
      fVar15 = 6.098252e-39;
      fVar14 = (float10)round
                                  (SQRT(((float10)pfVar11[2] - (float10)pfVar10[2]) *
                                        (float10)local_6c[0] +
                                        fVar14 * fVar14 +
                                        ((float10)pfVar11[1] - (float10)pfVar10[1]) * (float10)fVar3
                                       ) * (float10)0.5);
      local_1c = (int)ROUND(fVar14);
      local_30 = local_1c + 1;
      iVar8 = 0;
      if (0 < local_30) {
        local_44 = (float *)(param_1 + 0xfd0);
        local_40 = param_1 + 0x33c4;
        local_3c = param_1 + 0x2f14;
        local_34 = param_1 + 0x150;
        local_38 = local_1c + 2;
        while (*(int *)(param_1 + 0x2f08) < 0x32) {
          *(uint *)(param_1 + 0xfc) = 1;
          puVar12 = (uint *)(*(int *)(param_1 + 0x2f08) * 0x18 + local_3c);
          *(int *)(param_1 + 0x2f08) = *(int *)(param_1 + 0x2f08) + 1;
          uVar6 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
                            (local_34,fVar15);
          uVar6 = core_skeleton_cpp_CDeformableModel_getBonePart_FUN_00519bc0(uVar6,param_3);
          *puVar12 = uVar6;
          local_1c = local_38;
          local_18 = iVar8 + 1;
          puVar12[1] = param_3;
          local_20 = (float)local_18;
          fVar15 = local_78 * local_20;
          fVar5 = (fVar1 - fVar2) * local_20;
          fVar4 = fVar3 * local_20;
          local_2c = (float)local_38;
          local_4c = 1.0 / local_2c;
          fStack_54 = fVar15 * local_4c;
          local_50 = fVar5 * local_4c;
          local_4c = fVar4 * local_4c;
          if ((float *)(puVar12 + 2) != &fStack_54) {
            puVar12[2] = fStack_54;
            puVar12[3] = local_50;
            puVar12[4] = local_4c;
          }
          uVar6 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                            (local_6c,puVar12 + 2,puVar12[1] * 0x30 + (int)local_44,fVar15,fVar5,
                             fVar4);
          puVar7 = (uint *)
                   core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                             (param_1,auStack_60,uVar6);
          iVar9 = (*(int *)(param_1 + 0x2f08) + -1) * 0x29c + local_40;
          *(uint *)(iVar9 + 0x20) = *puVar7;
          *(uint *)(iVar9 + 0x24) = puVar7[1];
          *(uint *)(iVar9 + 0x28) = puVar7[2];
          *(uint *)(param_1 + 0x3568 + (*(int *)(param_1 + 0x2f08) + -1) * 0x29c) = 0;
          puVar12[5] = 0x3f000000;
          fVar4 = (float)0.5;
          *(float *)(param_1 + 0x3514 + (*(int *)(param_1 + 0x2f08) + -1) * 0x29c) =
               (float)puVar12[5] * fVar4;
          *(uint *)(param_1 + 0x3518 + (*(int *)(param_1 + 0x2f08) + -1) * 0x29c) = puVar12[5]
          ;
          *(float *)(param_1 + 0x351c + (*(int *)(param_1 + 0x2f08) + -1) * 0x29c) =
               fVar4 * (float)puVar12[5];
          iVar8 = iVar8 + 1;
          *(uint *)(param_1 + 0x3564 + (*(int *)(param_1 + 0x2f08) + -1) * 0x29c) =
               *(uint *)(param_1 + 0x2f0c);
          if (local_30 <= iVar8) {
            return;
          }
        }
      }
    }
  }
  return;
}
