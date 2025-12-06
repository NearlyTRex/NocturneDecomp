// Name: core_trash.cpp_CTrash_FUN_005df610
// Address: 005df610
// Address Range: [[005df610, 005df6ce]]
// Convention: __cdecl
// Signature: float * core_trash.cpp_CTrash_FUN_005df610(CTrash * this_ptr)

#include "nocturne.h"

float * __cdecl core_trash_cpp_CTrash_FUN_005df610(CTrash *this_ptr)

{
  CVector3f *pCVar1;
  CKeyFramedModel *pCVar2;
  BADSPACEBASE *in_ESP;
  float *in_stack_00000008;
  CVector3f local_1c;
  float local_10;
  float local_c;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)&this_ptr->model_name);
  pCVar1 = pCVar2->frame_bounds;
  *in_stack_00000008 = pCVar1->x;
  in_stack_00000008[1] = pCVar1->y;
  in_stack_00000008[2] = pCVar1->z;
  in_stack_00000008[3] = pCVar1[1].x;
  in_stack_00000008[4] = pCVar1[1].y;
  in_stack_00000008[5] = pCVar1[1].z;
  local_c = *(float *)(this_ptr->field4_0x2e0 + 0x30);
  local_10 = 0.0;
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
            (&this_ptr->base_actor,&local_1c,(CVector3f *)&local_10);
  *in_stack_00000008 = *in_stack_00000008 + local_1c.y;
  in_stack_00000008[1] = in_stack_00000008[1] + local_1c.z;
  in_stack_00000008[2] = in_stack_00000008[2] + local_10;
  in_stack_00000008[3] = in_stack_00000008[3] + local_1c.y;
  in_stack_00000008[4] = in_stack_00000008[4] + local_1c.z;
  in_stack_00000008[5] = in_stack_00000008[5] + local_10;
  return in_stack_00000008;
}
