// Name: core_charactr.cpp_CCharacter_dismember_FUN_00427360
// Address: 00427360
// Address Range: [[00427360, 00427673]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_dismember_FUN_00427360(CCharacter *this_ptr,CVector3f *impact_point,float impact_force,int render_in_background)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_dismember_FUN_00427360(CCharacter *this_ptr,CVector3f *impact_point,float impact_force,int render_in_background)

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
  float local_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float local_c4 [6];
  float fStack_ac;
  float afStack_a8 [5];
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  CVector3f local_88;
  float fStack_7c;
  float afStack_78 [2];
  CVector3f CStack_70;
  CVector3f CStack_64;
  float local_58;
  float local_54 [4];
  float fStack_44;
  float local_40 [3];
  CVector3f local_34;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar5 = 0;
  local_108 = impact_force;
  sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&this_ptr->field_0x10220);
  if (this_ptr->field_0x2514 != '\0') {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
                       ((CDeformableModelInstance *)&this_ptr->field_0x2b4);
    local_20 = *(int *)&pCVar1->field_0xc00;
    if (1 < local_20) {
      if (local_108 < 0.0) {
        local_108 = 20.0;
      }
      local_1c = 0;
      if (0 < local_20) {
        do {
          initial_velocity = impact_point;
          if ((impact_point != (CVector3f *)0x0) && (0.0 < local_108)) {
            core_vecdir_cpp_FUN_005838f0(impact_point);
            fVar6 = -local_108;
            local_24 = fVar6;
            local_58 = afStack_a8[2];
            local_54[(uint)bVar5 * -2] = afStack_a8[(uint)bVar5 * -2 + 3];
            fVar7 = local_108;
            local_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
                 afStack_a8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
            local_18 = (float)core_actor_cpp_FUN_0040cf60(fVar6,fVar7);
            local_54[0] = local_18 + local_54[0];
            local_18 = (float)core_actor_cpp_FUN_0040cf60(local_24,local_108);
            local_58 = local_18 + local_58;
            core_dirmat_cpp_FUN_00449280(local_104,(CVector3f *)&local_58);
            local_40[2] = SQRT(*(float *)&impact_point->field_0x8 *
                               *(float *)&impact_point->field_0x8 +
                               *(float *)impact_point * *(float *)impact_point +
                               *(float *)&impact_point->field_0x4 *
                               *(float *)&impact_point->field_0x4);
            local_40[0] = 0.0;
            local_40[1] = 0.0;
            local_28 = local_40[2];
            core_dirmat_cpp_FUN_00449530(local_104,local_54 + 5);
            local_88._0_4_ = local_34._0_4_;
            *(uint *)((int)&local_88 + (uint)bVar5 * -8 + 4) =
                 *(uint *)((int)&local_34 + (uint)bVar5 * -8 + 4);
            *(uint *)((int)&local_88 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
                 *(uint *)((int)&local_34 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
            initial_velocity = &local_88;
          }
          core_charactr_cpp_FUN_00427770(this_ptr,local_1c,initial_velocity,render_in_background);
          local_1c = local_1c + 1;
        } while (local_1c < local_20);
      }
    }
  }
  (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x24))(this_ptr);
  pfVar3 = local_c4;
  pfVar4 = &local_dc;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
  }
  fStack_ac = local_dc + fStack_d0;
  afStack_a8[0] = fStack_d8 + fStack_cc;
  afStack_a8[1] = fStack_d4 + fStack_c8;
  fStack_94 = local_dc + fStack_d0;
  afStack_a8[(uint)bVar5 * -2 + 6] = afStack_a8[(uint)bVar5 * -2];
  afStack_a8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
       afStack_a8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  pfVar3 = &fStack_7c;
  local_54[2] = fStack_94 * _DAT_005ccdc6;
  local_54[3] = fStack_90 * _DAT_005ccdc6;
  fStack_44 = fStack_8c * _DAT_005ccdc6;
  fStack_7c = fStack_94 * _DAT_005ccdc6;
  afStack_78[(uint)bVar5 * -2] = local_54[(uint)bVar5 * -2 + 3];
  afStack_78[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       local_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  core_actor_cpp_FUN_00408d70(this_ptr,pfVar3);
  CStack_70._0_4_ = CStack_64._0_4_;
  *(uint *)((int)&CStack_70 + (uint)bVar5 * -8 + 4) =
       *(uint *)((int)&CStack_64 + (uint)bVar5 * -8 + 4);
  *(uint *)((int)&CStack_70 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       *(uint *)((int)&CStack_64 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  if (*(int *)&this_ptr->field_0x10224 == 0) {
    core_gore_cpp_FUN_004c9850
              (g_CGorePtr,&CStack_70,impact_point,100,*(EBloodType *)&this_ptr->field_0x280c);
    *(uint *)&this_ptr->field_0x70 = 2;
    return;
  }
  *(uint *)&this_ptr->field_0x3564 = 0;
  *(uint *)&this_ptr->field_0x70 = 2;
  return;
}
