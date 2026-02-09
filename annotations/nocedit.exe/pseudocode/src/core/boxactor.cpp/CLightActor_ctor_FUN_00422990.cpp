// Name: core_boxactor.cpp_CLightActor_ctor_FUN_00422990
// Address: 00422990
// Address Range: [[00422990, 00422a12]]
// Convention: __cdecl
// Signature: CLightActor * __cdecl core_boxactor_cpp_CLightActor_ctor_FUN_00422990(CLightActor *this_ptr)

#include "nocturne.h"

CLightActor * __cdecl core_boxactor_cpp_CLightActor_ctor_FUN_00422990(CLightActor *this_ptr)

{
  CLightActor *pCVar1;
  CDemonLight *pCVar2;
  
  pCVar1 = (CLightActor *)core_boxactor_cpp_CBoxActor_ctor_FUN_00421700(&this_ptr->base);
  pCVar2 = core_dlight_cpp_CDemonLight_ctor_FUN_004726a0((CDemonLight *)pCVar1->unk1,0x100,0x100);
  pCVar2[-1].saved_screen_buffer_rows[0x36f] = &g_CLightActorVTable;
  pCVar2->light_enabled_flag = 1;
  pCVar2[1].base.base.position.y = 0;
  pCVar2[1].base.base.position.x = pCVar2[1].base.base.position.y;
  pCVar2[1].base.base.unk1 = (void *)pCVar2[1].base.base.position.x;
  pCVar2[1].base.base.rotation_matrix.m[0].y = 0;
  pCVar2[1].base.base.rotation_matrix.m[0].x = pCVar2[1].base.base.rotation_matrix.m[0].y;
  pCVar2[1].base.base.position.z = pCVar2[1].base.base.rotation_matrix.m[0].x;
  pCVar2[1].base.base.rotation_matrix.m[0].z = 0;
  pCVar2[-1].volumetric_intensity = 1.4013e-45;
  return (CLightActor *)(pCVar2[-1].saved_screen_buffer_rows + 0x31a);
}
