// Name: core_emitter.cpp_FUN_0049f0e0
// Address: 0049f0e0
// Address Range: [[0049f0e0, 0049f2d3]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_FUN_0049f0e0(CEmitter *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_emitter_cpp_FUN_0049f0e0(CEmitter *this_ptr)

{
  float fVar1;
  int iVar2;
  byte bVar3;
  unkbyte10 Var4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float afStackY_1074 [1012];
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  byte local_50 [8];
  float local_48;
  double local_44;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar3 = 0;
  iVar2 = core_hero_cpp_FUN_004ea640(&this_ptr->field_0x20);
  local_80 = *(float *)(iVar2 + 0x20) - *(float *)&this_ptr->field_0x20;
  local_7c = *(float *)(iVar2 + 0x24) - *(float *)&this_ptr->field_0x24;
  local_78 = *(float *)(iVar2 + 0x28) - *(float *)&this_ptr->field_0x28;
  local_68 = local_80;
  (&stack0xffffff9c)[(uint)bVar3 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffff84 + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffffa0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xffffff88 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  if (&stack0xffffffa4 != &stack0xffffff98) {
    local_5c = local_68;
    local_58 = local_64;
    local_54 = local_60;
  }
  local_58 = local_58 + _DAT_005dc947;
  local_18 = (float)core_actor_cpp_FUN_0040cc00(0xc1000000,0x41000000);
  local_5c = local_18 + local_5c;
  local_18 = (float)core_actor_cpp_FUN_0040cc00(0xc1000000,0x41000000);
  Var4 = fsin((float10)_DAT_005dc94f);
  fVar5 = (float10)fptan((float10)_DAT_005dc95f);
  fVar6 = (float10)local_18 + (float10)local_54;
  local_54 = (float)fVar6;
  fVar7 = (float10)local_5c;
  atan2();
  fVar1 = SQRT(local_5c * local_5c + local_54 * local_54);
  fVar8 = (float10)fcos(Var4);
  fVar9 = (float10)fsin(fVar7);
  fVar7 = (float10)fcos(fVar7);
  local_44 = (double)fVar1;
  local_20 = fVar1 * (float)_DAT_005dc957 * fVar1;
  fVar6 = fVar8 * (float10)_DAT_005dc967 * fVar8 * (fVar6 * (float10)fVar1 - (float10)local_58);
  local_50._4_4_ = (float)-fVar5;
  local_90 = (float)fVar6;
  local_50._0_4_ = (float)(fVar9 * fVar8);
  local_48 = (float)(fVar7 * fVar8);
  if ((float10)0 < fVar6) {
    local_1c = SQRT(local_20 / local_90);
    local_74 = (float)(fVar9 * fVar8) * local_1c;
    local_70 = (float)-fVar5 * local_1c;
    local_6c = (float)(fVar7 * fVar8) * local_1c;
    local_8c = local_74;
    (&stack0xffffff78)[(uint)bVar3 * 0xfffffffe] =
         (float)*(uint *)(local_50 + (uint)bVar3 * -8 + -0x20);
    *(uint *)((int)&stack0xffffff7c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(local_50 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + -0x1c);
    if ((float *)local_50 != &stack0xffffff74) {
      local_50._0_4_ = local_8c;
      local_50._4_4_ = local_88;
      local_48 = local_84;
    }
    core_fire_cpp_FUN_004b5e00
              (0x01C57074,(CVector3f *)&this_ptr->field_0x20,(CVector3f *)local_50,0,0);
  }
  return;
}
