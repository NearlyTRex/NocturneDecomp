// Name: core_bugs.cpp_CBugs_updateBugRenderingData_FUN_00422c70
// Address: 00422c70
// Address Range: [[00422c70, 0042347e]]
// Convention: unknown
// Signature: void core_bugs_cpp_CBugs_updateBugRenderingData_FUN_00422c70(int param_1,int param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bugs_cpp_CBugs_updateBugRenderingData_FUN_00422c70(int param_1,int param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  float local_118;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  byte local_a8 [12];
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  byte local_48 [12];
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_1c;
  int local_18;
  
  local_118 = param_3;
  if (*(int *)(param_2 + 0x2c) < 0) {
    piVar5 = (int *)(*(int *)(*(int *)(param_1 + 0x12964) + 0x2234) + *(int *)(param_2 + 0x30) * 0xc
                    );
    local_6c = (float)*piVar5 * _DAT_0059ae98;
    local_68 = (float)piVar5[1] * _DAT_0059ae98;
    local_64 = (float)piVar5[2] * _DAT_0059ae98;
    core_xform_cpp_transformVector3x4InPlace_FUN_0055a910(&local_6c,param_1 + 0x12968);
    iVar9 = core_bugs_cpp_CBugs_updateBugPathfinding_FUN_004227b0(param_1,param_2,param_3,&local_6c)
    ;
    if (iVar9 != 0) {
      core_bugs_cpp_FUN_00423480(param_1,param_2);
      *(uint *)(param_2 + 0x34) = 0;
      return;
    }
  }
  else {
    if (*(float *)(param_2 + 0x38) <= 0.0) {
      core_bugs_cpp_FUN_00423480(param_1,param_2);
      *(uint *)(param_2 + 0x34) = 0;
    }
    else {
      fVar4 = _DAT_0059aeac / *(float *)(param_2 + 0x38);
      iVar9 = 0;
      while( true ) {
        fVar2 = *(float *)(param_2 + 0x34);
        fVar3 = local_118 * fVar4 + fVar2;
        *(float *)(param_2 + 0x34) = fVar3;
        if (fVar3 < 1.0) break;
        core_bugs_cpp_FUN_00423480(param_1,param_2);
        local_118 = local_118 - (1.0 - fVar2) / fVar4;
        *(float *)(param_2 + 0x34) = *(float *)(param_2 + 0x34) + 1.5873523201947252e-314._0_4_;
        if ((local_118 < (float)0.001) || (iVar9 = iVar9 + 1, 2 < iVar9)) break;
      }
      if (*(float *)(param_2 + 0x34) < 0.0) {
        *(uint *)(param_2 + 0x34) = 0;
      }
      if (1.0 < *(float *)(param_2 + 0x34)) {
        *(uint *)(param_2 + 0x34) = 0x3f800000;
      }
    }
    piVar5 = (int *)(*(int *)(param_2 + 0x2c) * 0xc + *(int *)(*(int *)(param_1 + 0x12964) + 0x2234)
                    );
    local_84 = (float)*piVar5 * _DAT_0059ae98;
    local_80 = (float)piVar5[1] * _DAT_0059ae98;
    local_7c = (float)piVar5[2] * _DAT_0059ae98;
    piVar5 = (int *)(*(int *)(param_2 + 0x30) * 0xc + *(int *)(*(int *)(param_1 + 0x12964) + 0x2234)
                    );
    local_30 = (float)*piVar5 * _DAT_0059ae98;
    local_2c = (float)piVar5[1] * _DAT_0059ae98;
    local_28 = (float)piVar5[2] * _DAT_0059ae98;
    pfVar1 = (float *)(param_2 + 0x34);
    local_b4 = local_30 * *pfVar1;
    local_b0 = local_2c * *pfVar1;
    local_ac = local_28 * *pfVar1;
    local_1c = 1.0 - *(float *)(param_2 + 0x34);
    local_78 = local_84 * local_1c;
    local_74 = local_80 * local_1c;
    local_70 = local_7c * local_1c;
    local_3c = local_78 + local_b4;
    local_38 = local_74 + local_b0;
    local_34 = local_70 + local_ac;
    puVar6 = (uint *)
             core_xform_cpp_transformVector3x4_FUN_0055a8b0(local_a8,&local_3c,param_1 + 0x12968);
    if ((uint *)(param_2 + 8) != puVar6) {
      *(uint *)(param_2 + 8) = *puVar6;
      *(uint *)(param_2 + 0xc) = puVar6[1];
      *(uint *)(param_2 + 0x10) = puVar6[2];
    }
    local_d8 = local_30 - local_84;
    local_d4 = local_2c - local_80;
    local_d0 = local_28 - local_7c;
    iVar9 = *(int *)(param_1 + 0x129a4 + *(int *)(param_2 + 0x2c) * 0x28);
    local_18 = *(int *)(param_1 + 0x12998) << 2;
    iVar7 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
                      (*(uint *)(param_1 + 0x12964));
    puVar8 = (ushort *)(*(int *)(iVar7 + local_18 + 0x7c) + iVar9 * 0x12);
    piVar5 = (int *)((uint)*puVar8 * 0xc + *(int *)(*(int *)(param_1 + 0x12964) + 0x2234));
    local_84 = (float)*piVar5 * _DAT_0059ae98;
    local_80 = (float)piVar5[1] * _DAT_0059ae98;
    local_7c = (float)piVar5[2] * _DAT_0059ae98;
    piVar5 = (int *)(*(int *)(*(int *)(param_1 + 0x12964) + 0x2234) + (uint)puVar8[1] * 0xc);
    local_30 = (float)*piVar5 * _DAT_0059ae98;
    local_2c = (float)piVar5[1] * _DAT_0059ae98;
    local_28 = (float)piVar5[2] * _DAT_0059ae98;
    piVar5 = (int *)((uint)puVar8[2] * 0xc + *(int *)(*(int *)(param_1 + 0x12964) + 0x2234));
    local_60 = (float)*piVar5 * _DAT_0059ae98;
    local_5c = (float)piVar5[1] * _DAT_0059ae98;
    local_58 = (float)piVar5[2] * _DAT_0059ae98;
    local_50 = local_2c - local_80;
    local_94 = local_58 - local_28;
    local_4c = local_28 - local_7c;
    local_9c = local_60 - local_30;
    local_54 = local_30 - local_84;
    local_98 = local_5c - local_2c;
    local_bc = local_4c * local_9c - local_54 * local_94;
    local_b8 = local_54 * local_98 - local_50 * local_9c;
    local_c0 = local_50 * local_94 - local_4c * local_98;
    local_88 = local_c0 * local_d4 - local_bc * local_d8;
    local_90 = local_bc * local_d0 - local_b8 * local_d4;
    local_8c = local_b8 * local_d8 - local_c0 * local_d0;
    local_cc = local_d4 * local_88 - local_d0 * local_8c;
    local_c8 = local_d0 * local_90 - local_d8 * local_88;
    local_c4 = local_d8 * local_8c - local_d4 * local_90;
    if (&local_c0 != &local_cc) {
      local_c0 = local_cc;
      local_bc = local_c8;
      local_b8 = local_c4;
    }
    fVar4 = SQRT(local_b8 * local_b8 + local_c0 * local_c0 + local_bc * local_bc);
    if (fVar4 <= 0.0) {
      local_bc = 0.0;
      local_c0 = 0.0;
      local_b8 = 0.0;
    }
    else {
      fVar4 = 1.0 / fVar4;
      local_c0 = local_c0 * fVar4;
      local_bc = local_bc * fVar4;
      local_b8 = local_b8 * fVar4;
    }
    fVar4 = SQRT(local_88 * local_88 + local_90 * local_90 + local_8c * local_8c);
    if (fVar4 <= 0.0) {
      local_8c = 0.0;
      local_90 = 0.0;
      local_88 = 0.0;
    }
    else {
      fVar4 = 1.0 / fVar4;
      local_90 = local_90 * fVar4;
      local_8c = local_8c * fVar4;
      local_88 = local_88 * fVar4;
    }
    fVar4 = SQRT(local_d0 * local_d0 + local_d8 * local_d8 + local_d4 * local_d4);
    if (fVar4 <= 0.0) {
      local_d4 = 0.0;
      local_d8 = 0.0;
      local_d0 = 0.0;
    }
    else {
      fVar4 = 1.0 / fVar4;
      local_d8 = local_d8 * fVar4;
      local_d4 = local_d4 * fVar4;
      local_d0 = local_d0 * fVar4;
    }
    local_100 = local_90;
    local_fc = local_c0;
    local_f8 = local_d8;
    local_f4 = local_8c;
    local_f0 = local_bc;
    local_ec = local_d4;
    local_e8 = local_88;
    local_e4 = local_b8;
    local_e0 = local_d0;
    puVar6 = (uint *)
             core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0(&local_100,local_48);
    if ((uint *)(param_2 + 0x14) != puVar6) {
      *(uint *)(param_2 + 0x14) = *puVar6;
      *(uint *)(param_2 + 0x18) = puVar6[1];
      *(uint *)(param_2 + 0x1c) = puVar6[2];
      return;
    }
  }
  return;
}
