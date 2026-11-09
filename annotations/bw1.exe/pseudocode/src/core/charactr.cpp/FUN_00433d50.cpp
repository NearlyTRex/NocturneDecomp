// Name: core_charactr.cpp_FUN_00433d50
// Address: 00433d50
// Address Range: [[00433d50, 00433e4b]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00433d50(CDemonActor *param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_charactr_cpp_FUN_00433d50(CDemonActor *param_1,uint *param_2)

{
  byte bVar1;
  uint auStackY_1058 [1016];
  byte *puVar2;
  uint local_70;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_4c;
  uint local_40;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_1c;
  
  bVar1 = 0;
  core_actor_cpp_FUN_00408ac0(param_1,&param_1[0x1b].field_0x54);
  puVar2 = &param_1[0x1b].field_0xc4;
  local_58 = local_1c;
  *(uint *)((int)&stack0xffffffac + (uint)bVar1 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffe8 + (uint)bVar1 * -8);
  *(uint *)(&stack0xffffffb0 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  core_actor_cpp_FUN_00408ac0(param_1,puVar2);
  local_4c = local_40;
  *(uint *)((int)&stack0xffffffb8 + (uint)bVar1 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffc4 + (uint)bVar1 * -8);
  *(uint *)(&stack0xffffffbc + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffc8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if ((uint *)&param_1->field_0x30 != param_2) {
    *(uint *)&param_1->field_0x30 = *param_2;
    *(uint *)&param_1->field_0x34 = param_2[1];
    *(uint *)&param_1->field_0x38 = param_2[2];
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(param_1);
  core_actor_cpp_FUN_00408b00(param_1,&stack0xffffffa8);
  local_64 = local_70;
  (&stack0xffffffa0)[(uint)bVar1 * 0xfffffffe] =
       *(uint *)(&stack0xffffff94 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffa4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffff98 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if ((uint *)&param_1[0x1b].field_0x54 != &stack0xffffff9c) {
    *(uint *)&param_1[0x1b].field_0x54 = local_64;
    *(uint *)&param_1[0x1b].field_0x58 = local_60;
    *(uint *)&param_1[0x1b].field_0x5c = local_5c;
  }
  core_actor_cpp_FUN_00408b00(param_1,&stack0xffffffb4);
  local_34 = local_28;
  (&stack0xffffffd0)[(uint)bVar1 * 0xfffffffe] =
       *(uint *)(&stack0xffffffdc + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if ((uint *)&param_1[0x1b].field_0xc4 == &stack0xffffffcc) {
    return;
  }
  *(uint *)&param_1[0x1b].field_0xc4 = local_34;
  *(uint *)&param_1[0x1b].field_0xc8 = local_30;
  *(uint *)&param_1[0x1b].field_0xcc = local_2c;
  return;
}
