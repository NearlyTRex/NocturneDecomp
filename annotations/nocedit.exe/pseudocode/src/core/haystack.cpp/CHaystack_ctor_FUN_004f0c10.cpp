// Name: core_haystack.cpp_CHaystack_ctor_FUN_004f0c10
// Address: 004f0c10
// Address Range: [[004f0c10, 004f0c73]]
// Convention: __cdecl
// Signature: CHaystack * __cdecl core_haystack_cpp_CHaystack_ctor_FUN_004f0c10(CHaystack *this_ptr)

#include "nocturne.h"

CHaystack * __cdecl core_haystack_cpp_CHaystack_ctor_FUN_004f0c10(CHaystack *this_ptr)

{
  CHaystack *pCVar1;
  
  pCVar1 = (CHaystack *)core_hero_cpp_CHero_ctor_FUN_004f2340(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CHaystackVTable;
  pCVar1->guns_drawn = 0;
  pCVar1->unk[0] = '\0';
  pCVar1->unk[1] = '\0';
  pCVar1->unk[2] = '\0';
  pCVar1->unk[3] = '\0';
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar1->base).base.model,"haystack.dfm");
  pCVar1->unk[0x10] = '\0';
  pCVar1->unk[0x11] = '\0';
  pCVar1->unk[0x12] = -0x80;
  pCVar1->unk[0x13] = '?';
  pCVar1->unk[0xc] = '\0';
  pCVar1->unk[0xd] = '\0';
  pCVar1->unk[0xe] = '\0';
  pCVar1->unk[0xf] = '\0';
  *(uint *)(pCVar1->unk + 8) = *(uint *)(pCVar1->unk + 0xc);
  *(uint *)(pCVar1->unk + 4) = *(uint *)(pCVar1->unk + 8);
  return pCVar1;
}
