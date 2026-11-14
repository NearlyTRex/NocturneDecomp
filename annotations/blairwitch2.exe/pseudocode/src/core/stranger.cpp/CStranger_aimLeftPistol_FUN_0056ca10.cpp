// Name: core_stranger.cpp_CStranger_aimLeftPistol_FUN_0056ca10
// Address: 0056ca10
// Address Range: [[0056ca10, 0056d055]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_aimLeftPistol_FUN_0056ca10(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_aimLeftPistol_FUN_0056ca10(CStranger *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  float10 fVar5;
  float afStackY_112c [1000];
  CDemonSet *this_ptr_00;
  int laser_type;
  int color_r;
  int color_g;
  int color_b;
  float *pfVar6;
  float fStack_150;
  float fStack_144;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_fc;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  CVector3f CStack_d8;
  float fStack_cc;
  float afStack_c8 [5];
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float local_6c;
  float fStack_60;
  uint uStack_5c;
  uint uStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int iStack_2c;
  float fStack_28;
  float fStack_24;
  SArmAimData *pSStack_20;
  float fStack_1c;
  float fStack_18;
  
  bVar4 = 0;
  if (this_ptr->weapon == (CWeapon *)0x0) {
    _DAT_01d046a0 = "..\\core\\stranger.cpp";
    _DAT_01d046a4 = 0x10b0;
    core_main_c_FUN_004e4500("CStranger::aimLeftPistol - no weapon?");
  }
  (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).isInvulnerable)
            ((CCharacter *)this_ptr->weapon);
  pSStack_20 = &this_ptr->left_arm_aim;
  iStack_2c = _DAT_0264be3c;
  fStack_120 = local_6c;
  (&stack0xfffffee4)[(uint)bVar4 * 0xfffffffe] = afStack_c8[(uint)bVar4 * -2 + 0x18];
  *(float *)(&stack0xfffffee8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       afStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19];
  fStack_30 = 0.5235988;
  fStack_34 = -1.3089969;
  core_actor_cpp_FUN_00408d70(this_ptr->weapon,&stack0xfffffee0);
  fStack_f0 = fStack_9c;
  (&stack0xffffff14)[(uint)bVar4 * 0xfffffffe] = afStack_c8[(uint)bVar4 * -2 + 0xc];
  afStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -8] =
       afStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_124 = 0x447a0000;
  core_actor_cpp_FUN_00408cf0(this_ptr->weapon,&stack0xfffffed4);
  fVar3 = fStack_e8;
  fVar1 = fStack_ec;
  fVar2 = fStack_f0;
  fStack_54 = fStack_144;
  afStack_c8[(uint)bVar4 * -2 + 0x1e] = *(float *)(&stack0xfffffec0 + (uint)bVar4 * -8);
  afStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1f] =
       *(float *)(&stack0xfffffec4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  color_b = 0;
  color_g = 0;
  color_r = 0xff;
  fStack_48 = fVar2 + fStack_54;
  fStack_44 = fVar1 + fStack_50;
  laser_type = 1;
  fStack_40 = fVar3 + fStack_4c;
  fStack_60 = fVar2 + fStack_54;
  afStack_c8[(uint)bVar4 * -2 + 0x1b] = afStack_c8[(uint)bVar4 * -2 + 0x21];
  this_ptr_00 = g_CDemonSetPtr;
  afStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1c] =
       afStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x22];
  core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00537ef0
            (this_ptr_00,laser_type,color_r,color_g,color_b);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,&this_ptr->weapon->base);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  fStack_150 = (float)core_setcolid_cpp_FUN_00535ee0
                                (g_CDemonSetPtr,&stack0xffffff10,afStack_c8 + 0x1a);
  fStack_18 = fStack_150;
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  fVar2 = fStack_f0;
  if ((fStack_150 < 0.0) || (1.0 < fStack_150)) {
    fStack_150 = 1.0;
  }
  fStack_a8 = fStack_54 * fStack_150;
  fStack_a4 = fStack_50 * fStack_150;
  fStack_a0 = fStack_4c * fStack_150;
  fStack_138 = fStack_54 * fStack_150;
  *(float *)((int)&stack0xfffffecc + (uint)bVar4 * -8) = afStack_c8[(uint)bVar4 * -2 + 9];
  *(float *)((int)&stack0xfffffed0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       afStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
  fStack_78 = fVar2 + fStack_138;
  fStack_74 = fStack_ec + fStack_134;
  fStack_70 = fStack_e8 + fStack_130;
  fStack_e4 = fVar2 + fStack_138;
  afStack_c8[(uint)bVar4 * 0xfffffffe + 0xfffffffa] = afStack_c8[(uint)bVar4 * -2 + 0x15];
  afStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -5] =
       afStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16];
  if (afStack_c8 + 0x1a != &stack0xffffff1c) {
    fStack_60 = fStack_e4;
    uStack_5c = uStack_e0;
    uStack_58 = uStack_dc;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
            (&(this_ptr->base).base.model,iStack_2c,&CStack_d8);
  pfVar6 = afStack_c8 + 0x1a;
  fStack_114 = CStack_d8.x;
  *(uint *)((int)&stack0xfffffef0 + (uint)bVar4 * -8) =
       *(uint *)((int)&CStack_d8 + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&stack0xfffffef4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&CStack_d8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  core_actor_cpp_FUN_00408de0(this_ptr,pfVar6);
  fStack_b4 = afStack_c8[2];
  afStack_c8[(uint)bVar4 * -2 + 6] = afStack_c8[(uint)bVar4 * -2 + 3];
  afStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       afStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  fStack_84 = fStack_b4 - fStack_114;
  fStack_80 = fStack_b0 - fStack_110;
  fStack_7c = fStack_ac - fStack_10c;
  fStack_cc = fStack_b4 - fStack_114;
  afStack_c8[(uint)bVar4 * -2] = afStack_c8[(uint)bVar4 * -2 + 0x12];
  afStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13];
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&fStack_cc);
  fVar2 = SQRT(afStack_c8[1] * afStack_c8[1] + fStack_cc * fStack_cc + afStack_c8[0] * afStack_c8[0]
              );
  fStack_90 = fStack_fc;
  afStack_c8[(uint)bVar4 * -2 + 0xf] = *(float *)(&stack0xffffff08 + (uint)bVar4 * -8);
  afStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
       *(float *)(&stack0xffffff0c + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  if ((float)_DAT_005ebce5 < fVar2) {
    fStack_28 = -fStack_120;
    if ((((float)_DAT_005ebce5 <= fVar2) &&
        (fVar1 = SQRT(fVar2 * fVar2 - fStack_28 * fStack_28) / fVar2, fVar1 < 1.0)) &&
       (0.0 <= fVar1)) {
      fVar5 = (float10)fVar1;
      acos();
      fStack_38 = (float)fVar5;
      if (0.0 <= fStack_28) {
        fStack_8c = fStack_8c + fStack_38;
      }
      else {
        fStack_8c = fStack_8c - fStack_38;
      }
      fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(fStack_8c);
      fStack_8c = fStack_18;
    }
    if ((((float)_DAT_005ebce5 <= fVar2) &&
        (fVar2 = SQRT(fVar2 * fVar2 - fStack_11c * fStack_11c) / fVar2, fVar2 < 1.0)) &&
       (0.0 <= fVar2)) {
      fVar5 = (float10)fVar2;
      acos();
      fStack_3c = (float)fVar5;
      if (0.0 <= fStack_11c) {
        fStack_90 = fStack_90 + fStack_3c;
      }
      else {
        fStack_90 = fStack_90 - fStack_3c;
      }
      fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(fStack_90);
      fStack_90 = fStack_18;
    }
  }
  fStack_108 = fStack_90;
  *(float *)((int)&stack0xfffffefc + (uint)bVar4 * -8) = afStack_c8[(uint)bVar4 * -2 + 0xf];
  *(float *)(&stack0xffffff00 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       afStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10];
  fStack_1c = fStack_104;
  fStack_24 = fStack_108;
  if (fStack_108 < 0xBF860A92) {
    fStack_24 = 0xBF860A92;
  }
  if (0x3F9C61AA < fStack_24) {
    fStack_24 = 0x3F9C61AA;
  }
  if (fStack_104 < fStack_34) {
    fStack_1c = fStack_34;
  }
  if (fStack_30 < fStack_1c) {
    fStack_1c = fStack_30;
  }
  pSStack_20->kickback_factor = 1.0;
  pSStack_20->target_yaw = fStack_1c;
  pSStack_20->target_pitch = fStack_24;
  pSStack_20->aim_yaw = fStack_1c;
  pSStack_20->aim_pitch = fStack_24;
  return;
}
