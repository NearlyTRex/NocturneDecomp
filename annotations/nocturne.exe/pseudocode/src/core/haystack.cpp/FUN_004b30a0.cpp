// Name: core_haystack.cpp_FUN_004b30a0
// Address: 004b30a0
// Address Range: [[004b30a0, 004b3103]]
// Convention: unknown
// Signature: CHero * core_haystack_cpp_FUN_004b30a0(CHero *param_1)

#include "nocturne.h"

CHero * core_haystack_cpp_FUN_004b30a0(CHero *param_1)

{
  CHero *pCVar1;
  CCharacter *pCVar2;
  CHero *pCVar3;
  
  pCVar3 = core_hero_cpp_FUN_004b46d0(param_1);
  (pCVar3->base).base.vtable._ub = &g_CHaystackVTable._ub;
  pCVar1 = pCVar3 + 1;
  (pCVar1->base).base.actor_name[0] = '\0';
  (pCVar1->base).base.actor_name[1] = '\0';
  (pCVar1->base).base.actor_name[2] = '\0';
  (pCVar1->base).base.actor_name[3] = '\0';
  pCVar2 = &pCVar3[1].base;
  (pCVar2->base).actor_name[4] = '\0';
  (pCVar2->base).actor_name[5] = '\0';
  (pCVar2->base).actor_name[6] = '\0';
  (pCVar2->base).actor_name[7] = '\0';
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (&(pCVar3->base).model,"haystack.dfm");
  pCVar2 = &pCVar3[1].base;
  (pCVar2->base).actor_name[0x14] = '\0';
  (pCVar2->base).actor_name[0x15] = '\0';
  (pCVar2->base).actor_name[0x16] = -0x80;
  (pCVar2->base).actor_name[0x17] = '?';
  pCVar2 = &pCVar3[1].base;
  (pCVar2->base).actor_name[0x10] = '\0';
  (pCVar2->base).actor_name[0x11] = '\0';
  (pCVar2->base).actor_name[0x12] = '\0';
  (pCVar2->base).actor_name[0x13] = '\0';
  *(uint *)(pCVar3[1].base.base.actor_name + 0xc) =
       *(uint *)(pCVar3[1].base.base.actor_name + 0x10);
  *(uint *)(pCVar3[1].base.base.actor_name + 8) =
       *(uint *)(pCVar3[1].base.base.actor_name + 0xc);
  return pCVar3;
}
