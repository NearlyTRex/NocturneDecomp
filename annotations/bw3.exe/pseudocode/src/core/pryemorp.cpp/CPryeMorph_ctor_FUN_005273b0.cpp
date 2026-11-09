// Name: core_pryemorp.cpp_CPryeMorph_ctor_FUN_005273b0
// Address: 005273b0
// Address Range: [[005273b0, 005274df]]
// Convention: unknown
// Signature: CPryeMorph * core_pryemorp_cpp_CPryeMorph_ctor_FUN_005273b0(CPryeMorph *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CPryeMorph * core_pryemorp_cpp_CPryeMorph_ctor_FUN_005273b0(CPryeMorph *this_ptr)

{
  CMorph CVar1;
  CNPC *pCVar2;
  CMorph *pCVar3;
  CMorph *pCVar4;
  char *pcVar5;
  CMorph *pCVar6;
  
  pCVar2 = core_npc_cpp_CNPC_ctor_FUN_00508f40((CNPC *)this_ptr);
  pCVar4 = (CMorph *)0x5cda15;
  pCVar3 = core_morph_cpp_CMorph_ctor_FUN_004fa8a0((CMorph *)&pCVar2[1].field_0x14c);
  pCVar6 = pCVar3 + -0xe8;
  *(byte ***)(pCVar3 + -0x206c0) = &g_CPryeMorphVTable;
  do {
    CVar1 = *pCVar4;
    *pCVar6 = CVar1;
    if (CVar1 == (CMorph)0x0) break;
    CVar1 = pCVar4[1];
    pCVar4 = pCVar4 + 2;
    pCVar6[1] = CVar1;
    pCVar6 = pCVar6 + 2;
  } while (CVar1 != (CMorph)0x0);
  pCVar4 = (CMorph *)0x5cda21;
  pCVar6 = pCVar3 + -0xa8;
  do {
    CVar1 = *pCVar4;
    *pCVar6 = CVar1;
    if (CVar1 == (CMorph)0x0) break;
    CVar1 = pCVar4[1];
    pCVar4 = pCVar4 + 2;
    pCVar6[1] = CVar1;
    pCVar6 = pCVar6 + 2;
  } while (CVar1 != (CMorph)0x0);
  pcVar5 = "stand";
  pCVar6 = pCVar3 + -0x88;
  do {
    CVar1 = (CMorph)*pcVar5;
    *pCVar6 = CVar1;
    if (CVar1 == (CMorph)0x0) break;
    CVar1 = *(CMorph *)(pcVar5 + 1);
    pcVar5 = pcVar5 + 2;
    pCVar6[1] = CVar1;
    pCVar6 = pCVar6 + 2;
  } while (CVar1 != (CMorph)0x0);
  pcVar5 = "false";
  pCVar6 = pCVar3 + -0x14c;
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
  core_skeleton_cpp_FUN_0054eae0(pCVar3 + -0x206bc,"bwp3_prye_morph.dfm");
  pCVar6 = pCVar3 + -200;
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
  core_cloth_cpp_FUN_0043fa40((CClothList *)(pCVar3 + -0x1d90c),(char *)0x5cda56);
  return (CPryeMorph *)(pCVar3 + -0x20814);
}
