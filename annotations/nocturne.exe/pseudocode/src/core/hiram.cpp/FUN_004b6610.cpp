// Name: core_hiram.cpp_FUN_004b6610
// Address: 004b6610
// Address Range: [[004b6610, 004b666a]]
// Convention: unknown
// Signature: int core_hiram_cpp_FUN_004b6610(undefined4 param_1)

#include "nocturne.h"

int core_hiram_cpp_FUN_004b6610(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = core_npc_cpp_FUN_004ee950(param_1);
  *(byte ***)(iVar2 + 0x14c) = &PTR_core_hiram_cpp_FUN_004b6750_0059eda4;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(iVar2 + 0x150,"hiram.dfm");
  pcVar3 = "killHiram";
  pcVar4 = (char *)(iVar2 + 0x1f570);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return iVar2;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return iVar2;
}
