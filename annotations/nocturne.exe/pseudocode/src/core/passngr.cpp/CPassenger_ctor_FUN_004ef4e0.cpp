// Name: core_passngr.cpp_CPassenger_ctor_FUN_004ef4e0
// Address: 004ef4e0
// Address Range: [[004ef4e0, 004ef5b1]]
// Convention: unknown
// Signature: int core_passngr_cpp_CPassenger_ctor_FUN_004ef4e0(undefined4 param_1)

#include "nocturne.h"

int core_passngr_cpp_CPassenger_ctor_FUN_004ef4e0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = core_npc_cpp_FUN_004ee950(param_1);
  pcVar3 = "wolfbrn.dfm";
  iVar2 = core_morph_cpp_CMorph_ctor_FUN_004e0050(iVar2 + 0x1f67c);
  pcVar4 = (char *)(iVar2 + -0xa8);
  *(byte ***)(iVar2 + -0x1f530) = &PTR_core_passngr_cpp_CPassenger_setup_FUN_004ef6d0_005a1074;
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
  pcVar4 = (char *)(iVar2 + -0x10c);
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
  *(uint *)(iVar2 + -4) = 0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (iVar2 + -0x1f52c,"trainman.dfm");
  pcVar4 = (char *)(iVar2 + -0x88);
  *(uint *)(iVar2 + 0xc30) = 0x3f800000;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(byte *)(iVar2 + -0x68) = 0;
  return iVar2 + -0x1f67c;
}
