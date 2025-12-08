// Name: core_grave.cpp_FUN_004ee8f0
// Address: 004ee8f0
// Address Range: [[004ee8f0, 004ee9c4]]
// Convention: unknown
// Signature: undefined core_grave.cpp_FUN_004ee8f0()

#include "nocturne.h"

CVector3f * core_grave_cpp_FUN_004ee8f0(void)

{
  CKeyFramedModel *pCVar1;
  CKeyFramedModelInstance *this_ptr;
  CVector3f *pCVar2;
  int in_stack_00000004;
  CVector3f *in_stack_00000008;
  int local_c;
  
  if (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) == 0) {
    crt_math_c_round_FUN_005fe6b0((double)*(float *)(in_stack_00000004 + 0x2d4));
    pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(this_ptr);
    pCVar2 = pCVar1->frame_bounds + local_c * 2;
    if (in_stack_00000008 != pCVar2) {
      in_stack_00000008->x = pCVar2->x;
      in_stack_00000008->y = pCVar2->y;
      in_stack_00000008->z = pCVar2->z;
    }
    if (in_stack_00000008 + 1 != pCVar2 + 1) {
      in_stack_00000008[1].x = pCVar2[1].x;
      in_stack_00000008[1].y = pCVar2[1].y;
      in_stack_00000008[1].z = pCVar2[1].z;
      return in_stack_00000008;
    }
  }
  else {
    pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                       ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
    if (in_stack_00000008 != &pCVar1->bounds_min) {
      in_stack_00000008->x = (pCVar1->bounds_min).x;
      in_stack_00000008->y = (pCVar1->bounds_min).y;
      in_stack_00000008->z = (pCVar1->bounds_min).z;
    }
    if (in_stack_00000008 + 1 != &pCVar1->bounds_max) {
      in_stack_00000008[1].x = (pCVar1->bounds_max).x;
      in_stack_00000008[1].y = (pCVar1->bounds_max).y;
      in_stack_00000008[1].z = (pCVar1->bounds_max).z;
    }
  }
  return in_stack_00000008;
}
