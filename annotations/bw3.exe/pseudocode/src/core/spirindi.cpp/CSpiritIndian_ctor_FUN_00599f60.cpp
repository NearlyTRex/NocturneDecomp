// Name: core_spirindi.cpp_CSpiritIndian_ctor_FUN_00599f60
// Address: 00599f60
// Address Range: [[00599f60, 0059a05e]]
// Convention: unknown
// Signature: CSpiritIndian * core_spirindi_cpp_CSpiritIndian_ctor_FUN_00599f60(CSpiritIndian *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSpiritIndian * core_spirindi_cpp_CSpiritIndian_ctor_FUN_00599f60(CSpiritIndian *this_ptr)

{
  CMorph CVar1;
  CNPC *pCVar2;
  CPathMap *pCVar3;
  CClothList *pCVar4;
  CMorph *pCVar5;
  float fVar6;
  CMorph *pCVar7;
  CMorph *pCVar8;
  
  pCVar2 = core_npc_cpp_CNPC_ctor_FUN_00508f40((CNPC *)this_ptr);
  pCVar3 = core_path_cpp_CPathMap_ctor_FUN_0050acc0((CPathMap *)(pCVar2 + 1));
  pCVar4 = core_cloth_cpp_CClothList_ctor_FUN_0043f8c0((CClothList *)(pCVar3 + 1));
  pCVar5 = core_morph_cpp_CMorph_ctor_FUN_004fa8a0((CMorph *)(pCVar4[1].filenames[0] + 0x10));
  *(CCharacter_full_vtable **)(pCVar5 + -0x34020) = &g_CSpiritIndianVTable;
  *(uint *)(pCVar5 + -0x30f08) = 0x3f19999a;
  *(uint *)(pCVar5 + -0x30f04) = 0x3f666666;
  *(uint *)(pCVar5 + -0x30ef8) = 0x3fcccccd;
  *(uint *)(pCVar5 + -0x30ef4) = 0xc479c000;
  fVar6 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.9,1.1);
  pCVar7 = (CMorph *)0x5d9a39;
  *(float *)(pCVar5 + -0xc) = fVar6;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            ((CDeformableModelInstance *)(pCVar5 + -0x3401c),"bwp3_spindian.dfm");
  pCVar8 = pCVar5 + -0x1cc;
  *(uint *)(pCVar5 + -0x1d0) = 1;
  do {
    CVar1 = *pCVar7;
    *pCVar8 = CVar1;
    if (CVar1 == (CMorph)0x0) break;
    CVar1 = pCVar7[1];
    pCVar7 = pCVar7 + 2;
    pCVar8[1] = CVar1;
    pCVar8 = pCVar8 + 2;
  } while (CVar1 != (CMorph)0x0);
  *(uint *)(pCVar5 + -0x319b4) = 0;
  *(uint *)(pCVar5 + -0x14) = 0;
  *(uint *)(pCVar5 + -0x10) = 0;
  return (CSpiritIndian *)(pCVar5 + -0x34174);
}
