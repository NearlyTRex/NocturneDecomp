// Name: core_passngr.cpp_CPassenger_ctor_FUN_00545b30
// Address: 00545b30
// Address Range: [[00545b30, 00545c01]]
// Convention: __cdecl
// Signature: CPassenger * __cdecl core_passngr_cpp_CPassenger_ctor_FUN_00545b30(CPassenger *this_ptr)

#include "nocturne.h"

CPassenger * __cdecl core_passngr_cpp_CPassenger_ctor_FUN_00545b30(CPassenger *this_ptr)

{
  char cVar1;
  CNPC *pCVar2;
  int extraout_EAX;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = core_npc_cpp_CNPC_ctor_FUN_005447e0(&this_ptr->base);
  pcVar3 = "wolfbrn.dfm";
  core_morph_cpp_FUN_0052b310((CMorphModel *)&pCVar2[1].base.base.scale.y);
  pcVar4 = (char *)(extraout_EAX + -0xa8);
  *(CDemonActor_vtable **)(extraout_EAX + -0x1f6c0) = &g_CPassengerVTable;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "false";
  pcVar4 = (char *)(extraout_EAX + -0x10c);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "nameMePlease";
  *(uint *)(extraout_EAX + -4) = 0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)(extraout_EAX + -0x1f6bc),"trainman.dfm");
  pcVar4 = (char *)(extraout_EAX + -0x88);
  *(uint *)(extraout_EAX + 0xc30) = 0x3f800000;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(byte *)(extraout_EAX + -0x68) = 0;
  return (CPassenger *)(extraout_EAX + -0x1f814);
}
