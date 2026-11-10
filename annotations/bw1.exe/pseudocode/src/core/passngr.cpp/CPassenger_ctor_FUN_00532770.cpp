// Name: core_passngr.cpp_CPassenger_ctor_FUN_00532770
// Address: 00532770
// Address Range: [[00532770, 00532841]]
// Convention: __cdecl
// Signature: CPassenger * __cdecl core_passngr_cpp_CPassenger_ctor_FUN_00532770(CPassenger *this_ptr)

#include "nocturne.h"

CPassenger * __cdecl core_passngr_cpp_CPassenger_ctor_FUN_00532770(CPassenger *this_ptr)

{
  CMorph CVar1;
  CNPC *pCVar2;
  CMorph *pCVar3;
  char *pcVar4;
  CMorph *pCVar5;
  
  pCVar2 = core_npc_cpp_CNPC_ctor_FUN_00531670(&this_ptr->base);
  pcVar4 = "wolfbrn.dfm";
  pCVar3 = core_morph_cpp_CMorph_ctor_FUN_00522fa0((CMorph *)&pCVar2[1].base.base.scale.y);
  pCVar5 = pCVar3 + -0xa8;
  *(CCharacter_full_vtable **)(pCVar3 + -0x1fa70) = &g_CPassengerVTable;
  do {
    CVar1 = (CMorph)*pcVar4;
    *pCVar5 = CVar1;
    if (CVar1 == (CMorph)0x0) break;
    CVar1 = *(CMorph *)(pcVar4 + 1);
    pcVar4 = pcVar4 + 2;
    pCVar5[1] = CVar1;
    pCVar5 = pCVar5 + 2;
  } while (CVar1 != (CMorph)0x0);
  pcVar4 = "false";
  pCVar5 = pCVar3 + -0x10c;
  do {
    CVar1 = (CMorph)*pcVar4;
    *pCVar5 = CVar1;
    if (CVar1 == (CMorph)0x0) break;
    CVar1 = *(CMorph *)(pcVar4 + 1);
    pcVar4 = pcVar4 + 2;
    pCVar5[1] = CVar1;
    pCVar5 = pCVar5 + 2;
  } while (CVar1 != (CMorph)0x0);
  pcVar4 = "nameMePlease";
  *(uint *)(pCVar3 + -4) = 0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            ((CDeformableModelInstance *)(pCVar3 + -0x1fa6c),"trainman.dfm");
  pCVar5 = pCVar3 + -0x88;
  *(uint *)(pCVar3 + 0xc30) = 0x3f800000;
  do {
    CVar1 = (CMorph)*pcVar4;
    *pCVar5 = CVar1;
    if (CVar1 == (CMorph)0x0) break;
    CVar1 = *(CMorph *)(pcVar4 + 1);
    pcVar4 = pcVar4 + 2;
    pCVar5[1] = CVar1;
    pCVar5 = pCVar5 + 2;
  } while (CVar1 != (CMorph)0x0);
  pCVar3[-0x68] = (CMorph)0x0;
  return (CPassenger *)(pCVar3 + -0x1fbc4);
}
