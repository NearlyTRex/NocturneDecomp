// Name: core_gasmask.cpp_CGasMask_ctor_FUN_004c1340
// Address: 004c1340
// Address Range: [[004c1340, 004c138d]]
// Convention: __cdecl
// Signature: CGasMask * __cdecl core_gasmask_cpp_CGasMask_ctor_FUN_004c1340(CGasMask *this_ptr)

#include "nocturne.h"

CGasMask * __cdecl core_gasmask_cpp_CGasMask_ctor_FUN_004c1340(CGasMask *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408790(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CGasMaskVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(this_ptr_00,(char *)0x5d8e6b);
  this_ptr_00[1].part_visibility_flags[0] = 0;
  return (CGasMask *)(this_ptr_00[-2].part_visibility_flags + 0x11);
}
