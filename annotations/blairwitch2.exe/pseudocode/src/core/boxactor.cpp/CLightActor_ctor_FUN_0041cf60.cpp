// Name: core_boxactor.cpp_CLightActor_ctor_FUN_0041cf60
// Address: 0041cf60
// Address Range: [[0041cf60, 0041cfe2]]
// Convention: __cdecl
// Signature: CLightActor * __cdecl core_boxactor_cpp_CLightActor_ctor_FUN_0041cf60(CLightActor *this_ptr)

#include "nocturne.h"

CLightActor * __cdecl core_boxactor_cpp_CLightActor_ctor_FUN_0041cf60(CLightActor *this_ptr)

{
  CBoxActor *pCVar1;
  CDemonLight *pCVar2;
  
  pCVar1 = core_boxactor_cpp_CBoxActor_ctor_FUN_0041bd30(&this_ptr->base);
  pCVar2 = core_dlight_cpp_CDemonLight_ctor_FUN_00449c70
                     ((CDemonLight *)(pCVar1[1].base.actor_name + 4),0x100,0x100);
  pCVar2[-1].saved_screen_buffer_rows[0x36d] = &g_CLightActorVTable;
  pCVar2->light_enabled_flag = 1;
  pCVar2[1].base.base.position.f.y = 0.0;
  pCVar2[1].base.base.position.f.x = pCVar2[1].base.base.position.f.y;
  pCVar2[1].base.base.fixed_point_scale = pCVar2[1].base.base.position.f.x;
  pCVar2[1].base.base.rotation_matrix.m[0].y = 0.0;
  pCVar2[1].base.base.rotation_matrix.m[0].x = pCVar2[1].base.base.rotation_matrix.m[0].y;
  pCVar2[1].base.base.position.f.z = pCVar2[1].base.base.rotation_matrix.m[0].x;
  pCVar2[1].base.base.rotation_matrix.m[0].z = 0.0;
  *(uint *)&pCVar2[-1].field_0x2fac = 1;
  return (CLightActor *)(pCVar2[-1].saved_screen_buffer_rows + 0x2c1);
}
