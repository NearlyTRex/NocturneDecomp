// Name: core_gasmask.cpp_CGasMask_ctor_FUN_004ddac0
// Address: 004ddac0
// Address Range: [[004ddac0, 004ddb0d]]
// Convention: __cdecl
// Signature: CGasMask * __cdecl core_gasmask_cpp_CGasMask_ctor_FUN_004ddac0(CGasMask *this_ptr)

#include "nocturne.h"

CGasMask * __cdecl core_gasmask_cpp_CGasMask_ctor_FUN_004ddac0(CGasMask *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004085c0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CGasMaskVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            (this_ptr_00,"gasmask.kfm");
  this_ptr_00[1].part_visibility_flags[0] = 0;
  return (CGasMask *)(this_ptr_00[-1].part_visibility_flags + 9);
}
