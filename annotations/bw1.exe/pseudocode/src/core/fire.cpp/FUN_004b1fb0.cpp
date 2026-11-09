// Name: core_fire.cpp_FUN_004b1fb0
// Address: 004b1fb0
// Address Range: [[004b1fb0, 004b22cd]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004b1fb0(CCrater *param_1,undefined4 *param_2,float param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_004b1fb0(CCrater *param_1,uint *param_2,float param_3)

{
  CDemonSet *pCVar1;
  float fVar2;
  CCrater *pCVar3;
  byte *puVar4;
  byte bVar5;
  float afStackY_1060 [1015];
  float local_78;
  uint local_74;
  uint local_70;
  float local_6c;
  float local_68;
  uint local_64;
  float local_60;
  uint local_5c;
  float local_58;
  float local_54;
  uint local_50;
  float local_4c;
  float local_48;
  float local_44;
  uint local_40;
  float local_3c;
  uint local_38;
  float local_34;
  float local_30;
  uint local_2c;
  float local_28;
  float local_24;
  float local_20;
  uint local_1c;
  float local_18;
  float local_14;
  
  bVar5 = 0;
  if ((uint *)&param_1->field_0xc != param_2) {
    *(uint *)&param_1->field_0xc = *param_2;
    *(uint *)&param_1->field_0x10 = param_2[1];
    *(uint *)&param_1->field_0x14 = param_2[2];
  }
  core_fire_cpp_CCrater_render_FUN_004b23a0(param_1);
  *(uint *)param_1 = 1;
  pCVar1 = g_CDemonSetPtr;
  *(uint *)&param_1->field_0x4 = 0;
  *(uint *)&param_1->field_0x8 = 0x3dcccccd;
  local_14 = (float)core_setcolid_cpp_FUN_005562c0(pCVar1,&param_1->field_0xc,0);
  *(float *)&param_1->field_0x10 = local_14;
  pCVar3 = param_1;
  do {
    local_18 = -param_3;
    local_14 = (float)core_actor_cpp_FUN_0040cc00(local_18,param_3);
    *(float *)&pCVar3->field_0x1c = local_14 * (float)_DAT_005df3e4 + *(float *)&param_1->field_0xc;
    *(uint *)&pCVar3->field_0x20 = *(uint *)&param_1->field_0x10;
    local_14 = (float)core_actor_cpp_FUN_0040cc00(local_18,param_3);
    puVar4 = &pCVar3->field_0xc;
    *(float *)&pCVar3->field_0x24 = local_14 * (float)_DAT_005df3e4 + *(float *)&param_1->field_0x14
    ;
    pCVar3 = (CCrater *)puVar4;
  } while (puVar4 != &param_1->field_0x24);
  local_3c = *(float *)&param_1->field_0xc + local_18;
  local_38 = *(uint *)&param_1->field_0x10;
  local_34 = *(float *)&param_1->field_0x14 + local_18;
  local_78 = local_3c;
  (&stack0xffffff8c)[(uint)bVar5 * 0xfffffffe] =
       *(uint *)((int)&stack0xffffffc8 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffff90 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffcc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  if ((float *)&param_1->field_0x40 != &stack0xffffff88) {
    *(float *)&param_1->field_0x40 = local_78;
    *(uint *)&param_1->field_0x44 = local_74;
    *(uint *)&param_1->field_0x48 = local_70;
  }
  local_30 = *(float *)&param_1->field_0xc + param_3;
  local_2c = *(uint *)&param_1->field_0x10;
  local_28 = *(float *)&param_1->field_0x14 + -param_3;
  local_6c = local_30;
  (&stack0xffffff98)[(uint)bVar5 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffd4 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffff9c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  if ((float *)&param_1->field_0x4c != &stack0xffffff94) {
    *(float *)&param_1->field_0x4c = local_6c;
    *(float *)&param_1->field_0x50 = local_68;
    *(uint *)&param_1->field_0x54 = local_64;
  }
  local_60 = *(float *)&param_1->field_0xc + param_3;
  local_5c = *(uint *)&param_1->field_0x10;
  local_58 = *(float *)&param_1->field_0x14 + param_3;
  local_24 = local_60;
  (&stack0xffffffe0)[(uint)bVar5 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffa4 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffa8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  if ((float *)&param_1->field_0x58 != &stack0xffffffdc) {
    *(float *)&param_1->field_0x58 = local_24;
    *(float *)&param_1->field_0x5c = local_20;
    *(uint *)&param_1->field_0x60 = local_1c;
  }
  local_54 = *(float *)&param_1->field_0xc + -param_3;
  local_50 = *(uint *)&param_1->field_0x10;
  local_4c = *(float *)&param_1->field_0x14 + param_3;
  local_48 = local_54;
  (&stack0xffffffbc)[(uint)bVar5 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffb0 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffc0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffb4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  if ((float *)&param_1->field_0x64 != &stack0xffffffb8) {
    *(float *)&param_1->field_0x64 = local_48;
    *(float *)&param_1->field_0x68 = local_44;
    *(uint *)&param_1->field_0x6c = local_40;
  }
  local_14 = (float)core_setcolid_cpp_FUN_005562c0(g_CDemonSetPtr,&param_1->field_0x40,0);
  pCVar1 = g_CDemonSetPtr;
  *(float *)&param_1->field_0x44 = local_14 + (float)_DAT_005df3ec;
  local_14 = (float)core_setcolid_cpp_FUN_005562c0(pCVar1,&param_1->field_0x4c,0);
  pCVar1 = g_CDemonSetPtr;
  *(float *)&param_1->field_0x50 = local_14 + (float)_DAT_005df3ec;
  local_14 = (float)core_setcolid_cpp_FUN_005562c0(pCVar1,&param_1->field_0x58,0);
  pCVar1 = g_CDemonSetPtr;
  *(float *)&param_1->field_0x5c = local_14 + (float)_DAT_005df3ec;
  fVar2 = (float)core_setcolid_cpp_FUN_005562c0(pCVar1,&param_1->field_0x64,0);
  *(float *)&param_1->field_0x68 = fVar2 + (float)_DAT_005df3ec;
  if (1.0 < ABS(*(float *)&param_1->field_0x44 - *(float *)&param_1->field_0x10)) {
    *(uint *)&param_1->field_0x44 = *(uint *)&param_1->field_0x10;
  }
  if (1.0 < ABS(*(float *)&param_1->field_0x50 - *(float *)&param_1->field_0x10)) {
    *(uint *)&param_1->field_0x50 = *(uint *)&param_1->field_0x10;
  }
  if (1.0 < ABS(*(float *)&param_1->field_0x5c - *(float *)&param_1->field_0x10)) {
    *(uint *)&param_1->field_0x5c = *(uint *)&param_1->field_0x10;
  }
  if (ABS(*(float *)&param_1->field_0x68 - *(float *)&param_1->field_0x10) <= 1.0) {
    return;
  }
  *(uint *)&param_1->field_0x68 = *(uint *)&param_1->field_0x10;
  return;
}
