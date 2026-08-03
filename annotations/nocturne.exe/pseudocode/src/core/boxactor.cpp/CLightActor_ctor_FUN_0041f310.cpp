// Name: core_boxactor.cpp_CLightActor_ctor_FUN_0041f310
// Address: 0041f310
// Address Range: [[0041f310, 0041f392]]
// Convention: __cdecl
// Signature: CLightActor * __cdecl core_boxactor_cpp_CLightActor_ctor_FUN_0041f310(CLightActor *this_ptr)

#include "nocturne.h"

CLightActor * __cdecl core_boxactor_cpp_CLightActor_ctor_FUN_0041f310(CLightActor *this_ptr)

{
  CDemonLight *pCVar1;
  CBoxActor *pCVar2;
  CDemonLight *pCVar3;
  
  pCVar2 = core_boxactor_cpp_CBoxActor_ctor_FUN_0041e300(&this_ptr->base);
  pCVar3 = core_dlight_cpp_CDemonLight_ctor_FUN_0044e110
                     ((CDemonLight *)(pCVar2[1].base.actor_name + 4),0x100,0x100);
  pCVar3[-1].saved_screen_buffer_rows[0x36f] = &g_CLightActorVTable;
  pCVar3->light_enabled_flag = 1;
  pCVar1 = pCVar3 + 1;
  (pCVar1->base).camera_name[8] = '\0';
  (pCVar1->base).camera_name[9] = '\0';
  (pCVar1->base).camera_name[10] = '\0';
  (pCVar1->base).camera_name[0xb] = '\0';
  *(uint *)(pCVar3[1].base.camera_name + 4) = *(uint *)(pCVar3[1].base.camera_name + 8);
  *(uint *)pCVar3[1].base.camera_name = *(uint *)(pCVar3[1].base.camera_name + 4);
  pCVar1 = pCVar3 + 1;
  (pCVar1->base).camera_name[0x14] = '\0';
  (pCVar1->base).camera_name[0x15] = '\0';
  (pCVar1->base).camera_name[0x16] = '\0';
  (pCVar1->base).camera_name[0x17] = '\0';
  *(uint *)(pCVar3[1].base.camera_name + 0x10) =
       *(uint *)(pCVar3[1].base.camera_name + 0x14);
  *(uint *)(pCVar3[1].base.camera_name + 0xc) =
       *(uint *)(pCVar3[1].base.camera_name + 0x10);
  pCVar1 = pCVar3 + 1;
  (pCVar1->base).camera_name[0x18] = '\0';
  (pCVar1->base).camera_name[0x19] = '\0';
  (pCVar1->base).camera_name[0x1a] = '\0';
  (pCVar1->base).camera_name[0x1b] = '\0';
  pCVar3[-1].volumetric_intensity = 1.4013e-45;
  return (CLightActor *)(pCVar3[-1].saved_screen_buffer_rows + 0x31c);
}
