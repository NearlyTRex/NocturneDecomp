// Name: core_goggles.cpp_CGoggles_ctor_FUN_0059c060
// Address: 0059c060
// Address Range: [[0059c060, 0059c0ad]]
// Convention: __cdecl
// Signature: CGoggles * __cdecl core_goggles_cpp_CGoggles_ctor_FUN_0059c060(CGoggles *this_ptr)

#include "nocturne.h"

CGoggles * __cdecl core_goggles_cpp_CGoggles_ctor_FUN_0059c060(CGoggles *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408790(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CGogglesVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (this_ptr_00,"doc-goggles.kfm");
  this_ptr_00[1].part_visibility_flags[0] = 0;
  return (CGoggles *)(this_ptr_00[-2].part_visibility_flags + 0x11);
}
