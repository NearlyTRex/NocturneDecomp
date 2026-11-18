// Name: core_charactr.cpp_CCharacter_dismember_FUN_004300e0
// Address: 004300e0
// Address Range: [[004300e0, 00430428]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_dismember_FUN_004300e0(CCharacter *this_ptr,CVector3f *impact_point,float impact_force,int render_in_background)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_dismember_FUN_004300e0(CCharacter *this_ptr,CVector3f *impact_point,float impact_force,int render_in_background)

{
  CEnemy *this_ptr_00;
  CDeformableModel *pCVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1094 [991];
  CVector3f *pCVar6;
  float min_value;
  CBoundingBox3D *max_value;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  CVector3f local_ac;
  CVector3f CStack_98;
  byte auStack_8c [8];
  float local_84 [4];
  float fStack_74;
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_58;
  float fStack_44;
  float afStack_40 [2];
  CVector3f CStack_38;
  float fStack_2c;
  float local_28 [2];
  int local_20;
  int local_1c;
  float local_18;
  
  bVar5 = 0;
  sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handle);
  if ((this_ptr->model).model_name[0] != '\0') {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(&this_ptr->model);
    local_20 = pCVar1->num_parts;
    if (1 < local_20) {
      if (impact_force < 0.0) {
        impact_force = 20.0;
      }
      local_1c = 0;
      if (0 < local_20) {
        do {
          pCVar6 = impact_point;
          if ((impact_point != (CVector3f *)0x0) && (0.0 < impact_force)) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(impact_point,&local_70)
            ;
            min_value = -impact_force;
            local_28[1] = min_value;
            local_ac.x = local_70.x;
            *(uint *)((int)&local_ac + (uint)bVar5 * -8 + 4) =
                 *(uint *)((int)&local_70 + (uint)bVar5 * -8 + 4);
            max_value = (CBoundingBox3D *)impact_force;
            *(uint *)((int)&local_ac + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
                 *(uint *)((int)&local_70 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
            local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(min_value,impact_force);
            local_ac.y = local_18 + local_ac.y;
            local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40
                                 (local_28[1],(float)max_value);
            local_ac.x = local_18 + local_ac.x;
            core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
                      ((CMatrix3x3f *)&stack0xfffffefc,&local_ac);
            local_84[1] = SQRT(impact_point->z * impact_point->z +
                               impact_point->x * impact_point->x + impact_point->y * impact_point->y
                              );
            auStack_8c._4_4_ = 0.0;
            local_84[0] = 0.0;
            local_28[0] = local_84[1];
            core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045b800
                      ((CMatrix3x3f *)&stack0xfffffefc,(CVector3f *)(auStack_8c + 4),&local_64);
            local_58.x = local_64.x;
            *(uint *)((int)&local_58 + (uint)bVar5 * -8 + 4) =
                 *(uint *)((int)&local_64 + (uint)bVar5 * -8 + 4);
            *(uint *)((int)&local_58 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
                 *(uint *)((int)&local_64 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
            pCVar6 = &local_58;
            impact_force = (float)max_value;
          }
          core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                    (this_ptr,local_1c,pCVar6,render_in_background);
          local_1c = local_1c + 1;
        } while (local_1c < local_20);
      }
    }
  }
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)impact_force);
  puVar3 = (uint *)&stack0xffffff2c;
  puVar4 = (uint *)&stack0xffffff3c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  fStack_44 = fStack_bc + fStack_b0;
  afStack_40[0] = fStack_b8 + local_ac.x;
  afStack_40[1] = fStack_b4 + local_ac.y;
  fStack_74 = fStack_bc + fStack_b0;
  *(float *)((int)&local_70 + (uint)bVar5 * -8) = afStack_40[(uint)bVar5 * -2];
  *(float *)((int)&local_70 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4) =
       afStack_40[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  pCVar6 = &CStack_38;
  fStack_2c = fStack_74 * 0.5f;
  local_28[0] = local_70.x * 0.5f;
  local_28[1] = local_70.y * 0.5f;
  CStack_38.x = fStack_74 * 0.5f;
  *(float *)((int)&CStack_38 + (uint)bVar5 * -8 + 4) = local_28[(uint)bVar5 * -2];
  *(float *)((int)&CStack_38 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       local_28[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80(&this_ptr->base,pCVar6,&CStack_98);
  auStack_8c._0_4_ = CStack_98.x;
  *(uint *)(auStack_8c + (uint)bVar5 * -8 + 4) =
       *(uint *)(auStack_8c + (uint)bVar5 * -8 + -8);
  local_84[(uint)bVar5 * -2 + (uint)bVar5 * -2] =
       *(float *)(auStack_8c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + -4);
  if (this_ptr->is_fully_burned == 0) {
    core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
              (g_CGorePtr,(CVector3f *)auStack_8c,impact_point,100,this_ptr->blood_type);
  }
  else {
    this_ptr->fire_count = 0;
  }
  this_ptr_00 = (CEnemy *)
                core_actor_cpp_castToClassHash_FUN_0040c840
                          (&this_ptr->base,g_CEnemyClassInfo.name_hash);
  if (this_ptr_00 != (CEnemy *)0x0) {
    core_enemy_cpp_CEnemy_spawnItems_FUN_00489c90(this_ptr_00);
    (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
    return;
  }
  (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
  return;
}
