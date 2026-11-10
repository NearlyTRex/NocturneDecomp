// Name: core_svetlana.cpp_CSvetlana_ctor_FUN_00592e00
// Address: 00592e00
// Address Range: [[00592e00, 00592e87]]
// Convention: __cdecl
// Signature: CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_ctor_FUN_00592e00(CSvetlana *this_ptr)

#include "nocturne.h"

CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_ctor_FUN_00592e00(CSvetlana *this_ptr)

{
  CHero *pCVar1;
  CCloth *pCVar2;
  
  pCVar1 = core_hero_cpp_CHero_ctor_FUN_004ea830((CHero *)this_ptr);
  pCVar2 = core_cloth_cpp_CCloth_ctor_FUN_0043e5c0((CCloth *)(pCVar1 + 0x1ffb4));
  pCVar2 = core_cloth_cpp_CCloth_ctor_FUN_0043e5c0(pCVar2 + 0x3ab30);
  *(CHero_full_vtable **)(pCVar2 + -0x5a990) = &g_CSvetlanaVTable;
  *(uint *)(pCVar2 + -0x3ab38) = 0;
  *(uint *)(pCVar2 + -0x3ab34) = 0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            ((CDeformableModelInstance *)(pCVar2 + -0x5a98c),"svetlana.dfm");
  *(uint *)(pCVar2 + 0x3ab40) = 0x3f800000;
  *(uint *)(pCVar2 + 0x3ab3c) = 0;
  *(uint *)(pCVar2 + 0x3ab38) = *(uint *)(pCVar2 + 0x3ab3c);
  *(uint *)(pCVar2 + 0x3ab34) = *(uint *)(pCVar2 + 0x3ab38);
  return (CSvetlana *)(pCVar2 + -0x5aae4);
}
