// Name: core_goggles.cpp_CGoggles_ctor_FUN_0059c060
// Address: 0059c060
// Address Range: [[0059c060, 0059c0ad]]
// Convention: unknown
// Signature: CGoggles * core_goggles_cpp_CGoggles_ctor_FUN_0059c060(CGoggles *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CGoggles * core_goggles_cpp_CGoggles_ctor_FUN_0059c060(CGoggles *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408790((CDemonActor *)this_ptr);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  *(byte **)&this_ptr_00[-1].field_0x178 = &g_CGogglesVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (this_ptr_00,"doc-goggles.kfm");
  *(uint *)(this_ptr_00 + 1) = 0;
  return (CGoggles *)&this_ptr_00[-2].field_0x44;
}
