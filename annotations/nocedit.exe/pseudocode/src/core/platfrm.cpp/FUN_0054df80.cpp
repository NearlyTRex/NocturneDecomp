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
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  CVector3f *ray_origin;
  CVector3f *ray_direction;
  CVector3f *output_normal;
  byte auStack_8c [28];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  CBoundingBox3D CStack_5c;
  CVector3f CStack_44;
  CVector3f CStack_38;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  float fStack_14;
  
  if (in_stack_00000008 != 0) {
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)(auStack_8c + 4));
    auStack_8c._4_4_ = 0;
    iVar1 = (**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0x34))();
    if (iVar1 == 2) {
      fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((in_stack_00000004->orient).pitch);
      (in_stack_00000004->orient).pitch = fStack_14;
      fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                            ((in_stack_00000004->orient).heading);
      (in_stack_00000004->orient).heading = fStack_14;
      if ((ABS((in_stack_00000004->orient).pitch) <= (float)0.01) &&
         (ABS((in_stack_00000004->orient).heading) <= (float)0.01)) {
        (*in_stack_00000004->vtable->getBoundingBox)(in_stack_00000004,&CStack_5c);
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                  (in_stack_00000004,&CStack_20,(CVector3f *)(in_stack_00000008 + 0x20));
        if (((CStack_5c.min.x <= CStack_20.x + fStack_68) &&
            (((CStack_20.x - fStack_68 <= CStack_5c.max.x &&
              (CStack_5c.min.z <= CStack_20.z + fStack_68)) &&
             (CStack_20.z - fStack_68 <= CStack_5c.max.z)))) &&
           ((CStack_5c.min.y <= CStack_20.y + fStack_6c &&
            (CStack_20.y + fStack_70 <= CStack_5c.max.y)))) {
          pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                             ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
          if (pCVar2->collision_triangle_list != (CDemonTriangle *)0x0) {
            CStack_44.x = CStack_20.x;
            CStack_44.z = CStack_20.z;
            output_normal = &CStack_38;
            CStack_2c.x = 0.0;
            ray_direction = &CStack_2c;
            CStack_2c.y = 1.0;
            ray_origin = &CStack_44;
            CStack_2c.z = 0.0;
            iVar1 = 0;
            CStack_44.y = fStack_6c + -1f + CStack_20.y;
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
