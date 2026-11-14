// Name: core_charactr.cpp_CCharacter_dismember_FUN_004300e0
// Address: 004300e0
// Address Range: [[004300e0, 00430428]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_dismember_FUN_004300e0(CCharacter *this_ptr,CVector3f *impact_point,float impact_force,int render_in_background)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_dismember_FUN_004300e0(CCharacter *this_ptr,CVector3f *impact_point,float impact_force,int render_in_background)

{
  CDemonActor *pCVar1;
  CDeformableModel *pCVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_1094 [991];
  CVector3f *initial_velocity;
  float min_value;
  CBoundingBox3D *max_value;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  CVector3f local_ac;
  float fStack_98;
  float afStack_94 [2];
  CVector3f CStack_8c;
  float local_80;
  float fStack_74;
  float local_70 [6];
  CVector3f local_58;
  float fStack_44;
  float afStack_40 [5];
  float fStack_2c;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar6 = 0;
  sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handle);
  if ((this_ptr->model).model_name[0] != '\0') {
    pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(&this_ptr->model);
    local_20 = pCVar2->num_parts;
    if (1 < local_20) {
      if (impact_force < 0.0) {
        impact_force = 20.0;
      }
      local_1c = 0;
      if (0 < local_20) {
        do {
          initial_velocity = impact_point;
          if ((impact_point != (CVector3f *)0x0) && (0.0 < impact_force)) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(impact_point);
            min_value = -impact_force;
            local_24 = min_value;
            local_ac.x = local_70[0];
            *(float *)((int)&local_ac + (uint)bVar6 * -8 + 4) = local_70[(uint)bVar6 * -2 + 1];
            max_value = (CBoundingBox3D *)impact_force;
            *(float *)((int)&local_ac + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
                 local_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 2];
            local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(min_value,impact_force);
            local_ac.y = local_18 + local_ac.y;
            local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40
                                 (local_24,(float)max_value);
            local_ac.x = local_18 + local_ac.x;
            core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
                      ((CMatrix3x3f *)&stack0xfffffefc,&local_ac);
            local_80 = SQRT(impact_point->z * impact_point->z +
                            impact_point->x * impact_point->x + impact_point->y * impact_point->y);
            CStack_8c.y = 0.0;
            CStack_8c.z = 0.0;
            local_28 = local_80;
            core_dirmat_cpp_FUN_0045b800(&stack0xfffffefc,&CStack_8c.y);
            local_58.x = local_70[3];
            *(float *)((int)&local_58 + (uint)bVar6 * -8 + 4) = local_70[(uint)bVar6 * -2 + 4];
            *(float *)((int)&local_58 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
                 local_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
            initial_velocity = &local_58;
            impact_force = (float)max_value;
          }
          core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                    (this_ptr,local_1c,initial_velocity,render_in_background);
          local_1c = local_1c + 1;
        } while (local_1c < local_20);
      }
    }
  }
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)impact_force);
  puVar4 = (uint *)&stack0xffffff2c;
  puVar5 = (uint *)&stack0xffffff3c;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  fStack_44 = fStack_bc + fStack_b0;
  afStack_40[0] = fStack_b8 + local_ac.x;
  afStack_40[1] = fStack_b4 + local_ac.y;
  fStack_74 = fStack_bc + fStack_b0;
  local_70[(uint)bVar6 * -2] = afStack_40[(uint)bVar6 * -2];
  local_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       afStack_40[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  fStack_2c = fStack_74 * _DAT_005b839e;
  local_28 = local_70[0] * _DAT_005b839e;
  local_24 = local_70[1] * _DAT_005b839e;
  afStack_40[2] = fStack_74 * _DAT_005b839e;
  afStack_40[(uint)bVar6 * -2 + 3] = afStack_40[(uint)bVar6 * -2 + 6];
  afStack_40[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
       afStack_40[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
  core_actor_cpp_FUN_00408b80(this_ptr);
  CStack_8c.x = fStack_98;
  *(float *)((int)&CStack_8c + (uint)bVar6 * -8 + 4) = afStack_94[(uint)bVar6 * -2];
  *(float *)((int)&CStack_8c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
       afStack_94[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  if (this_ptr->is_fully_burned == 0) {
    core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
              (g_CGorePtr,&CStack_8c,impact_point,100,this_ptr->blood_type);
  }
  else {
    this_ptr->fire_count = 0;
  }
  pCVar1 = (CEnemy *)core_actor_cpp_castToClassHash_FUN_0040c840(&this_ptr->base,g_CEnemyClassInfo.name_hash);
  if (pCVar1 != (CDemonActor *)0x0) {
    core_enemy_cpp_FUN_00489c90();
    (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
    return;
  }
  (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
  return;
}
