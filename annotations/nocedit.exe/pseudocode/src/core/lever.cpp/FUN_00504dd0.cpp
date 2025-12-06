// Name: core_lever.cpp_FUN_00504dd0
// Address: 00504dd0
// Address Range: [[00504dd0, 00504e7f]]
// Convention: unknown
// Signature: undefined core_lever.cpp_FUN_00504dd0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_other_lever.cpp_FUN_00504dd0(uint param_1, uint param_2)
    */

CVector3f * core_lever_cpp_FUN_00504dd0(void)

{
  CVector3i **ppCVar1;
  CKeyFramedModel *pCVar2;
  uint extraout_EDX;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  CDemonActor *in_stack_00000004;
  CVector3f *in_stack_00000008;
  CKeyFramedModelInstance *in_stack_ffffffe4;
  float local_14;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  ppCVar1 = pCVar2->vertex_list;
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,pCVar2->frame_count + -1));
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(in_stack_ffffffe4);
  local_14 = (float)(int)ppCVar1[(*(int *)(in_stack_00000004[3].actor_name + 0xc) +
                                 pCVar2->vertex_count * unaff_ESI) * 3] * _DAT_006608f8;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,in_stack_00000008,(CVector3f *)&local_14);
  return in_stack_00000008;
}
