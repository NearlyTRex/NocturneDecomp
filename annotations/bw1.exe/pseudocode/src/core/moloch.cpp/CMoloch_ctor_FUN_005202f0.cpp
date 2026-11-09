// Name: core_moloch.cpp_CMoloch_ctor_FUN_005202f0
// Address: 005202f0
// Address Range: [[005202f0, 005203ad]]
// Convention: __cdecl
// Signature: CMoloch * __cdecl core_moloch_cpp_CMoloch_ctor_FUN_005202f0(CMoloch *this_ptr)

#include "nocturne.h"

CMoloch * __cdecl core_moloch_cpp_CMoloch_ctor_FUN_005202f0(CMoloch *this_ptr)

{
  CMorph CVar1;
  CHero *pCVar2;
  CDeformableModelInstance *pCVar3;
  CMorph *pCVar4;
  char *pcVar5;
  CMorph *pCVar6;
  
  pCVar2 = core_hero_cpp_FUN_004ea830((CHero *)this_ptr);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_00567370
                     ((CDeformableModelInstance *)(pCVar2 + 0x1ffac));
  pCVar4 = core_morph_cpp_CMorph_ctor_FUN_00522fa0((CMorph *)&pCVar3[1].field_0xd4);
  *(byte ***)(pCVar4 + -0x222d0) = &g_CMolochVTable;
  core_skeleton_cpp_FUN_00569f50(pCVar4 + -0x222cc,"moloch_h.dfm");
  pcVar5 = "molochToDemon";
  pCVar6 = pCVar4 + -200;
  do {
    CVar1 = (CMorph)*pcVar5;
    *pCVar6 = CVar1;
    if (CVar1 == (CMorph)0x0) break;
    CVar1 = *(CMorph *)(pcVar5 + 1);
    pcVar5 = pcVar5 + 2;
    pCVar6[1] = CVar1;
    pCVar6 = pCVar6 + 2;
  } while (CVar1 != (CMorph)0x0);
  pcVar5 = "molochToHuman";
  pCVar6 = pCVar4 + -100;
  do {
    CVar1 = (CMorph)*pcVar5;
    *pCVar6 = CVar1;
    if (CVar1 == (CMorph)0x0) break;
    CVar1 = *(CMorph *)(pcVar5 + 1);
    pcVar5 = pcVar5 + 2;
    pCVar6[1] = CVar1;
    pCVar6 = pCVar6 + 2;
  } while (CVar1 != (CMorph)0x0);
  *(uint *)(pCVar4 + -0xd4) = 1;
  *(uint *)(pCVar4 + -0xd0) = 0;
  *(uint *)(pCVar4 + -0xcc) = 0;
  return (CMoloch *)(pCVar4 + -0x22424);
}
