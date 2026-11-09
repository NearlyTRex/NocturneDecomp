// Name: core_union.cpp_FUN_005a5460
// Address: 005a5460
// Address Range: [[005a5460, 005a59e4]]
// Convention: unknown
// Signature: void core_union_cpp_FUN_005a5460(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_union_cpp_FUN_005a5460(CDemonActor *param_1)

{
  byte auVar1 [4];
  int iVar2;
  byte bVar3;
  float afStackY_110c [996];
  float *pfVar4;
  SDamageInfo aSStack_160 [4];
  uint uStack_15c;
  uint uStack_158;
  float fStack_154;
  float fStack_150;
  uint uStack_14c;
  float fStack_144;
  uint uStack_140;
  uint uStack_13c;
  uint uStack_130;
  CDemonActor *pCStack_128;
  float fStack_124;
  float afStack_120 [2];
  byte local_118 [4];
  float local_114 [4];
  float fStack_104;
  float fStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint local_f4;
  float fStack_e8;
  float local_dc [3];
  float local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  float afStack_c0 [5];
  float local_ac;
  float local_a8 [4];
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  uint uStack_6c;
  uint uStack_68;
  float local_64;
  float local_60;
  float local_5c;
  uint local_58;
  float local_4c;
  float local_48;
  float local_44;
  float afStack_40 [3];
  float local_34 [3];
  float local_28;
  float local_24;
  float local_20;
  float fStack_1c;
  int iStack_18;
  byte *local_14;
  
  bVar3 = 0;
  if (*(int *)&param_1[0x62].field_0x190 == 0) {
    return;
  }
  local_14 = &param_1[6].field_0xfc;
  core_xform_cpp_FUN_00591530(&DAT_0265370c,local_14 + *(int *)&param_1[0x67].field_0x1f0 * 0x30);
  pfVar4 = local_114 + 0xe;
  local_dc[0] = (float)local_58;
  local_114[(uint)bVar3 * -2 + 0xf] = local_a8[(uint)bVar3 * -2 + 0x15];
  local_114[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x10] =
       local_a8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x16];
  core_actor_cpp_FUN_00408d70(param_1,pfVar4);
  local_118 = (byte  [4])afStack_c0[2];
  local_114[(uint)bVar3 * -2] = afStack_c0[(uint)bVar3 * -2 + 3];
  local_114[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       afStack_c0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
  core_xform_cpp_FUN_00591530(&DAT_0265370c,local_14 + *(int *)&param_1[0x67].field_0x1ec * 0x30);
  pfVar4 = local_a8 + 0x1d;
  local_34[0] = (float)local_f4;
  local_a8[(uint)bVar3 * -2 + 0x1e] = local_114[(uint)bVar3 * -2 + 9];
  local_a8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x1f] =
       local_114[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10];
  core_actor_cpp_FUN_00408d70(param_1,pfVar4);
  auVar1 = local_118;
  local_ac = local_88;
  local_a8[(uint)bVar3 * -2] = local_a8[(uint)bVar3 * -2 + 9];
  local_a8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       local_a8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10];
  local_4c = (float)auVar1 - local_ac;
  local_48 = local_114[0] - local_a8[0];
  local_44 = local_114[1] - local_a8[1];
  local_64 = (float)auVar1 - local_ac;
  local_a8[(uint)bVar3 * -2 + 0x12] = local_a8[(uint)bVar3 * -2 + 0x18];
  local_a8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x13] =
       local_a8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x19];
  local_64 = local_64 * _DAT_005f05d6;
  local_60 = local_60 * _DAT_005f05d6;
  local_5c = local_5c * _DAT_005f05d6;
  local_28 = local_64 + local_ac;
  local_24 = local_60 + local_a8[0];
  local_20 = local_5c + local_a8[1];
  local_a8[2] = local_28;
  local_a8[(uint)bVar3 * -2 + 3] = local_a8[(uint)bVar3 * -2 + 0x21];
  local_a8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
       local_a8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x22];
  if (local_a8 + 0x11 != local_a8 + 2) {
    local_64 = local_a8[2];
    local_60 = local_a8[3];
    local_5c = local_98;
  }
  core_fire_cpp_FUN_0049d170(0x01C3DEB4,local_a8 + 0x11,&param_1->field_0x3c);
  core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
            (0x01C3DEB4,(CVector3f *)&local_ac,1.5,(CVector3f *)0x0,0xffff);
  core_sound_cpp_CSound_playActorSound_FUN_0055ae50
            (0x0264B290,param_1,"shotgun.wav",(CVector3f *)local_118);
  (**(code **)(*(int *)(*(int *)&param_1[0x62].field_0x190 + 0x2b0) + 0x5c))
            (*(int *)&param_1[0x62].field_0x190,local_114 + 0x11);
  core_actor_cpp_FUN_00408d70(*(uint *)&param_1[0x62].field_0x190,local_114 + 0x11);
  fStack_70 = (float)uStack_c4;
  local_a8[(uint)bVar3 * -2 + 0xf] = afStack_c0[(uint)bVar3 * -2];
  local_a8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x10] =
       afStack_c0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  if (local_114 + 0x11 != local_a8 + 0xe) {
    local_d0 = fStack_70;
    uStack_cc = uStack_6c;
    uStack_c8 = uStack_68;
  }
  afStack_40[0] = (float)local_118;
  local_a8[(uint)bVar3 * -2 + 0x1b] = local_114[(uint)bVar3 * -2];
  local_a8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x1c] =
       local_114[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,param_1);
  local_14 = (byte *)
             core_setcolid_cpp_FUN_00535ee0(g_CDemonSetPtr,local_a8 + 0x1a,local_114 + 0x11);
  if (((float)local_14 < 0.0) || (1.0 < (float)local_14)) {
    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
    return;
  }
  iStack_18 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                        (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                         g_CCharacterClassInfo.name_hash);
  if (iStack_18 != 0) {
    iVar2 = (**(code **)(*(int *)(iStack_18 + 0x2b0) + 0x114))(iStack_18);
    if (0 < iVar2) goto LAB_005a580c;
  }
  if (iStack_18 != 0) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_160);
    uStack_15c = 0x41200000;
    uStack_158 = 0x3f800000;
    local_114[2] = *(float *)&g_CDemonSetPtr->field_0x14d11c -
                   *(float *)&g_CDemonSetPtr->field_0x14d110;
    local_114[3] = *(float *)&g_CDemonSetPtr->field_0x14d120 -
                   *(float *)&g_CDemonSetPtr->field_0x14d114;
    fStack_104 = *(float *)&g_CDemonSetPtr->field_0x14d124 -
                 *(float *)&g_CDemonSetPtr->field_0x14d118;
    fStack_7c = local_114[2];
    local_a8[(uint)bVar3 * -2 + 0xc] = local_114[(uint)bVar3 * -2 + 3];
    local_a8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd] =
         local_114[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
    fStack_1c = (float)_DAT_005f05da /
                SQRT(fStack_74 * fStack_74 + fStack_7c * fStack_7c + fStack_78 * fStack_78);
    fStack_94 = fStack_7c * fStack_1c;
    fStack_90 = fStack_78 * fStack_1c;
    fStack_8c = fStack_74 * fStack_1c;
    fStack_124 = fStack_7c * fStack_1c;
    afStack_120[(uint)bVar3 * -2] = local_a8[(uint)bVar3 * -2 + 6];
    afStack_120[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         local_a8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7];
    if (&fStack_154 != &fStack_124) {
      fStack_154 = fStack_124;
      fStack_150 = afStack_120[0];
      uStack_14c = afStack_120[1];
    }
    core_actor_cpp_FUN_00408de0(iStack_18,&g_CDemonSetPtr->field_0x14d138);
    fStack_100 = fStack_e8;
    local_114[(uint)bVar3 * -2 + 6] = local_114[(uint)bVar3 * -2 + 0xc];
    local_114[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7] =
         local_114[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd];
    if (&fStack_144 != local_114 + 5) {
      fStack_144 = fStack_100;
      uStack_140 = uStack_fc;
      uStack_13c = uStack_f8;
    }
    pCStack_128 = param_1;
    uStack_130 = 0x65;
    (**(code **)(*(int *)(iStack_18 + 0x2b0) + 0x110))(iStack_18,aSStack_160);
    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
    return;
  }
LAB_005a580c:
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  return;
}
