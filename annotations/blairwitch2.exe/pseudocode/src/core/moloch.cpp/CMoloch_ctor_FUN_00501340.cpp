// Name: core_moloch.cpp_CMoloch_ctor_FUN_00501340
// Address: 00501340
// Address Range: [[00501340, 005013fd]]
// Convention: __cdecl
// Signature: CMoloch * __cdecl core_moloch_cpp_CMoloch_ctor_FUN_00501340(CMoloch *this_ptr)

#include "nocturne.h"

CMoloch * __cdecl core_moloch_cpp_CMoloch_ctor_FUN_00501340(CMoloch *this_ptr)

{
  CMorph CVar1;
  int iVar2;
  CDeformableModelInstance *pCVar3;
  CMorph *pCVar4;
  char *pcVar5;
  CMorph *pCVar6;
  
  iVar2 = core_hero_cpp_FUN_004ce240(this_ptr);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_00544cd0
                     ((CDeformableModelInstance *)(iVar2 + 0x25640));
  pCVar4 = core_morph_cpp_CMorph_ctor_FUN_005b6e60((CMorph *)&pCVar3[1].field_0xd4);
  *(byte **)(pCVar4 + -0x27718) = &g_CMolochVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)(pCVar4 + -0x27714),"moloch_h.dfm");
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
  return (CMoloch *)(pCVar4 + -0x279c8);
}
