// Name: core_passngr.cpp_CPassenger_ctor_FUN_00511410
// Address: 00511410
// Address Range: [[00511410, 005114e1]]
// Convention: __cdecl
// Signature: CPassenger * __cdecl core_passngr_cpp_CPassenger_ctor_FUN_00511410(CPassenger *this_ptr)

#include "nocturne.h"

CPassenger * __cdecl core_passngr_cpp_CPassenger_ctor_FUN_00511410(CPassenger *this_ptr)

{
  CMorph CVar1;
  CNPC *pCVar2;
  CMorph *pCVar3;
  CMorph *pCVar4;
  char *pcVar5;
  CMorph *pCVar6;
  
  pCVar2 = core_npc_cpp_CNPC_ctor_FUN_00510460((CNPC *)this_ptr);
  pCVar4 = (CMorph *)0x5e15e2;
  pCVar3 = core_morph_cpp_CMorph_ctor_FUN_005b6e60((CMorph *)&pCVar2[1].field_0x10c);
  pCVar6 = pCVar3 + -0xa8;
  *(byte **)(pCVar3 + -0x241a4) = &g_CPassengerVTable;
  do {
    CVar1 = *pCVar4;
    *pCVar6 = CVar1;
    if (CVar1 == (CMorph)0x0) break;
    CVar1 = pCVar4[1];
    pCVar4 = pCVar4 + 2;
    pCVar6[1] = CVar1;
    pCVar6 = pCVar6 + 2;
  } while (CVar1 != (CMorph)0x0);
  pcVar5 = "false";
  pCVar6 = pCVar3 + -0x10c;
  do {
    CVar1 = (CMorph)*pcVar5;
    *pCVar6 = CVar1;
    if (CVar1 == (CMorph)0x0) break;
    CVar1 = *(CMorph *)(pcVar5 + 1);
    pcVar5 = pcVar5 + 2;
    pCVar6[1] = CVar1;
    pCVar6 = pCVar6 + 2;
  } while (CVar1 != (CMorph)0x0);
  pcVar5 = "nameMePlease";
  *(uint *)(pCVar3 + -4) = 0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)(pCVar3 + -0x241a0),"trainman.dfm");
  pCVar6 = pCVar3 + -0x88;
  *(uint *)(pCVar3 + 0xc30) = 0x3f800000;
  do {
    CVar1 = (CMorph)*pcVar5;
    *pCVar6 = CVar1;
    if (CVar1 == (CMorph)0x0) break;
    CVar1 = *(CMorph *)(pcVar5 + 1);
    pcVar5 = pcVar5 + 2;
    pCVar6[1] = CVar1;
    pCVar6 = pCVar6 + 2;
  } while (CVar1 != (CMorph)0x0);
  pCVar3[-0x68] = (CMorph)0x0;
  return (CPassenger *)(pCVar3 + -0x24454);
}
