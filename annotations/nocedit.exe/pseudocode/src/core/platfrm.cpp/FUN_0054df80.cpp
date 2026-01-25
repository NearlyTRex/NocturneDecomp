// Name: core_platfrm.cpp_FUN_0054df80
// Address: 0054df80
// Address Range: [[0054df80, 0054e178]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054df80()

#include "nocturne.h"

/* Signature: byte actors_other_platform.cpp_FUN_0054df80(uint param_1, uint
   param_2) */

uint core_platfrm_cpp_FUN_0054df80(void)

{
  int iVar1;
  CKeyFramedModel *pCVar2;
  float fVar3;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  CVector3f *ray_origin;
  CVector3f *ray_direction;
  CVector3f *output_normal;
  SCollisionInfo local_88;
  CBoundingBox3D CStack_60;
  float fStack_48;
  float fStack_44;
  CVector3f CStack_40;
  CVector3f CStack_34;
  CVector3f CStack_28;
  CVector3f CStack_1c;
  
  if (in_stack_00000008 != 0) {
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&local_88);
    local_88._0_8_ = (ulonglong)(uint)local_88.field1_0x4 << 0x20;
    iVar1 = (**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0x34))();
    if (iVar1 == 2) {
      CStack_1c.y = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                              ((in_stack_00000004->orient).pitch);
      (in_stack_00000004->orient).pitch = CStack_1c.y;
      CStack_1c.y = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                              ((in_stack_00000004->orient).heading);
      (in_stack_00000004->orient).heading = CStack_1c.y;
      if ((ABS((in_stack_00000004->orient).pitch) <= (float)0.01) &&
         (ABS((in_stack_00000004->orient).heading) <= (float)0.01)) {
        (*((in_stack_00000004->vtable)._ub)->getBoundingBox)(in_stack_00000004,&CStack_60);
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                  (in_stack_00000004,&CStack_1c,(CVector3f *)(in_stack_00000008 + 0x20));
        if (((CStack_60.min.z <= CStack_1c.x + (float)local_88.field9_0x24) &&
            (((CStack_1c.x - (float)local_88.field9_0x24 <= CStack_60.max.z &&
              (CStack_60.max.y <= CStack_1c.z + (float)local_88.field9_0x24)) &&
             (CStack_1c.z - (float)local_88.field9_0x24 <= fStack_44)))) &&
           ((CStack_60.max.x <= CStack_1c.y + (float)local_88.result_ptr &&
            (CStack_1c.y + local_88.cylinder_radius <= fStack_48)))) {
          pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                             ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
          if (pCVar2->collision_triangle_list != (CDemonTriangle *)0x0) {
            CStack_40.x = CStack_1c.x;
            CStack_40.z = CStack_1c.z;
            output_normal = &CStack_34;
            CStack_28.x = 0.0;
            ray_direction = &CStack_28;
            CStack_28.y = 1.0;
            ray_origin = &CStack_40;
            CStack_28.z = 0.0;
            iVar1 = 0;
            CStack_40.y = (float)local_88.result_ptr + -1.0f + CStack_1c.y;
            pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                               ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
            fVar3 = core_dmodel_cpp_CKeyFramedModel_intersectRay_FUN_004781d0
                              (pCVar2,iVar1,ray_origin,ray_direction,output_normal);
            if (fVar3 < 0.0) {
              return 0;
            }
            if (1.0 < fVar3) {
              return 0;
            }
          }
          return 1;
        }
      }
    }
  }
  return 0;
}
