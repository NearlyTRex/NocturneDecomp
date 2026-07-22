// Name: core_bodypart.cpp_CBodyPart_setupPhysicsBox_FUN_00417d70
// Address: 00417d70
// Address Range: [[00417d70, 00417ea9]]
// Convention: unknown
// Signature: void core_bodypart_cpp_CBodyPart_setupPhysicsBox_FUN_00417d70(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bodypart_cpp_CBodyPart_setupPhysicsBox_FUN_00417d70(int param_1)

{
  uint *puVar1;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  byte auStack_1c [12];
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  if ((2 < *(int *)(param_1 + 0x16c)) && (0 < *(int *)(param_1 + 0x178))) {
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,&fStack_4c);
    fStack_28 = fStack_4c + fStack_40;
    fStack_24 = fStack_48 + fStack_3c;
    fStack_34 = fStack_28 * 0.5f;
    fStack_30 = fStack_24 * 0.5f;
    fStack_20 = fStack_44 + fStack_38;
    fStack_2c = fStack_20 * 0.5f;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,auStack_1c,&fStack_34);
    fStack_10 = fStack_40 - fStack_4c;
    fStack_c = fStack_3c - fStack_48;
    fStack_8 = fStack_38 - fStack_44;
    core_box_cpp_CBox_setupCorners_FUN_0041a6e0
              (param_1 + 0xcb4,auStack_1c,param_1 + 0x30,&fStack_10,0x40a00000);
    return;
  }
  *(uint *)(param_1 + 0x70) = 2;
  core_bodypart_cpp_CBodyPart_setCounts_FUN_00415ee0(param_1,0,0);
  puVar1 = (uint *)(param_1 + 0x160);
  if (puVar1 != (uint *)&DAT_02dd1184) {
    *puVar1 = _DAT_02dd1184;
    *(uint *)(param_1 + 0x164) = _DAT_02dd1188;
    *(uint *)(param_1 + 0x168) = _DAT_02dd118c;
  }
  if ((uint *)(param_1 + 0x154) == puVar1) {
    return;
  }
  *(uint *)(param_1 + 0x154) = *puVar1;
  *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x164);
  *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x168);
  return;
}
