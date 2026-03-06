// Name: core_manpuz.cpp_CMirrorHack_ctor_FUN_0050b110
// Address: 0050b110
// Address Range: [[0050b110, 0050b15d]]
// Convention: __cdecl
// Signature: CMirrorHack * __cdecl core_manpuz_cpp_CMirrorHack_ctor_FUN_0050b110(CMirrorHack *this_ptr)

#include "nocturne.h"

CMirrorHack * __cdecl core_manpuz_cpp_CMirrorHack_ctor_FUN_0050b110(CMirrorHack *this_ptr)

{
  CMirrorHack *pCVar1;
  CMirrorHack_ptr_344 this_ptr_00;
  
  pCVar1 = (CMirrorHack *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar1->mirror_model);
  ADJ(this_ptr_00)->base.vtable._ub = &g_CMirrorHackVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"mirrhack.kfm");
  ADJ(this_ptr_00)->interacting_actor = (CDemonActor *)0x0;
  return ADJ(this_ptr_00);
}
