// Name: core_manpuz.cpp_CMirrorHack_ctor_FUN_004e77b0
// Address: 004e77b0
// Address Range: [[004e77b0, 004e77fd]]
// Convention: __cdecl
// Signature: CMirrorHack * __cdecl core_manpuz_cpp_CMirrorHack_ctor_FUN_004e77b0(CMirrorHack *this_ptr)

#include "nocturne.h"

CMirrorHack * __cdecl core_manpuz_cpp_CMirrorHack_ctor_FUN_004e77b0(CMirrorHack *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408790(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CMirrorHackVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (this_ptr_00,"mirrhack.kfm");
  this_ptr_00[1].part_visibility_flags[0] = 0;
  return (CMirrorHack *)(this_ptr_00[-2].part_visibility_flags + 0x11);
}
