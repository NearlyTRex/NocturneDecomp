// Name: core_platfrm.cpp_CPlatform_FUN_0054df80
// Address: 0054df80
// Address Range: [[0054df80, 0054e178]]
// Convention: __cdecl
// Signature: int __cdecl core_platfrm_cpp_CPlatform_FUN_0054df80(CPlatform *this_ptr)

#include "nocturne.h"

int __cdecl core_platfrm_cpp_CPlatform_FUN_0054df80(CPlatform *this_ptr)

{
  int iVar1;
  CKeyFramedModel *pCVar2;
  float fVar3;
  int in_stack_00000008;
  CVector3f *ray_origin;
  CVector3f *ray_direction;
  CVector3f *output_normal;
  SCollisionInfo local_88;
  CBoundingBox3D CStack_60;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  CVector3f CStack_24;
  float fStack_18;
  
  if (in_stack_00000008 != 0) {
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&local_88);
    local_88.ray_type = 0;
    iVar1 = (**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0x34))();
    if (iVar1 == 2) {
      fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((this_ptr->base).orient.vec.x);
      fVar3 = (this_ptr->base).orient.vec.z;
      (this_ptr->base).orient.vec.x = fStack_18;
      fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fVar3);
      fVar3 = (this_ptr->base).orient.vec.x;
      (this_ptr->base).orient.vec.z = fStack_18;
      if ((ABS(fVar3) <= (float)0.01) &&
         (ABS((this_ptr->base).orient.vec.z) <= (float)0.01)) {
        (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_60);
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                  (&this_ptr->base,&CStack_24,(CVector3f *)(in_stack_00000008 + 0x20));
        if (((CStack_60.min.x <= CStack_24.x + local_88.cylinder_radius) &&
            (((CStack_24.x - local_88.cylinder_radius <= CStack_60.max.x &&
              (CStack_60.min.z <= CStack_24.z + local_88.cylinder_radius)) &&
             (CStack_24.z - local_88.cylinder_radius <= CStack_60.max.z)))) &&
           ((CStack_60.min.y <= CStack_24.y + local_88.cylinder_top_y &&
            (CStack_24.y + local_88.cylinder_bottom_y <= CStack_60.max.y)))) {
          pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                             (&this_ptr->model);
          if (pCVar2->collision_triangle_list != (CDemonTriangle *)0x0) {
            CStack_48.x = CStack_24.x;
            CStack_48.z = CStack_24.z;
            output_normal = &CStack_3c;
            CStack_30.x = 0.0;
            ray_direction = &CStack_30;
            CStack_30.y = 1.0;
            ray_origin = &CStack_48;
            CStack_30.z = 0.0;
            iVar1 = 0;
            CStack_48.y = local_88.cylinder_top_y + -1.0f + CStack_24.y;
            pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                               (&this_ptr->model);
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
