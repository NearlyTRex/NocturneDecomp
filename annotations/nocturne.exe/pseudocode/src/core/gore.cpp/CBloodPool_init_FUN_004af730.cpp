// Name: core_gore.cpp_CBloodPool_init_FUN_004af730
// Address: 004af730
// Address Range: [[004af730, 004af7bb]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodPool_init_FUN_004af730(int param_1,undefined4 *param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CBloodPool_init_FUN_004af730(int param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = core_actor_cpp_getRandomInt_FUN_0040de00(0,3);
  uVar2 = 0x01E57284;
  *(uint *)(param_1 + 0x14) = uVar1;
  *(uint *)(param_1 + 4) = *param_2;
  uVar2 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80(uVar2,param_2,0);
  *(uint *)(param_1 + 8) = uVar2;
  *(uint *)(param_1 + 0xc) = param_2[2];
  *(uint *)(param_1 + 0x18) = 0;
  *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + _DAT_00585138;
  *(int *)(param_1 + 0x1c) = (int)ROUND(*(float *)(param_1 + 4) * _DAT_0059e4d4);
  *(int *)(param_1 + 0x20) = (int)ROUND(*(float *)(param_1 + 8) * _DAT_0059e4d4);
  *(int *)(param_1 + 0x24) = (int)ROUND(*(float *)(param_1 + 0xc) * _DAT_0059e4d4);
  *(uint *)(param_1 + 0x10) = param_3;
  return;
}
