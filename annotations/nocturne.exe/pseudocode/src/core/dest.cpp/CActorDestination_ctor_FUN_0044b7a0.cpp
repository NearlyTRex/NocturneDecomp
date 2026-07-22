// Name: core_dest.cpp_CActorDestination_ctor_FUN_0044b7a0
// Address: 0044b7a0
// Address Range: [[0044b7a0, 0044b809]]
// Convention: __cdecl
// Signature: int __cdecl core_dest_cpp_CActorDestination_ctor_FUN_0044b7a0(undefined4 param_1)

#include "nocturne.h"

int __cdecl core_dest_cpp_CActorDestination_ctor_FUN_0044b7a0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = "none";
  iVar2 = core_actor_cpp_FUN_00409d30(param_1);
  pcVar4 = (char *)(iVar2 + 0x180);
  *(byte ***)(iVar2 + 0x14c) = &PTR_core_dest_cpp_CActorDestination_setup_FUN_0044b810_0059be64
  ;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x150) = 0;
  *(byte *)(iVar2 + 0x154) = 0;
  *(uint *)(iVar2 + 0x1e8) = 1;
  *(uint *)(iVar2 + 0x1e4) = 1;
  return iVar2;
}
