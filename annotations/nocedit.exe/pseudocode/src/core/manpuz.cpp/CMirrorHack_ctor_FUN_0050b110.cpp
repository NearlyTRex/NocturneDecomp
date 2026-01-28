// Name: core_manpuz.cpp_CMirrorHack_ctor_FUN_0050b110
// Address: 0050b110
// Address Range: [[0050b110, 0050b15d]]
// Convention: __cdecl
// Signature: CMirrorHack * __cdecl core_manpuz_cpp_CMirrorHack_ctor_FUN_0050b110(CMirrorHack *this_ptr)

#include "nocturne.h"

CMirrorHack * __cdecl core_manpuz_cpp_CMirrorHack_ctor_FUN_0050b110(CMirrorHack *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CMirrorHackVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"mirrhack.kfm");
  this_ptr_00[1].part_visibility_flags[0] = 0;
  return (CMirrorHack *)(this_ptr_00[-1].part_visibility_flags + 9);
}
