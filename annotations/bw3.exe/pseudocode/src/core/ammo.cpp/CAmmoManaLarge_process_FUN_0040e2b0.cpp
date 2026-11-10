// Name: core_ammo.cpp_CAmmoManaLarge_process_FUN_0040e2b0
// Address: 0040e2b0
// Address Range: [[0040e2b0, 0040e39f]]
// Convention: __cdecl
// Signature: void __cdecl core_ammo_cpp_CAmmoManaLarge_process_FUN_0040e2b0(CAmmoManaLarge *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_ammo_cpp_CAmmoManaLarge_process_FUN_0040e2b0(CAmmoManaLarge *this_ptr,float delta_time)

{
  int iVar1;
  CKeyFramedModel *pCVar2;
  float fVar3;
  byte bVar4;
  float afStackY_1024 [1012];
  uint uStack_3c;
  float fStack_38;
  uint uStack_34;
  uint uStack_30;
  float fStack_2c;
  uint uStack_28;
  uint uStack_24;
  float fStack_20;
  uint uStack_1c;
  float fStack_18;
  float fStack_14;
  int iStack_10;
  
  bVar4 = 0;
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                     ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
  fStack_18 = delta_time * _DAT_005b611d;
  iVar1 = pCVar2->frame_count + -1;
  fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.95,1.05);
  iStack_10 = iVar1;
  fStack_14 = (float)iVar1;
  fVar3 = fVar3 * fStack_18 + *(float *)&this_ptr->field_0x31c;
  *(float *)&this_ptr->field_0x31c = fVar3;
  if (fStack_14 <= fVar3) {
    *(float *)&this_ptr->field_0x31c = *(float *)&this_ptr->field_0x31c - fStack_14;
  }
  uStack_30 = *(uint *)&this_ptr->field_0x20;
  fStack_2c = *(float *)&this_ptr->field_0x24 + _DAT_005b6121;
  uStack_28 = *(uint *)&this_ptr->field_0x28;
  uStack_3c = *(uint *)&this_ptr->field_0x20;
  (&stack0xffffffc8)[(uint)bVar4 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffd4 + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffffcc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  if (&stack0xffffffdc != &stack0xffffffc4) {
    uStack_24 = uStack_3c;
    fStack_20 = fStack_38;
    uStack_1c = uStack_34;
  }
  core_fire_cpp_FUN_004a3af0(0x01C73654,&stack0xffffffdc,&DAT_02cfd900,1,0,4);
  return;
}
