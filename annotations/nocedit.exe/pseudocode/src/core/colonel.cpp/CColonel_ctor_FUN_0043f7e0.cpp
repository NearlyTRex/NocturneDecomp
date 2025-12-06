// Name: core_colonel.cpp_CColonel_ctor_FUN_0043f7e0
// Address: 0043f7e0
// Address Range: [[0043f7e0, 0043f843]]
// Convention: __cdecl
// Signature: CColonel * core_colonel.cpp_CColonel_ctor_FUN_0043f7e0(CColonel * this_ptr)

#include "nocturne.h"

CColonel * __cdecl core_colonel_cpp_CColonel_ctor_FUN_0043f7e0(CColonel *this_ptr)

{
  CColonel *pCVar1;
  
  pCVar1 = (CColonel *)core_hero_cpp_FUN_004f2340();
  (pCVar1->base_hero).base_character.base_actor.vtable = &PTR_core_colonel_cpp_FUN_0065bd54;
  pCVar1->field1_0x1fbd4[0] = '\0';
  pCVar1->field1_0x1fbd4[1] = '\0';
  pCVar1->field1_0x1fbd4[2] = '\0';
  pCVar1->field1_0x1fbd4[3] = '\0';
  pCVar1->field1_0x1fbd4[4] = '\0';
  pCVar1->field1_0x1fbd4[5] = '\0';
  pCVar1->field1_0x1fbd4[6] = '\0';
  pCVar1->field1_0x1fbd4[7] = '\0';
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar1->base_hero).base_character.model,"colonel.dfm");
  pCVar1->field1_0x1fbd4[0x14] = '\0';
  pCVar1->field1_0x1fbd4[0x15] = '\0';
  pCVar1->field1_0x1fbd4[0x16] = -0x80;
  pCVar1->field1_0x1fbd4[0x17] = '?';
  pCVar1->field1_0x1fbd4[0x10] = '\0';
  pCVar1->field1_0x1fbd4[0x11] = '\0';
  pCVar1->field1_0x1fbd4[0x12] = '\0';
  pCVar1->field1_0x1fbd4[0x13] = '\0';
  *(uint *)(pCVar1->field1_0x1fbd4 + 0xc) = *(uint *)(pCVar1->field1_0x1fbd4 + 0x10);
  *(uint *)(pCVar1->field1_0x1fbd4 + 8) = *(uint *)(pCVar1->field1_0x1fbd4 + 0xc);
  return pCVar1;
}
