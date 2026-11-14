// Name: core_baron.cpp_CBaron_performLightningAttack_FUN_00410170
// Address: 00410170
// Address Range: [[00410170, 0041058a]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_performLightningAttack_FUN_00410170(CBaron *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_baron_cpp_CBaron_performLightningAttack_FUN_00410170(CBaron *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  float afStackY_10d4 [36];
  CMatrix3x4f *apCStackY_1044 [929];
  CFireEffect *this_ptr_00;
  CVector3f *start_position;
  CVector3f *end_position;
  float end_width;
  uint *puVar5;
  float end_spread;
  byte local_1a0 [120];
  SDamageInfo local_128;
  uint uStack_ec;
  float afStack_e8 [5];
  float fStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  uint local_a4;
  float afStack_a0 [2];
  CVector3f CStack_98;
  uint uStack_8c;
  float afStack_88 [5];
  float fStack_74;
  float fStack_68;
  uint uStack_64;
  uint uStack_60;
  uint local_5c;
  CMatrix3x4f *local_58 [2];
  CVector3f CStack_50;
  uint local_44;
  CMatrix3x4f *local_40 [5];
  uint uStack_2c;
  uint uStack_20;
  byte local_14 [4];
  int iStack_10;
  CMatrix3x4f *local_c;
  
  bVar4 = 0;
  iVar1 = core_hero_cpp_FUN_004d00c0(this_ptr,local_14);
  if (iVar1 == 0) {
    return;
  }
  core_actor_cpp_FUN_00408de0(this_ptr,iVar1 + 0x20);
  local_44 = local_a4;
  local_40[(uint)bVar4 * -2] = (CMatrix3x4f *)afStack_a0[(uint)bVar4 * -2];
  local_40[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       (CMatrix3x4f *)afStack_a0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&local_44);
  local_5c = local_40[2];
  local_58[(uint)bVar4 * -2] = local_40[(uint)bVar4 * -2 + 3];
  local_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       local_40[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  if (&local_44 != &local_5c) {
    local_44 = local_5c;
    local_40[0] = local_58[0];
    local_40[1] = local_58[1];
  }
  local_40[0] = (CMatrix3x4f *)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0((float)local_40[0]);
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
    CStack_bc.x = afStack_88[2];
    afStack_e8[(uint)bVar4 * -2 + 0xc] = afStack_88[(uint)bVar4 * -2 + 3];
    afStack_e8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
         afStack_88[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    if (&CStack_50 != (CVector3f *)(afStack_e8 + 0xb)) {
      CStack_50.x = CStack_bc.x;
      CStack_50.y = CStack_bc.y;
      CStack_50.z = CStack_bc.z;
    }
    iVar2 = rand();
    core_actor_cpp_FUN_00408d70(iVar1,local_1a0 + (iVar2 % iStack_10) * 0xc);
    fStack_d4 = (float)uStack_20;
    afStack_e8[(uint)bVar4 * -2 + 6] = (float)local_40[(uint)bVar4 * -2 + 9];
    afStack_e8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
         (float)local_40[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
    if (afStack_88 + 8 != afStack_e8 + 5) {
      fStack_68 = fStack_d4;
      uStack_64 = uStack_d0;
      uStack_60 = uStack_cc;
    }
    local_c = (this_ptr->base).base.model.bone_transform.bone_model_matrices;
    core_xform_cpp_FUN_00591530(&DAT_0265370c,local_c + DAT_007bc4cc);
    puVar5 = &uStack_ec;
    uStack_ec = uStack_2c;
    afStack_e8[(uint)bVar4 * -2] = (float)local_40[(uint)bVar4 * -2 + 6];
    afStack_e8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         (float)local_40[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
    core_actor_cpp_FUN_00408d70(this_ptr,puVar5);
    CStack_b0.x = fStack_74;
    *(float *)((int)&CStack_b0 + (uint)bVar4 * -8 + 4) = afStack_88[(uint)bVar4 * -2 + 6];
    *(float *)((int)&CStack_b0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         afStack_88[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
    core_xform_cpp_FUN_00591530(&DAT_0265370c,local_c + DAT_007bc4d0);
    puVar5 = &uStack_8c;
    uStack_8c = uStack_c8;
    afStack_88[(uint)bVar4 * -2] = afStack_e8[(uint)bVar4 * -2 + 9];
    afStack_88[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_e8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
    core_actor_cpp_FUN_00408d70(this_ptr,puVar5);
    end_spread = 4.0;
    end_width = 0.5;
    iVar2 = 1;
    end_position = &CStack_50;
    start_position = &CStack_b0;
    CStack_98.x = afStack_e8[2];
    *(float *)((int)&CStack_98 + (uint)bVar4 * -8 + 4) = afStack_e8[(uint)bVar4 * -2 + 3];
    this_ptr_00 = 0x01C3DEB4;
    *(float *)((int)&CStack_98 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         afStack_e8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_0049e760
              (this_ptr_00,start_position,end_position,iVar2,end_width,end_spread);
    core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_0049e760
              (0x01C3DEB4,&CStack_98,&CStack_50,1,0.5,4.0);
    (*((this_ptr->base).base.base.vtable._ub)->playSound)
              ((CDemonActor *)this_ptr,"baron-attack.wav");
  }
  core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&local_128);
  local_128.damage_type = DAMAGE_TYPE_ELECTROCUTE;
  local_128.damage_amount = 100.0;
  local_128.attacker = (CDemonActor *)this_ptr;
  local_128.wielder = this_ptr->target_actor;
  if ((CBaron *)local_128.wielder == (CBaron *)0x0) {
    local_128.wielder = (CDemonActor *)this_ptr;
  }
  (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x110))(iVar1,&local_128);
  *(uint *)(iVar1 + 0x1022c) = 0x40400000;
  return;
}
