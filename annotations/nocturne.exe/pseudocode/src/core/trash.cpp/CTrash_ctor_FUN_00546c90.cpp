// Name: core_trash.cpp_CTrash_ctor_FUN_00546c90
// Address: 00546c90
// Address Range: [[00546c90, 00546cd3]]
// Convention: __cdecl
// Signature: CTrash * __cdecl core_trash_cpp_CTrash_ctor_FUN_00546c90(CTrash *this_ptr)

#include "nocturne.h"

CTrash * __cdecl core_trash_cpp_CTrash_ctor_FUN_00546c90(CTrash *this_ptr)

{
  int iVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  iVar1 = core_actor_cpp_FUN_00409d30(this_ptr);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                          ((CKeyFramedModelInstance *)(iVar1 + 0x150));
  this_ptr_00[-1].model_ptr =
       (CKeyFramedModel *)&PTR_core_trash_cpp_CTrash_setup_FUN_00546ce0_005a3544;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (this_ptr_00,"question.kfm");
  return (CTrash *)(this_ptr_00[-1].part_visibility_flags + 0xb);
}
