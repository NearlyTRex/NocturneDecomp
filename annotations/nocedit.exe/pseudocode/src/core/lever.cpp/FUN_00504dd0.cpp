// Name: core_lever.cpp_FUN_00504dd0
// Address: 00504dd0
// Address Range: [[00504dd0, 00504e7f]]
// Convention: unknown
// Signature: CVector3f * core_lever_cpp_FUN_00504dd0(void)

#include "nocturne.h"

CVector3f * core_lever_cpp_FUN_00504dd0(void)

{
  CKeyFramedModel *pCVar1;
  CDemonActor *in_stack_00000004;
  CVector3f *in_stack_00000008;
  CKeyFramedModelInstance *this_ptr;
  
  core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  this_ptr = (CKeyFramedModelInstance *)0x504e18;
  crt_math_c_round_FUN_005fe6b0
            ((double)((float)(pCVar1->frame_count + -1) *
                     (float)in_stack_00000004[2].location.area_id));
  core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(this_ptr);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,in_stack_00000008,(CVector3f *)&stack0xffffffd8);
  return in_stack_00000008;
}
