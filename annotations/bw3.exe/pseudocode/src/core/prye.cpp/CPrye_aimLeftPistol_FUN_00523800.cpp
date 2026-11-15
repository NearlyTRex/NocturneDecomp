// Name: core_prye.cpp_CPrye_aimLeftPistol_FUN_00523800
// Address: 00523800
// Address Range: [[00523800, 00523e45]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_aimLeftPistol_FUN_00523800(CPrye *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_prye_cpp_CPrye_aimLeftPistol_FUN_00523800(CPrye *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  double dVar5;
  float afStackY_112c [1000];
  CDemonSet *this_ptr_00;
  int laser_type;
  int color_r;
  int color_g;
  int color_b;
  CVector3f *input_world_point;
  float fStack_150;
  CVector3f CStack_144;
  float fStack_138;
  float afStack_134 [2];
  CVector3f CStack_12c;
  CVector3f CStack_120;
  float fStack_114;
  float afStack_110 [5];
  float fStack_fc;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  CVector3f CStack_e4;
  CVector3f CStack_d8;
  float fStack_cc;
  float afStack_c8 [2];
  CVector3f CStack_c0;
  float fStack_b4;
  float afStack_b0 [4];
  float fStack_a0;
  CVector3f CStack_9c;
  float afStack_90 [4];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float local_6c;
  CVector3f CStack_60;
  float fStack_54;
  float afStack_50 [4];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  uint uStack_30;
  float fStack_2c;
  float fStack_28;
  float *pfStack_24;
  SArmAimData *pSStack_20;
  float fStack_1c;
  float fStack_18;
  
  bVar4 = 0;
  if (this_ptr->weapon == (CWeapon *)0x0) {
    _DAT_01d71de0 = "..\\core\\prye.cpp";
    _DAT_01d71de4 = 0x1405;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CPrye::aimLeftPistol - no weapon?");
  }
  (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).isInvulnerable)
            ((CCharacter *)this_ptr->weapon);
  pSStack_20 = &this_ptr->left_arm_aim;
  fStack_2c = _DAT_01ed36e8;
  CStack_120.x = local_6c;
  *(float *)((int)&CStack_120 + (uint)bVar4 * -8 + 4) = afStack_90[(uint)bVar4 * -2 + 10];
  *(float *)((int)&CStack_120 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xb];
  uStack_30 = 0x3f060a92;
  fStack_34 = -1.3089969;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
            (&this_ptr->weapon->base,&CStack_120,&CStack_9c);
  fStack_f0 = CStack_9c.x;
  afStack_110[(uint)bVar4 * -2 + 9] = afStack_90[(uint)bVar4 * -2 + -2];
  afStack_110[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
       afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -1];
  CStack_12c.x = 0.0;
  CStack_12c.y = 0.0;
  CStack_12c.z = 1000.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
            (&this_ptr->weapon->base,&CStack_12c,&CStack_144);
  fVar3 = fStack_e8;
  fVar2 = fStack_ec;
  fVar1 = fStack_f0;
  fStack_54 = CStack_144.x;
  afStack_50[(uint)bVar4 * -2] = *(float *)((int)&CStack_144 + (uint)bVar4 * -8 + 4);
  afStack_50[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       *(float *)((int)&CStack_144 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  color_b = 0;
  color_g = 0;
  color_r = 0xff;
  afStack_50[2] = fVar1 + fStack_54;
  afStack_50[3] = fVar2 + afStack_50[0];
  laser_type = 1;
  fStack_40 = fVar3 + afStack_50[1];
  CStack_60.x = fVar1 + fStack_54;
  *(float *)((int)&CStack_60 + (uint)bVar4 * -8 + 4) = afStack_50[(uint)bVar4 * -2 + 3];
  this_ptr_00 = g_CDemonSetPtr;
  *(float *)((int)&CStack_60 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_50[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_0053ecd0
            (this_ptr_00,laser_type,color_r,color_g,color_b);
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,&this_ptr->weapon->base);
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  fStack_150 = (float)core_setcolid_cpp_FUN_0053ccc0(g_CDemonSetPtr,afStack_110 + 8,&CStack_60);
  fStack_18 = fStack_150;
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  fVar1 = fStack_f0;
  if ((fStack_150 < 0.0) || (1.0 < fStack_150)) {
    fStack_150 = 1.0;
  }
  afStack_b0[2] = fStack_54 * fStack_150;
  afStack_b0[3] = afStack_50[0] * fStack_150;
  fStack_a0 = afStack_50[1] * fStack_150;
  fStack_138 = fStack_54 * fStack_150;
  afStack_134[(uint)bVar4 * -2] = afStack_b0[(uint)bVar4 * -2 + 3];
  afStack_134[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  fStack_78 = fVar1 + fStack_138;
  fStack_74 = fStack_ec + afStack_134[0];
  fStack_70 = fStack_e8 + afStack_134[1];
  CStack_e4.x = fVar1 + fStack_138;
  afStack_110[(uint)bVar4 * -2 + 0xc] = afStack_90[(uint)bVar4 * -2 + 7];
  afStack_110[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
       afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 8];
  if (&CStack_60 != (CVector3f *)(afStack_110 + 0xb)) {
    CStack_60.x = CStack_e4.x;
    CStack_60.y = CStack_e4.y;
    CStack_60.z = CStack_e4.z;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
            (&(this_ptr->base).base.model,(int)fStack_2c,&CStack_d8);
  input_world_point = &CStack_60;
  fStack_114 = CStack_d8.x;
  afStack_110[(uint)bVar4 * -2] = *(float *)((int)&CStack_d8 + (uint)bVar4 * -8 + 4);
  afStack_110[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       *(float *)((int)&CStack_d8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
            ((CDemonActor *)this_ptr,input_world_point,&CStack_c0);
  fStack_b4 = CStack_c0.x;
  afStack_b0[(uint)bVar4 * -2] = *(float *)((int)&CStack_c0 + (uint)bVar4 * -8 + 4);
  afStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       *(float *)((int)&CStack_c0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  afStack_90[3] = fStack_b4 - fStack_114;
  fStack_80 = afStack_b0[0] - afStack_110[0];
  fStack_7c = afStack_b0[1] - afStack_110[1];
  fStack_cc = fStack_b4 - fStack_114;
  afStack_c8[(uint)bVar4 * -2] = afStack_90[(uint)bVar4 * -2 + 4];
  afStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 5];
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&fStack_cc);
  fVar1 = SQRT(afStack_c8[1] * afStack_c8[1] + fStack_cc * fStack_cc + afStack_c8[0] * afStack_c8[0]
              );
  afStack_90[0] = fStack_fc;
  afStack_90[(uint)bVar4 * -2 + 1] = afStack_110[(uint)bVar4 * -2 + 6];
  afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 2] =
       afStack_110[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  if ((float)_DAT_005cd727 < fVar1) {
    fStack_28 = -CStack_120.x;
    if ((((float)_DAT_005cd727 <= fVar1) &&
        (dVar5 = (double)(SQRT(fVar1 * fVar1 - fStack_28 * fStack_28) / fVar1), dVar5 < 1.0)) &&
       (0.0 <= dVar5)) {
      dVar5 = acos(dVar5);
      fStack_3c = (float)dVar5;
      if (0.0 <= fStack_2c) {
        afStack_90[0] = afStack_90[0] + fStack_3c;
      }
      else {
        afStack_90[0] = afStack_90[0] - fStack_3c;
      }
      fStack_1c = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(afStack_90[0]);
      afStack_90[0] = fStack_1c;
    }
    if ((((float)_DAT_005cd727 <= fStack_150) &&
        (dVar5 = (double)(SQRT(fStack_150 * fStack_150 - CStack_120.x * CStack_120.x) / fStack_150),
        dVar5 < 1.0)) && (0.0 <= dVar5)) {
      dVar5 = acos(dVar5);
      afStack_50[3] = (float)dVar5;
      if (0.0 <= CStack_12c.z) {
        CStack_9c.y = CStack_9c.y + afStack_50[3];
      }
      else {
        CStack_9c.y = CStack_9c.y - afStack_50[3];
      }
      pSStack_20 = (SArmAimData *)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(CStack_9c.y);
      CStack_9c.y = (float)pSStack_20;
    }
  }
  afStack_110[1] = CStack_9c.z;
  afStack_110[(uint)bVar4 * -2 + 2] = afStack_90[(uint)bVar4 * -2];
  afStack_110[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 3] =
       afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  pSStack_20 = (SArmAimData *)afStack_110[2];
  fStack_28 = afStack_110[1];
  if (afStack_110[1] < 0xBF490FDB) {
    fStack_28 = 0xBF490FDB;
  }
  if (0x3F490FDB < fStack_28) {
    fStack_28 = 0x3F490FDB;
  }
  if (afStack_110[2] < fStack_38) {
    pSStack_20 = (SArmAimData *)fStack_38;
  }
  if (fStack_34 < (float)pSStack_20) {
    pSStack_20 = (SArmAimData *)fStack_34;
  }
  pfStack_24[5] = 1.0;
  pfStack_24[3] = (float)pSStack_20;
  pfStack_24[2] = fStack_28;
  pfStack_24[1] = (float)pSStack_20;
  *pfStack_24 = fStack_28;
  return;
}
