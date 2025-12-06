// Name: core_haystack.cpp_FUN_004f0c10
// Address: 004f0c10
// Address Range: [[004f0c10, 004f0c73]]
// Convention: __cdecl
// Signature: CHaystack * core_haystack.cpp_FUN_004f0c10(CHaystack * this_ptr)

#include "nocturne.h"

CHaystack * __cdecl core_haystack_cpp_FUN_004f0c10(CHaystack *this_ptr)

{
  CHaystack *pCVar1;
  
  pCVar1 = (CHaystack *)core_hero_cpp_FUN_004f2340();
  (pCVar1->base_hero).base_character.base_actor.vtable = &PTR_core_haystack_cpp_FUN_0065f3f4;
  pCVar1->field1_0x1fbd4[0] = '\0';
  pCVar1->field1_0x1fbd4[1] = '\0';
  pCVar1->field1_0x1fbd4[2] = '\0';
  pCVar1->field1_0x1fbd4[3] = '\0';
  pCVar1->field1_0x1fbd4[4] = '\0';
  pCVar1->field1_0x1fbd4[5] = '\0';
  pCVar1->field1_0x1fbd4[6] = '\0';
  pCVar1->field1_0x1fbd4[7] = '\0';
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar1->base_hero).base_character.model,"haystack.dfm");
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
