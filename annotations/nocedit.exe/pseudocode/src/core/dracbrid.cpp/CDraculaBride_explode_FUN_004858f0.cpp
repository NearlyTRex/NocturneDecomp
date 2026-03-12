// Name: core_dracbrid.cpp_CDraculaBride_explode_FUN_004858f0
// Address: 004858f0
// Address Range: [[004858f0, 00485a41] [00485aed, 00485b11]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_explode_FUN_004858f0(CDraculaBride *this_ptr,CVector3f *direction,float spread_angle,int render_in_background)

#include "nocturne.h"

void __cdecl core_dracbrid_cpp_CDraculaBride_explode_FUN_004858f0(CDraculaBride *this_ptr,CVector3f *direction,float spread_angle,int render_in_background)

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
  
  local_b0 = spread_angle;
  if ((this_ptr->base).base.model.model_name[0] != '\0') {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                       (&(this_ptr->base).base.model);
    iVar1 = pCVar1->num_parts;
    if (1 < iVar1) {
      if (spread_angle < 0.0) {
        local_b0 = 20.0;
      }
      part_index = 0;
      if (0 < iVar1) {
        do {
          initial_velocity = direction;
          if ((direction != (CVector3f *)0x0) && (0.0 < local_b0)) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_3c,direction);
            fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-local_b0,local_b0);
            local_3c.y = fVar2 + local_3c.y;
            fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-local_b0,local_b0);
            local_3c.x = fVar2 + local_3c.x;
            core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_ac,&local_3c);
            local_6c.z = SQRT(direction->z * direction->z +
                              direction->x * direction->x + direction->y * direction->y);
            local_6c.x = 0.0;
            local_6c.y = 0.0;
            core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&local_ac,&local_48,&local_6c);
            initial_velocity = &local_48;
          }
          core_dracbrid_cpp_CDraculaBride_dismemberPart_FUN_00485b20
                    (this_ptr,part_index,initial_velocity,render_in_background);
          part_index = part_index + 1;
        } while (part_index < iVar1);
      }
    }
  }
  pCVar2 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                     ((CDemonActor *)this_ptr,&local_84);
  CStack_54.x = ((pCVar2->min).x + (pCVar2->max).x) * 0.5f;
  CStack_54.y = ((pCVar2->min).y + (pCVar2->max).y) * 0.5f;
  CStack_54.z = ((pCVar2->min).z + (pCVar2->max).z) * 0.5f;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_60,&CStack_54);
  if ((this_ptr->base).base.is_fully_burned == 0) {
    core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0
              (g_CGorePtr,&CStack_60,direction,100,(this_ptr->base).base.blood_type);
    return;
  }
  (this_ptr->base).base.fire_count = 0;
  return;
}
