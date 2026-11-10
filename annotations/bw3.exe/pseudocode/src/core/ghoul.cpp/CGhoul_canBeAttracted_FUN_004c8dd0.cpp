// Name: core_ghoul.cpp_CGhoul_canBeAttracted_FUN_004c8dd0
// Address: 004c8dd0
// Address Range: [[004c8dd0, 004c90af]]
// Convention: __cdecl
// Signature: int __cdecl core_ghoul_cpp_CGhoul_canBeAttracted_FUN_004c8dd0(CGhoul *this_ptr,CVector3f *out_attract_position)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_ghoul_cpp_CGhoul_canBeAttracted_FUN_004c8dd0(CGhoul *this_ptr,CVector3f *out_attract_position)

{
  float fVar1;
  CDeformableModelInstance *pCVar2;
  byte bVar3;
  float afStackY_10fc [1014];
  uint uVar4;
  float *pfVar5;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  CVector3f CStack_e4;
  float fStack_d8;
  float afStack_d4 [4];
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_9c;
  float fStack_90;
  float fStack_84;
  float fStack_78;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
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
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  bVar3 = 0;
  pCVar2 = &(this_ptr->base).base.model;
  fStack_c = (float)core_motion_cpp_FUN_004fc350(pCVar2,0xb);
  if (fStack_c <= 0.0) {
    return 0;
  }
  core_skeleton_cpp_FUN_0054dcc0(pCVar2,_DAT_01d22da4);
  afStack_d4[2] = fStack_a8;
  afStack_d4[(uint)bVar3 * -2 + 3] = afStack_d4[(uint)bVar3 * -2 + 0xc];
  uVar4 = _DAT_01d22dac;
  afStack_d4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
       afStack_d4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd];
  core_skeleton_cpp_FUN_0054dcc0(pCVar2,uVar4);
  fStack_d8 = fStack_9c;
  afStack_d4[(uint)bVar3 * -2] = afStack_d4[(uint)bVar3 * -2 + 0xf];
  afStack_d4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       afStack_d4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x10];
  fStack_f0 = fStack_d8 + afStack_d4[2];
  fStack_ec = afStack_d4[0] + afStack_d4[3];
  fStack_e8 = afStack_d4[1] + fStack_c4;
  fStack_c0 = fStack_d8 + afStack_d4[2];
  afStack_d4[(uint)bVar3 * -2 + 6] = afStack_d4[(uint)bVar3 * -2 + -6];
  afStack_d4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7] =
       afStack_d4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -5];
  fStack_6c = fStack_c0 * _DAT_005c439d;
  fStack_68 = fStack_bc * _DAT_005c439d;
  fStack_64 = fStack_b8 * _DAT_005c439d;
  fStack_108 = fStack_c0 * _DAT_005c439d;
  *(float *)((int)&stack0xfffffefc + (uint)bVar3 * -8) = afStack_d4[(uint)bVar3 * -2 + 0x1b];
  *(float *)((int)&stack0xffffff00 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       afStack_d4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x1c];
  core_skeleton_cpp_FUN_0054dcc0(pCVar2,_DAT_01d22da8);
  fStack_b4 = fStack_90;
  afStack_d4[(uint)bVar3 * -2 + 9] = afStack_d4[(uint)bVar3 * -2 + 0x12];
  afStack_d4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10] =
       afStack_d4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x13];
  core_skeleton_cpp_FUN_0054dcc0(pCVar2,_DAT_01d22db0);
  fStack_114 = fStack_84;
  *(float *)((int)&stack0xfffffef0 + (uint)bVar3 * -8) = afStack_d4[(uint)bVar3 * -2 + 0x15];
  *(float *)((int)&stack0xfffffef4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       afStack_d4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x16];
  fStack_54 = fStack_114 + fStack_b4;
  fStack_50 = fStack_110 + fStack_b0;
  fStack_4c = fStack_10c + fStack_ac;
  fStack_48 = fStack_114 + fStack_b4;
  afStack_d4[(uint)bVar3 * -2 + 0x24] = afStack_d4[(uint)bVar3 * -2 + 0x21];
  afStack_d4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x25] =
       afStack_d4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x22];
  fVar1 = fStack_108;
  fStack_18 = fStack_48 * _DAT_005c439d;
  fStack_14 = fStack_44 * _DAT_005c439d;
  fStack_10 = fStack_40 * _DAT_005c439d;
  fStack_24 = fStack_48 * _DAT_005c439d;
  afStack_d4[(uint)bVar3 * -2 + 0x2d] = afStack_d4[(uint)bVar3 * -2 + 0x30];
  afStack_d4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x2e] =
       afStack_d4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x31];
  fStack_30 = fVar1 + fStack_24;
  fStack_2c = fStack_104 + fStack_20;
  fStack_28 = fStack_100 + fStack_1c;
  fStack_3c = fVar1 + fStack_24;
  afStack_d4[(uint)bVar3 * -2 + 0x27] = afStack_d4[(uint)bVar3 * -2 + 0x2a];
  afStack_d4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x28] =
       afStack_d4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x2b];
  pfVar5 = &stack0xffffff04;
  fStack_60 = fStack_3c * _DAT_005c439d;
  fStack_5c = fStack_38 * _DAT_005c439d;
  fStack_58 = fStack_34 * _DAT_005c439d;
  fStack_fc = fStack_3c * _DAT_005c439d;
  *(float *)((int)&stack0xffffff08 + (uint)bVar3 * 0xfffffffe * 4) =
       afStack_d4[(uint)bVar3 * -2 + 0x1e];
  afStack_d4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -8] =
       afStack_d4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x1f];
  core_actor_cpp_FUN_00408b80(this_ptr,pfVar5);
  CStack_e4.x = fStack_78;
  *(float *)((int)&CStack_e4 + (uint)bVar3 * -8 + 4) = afStack_d4[(uint)bVar3 * -2 + 0x18];
  *(float *)((int)&CStack_e4 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       afStack_d4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x19];
  if (out_attract_position != &CStack_e4) {
    out_attract_position->x = CStack_e4.x;
    out_attract_position->y = CStack_e4.y;
    out_attract_position->z = CStack_e4.z;
  }
  return 1;
}
