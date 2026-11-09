// Name: core_baron.cpp_FUN_00410170
// Address: 00410170
// Address Range: [[00410170, 0041058a]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_FUN_00410170(CBaron *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_baron_cpp_FUN_00410170(CBaron *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte *apuStackY_10d4 [965];
  CFireEffect *this_ptr_00;
  CVector3f *start_position;
  CVector3f *end_position;
  float end_width;
  uint *puVar5;
  float end_spread;
  byte local_1a0 [120];
  SDamageInfo local_128 [4];
  uint local_124;
  uint local_f8;
  CBaron *local_f4;
  CBaron *local_f0;
  uint uStack_ec;
  uint auStack_e8 [2];
  CVector3f CStack_e0;
  uint uStack_d4;
  uint auStack_d0 [5];
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  uint local_a4;
  uint auStack_a0 [2];
  CVector3f CStack_98;
  uint uStack_8c;
  uint auStack_88 [2];
  CVector3f CStack_80;
  CVector3f CStack_74;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint local_5c;
  byte *local_58 [2];
  CVector3f CStack_50;
  uint local_44;
  byte *local_40 [5];
  uint uStack_2c;
  uint uStack_20;
  byte local_14 [4];
  int iStack_10;
  byte *local_c;
  
  bVar4 = 0;
  iVar1 = core_hero_cpp_FUN_004d00c0(this_ptr,local_14);
  if (iVar1 == 0) {
    return;
  }
  core_actor_cpp_FUN_00408de0(this_ptr,iVar1 + 0x20);
  local_44 = local_a4;
  local_40[(uint)bVar4 * -2] = (byte *)auStack_a0[(uint)bVar4 * -2];
  local_40[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       (byte *)auStack_a0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_vecdir_cpp_FUN_005838f0(&local_44);
  local_5c = local_40[2];
  local_58[(uint)bVar4 * -2] = local_40[(uint)bVar4 * -2 + 3];
  local_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       local_40[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  if (&local_44 != &local_5c) {
    local_44 = local_5c;
    local_40[0] = local_58[0];
    local_40[1] = local_58[1];
  }
  local_40[0] = (byte *)core_actor_cpp_FUN_0040d0c0(local_40[0]);
  local_c = local_40[0];
  if (((float)local_40[0] < _DAT_005cb573) || (0x3f490fdb < (int)local_40[0])) {
    core_fire_cpp_CFireEffect_createLightningBolt_FUN_0049e6e0
              (0x01C3DEB4,(CVector3f *)(iVar1 + 0x20),16.0,1,0.0);
    core_fire_cpp_CFireEffect_createCrater_FUN_0049e630
              (0x01C3DEB4,(CVector3f *)(iVar1 + 0x20),4.0);
  }
  else {
    __arrinit(local_1a0,10,&g_CVectorTypeInfo);
    iVar2 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x5c))(iVar1,local_1a0);
    iStack_10 = iVar2;
    iVar3 = rand();
    core_actor_cpp_FUN_00408d70(iVar1,local_1a0 + (iVar3 % iVar2) * 0xc);
    CStack_bc._0_4_ = CStack_80._0_4_;
    *(uint *)((int)&CStack_bc + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&CStack_80 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&CStack_bc + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&CStack_80 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    if (&CStack_50 != &CStack_bc) {
      CStack_50._0_4_ = CStack_bc._0_4_;
      CStack_50._4_4_ = CStack_bc._4_4_;
      CStack_50._8_4_ = CStack_bc._8_4_;
    }
    iVar2 = rand();
    core_actor_cpp_FUN_00408d70(iVar1,local_1a0 + (iVar2 % iStack_10) * 0xc);
    uStack_d4 = uStack_20;
    auStack_d0[(uint)bVar4 * -2] = local_40[(uint)bVar4 * -2 + 9];
    auStack_d0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         local_40[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
    if (&uStack_68 != &uStack_d4) {
      uStack_68 = uStack_d4;
      uStack_64 = auStack_d0[0];
      uStack_60 = auStack_d0[1];
    }
    local_c = &this_ptr->field_0x1134;
    core_xform_cpp_FUN_00591530(&DAT_0265370c,local_c + DAT_007bc4cc * 0x30);
    puVar5 = &uStack_ec;
    uStack_ec = uStack_2c;
    auStack_e8[(uint)bVar4 * -2] = local_40[(uint)bVar4 * -2 + 6];
    auStack_e8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         local_40[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
    core_actor_cpp_FUN_00408d70(this_ptr,puVar5);
    CStack_b0._0_4_ = CStack_74._0_4_;
    *(uint *)((int)&CStack_b0 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&CStack_74 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&CStack_b0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&CStack_74 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    core_xform_cpp_FUN_00591530(&DAT_0265370c,local_c + DAT_007bc4d0 * 0x30);
    puVar5 = &uStack_8c;
    uStack_8c = auStack_d0[2];
    auStack_88[(uint)bVar4 * -2] = auStack_d0[(uint)bVar4 * -2 + 3];
    auStack_88[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         auStack_d0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    core_actor_cpp_FUN_00408d70(this_ptr,puVar5);
    end_spread = 4.0;
    end_width = 0.5;
    iVar2 = 1;
    end_position = &CStack_50;
    start_position = &CStack_b0;
    CStack_98._0_4_ = CStack_e0._0_4_;
    *(uint *)((int)&CStack_98 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&CStack_e0 + (uint)bVar4 * -8 + 4);
    this_ptr_00 = 0x01C3DEB4;
    *(uint *)((int)&CStack_98 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&CStack_e0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_0049e760
              (this_ptr_00,start_position,end_position,iVar2,end_width,end_spread);
    core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_0049e760
              (0x01C3DEB4,&CStack_98,&CStack_50,1,0.5,4.0);
    (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))(this_ptr,"baron-attack.wav");
  }
  core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(local_128);
  local_f8 = 6;
  local_124 = 0x42c80000;
  local_f4 = this_ptr;
  local_f0 = *(CBaron **)&this_ptr->field_0x25718;
  if (local_f0 == (CBaron *)0x0) {
    local_f0 = this_ptr;
  }
  (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x110))(iVar1,local_128);
  *(uint *)(iVar1 + 0x1022c) = 0x40400000;
  return;
}
