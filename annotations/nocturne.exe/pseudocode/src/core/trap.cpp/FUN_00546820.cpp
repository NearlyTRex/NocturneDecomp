// Name: core_trap.cpp_FUN_00546820
// Address: 00546820
// Address Range: [[00546820, 0054686d]]
// Convention: unknown
// Signature: int * core_trap_cpp_FUN_00546820(CDemonActor *param_1)

#include "nocturne.h"

int * core_trap_cpp_FUN_00546820(CDemonActor *param_1)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00409d30(param_1);
  this_ptr = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                       ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr[-1].model_ptr = (CKeyFramedModel *)&g_CTrapVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (this_ptr,"beartrap.kfm");
  this_ptr[1].part_visibility_flags[1] = 0;
  return this_ptr[-1].part_visibility_flags + 0xb;
}
