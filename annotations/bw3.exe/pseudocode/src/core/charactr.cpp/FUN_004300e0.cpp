// Name: core_charactr.cpp_FUN_004300e0
// Address: 004300e0
// Address Range: [[004300e0, 00430428]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_004300e0(CCharacter *param_1,CVector3f *param_2,float param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_004300e0(CCharacter *param_1,CVector3f *param_2,float param_3,int param_4)

{
  CDeformableModel *pCVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  byte bVar5;
  float afStackY_1094 [990];
  CVector3f *initial_velocity;
  float fVar6;
  float fVar7;
  float local_108;
  CMatrix3x3f local_104 [40];
  float local_dc [6];
  float local_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float local_ac;
  float local_a8 [2];
  CVector3f CStack_a0;
  CVector3f CStack_94;
  uint local_88;
  uint local_84;
  float local_80;
  float fStack_7c;
  float afStack_78 [5];
  CVector3f local_64;
  CVector3f local_58;
  float fStack_4c;
  float afStack_48 [5];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar5 = 0;
  local_108 = param_3;
  sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1->field_0xbc64);
  if (param_1->field_0x24a8 != '\0') {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                       ((CDeformableModelInstance *)&param_1->field_0x158);
    local_20 = *(int *)&pCVar1->field_0xc00;
    if (1 < local_20) {
      if (local_108 < 0.0) {
        local_108 = 20.0;
      }
      local_1c = 0;
      if (0 < local_20) {
        do {
          initial_velocity = param_2;
          if ((param_2 != (CVector3f *)0x0) && (0.0 < local_108)) {
            core_vecdir_cpp_FUN_00576250(param_2);
            fVar6 = -local_108;
            local_24 = fVar6;
            local_ac = afStack_78[2];
            local_a8[(uint)bVar5 * -2] = afStack_78[(uint)bVar5 * -2 + 3];
            fVar7 = local_108;
            local_a8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
                 afStack_78[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
            local_18 = (float)core_actor_cpp_FUN_0040ce40(fVar6,fVar7);
            local_a8[0] = local_18 + local_a8[0];
            local_18 = (float)core_actor_cpp_FUN_0040ce40(local_24,local_108);
            local_ac = local_18 + local_ac;
            core_dirmat_cpp_FUN_0045b550(local_104,(CVector3f *)&local_ac);
            local_80 = SQRT(*(float *)&param_2->field_0x8 * *(float *)&param_2->field_0x8 +
                            *(float *)param_2 * *(float *)param_2 +
                            *(float *)&param_2->field_0x4 * *(float *)&param_2->field_0x4);
            local_88 = 0;
            local_84 = 0;
            local_28 = local_80;
            core_dirmat_cpp_FUN_0045b800(local_104,&local_88);
            local_58._0_4_ = local_64._0_4_;
            *(uint *)((int)&local_58 + (uint)bVar5 * -8 + 4) =
                 *(uint *)((int)&local_64 + (uint)bVar5 * -8 + 4);
            *(uint *)((int)&local_58 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
                 *(uint *)((int)&local_64 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
            initial_velocity = &local_58;
          }
          core_charactr_cpp_FUN_00430520(param_1,local_1c,initial_velocity,param_4);
          local_1c = local_1c + 1;
        } while (local_1c < local_20);
      }
    }
  }
  (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1);
  pfVar3 = local_dc;
  pfVar4 = &local_c4;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
  }
  fStack_4c = local_c4 + fStack_b8;
  afStack_48[0] = fStack_c0 + fStack_b4;
  afStack_48[1] = fStack_bc + fStack_b0;
  fStack_7c = local_c4 + fStack_b8;
  afStack_78[(uint)bVar5 * -2] = afStack_48[(uint)bVar5 * -2];
  afStack_78[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  pfVar3 = afStack_48 + 2;
  fStack_34 = fStack_7c * _DAT_005b839e;
  fStack_30 = afStack_78[0] * _DAT_005b839e;
  fStack_2c = afStack_78[1] * _DAT_005b839e;
  afStack_48[2] = fStack_7c * _DAT_005b839e;
  afStack_48[(uint)bVar5 * -2 + 3] = afStack_48[(uint)bVar5 * -2 + 6];
  afStack_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       afStack_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  core_actor_cpp_FUN_00408b80(param_1,pfVar3);
  CStack_94._0_4_ = CStack_a0._0_4_;
  *(uint *)((int)&CStack_94 + (uint)bVar5 * -8 + 4) =
       *(uint *)((int)&CStack_a0 + (uint)bVar5 * -8 + 4);
  *(uint *)((int)&CStack_94 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       *(uint *)((int)&CStack_a0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  if (*(int *)&param_1->field_0xbc68 == 0) {
    core_gore_cpp_FUN_004ce9c0
              (g_CGorePtr,&CStack_94,param_2,100,*(EBloodType *)&param_1->field_0x27a0);
  }
  else {
    *(uint *)&param_1->field_0x33a0 = 0;
  }
  iVar2 = (CEnemy *)core_actor_cpp_castToClassHash_FUN_0040c840(param_1,g_CEnemyClassInfo.name_hash);
  if (iVar2 != 0) {
    core_enemy_cpp_FUN_00489c90(iVar2);
    *(uint *)&param_1->field_0x70 = 2;
    return;
  }
  *(uint *)&param_1->field_0x70 = 2;
  return;
}
