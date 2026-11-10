// Name: core_charactr.cpp_FUN_00430a90
// Address: 00430a90
// Address Range: [[00430a90, 00430b53]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00430a90(int param_1,int param_2,undefined4 param_3,float param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_charactr_cpp_FUN_00430a90(int param_1,int param_2,uint param_3,float param_4)

{
  int iVar1;
  byte bVar2;
  float afStackY_1040 [1012];
  uint *puVar3;
  uint local_58;
  float local_4c;
  float local_40;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  CVector3f local_1c;
  CVector3f local_10;
  
  bVar2 = 0;
  if (*(int *)(param_1 + 0x2298 + param_2 * 4) == 0) {
    iVar1 = core_actor_cpp_randomChance_FUN_0040cd00(param_4);
    if (iVar1 != 0) {
      core_skeleton_cpp_FUN_00569130(param_1 + 0x158,param_3);
      puVar3 = &stack0xffffffd8;
      local_28 = local_58;
      *(uint *)((int)&stack0xffffffdc + (uint)bVar2 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffac + (uint)bVar2 * -8);
      *(uint *)(&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)(&stack0xffffffb0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      core_actor_cpp_FUN_00408b40(param_1,puVar3);
      local_10.x = local_4c;
      *(uint *)((int)&local_10 + (uint)bVar2 * -8 + 4) =
           *(uint *)(&stack0xffffffb8 + (uint)bVar2 * -8);
      *(uint *)((int)&local_10 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
           *(uint *)(&stack0xffffffbc + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      local_34 = 0xc0400000;
      local_30 = 0;
      local_2c = 0;
      core_actor_cpp_FUN_00408ac0(param_1,&stack0xffffffcc);
      local_1c.x = local_40;
      *(uint *)((int)&local_1c + (uint)bVar2 * -8 + 4) =
           *(uint *)(&stack0xffffffc4 + (uint)bVar2 * -8);
      *(uint *)((int)&local_1c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
           *(uint *)(&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      core_gore_cpp_CGore_spawnBloodParticles_FUN_004e5f40
                (g_CGorePtr,&local_10,&local_1c,*(EBloodType *)(param_1 + 0x27a0));
      return;
    }
  }
  return;
}
