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
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_108c [989];
  CVector3f *initial_velocity;
  float min_value;
  CBoundingBox3D *max_value;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float local_c4;
  float fStack_c0;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_8c;
  CVector3f local_88;
  float fStack_74;
  float afStack_70 [2];
  CVector3f CStack_68;
  float fStack_5c;
  CVector3f local_58;
  float fStack_44;
  float local_40 [6];
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar5 = 0;
  sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handle);
  if ((this_ptr->model).field_0x2260 != '\0') {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(&this_ptr->model);
    local_20 = pCVar1->num_parts;
    if (1 < local_20) {
      if (impact_force < 0.0) {
        impact_force = 20.0;
      }
      local_1c = 0;
      if (0 < local_20) {
        do {
          initial_velocity = impact_point;
          if ((impact_point != (CVector3f *)0x0) && (0.0 < impact_force)) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(impact_point);
            min_value = -impact_force;
            local_24 = min_value;
            local_58.x = local_a0;
            *(uint *)((int)&local_58 + (uint)bVar5 * -8 + 4) =
                 *(uint *)((int)&stack0xffffff64 + (uint)bVar5 * -8);
            max_value = (CBoundingBox3D *)impact_force;
            *(uint *)((int)&local_58 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
                 *(uint *)(&stack0xffffff68 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
            local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(min_value,impact_force);
            local_58.y = local_18 + local_58.y;
            local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60
                                 (local_24,(float)max_value);
            local_58.x = local_18 + local_58.x;
            core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
                      ((CMatrix3x3f *)&stack0xfffffefc,&local_58);
            local_40[2] = SQRT(impact_point->z * impact_point->z +
                               impact_point->x * impact_point->x + impact_point->y * impact_point->y
                              );
            local_40[0] = 0.0;
            local_40[1] = 0.0;
            local_28 = local_40[2];
            core_dirmat_cpp_FUN_00449530(&stack0xfffffefc,local_40);
            local_88.x = local_40[3];
            *(float *)((int)&local_88 + (uint)bVar5 * -8 + 4) = local_40[(uint)bVar5 * -2 + 4];
            *(float *)((int)&local_88 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
                 local_40[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
            initial_velocity = &local_88;
            impact_force = (float)max_value;
          }
          core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427770
                    (this_ptr,local_1c,initial_velocity,render_in_background);
          local_1c = local_1c + 1;
        } while (local_1c < local_20);
      }
    }
  }
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)impact_force);
  puVar3 = (uint *)&stack0xffffff44;
  puVar4 = (uint *)&stack0xffffff24;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  fStack_a4 = fStack_d4 + fStack_c8;
  local_a0 = fStack_d0 + local_c4;
  fStack_9c = fStack_cc + fStack_c0;
  fStack_8c = fStack_d4 + fStack_c8;
  *(uint *)((int)&local_88 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffff60 + (uint)bVar5 * -8);
  *(uint *)((int)&local_88 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4) =
       *(uint *)((int)&stack0xffffff64 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  fStack_44 = fStack_8c * _DAT_005ccdc6;
  local_40[0] = local_88.x * _DAT_005ccdc6;
  local_40[1] = local_88.y * _DAT_005ccdc6;
  fStack_74 = fStack_8c * _DAT_005ccdc6;
  afStack_70[(uint)bVar5 * -2] = local_40[(uint)bVar5 * -2];
  afStack_70[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       local_40[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  core_actor_cpp_FUN_00408d70(this_ptr);
  CStack_68.x = fStack_5c;
  *(uint *)((int)&CStack_68 + (uint)bVar5 * -8 + 4) =
       *(uint *)((int)&local_58 + (uint)bVar5 * -8);
  *(uint *)((int)&CStack_68 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       *(uint *)((int)&local_58 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4);
  if (this_ptr->is_fully_burned == 0) {
    core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
              (g_CGorePtr,&CStack_68,impact_point,100,this_ptr->blood_type);
    (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
    return;
  }
  this_ptr->fire_count = 0;
  (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
  return;
}
