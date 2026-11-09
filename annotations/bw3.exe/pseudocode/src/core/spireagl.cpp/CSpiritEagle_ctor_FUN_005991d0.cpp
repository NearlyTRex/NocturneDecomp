// Name: core_spireagl.cpp_CSpiritEagle_ctor_FUN_005991d0
// Address: 005991d0
// Address Range: [[005991d0, 005992e2]]
// Convention: unknown
// Signature: CSpiritEagle * core_spireagl_cpp_CSpiritEagle_ctor_FUN_005991d0(CSpiritEagle *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSpiritEagle * core_spireagl_cpp_CSpiritEagle_ctor_FUN_005991d0(CSpiritEagle *this_ptr)

{
  CMorph CVar1;
  CCharacter *pCVar2;
  CPathMap *pCVar3;
  CClothList *pCVar4;
  CMorph *pCVar5;
  uint uVar6;
  CMorph *pCVar7;
  CMorph *pCVar8;
  
  pCVar2 = core_charactr_cpp_CCharacter_ctor_FUN_0042ac20((CCharacter *)this_ptr);
  pCVar3 = core_path_cpp_CPathMap_ctor_FUN_0050acc0((CPathMap *)(pCVar2 + 1));
  pCVar4 = core_cloth_cpp_CClothList_ctor_FUN_0043f8c0((CClothList *)(pCVar3 + 1));
  pCVar5 = core_morph_cpp_CMorph_ctor_FUN_004fa8a0((CMorph *)(pCVar4 + 0x1cc));
  *(byte ***)(pCVar5 + -0x20720) = &g_CSpiritEagleVTable;
  *(uint *)(pCVar5 + -0x1d608) = 0x3f19999a;
  pCVar7 = (CMorph *)0x5d98da;
  *(uint *)(pCVar5 + -0x1d604) = 0x3f666666;
  *(uint *)(pCVar5 + -0x1d5f8) = 0x3fcccccd;
  *(uint *)(pCVar5 + -0x1d5f4) = 0xc479c000;
  uVar6 = core_actor_cpp_FUN_0040ce40(0x3f666666,0x3f8ccccd);
  *(uint *)(pCVar5 + 0xc30) = 0;
  pCVar8 = pCVar5 + -0x1c8;
  *(uint *)(pCVar5 + 0xc34) = 0;
  *(uint *)(pCVar5 + -0x1cc) = 1;
  *(uint *)(pCVar5 + -8) = uVar6;
  do {
    CVar1 = *pCVar7;
    *pCVar8 = CVar1;
    if (CVar1 == (CMorph)0x0) break;
    CVar1 = pCVar7[1];
    pCVar7 = pCVar7 + 2;
    pCVar8[1] = CVar1;
    pCVar8 = pCVar8 + 2;
  } while (CVar1 != (CMorph)0x0);
  core_skeleton_cpp_FUN_0054eae0(pCVar5 + -0x2071c,0x5d98e9);
  *(uint *)(pCVar5 + -0x1e0b4) = 0;
  *(uint *)(pCVar5 + -0x10) = 0;
  *(uint *)(pCVar5 + -0xc) = 0;
  return (CSpiritEagle *)(pCVar5 + -0x20874);
}
