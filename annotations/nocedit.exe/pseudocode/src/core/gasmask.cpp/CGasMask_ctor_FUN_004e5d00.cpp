// Name: core_gasmask.cpp_CGasMask_ctor_FUN_004e5d00
// Address: 004e5d00
// Address Range: [[004e5d00, 004e5d4d]]
// Convention: __cdecl
// Signature: CGasMask * __cdecl core_gasmask_cpp_CGasMask_ctor_FUN_004e5d00(CGasMask *this_ptr)

#include "nocturne.h"

CGasMask * __cdecl core_gasmask_cpp_CGasMask_ctor_FUN_004e5d00(CGasMask *this_ptr)

{
  CGasMask *pCVar1;
  CGasMask_ptr_344 this_ptr_00;
  
  pCVar1 = (CGasMask *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar1->model);
  ADJ(this_ptr_00)->base.vtable._ub = &g_CGasMaskVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"gasmask.kfm");
  ADJ(this_ptr_00)->carrier = (CDemonActor *)0x0;
  return ADJ(this_ptr_00);
}
