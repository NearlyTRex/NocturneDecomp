// Name: core_litecone.cpp_CLightCone_ctor_FUN_00506b10
// Address: 00506b10
// MANUAL RECONSTRUCTION
// Address Range: [[00506b10, 00506ba1]]
// Convention: __cdecl
// Signature: CLightCone * __cdecl core_litecone_cpp_CLightCone_ctor_FUN_00506b10(CLightCone *this_ptr)

#include "nocturne.h"

CLightCone * __cdecl core_litecone_cpp_CLightCone_ctor_FUN_00506b10(CLightCone *this_ptr)

{
  CLightCone *pCVar2;

  pCVar2 = (CLightCone *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  (pCVar2->base).vtable._ub = &g_CLightConeVTable;
  pCVar2->fov = 56.0;
  pCVar2->falloff = 6.0;
  (pCVar2->base).is_transparent = 1;
  pCVar2->state = 1;
  strcpy(pCVar2->on_event,"none");
  strcpy(pCVar2->off_event,"none");
  return pCVar2;
}
