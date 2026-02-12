// Name: core_boxactor.cpp_CLightActor_ctor_FUN_00422990
// Address: 00422990
// Address Range: [[00422990, 00422a12]]
// Convention: __cdecl
// Signature: CLightActor * __cdecl core_boxactor_cpp_CLightActor_ctor_FUN_00422990(CLightActor *this_ptr)

#include "nocturne.h"

CLightActor * __cdecl core_boxactor_cpp_CLightActor_ctor_FUN_00422990(CLightActor *this_ptr)

{
  CLightActor *pCVar1;
  CLightActor_ptr_1648 pCVar2;
  
  pCVar1 = (CLightActor *)core_boxactor_cpp_CBoxActor_ctor_FUN_00421700(&this_ptr->base);
  pCVar2 = core_dlight_cpp_CDemonLight_ctor_FUN_004726a0(&pCVar1->light,0x100,0x100);
  ADJ(pCVar2)->base.base.vtable._ub = &g_CLightActorVTable;
  pCVar2->light_enabled_flag = 1;
  (ADJ(pCVar2)->blight_pos).z = 0.0;
  (ADJ(pCVar2)->blight_pos).y = (ADJ(pCVar2)->blight_pos).z;
  (ADJ(pCVar2)->blight_pos).x = (ADJ(pCVar2)->blight_pos).y;
  (ADJ(pCVar2)->light_orient).vec.z = 0.0;
  (ADJ(pCVar2)->light_orient).vec.y = (ADJ(pCVar2)->light_orient).vec.z;
  (ADJ(pCVar2)->light_orient).vec.x = (ADJ(pCVar2)->light_orient).vec.y;
  ADJ(pCVar2)->flicker_timer = 0.0;
  ADJ(pCVar2)->light_actor_type = LIGHT_TYPE_FLASHLIGHT;
  return ADJ(pCVar2);
}
