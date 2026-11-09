// Name: core_holycrss.cpp_FUN_004d51d0
// Address: 004d51d0
// Address Range: [[004d51d0, 004d525a]]
// Convention: unknown
// Signature: void core_holycrss_cpp_FUN_004d51d0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_holycrss_cpp_FUN_004d51d0(int param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  core_actor_cpp_FUN_0040aca0(param_1,param_2,param_3,param_4);
  uVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0xec))(param_1);
  uVar1 = g_CCharacterClassInfo.name_hash;
  *(uint *)(param_3 + 0x30) = 0x71;
  *(uint *)(param_3 + 4) = uVar2;
  iVar3 = core_actor_cpp_castToClassHash_FUN_0040c840(param_4,uVar1);
  if (((iVar3 != 0) && ((*(uint *)(iVar3 + 0x3254) & 0x7fffffff) != 0)) &&
     (*(int *)(iVar3 + 0x3258) == 0)) {
    *(float *)(param_3 + 4) = *(float *)(param_3 + 4) * _DAT_005c51db;
    return;
  }
  return;
}
