// Name: core_trap.cpp_FUN_00546820
// Address: 00546820
// Address Range: [[00546820, 0054686d]]
// Convention: unknown
// Signature: int * core_trap_cpp_FUN_00546820(undefined4 param_1)

#include "nocturne.h"

int * core_trap_cpp_FUN_00546820(uint param_1)

{
  int iVar1;
  CKeyFramedModelInstance *this_ptr;
  
  iVar1 = core_actor_cpp_FUN_00409d30(param_1);
  this_ptr = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                       ((CKeyFramedModelInstance *)(iVar1 + 0x150));
  this_ptr[-1].model_ptr = (CKeyFramedModel *)&PTR_core_trap_cpp_FUN_00546870_005a3424;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (this_ptr,"beartrap.kfm");
  this_ptr[1].part_visibility_flags[1] = 0;
  return this_ptr[-1].part_visibility_flags + 0xb;
}
