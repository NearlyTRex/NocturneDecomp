// Name: core_icepick.cpp_CIcePick_ctor_FUN_004f7df0
// Address: 004f7df0
// Address Range: [[004f7df0, 004f7e71]]
// Convention: __cdecl
// Signature: CIcePick * __cdecl core_icepick_cpp_CIcePick_ctor_FUN_004f7df0(CIcePick *this_ptr)

#include "nocturne.h"

CIcePick * __cdecl core_icepick_cpp_CIcePick_ctor_FUN_004f7df0(CIcePick *this_ptr)

{
  CIcePick *pCVar1;
  
  pCVar1 = (CIcePick *)core_hero_cpp_CHero_ctor_FUN_004f2340(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CIcePickVTable;
  pCVar1->unk[0] = '\0';
  pCVar1->unk[1] = '\0';
  pCVar1->unk[2] = '\0';
  pCVar1->unk[3] = '\0';
  pCVar1->unk[4] = '\0';
  pCVar1->unk[5] = '\0';
  pCVar1->unk[6] = '\0';
  pCVar1->unk[7] = '\0';
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar1->base).base.model,"icepick.dfm");
  pCVar1->unk[0x1c] = '\0';
  pCVar1->unk[0x1d] = '\0';
  pCVar1->unk[0x1e] = -0x80;
  pCVar1->unk[0x1f] = '?';
  pCVar1->unk[0x18] = '\0';
  pCVar1->unk[0x19] = '\0';
  pCVar1->unk[0x1a] = '\0';
  pCVar1->unk[0x1b] = '\0';
  *(uint *)(pCVar1->unk + 0x14) = *(uint *)(pCVar1->unk + 0x18);
  *(uint *)(pCVar1->unk + 0x10) = *(uint *)(pCVar1->unk + 0x14);
  pCVar1->unk[0x20] = '\0';
  pCVar1->unk[0x21] = '\0';
  pCVar1->unk[0x22] = '\0';
  pCVar1->unk[0x23] = '\0';
  pCVar1->unk[0x24] = '\0';
  pCVar1->unk[0x25] = '\0';
  pCVar1->unk[0x26] = '\0';
  pCVar1->unk[0x27] = '\0';
  (pCVar1->base).base.hit_points = 300.0;
  return pCVar1;
}
