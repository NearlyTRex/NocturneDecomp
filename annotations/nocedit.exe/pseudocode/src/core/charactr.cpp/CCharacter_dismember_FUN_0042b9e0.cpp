// Name: core_charactr.cpp_CCharacter_dismember_FUN_0042b9e0
// Address: 0042b9e0
// Address Range: [[0042b9e0, 0042bc1f]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_dismember_FUN_0042b9e0(CCharacter *this_ptr,CVector3f *impact_point,float impact_force,int render_in_background)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_dismember_FUN_0042b9e0(CCharacter *this_ptr,CVector3f *impact_point,float impact_force,int render_in_background)

{
  int iVar1;
  CDeformableModel *pCVar1;
  CBoundingBox3D *pCVar2;
  float fVar2;
  int part_index;
  float local_b0;
  CMatrix3x3f local_ac;
  CBoundingBox3D local_84;
  CVector3f local_6c;
  CVector3f CStack_60;
  CVector3f CStack_54;
  CVector3f local_48;
  CVector3f local_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  CVector3f *initial_velocity;
  
  local_b0 = impact_force;
  sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handle);
  if ((this_ptr->model).model_name[0] != '\0') {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(&this_ptr->model);
    iVar1 = pCVar1->num_parts;
    if (1 < iVar1) {
      if (impact_force < 0.0) {
        local_b0 = 20.0;
      }
      part_index = 0;
      if (0 < iVar1) {
        do {
          initial_velocity = impact_point;
          if ((impact_point != (CVector3f *)0x0) && (0.0 < local_b0)) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_3c,impact_point)
            ;
            fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-local_b0,local_b0);
            local_3c.y = fVar2 + local_3c.y;
            fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-local_b0,local_b0);
            local_3c.x = fVar2 + local_3c.x;
            core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_ac,&local_3c);
            local_6c.z = SQRT(impact_point->z * impact_point->z +
                              impact_point->x * impact_point->x + impact_point->y * impact_point->y)
            ;
            local_6c.x = 0.0;
            local_6c.y = 0.0;
            core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&local_ac,&local_48,&local_6c);
            initial_velocity = &local_48;
          }
          core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                    (this_ptr,part_index,initial_velocity,render_in_background);
          part_index = part_index + 1;
        } while (part_index < iVar1);
      }
    }
  }
  pCVar2 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_84);
  CStack_54.x = ((pCVar2->min).x + (pCVar2->max).x) * 0.5f;
  CStack_54.y = ((pCVar2->min).y + (pCVar2->max).y) * 0.5f;
  CStack_54.z = ((pCVar2->min).z + (pCVar2->max).z) * 0.5f;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(&this_ptr->base,&CStack_60,&CStack_54);
  if (this_ptr->is_fully_burned == 0) {
    core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0
              (g_CGorePtr,&CStack_60,impact_point,100,this_ptr->blood_type);
    (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
    return;
  }
  this_ptr->fire_count = 0;
  (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
  return;
}
