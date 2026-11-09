// Name: core_union.cpp_FUN_005a59f0
// Address: 005a59f0
// Address Range: [[005a59f0, 005a5a30]]
// Convention: unknown
// Signature: void core_union_cpp_FUN_005a59f0(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_union_cpp_FUN_005a59f0(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                    (*(uint *)(param_2 + 0x38),g_CUnionClassInfo.name_hash);
  if ((iVar1 == 0) && (*(int *)(param_2 + 0x38) != *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4))) {
    unkafter_basicene_cpp_FUN_0059f800(param_1,param_2);
    return;
  }
  return;
}
