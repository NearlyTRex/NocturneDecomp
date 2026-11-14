// Name: core_manpuz.cpp_CMirrorHack_ctor_FUN_00506450
// Address: 00506450
// Address Range: [[00506450, 0050649d]]
// Convention: __cdecl
// Signature: CMirrorHack * __cdecl core_manpuz_cpp_CMirrorHack_ctor_FUN_00506450(CMirrorHack *this_ptr)

#include "nocturne.h"

CMirrorHack * __cdecl core_manpuz_cpp_CMirrorHack_ctor_FUN_00506450(CMirrorHack *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004085c0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CMirrorHackVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            (this_ptr_00,"mirrhack.kfm");
  this_ptr_00[1].part_visibility_flags[0] = 0;
  return (CMirrorHack *)(this_ptr_00[-1].part_visibility_flags + 9);
}
