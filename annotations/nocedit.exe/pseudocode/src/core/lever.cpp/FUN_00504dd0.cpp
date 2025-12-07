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
  CKeyFramedModel *pCVar1;
  CVector3i **ppCVar2;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  double dVar3;
  CDemonActor *in_stack_00000004;
  CVector3f *in_stack_00000008;
  CKeyFramedModelInstance *this_ptr;
  CVector3f local_1c;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  ppCVar2 = pCVar1->vertex_list;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  this_ptr = (CKeyFramedModelInstance *)0x504e18;
  dVar3 = crt_math_c_round_FUN_005fe6b0
                    ((double)((float)(pCVar1->frame_count + -1) *
                             (float)in_stack_00000004[2].location.area_id));
  local_1c.z = (float)(int)ROUND(dVar3);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(this_ptr);
  ppCVar2 = ppCVar2 + (*(int *)(in_stack_00000004[3].actor_name + 0xc) +
                      pCVar1->vertex_count * unaff_EBP) * 3;
  local_1c.x = (float)(int)*ppCVar2 * _DAT_006608f8;
  local_1c.y = (float)(int)ppCVar2[1] * _DAT_006608f8;
  local_1c.z = (float)(int)ppCVar2[2] * _DAT_006608f8;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,in_stack_00000008,&local_1c);
  return in_stack_00000008;
}
