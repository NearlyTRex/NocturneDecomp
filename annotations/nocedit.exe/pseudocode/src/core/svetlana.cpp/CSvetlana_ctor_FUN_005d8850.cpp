// Name: core_svetlana.cpp_CSvetlana_ctor_FUN_005d8850
// Address: 005d8850
// Address Range: [[005d8850, 005d88d7]]
// Convention: __cdecl
// Signature: CSvetlana * core_svetlana.cpp_CSvetlana_ctor_FUN_005d8850(CSvetlana * this_ptr)

#include "nocturne.h"

CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_ctor_FUN_005d8850(CSvetlana *this_ptr)

{
  int iVar1;
  
  core_hero_cpp_CHero_ctor_FUN_004f2340(&this_ptr->base);
  core_cloth_cpp_FUN_00438ba0();
  iVar1 = core_cloth_cpp_FUN_00438ba0();
  *(CDemonActor_vtable **)(iVar1 + -0x5f8f8) = &g_CSvetlanaVTable;
  *(uint *)(iVar1 + -0x3fe78) = 0;
  *(uint *)(iVar1 + -0x3fe74) = 0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)(iVar1 + -0x5f8f4),"svetlana.dfm");
  *(uint *)(iVar1 + 0x3fe80) = 0x3f800000;
  *(uint *)(iVar1 + 0x3fe7c) = 0;
  *(uint *)(iVar1 + 0x3fe78) = *(uint *)(iVar1 + 0x3fe7c);
  *(uint *)(iVar1 + 0x3fe74) = *(uint *)(iVar1 + 0x3fe78);
  return (CSvetlana *)(iVar1 + -0x5fa4c);
}
