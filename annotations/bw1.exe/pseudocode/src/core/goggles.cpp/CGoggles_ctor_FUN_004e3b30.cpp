// Name: core_goggles.cpp_CGoggles_ctor_FUN_004e3b30
// Address: 004e3b30
// Address Range: [[004e3b30, 004e3b7d]]
// Convention: unknown
// Signature: CGoggles * core_goggles_cpp_CGoggles_ctor_FUN_004e3b30(CGoggles *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CGoggles * core_goggles_cpp_CGoggles_ctor_FUN_004e3b30(CGoggles *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004085c0((CDemonActor *)this_ptr);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CGogglesVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            (this_ptr_00,"doc-goggles.kfm");
  this_ptr_00[1].part_visibility_flags[0] = 0;
  return (CGoggles *)(this_ptr_00[-1].part_visibility_flags + 9);
}
