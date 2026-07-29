// Name: core_manpuz.cpp_FUN_004cbb00
// Address: 004cbb00
// Address Range: [[004cbb00, 004cbb4d]]
// Convention: __cdecl
// Signature: CMirrorHack * __cdecl core_manpuz_cpp_FUN_004cbb00(CMirrorHack *this_ptr)

#include "nocturne.h"

CMirrorHack * __cdecl core_manpuz_cpp_FUN_004cbb00(CMirrorHack *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_FUN_00409d30(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CMirrorHackVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (this_ptr_00,"mirrhack.kfm");
  this_ptr_00[1].part_visibility_flags[0] = 0;
  return (CMirrorHack *)(this_ptr_00[-1].part_visibility_flags + 0xb);
}
