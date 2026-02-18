// Name: core_dracbrid.cpp_CDraculaBride_FUN_004858f0
// Address: 004858f0
// Address Range: [[004858f0, 00485a41] [00485aed, 00485b11]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_FUN_004858f0(CDraculaBride *this_ptr)

#include "nocturne.h"

void __cdecl core_dracbrid_cpp_CDraculaBride_FUN_004858f0(CDraculaBride *this_ptr)

{
  CDeformableModel *pCVar1;
  CBoundingBox3D *pCVar2;
  int iVar3;
  CVector3f *in_stack_00000008;
  float in_stack_0000000c;
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
  
  local_b0 = in_stack_0000000c;
  if ((this_ptr->base).base.model.model_name[0] != '\0') {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                       (&(this_ptr->base).base.model);
    local_24 = pCVar1->num_parts;
    if (1 < local_24) {
      if (in_stack_0000000c < 0.0) {
        local_b0 = 20.0;
      }
      iVar3 = 0;
      if (0 < local_24) {
        do {
          if ((in_stack_00000008 != (CVector3f *)0x0) && (0.0 < local_b0)) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                      (&local_3c,in_stack_00000008);
            local_20 = -local_b0;
            local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(local_20,local_b0);
            local_3c.y = local_18 + local_3c.y;
            local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(local_20,local_b0);
            local_3c.x = local_18 + local_3c.x;
            core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_ac,&local_3c);
            local_6c.z = SQRT(in_stack_00000008->z * in_stack_00000008->z +
                              in_stack_00000008->x * in_stack_00000008->x +
                              in_stack_00000008->y * in_stack_00000008->y);
            local_6c.x = 0.0;
            local_6c.y = 0.0;
            local_1c = local_6c.z;
            core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&local_ac,&local_48,&local_6c);
          }
          core_dracbrid_cpp_CDraculaBride_FUN_00485b20(this_ptr);
          iVar3 = iVar3 + 1;
        } while (iVar3 < local_24);
      }
    }
  }
  pCVar2 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                     ((CDemonActor *)this_ptr,&local_84);
  fStack_30 = (pCVar2->min).x + (pCVar2->max).x;
  fStack_2c = (pCVar2->min).y + (pCVar2->max).y;
  CStack_54.x = fStack_30 * 0.5f;
  CStack_54.y = fStack_2c * 0.5f;
  fStack_28 = (pCVar2->min).z + (pCVar2->max).z;
  CStack_54.z = fStack_28 * 0.5f;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_60,&CStack_54);
  if ((this_ptr->base).base.is_fully_burned == 0) {
    core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0
              (g_CGorePtr,&CStack_60,in_stack_00000008,100,(this_ptr->base).base.collision_layer);
    return;
  }
  (this_ptr->base).base.fire_count = 0;
  return;
}
