// Name: core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_005103f0
// Address: 005103f0
// Address Range: [[005103f0, 0051044d]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_005103f0(int param_1,int param_2)

#include "nocturne.h"

uint __cdecl core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_005103f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x15f2b0) != 0) &&
     (iVar2 = core_actor_cpp_isOfClassHash_FUN_0040d860(param_2,DAT_00765a98), iVar2 != 0)) {
    return 1;
  }
  iVar1 = 0;
  iVar2 = param_1;
  if (0 < *(int *)(param_1 + 0x15f2ac)) {
    do {
      if (param_2 == *(int *)(iVar2 + 0x15f2b4)) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 0x15f2ac));
  }
  return 0;
}
