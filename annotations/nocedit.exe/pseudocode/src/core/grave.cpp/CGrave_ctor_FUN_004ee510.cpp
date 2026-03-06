// Name: core_grave.cpp_CGrave_ctor_FUN_004ee510
// Address: 004ee510
// Address Range: [[004ee510, 004ee593]]
// Convention: __cdecl
// Signature: CGrave * __cdecl core_grave_cpp_CGrave_ctor_FUN_004ee510(CGrave *this_ptr)

#include "nocturne.h"

CGrave * __cdecl core_grave_cpp_CGrave_ctor_FUN_004ee510(CGrave *this_ptr)

{
  CGrave *pCVar1;
  CGrave_ptr_344 this_ptr_00;
  
  pCVar1 = (CGrave *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar1->model);
  ADJ(this_ptr_00)->base.vtable._ub = &g_CGraveVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"grave1.kfm");
  ADJ(this_ptr_00)->cur_frame = 0.0;
  ADJ(this_ptr_00)->fps = 30.0;
  ADJ(this_ptr_00)->animation_started = 0;
  ADJ(this_ptr_00)->grave_state = 0;
  ADJ(this_ptr_00)->hide_on_first_frame = 1;
  ADJ(this_ptr_00)->start_condition[0] = '\0';
  ADJ(this_ptr_00)->start_sound[0] = '\0';
  return ADJ(this_ptr_00);
}
