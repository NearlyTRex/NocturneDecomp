// Name: core_charactr.cpp_CCharacter_dismember_FUN_00427b60
// Address: 00427b60
// Address Range: [[00427b60, 00427d9f]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_dismember_FUN_00427b60(CCharacter *this_ptr,CVector3f *impact_point,float impact_force,int render_in_background)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_dismember_FUN_00427b60(CCharacter *this_ptr,CVector3f *impact_point,float impact_force,int render_in_background)

{
  CDeformableModel *pCVar1;
  CBoundingBox3D *pCVar2;
  int part_index;
  CVector3f *initial_velocity;
  float local_b0;
  CMatrix3x3f local_ac;
  CBoundingBox3D local_84;
  uint local_6c;
  uint local_68;
  float local_64;
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
  
  local_b0 = impact_force;
  sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handle);
  if ((this_ptr->model).model_name[0] != '\0') {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(&this_ptr->model);
    local_24 = pCVar1->texture_sets[0].textures[0x28].textures[0].base.type;
    if (1 < local_24) {
      if (impact_force < 0.0) {
        local_b0 = 20.0;
      }
      part_index = 0;
      if (0 < local_24) {
        do {
          initial_velocity = impact_point;
          if ((impact_point != (CVector3f *)0x0) && (0.0 < local_b0)) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_3c,impact_point)
            ;
            local_20 = -local_b0;
            local_18 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(local_20,local_b0)
            ;
            local_3c.y = local_18 + local_3c.y;
            local_18 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(local_20,local_b0)
            ;
            local_3c.x = local_18 + local_3c.x;
            core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(&local_ac,&local_3c);
            local_64 = SQRT(impact_point->z * impact_point->z +
                            impact_point->x * impact_point->x + impact_point->y * impact_point->y);
            local_6c = 0;
            local_68 = 0;
            local_1c = local_64;
            core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40(&local_ac,&local_48,&local_6c);
            initial_velocity = &local_48;
          }
          core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427e40
                    (this_ptr,part_index,initial_velocity,render_in_background);
          part_index = part_index + 1;
        } while (part_index < local_24);
      }
    }
  }
  pCVar2 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_84);
  fStack_30 = (pCVar2->min).x + (pCVar2->max).x;
  fStack_2c = (pCVar2->min).y + (pCVar2->max).y;
  CStack_54.x = fStack_30 * 5.2220990168285998e-315._0_4_;
  CStack_54.y = fStack_2c * 5.2220990168285998e-315._0_4_;
  fStack_28 = (pCVar2->min).z + (pCVar2->max).z;
  CStack_54.z = fStack_28 * 5.2220990168285998e-315._0_4_;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(&this_ptr->base,&CStack_60,&CStack_54);
  if (this_ptr->is_fully_burned == 0) {
    core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
              ((CGore *)INT_005b96c4,&CStack_60,impact_point,100,this_ptr->blood_type);
    (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
    return;
  }
  this_ptr->fire_count = 0;
  (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
  return;
}
