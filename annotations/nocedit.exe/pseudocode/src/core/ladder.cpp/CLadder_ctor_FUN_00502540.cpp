// Name: core_ladder.cpp_CLadder_ctor_FUN_00502540
// Address: 00502540
// Address Range: [[00502540, 005025e5]]
// Convention: __cdecl
// Signature: CLadder * __cdecl core_ladder_cpp_CLadder_ctor_FUN_00502540(CLadder *this_ptr)

#include "nocturne.h"

CLadder * __cdecl core_ladder_cpp_CLadder_ctor_FUN_00502540(CLadder *this_ptr)

{
  CLadder *pCVar1;
  CLadder_ptr_344 this_ptr_00;
  
  pCVar1 = (CLadder *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar1->model);
  ADJ(this_ptr_00)->base.vtable._ub = &g_CLadderVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(this_ptr_00,"null.kfm")
  ;
  (ADJ(this_ptr_00)->ladder_size).x = 2.0;
  (ADJ(this_ptr_00)->ladder_size).y = 10.0;
  (ADJ(this_ptr_00)->ladder_size).z = 0.0;
  ADJ(this_ptr_00)->master_actor = (CDemonActor *)0x0;
  (ADJ(this_ptr_00)->relative_position).z = 0.0;
  (ADJ(this_ptr_00)->relative_position).y = (ADJ(this_ptr_00)->relative_position).z;
  (ADJ(this_ptr_00)->relative_position).x = (ADJ(this_ptr_00)->relative_position).y;
  (ADJ(this_ptr_00)->cached_euler_angles).z = 0.0;
  (ADJ(this_ptr_00)->cached_euler_angles).y = (ADJ(this_ptr_00)->cached_euler_angles).z;
  (ADJ(this_ptr_00)->cached_euler_angles).x = (ADJ(this_ptr_00)->cached_euler_angles).y;
  ADJ(this_ptr_00)->ground_type = GROUND_TYPE_DEFAULT;
  return ADJ(this_ptr_00);
}
