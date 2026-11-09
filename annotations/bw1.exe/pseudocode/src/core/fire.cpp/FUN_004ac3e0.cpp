// Name: core_fire.cpp_FUN_004ac3e0
// Address: 004ac3e0
// Address Range: [[004ac3e0, 004ac683]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_004ac3e0(CBulletHole *this_ptr,CVector3f *hit_position,CVector3f *surface_normal,CDemonActor *hit_actor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_FUN_004ac3e0(CBulletHole *this_ptr,CVector3f *hit_position,CVector3f *surface_normal,CDemonActor *hit_actor)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float10 fVar5;
  float afStackY_1070 [967];
  CMatrix3x4f local_118 [48];
  CMatrix3x4f local_e8 [48];
  uint local_b8 [12];
  uint local_88;
  float afStack_84 [4];
  uint local_74;
  uint local_70;
  float local_64;
  float local_60;
  float local_5c;
  uint local_58;
  float local_54 [4];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  uint local_28;
  float afStack_24 [4];
  uint local_14;
  
  bVar4 = 0;
  if (this_ptr != (CBulletHole *)hit_position) {
    *(uint *)this_ptr = *(uint *)hit_position;
    *(uint *)&this_ptr->field_0x4 = *(uint *)&hit_position->field_0x4;
    *(uint *)&this_ptr->field_0x8 = *(uint *)&hit_position->field_0x8;
  }
  local_40 = *(float *)surface_normal * _DAT_005df1c8;
  local_3c = *(float *)&surface_normal->field_0x4 * _DAT_005df1c8;
  local_38 = *(float *)&surface_normal->field_0x8 * _DAT_005df1c8;
  local_64 = *(float *)this_ptr + local_40;
  local_60 = *(float *)&this_ptr->field_0x4 + local_3c;
  local_5c = *(float *)&this_ptr->field_0x8 + local_38;
  if (this_ptr != (CBulletHole *)&local_64) {
    *(float *)this_ptr = local_64;
    *(float *)&this_ptr->field_0x4 = local_60;
    *(float *)&this_ptr->field_0x8 = local_5c;
  }
  fVar5 = (float10)*(float *)&surface_normal->field_0x4;
  local_54[2] = local_64;
  local_54[3] = local_60;
  local_44 = local_5c;
  local_34 = local_40;
  local_30 = local_3c;
  local_2c = local_38;
  atan2();
  *(uint *)&this_ptr->field_0x1c = 0;
  *(float *)&this_ptr->field_0x14 = (float)-fVar5;
  fVar5 = (float10)*(float *)surface_normal;
  atan2();
  *(float *)&this_ptr->field_0x18 = (float)fVar5;
  iVar1 = core_actor_cpp_FUN_0040cc60(0,3);
  *(uint *)&this_ptr->field_0xc = 1;
  *(int *)&this_ptr->field_0x20 = iVar1;
  *(CDemonActor **)&this_ptr->field_0x10 = hit_actor;
  if (hit_actor != (CDemonActor *)0x0) {
    core_xform_cpp_FUN_005b5760(local_118,(CVector3f *)this_ptr,(CVector3f *)&this_ptr->field_0x14);
    core_xform_cpp_FUN_005b5620
              (local_e8,(CVector3f *)(*(int *)&this_ptr->field_0x10 + 0x20),
               (CVector3f *)(*(int *)&this_ptr->field_0x10 + 0x30));
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_118,local_e8);
    puVar2 = (uint *)&stack0xfffffeb8;
    puVar3 = local_b8;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    core_xform_cpp_FUN_005b6270(local_b8);
    local_58 = local_70;
    local_54[(uint)bVar4 * -2] = afStack_84[(uint)bVar4 * -2 + 6];
    local_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_84[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
    if ((uint *)&this_ptr->field_0x24 != &local_58) {
      *(uint *)&this_ptr->field_0x24 = local_58;
      *(float *)&this_ptr->field_0x28 = local_54[0];
      *(float *)&this_ptr->field_0x2c = local_54[1];
    }
    core_xform_cpp_FUN_005b5930(local_b8);
    afStack_84[2] = (float)local_28;
    afStack_84[(uint)bVar4 * -2 + 3] = afStack_24[(uint)bVar4 * -2];
    afStack_84[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         afStack_24[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if ((float *)&this_ptr->field_0x14 != afStack_84 + 2) {
      *(float *)&this_ptr->field_0x14 = afStack_84[2];
      *(float *)&this_ptr->field_0x18 = afStack_84[3];
      *(uint *)&this_ptr->field_0x1c = local_74;
    }
    core_actor_cpp_FUN_00408b00(*(uint *)&this_ptr->field_0x10,surface_normal);
    afStack_24[2] = (float)local_88;
    afStack_24[(uint)bVar4 * -2 + 3] = afStack_84[(uint)bVar4 * -2];
    afStack_24[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         afStack_84[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if ((float *)&this_ptr->field_0x30 != afStack_24 + 2) {
      *(float *)&this_ptr->field_0x30 = afStack_24[2];
      *(float *)&this_ptr->field_0x34 = afStack_24[3];
      *(uint *)&this_ptr->field_0x38 = local_14;
      return;
    }
  }
  return;
}
