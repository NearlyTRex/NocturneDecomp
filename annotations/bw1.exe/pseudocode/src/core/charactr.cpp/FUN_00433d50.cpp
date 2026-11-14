// Name: core_charactr.cpp_FUN_00433d50
// Address: 00433d50
// Address Range: [[00433d50, 00433e4b]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00433d50(CDemonActor *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_charactr_cpp_FUN_00433d50(CDemonActor *param_1,float *param_2)

{
  CVector3f *pCVar1;
  byte bVar2;
  float afStackY_1058 [1016];
  char *pcVar3;
  float local_70;
  float local_64;
  float local_60;
  float local_5c;
  uint local_58;
  uint local_4c;
  uint local_40;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_1c;
  
  bVar2 = 0;
  core_actor_cpp_FUN_00408ac0(param_1,param_1[0x1b].orient_matrix.m + 2);
  pcVar3 = param_1[0x1b].create_event + 0x4c;
  local_58 = local_1c;
  *(uint *)((int)&stack0xffffffac + (uint)bVar2 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffe8 + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffffb0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  core_actor_cpp_FUN_00408ac0(param_1,pcVar3);
  local_4c = local_40;
  *(uint *)((int)&stack0xffffffb8 + (uint)bVar2 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffc4 + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffffbc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if (&param_1->orient != (UOrientationVector *)param_2) {
    (param_1->orient).vec.x = *param_2;
    (param_1->orient).vec.y = param_2[1];
    (param_1->orient).vec.z = param_2[2];
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(param_1);
  core_actor_cpp_FUN_00408b00(param_1,&stack0xffffffa8);
  pCVar1 = param_1[0x1b].orient_matrix.m + 2;
  local_64 = local_70;
  (&stack0xffffffa0)[(uint)bVar2 * 0xfffffffe] =
       (float)*(uint *)(&stack0xffffff94 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffa4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffff98 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if (pCVar1 != (CVector3f *)&stack0xffffff9c) {
    pCVar1->x = local_64;
    param_1[0x1b].orient_matrix.m[2].y = local_60;
    param_1[0x1b].orient_matrix.m[2].z = local_5c;
  }
  core_actor_cpp_FUN_00408b00(param_1,&stack0xffffffb4);
  local_34 = local_28;
  (&stack0xffffffd0)[(uint)bVar2 * 0xfffffffe] =
       *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if (param_1[0x1b].create_event + 0x4c == (char *)&stack0xffffffcc) {
    return;
  }
  *(uint *)(param_1[0x1b].create_event + 0x4c) = local_34;
  *(uint *)(param_1[0x1b].create_event + 0x50) = local_30;
  *(uint *)(param_1[0x1b].create_event + 0x54) = local_2c;
  return;
}
