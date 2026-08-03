// Name: core_dracbrid.cpp_CDraculaBride_explode_FUN_00459f70
// Address: 00459f70
// Address Range: [[00459f70, 0045a191]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_explode_FUN_00459f70(CDraculaBride *this_ptr,CVector3f *direction,float spread_angle,int render_in_background)

#include "nocturne.h"

void __cdecl core_dracbrid_cpp_CDraculaBride_explode_FUN_00459f70(CDraculaBride *this_ptr,CVector3f *direction,float spread_angle,int render_in_background)

{
  CDeformableModel *pCVar1;
  CBoundingBox3D *pCVar2;
  int part_index;
  CVector3f *initial_velocity;
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
  
  local_b0 = spread_angle;
  if ((this_ptr->base).base.model.model_name[0] != '\0') {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
                       (&(this_ptr->base).base.model);
    local_24 = pCVar1->num_parts;
    if (1 < local_24) {
      if (spread_angle < 0.0) {
        local_b0 = 20.0;
      }
      part_index = 0;
      if (0 < local_24) {
        do {
          initial_velocity = direction;
          if ((direction != (CVector3f *)0x0) && (0.0 < local_b0)) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_3c,direction);
            local_20 = -local_b0;
            local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(local_20,local_b0);
            local_3c.y = local_18 + local_3c.y;
            local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(local_20,local_b0);
            local_3c.x = local_18 + local_3c.x;
            core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(&local_ac,&local_3c);
            local_6c.z = SQRT(direction->z * direction->z +
                              direction->x * direction->x + direction->y * direction->y);
            local_6c.x = 0.0;
            local_6c.y = 0.0;
            local_1c = local_6c.z;
            core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40(&local_ac,&local_48,&local_6c);
            initial_velocity = &local_48;
          }
          core_dracbrid_cpp_CDraculaBride_dismemberPart_FUN_0045a1a0
                    (this_ptr,part_index,initial_velocity,render_in_background);
          part_index = part_index + 1;
        } while (part_index < local_24);
      }
    }
  }
  pCVar2 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                     ((CDemonActor *)this_ptr,&local_84);
  fStack_30 = (pCVar2->min).x + (pCVar2->max).x;
  fStack_2c = (pCVar2->min).y + (pCVar2->max).y;
  CStack_54.x = fStack_30 * 5.2220990168285998e-315._0_4_;
  CStack_54.y = fStack_2c * 5.2220990168285998e-315._0_4_;
  fStack_28 = (pCVar2->min).z + (pCVar2->max).z;
  CStack_54.z = fStack_28 * 5.2220990168285998e-315._0_4_;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            ((CDemonActor *)this_ptr,&CStack_60,&CStack_54);
  if ((this_ptr->base).base.is_fully_burned == 0) {
    core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
              (g_CGore_PTR_005b96c4,&CStack_60,direction,100,(this_ptr->base).base.blood_type);
    return;
  }
  (this_ptr->base).base.fire_count = 0;
  return;
}
