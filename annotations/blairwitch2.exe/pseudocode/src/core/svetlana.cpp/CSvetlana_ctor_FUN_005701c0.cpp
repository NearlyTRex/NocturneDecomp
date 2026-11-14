// Name: core_svetlana.cpp_CSvetlana_ctor_FUN_005701c0
// Address: 005701c0
// Address Range: [[005701c0, 00570247]]
// Convention: __cdecl
// Signature: CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_ctor_FUN_005701c0(CSvetlana *this_ptr)

#include "nocturne.h"

CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_ctor_FUN_005701c0(CSvetlana *this_ptr)

{
  CHero *pCVar1;
  int iVar2;
  
  pCVar1 = core_hero_cpp_CHero_ctor_FUN_004ce240(&this_ptr->base);
  iVar2 = core_necklace_cpp_FUN_005adda0(pCVar1[1].base.base.actor_name + 8);
  iVar2 = core_necklace_cpp_FUN_005adda0(iVar2 + 0x3ab30);
  *(CHero_full_vtable **)(iVar2 + -0x5fec8) = &g_CSvetlanaVTable;
  *(uint *)(iVar2 + -0x3ab38) = 0;
  *(uint *)(iVar2 + -0x3ab34) = 0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)(iVar2 + -0x5fec4),"svetlana.dfm");
  *(uint *)(iVar2 + 0x3ab40) = 0x3f800000;
  *(uint *)(iVar2 + 0x3ab3c) = 0;
  *(uint *)(iVar2 + 0x3ab38) = *(uint *)(iVar2 + 0x3ab3c);
  *(uint *)(iVar2 + 0x3ab34) = *(uint *)(iVar2 + 0x3ab38);
  return (CSvetlana *)(iVar2 + -0x60178);
}
