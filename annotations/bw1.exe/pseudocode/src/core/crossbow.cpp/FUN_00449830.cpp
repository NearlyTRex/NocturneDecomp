// Name: core_crossbow.cpp_FUN_00449830
// Address: 00449830
// Address Range: [[00449830, 00449910]]
// Convention: unknown
// Signature: void core_crossbow_cpp_FUN_00449830(CWeapon *param_1,float param_2,undefined4 param_3,undefined4 param_4,float param_5)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_crossbow_cpp_FUN_00449830(CWeapon *param_1,float param_2,uint param_3,uint param_4,float param_5)

{
  byte bVar1;
  uint auStackY_101c [1014];
  uint *puVar2;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_1c;
  uint uStack_10;
  
  bVar1 = 0;
  core_weapon_cpp_CWeapon_process_FUN_005ad770(param_1,param_2);
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  puVar2 = &stack0xffffffe4;
  uStack_1c = uStack_28;
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar1 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffdc + (uint)bVar1 * -8);
  *(uint *)(&stack0xffffffec + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  core_actor_cpp_FUN_00408b40(param_1,puVar2);
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xfffffff4 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xfffffff8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  *(uint *)&param_1[1].field_0x24 = uStack_10;
  *(uint *)&param_1[1].field_0x28 = uStack_30;
  *(uint *)&param_1[1].field_0x2c = uStack_2c;
  if ((((*(int *)&param_1->field_0x2d4 != 2) || (*(int *)&param_1->field_0x568 < 1)) ||
      (*(int *)&param_1->field_0x56c != 5)) || (0.0 < *(float *)&param_1->field_0x300)) {
    core_flame_cpp_CFlame_hide_FUN_004b8ab0((CFlame *)&param_1[1].field_0x4);
    *(uint *)(param_1 + 1) = 0;
  }
  else {
    *(uint *)(param_1 + 1) = 1;
  }
  core_flame_cpp_FUN_004b7b90((CFlame *)&param_1[1].field_0x4,param_5);
  *(uint *)&param_1->field_0xfc = *(uint *)(param_1 + 1);
  return;
}
