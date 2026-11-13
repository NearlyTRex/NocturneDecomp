// Name: core_ghoul.cpp_CGhoul_canBeAttracted_FUN_004e0240
// Address: 004e0240
// Address Range: [[004e0240, 004e051f]]
// Convention: __cdecl
// Signature: int __cdecl core_ghoul_cpp_CGhoul_canBeAttracted_FUN_004e0240(CGhoul *this_ptr,CVector3f *out_attract_position)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_ghoul_cpp_CGhoul_canBeAttracted_FUN_004e0240(CGhoul *this_ptr,CVector3f *out_attract_position)

{
  float fVar1;
  CDeformableModelInstance *this_ptr_00;
  byte bVar2;
  float afStackY_10fc [1014];
  int bone_index;
  float *pfVar3;
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
  CVector3f CStack_a8;
  CVector3f CStack_9c;
  CVector3f CStack_90;
  CVector3f CStack_84;
  float fStack_78;
  float afStack_74 [4];
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
  
  bVar2 = 0;
  this_ptr_00 = &(this_ptr->base).base.model;
  fStack_c = (float)core_motion_cpp_FUN_00524a40(this_ptr_00,0xb);
  if (fStack_c <= 0.0) {
    return 0;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (this_ptr_00,_DAT_01cd0d9c,&CStack_a8);
  afStack_d4[2] = CStack_a8.x;
  afStack_d4[(uint)bVar2 * -2 + 3] = *(float *)((int)&CStack_a8 + (uint)bVar2 * -8 + 4);
  bone_index = _DAT_01cd0da4;
  afStack_d4[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
       *(float *)((int)&CStack_a8 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (this_ptr_00,bone_index,&CStack_9c);
  fStack_d8 = CStack_9c.x;
  afStack_d4[(uint)bVar2 * -2] = *(float *)((int)&CStack_9c + (uint)bVar2 * -8 + 4);
  afStack_d4[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       *(float *)((int)&CStack_9c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  fStack_f0 = fStack_d8 + afStack_d4[2];
  fStack_ec = afStack_d4[0] + afStack_d4[3];
  fStack_e8 = afStack_d4[1] + fStack_c4;
  fStack_c0 = fStack_d8 + afStack_d4[2];
  afStack_d4[(uint)bVar2 * -2 + 6] = afStack_d4[(uint)bVar2 * -2 + -6];
  afStack_d4[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7] =
       afStack_d4[(uint)bVar2 * -2 + (uint)bVar2 * -2 + -5];
  afStack_74[2] = fStack_c0 * _DAT_005e3d91;
  afStack_74[3] = fStack_bc * _DAT_005e3d91;
  fStack_64 = fStack_b8 * _DAT_005e3d91;
  fStack_108 = fStack_c0 * _DAT_005e3d91;
  *(float *)((int)&stack0xfffffefc + (uint)bVar2 * -8) = afStack_74[(uint)bVar2 * -2 + 3];
  *(float *)((int)&stack0xffffff00 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       afStack_74[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (this_ptr_00,_DAT_01cd0da0,&CStack_90);
  fStack_b4 = CStack_90.x;
  afStack_d4[(uint)bVar2 * -2 + 9] = *(float *)((int)&CStack_90 + (uint)bVar2 * -8 + 4);
  afStack_d4[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 10] =
       *(float *)((int)&CStack_90 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (this_ptr_00,_DAT_01cd0da8,&CStack_84);
  fStack_114 = CStack_84.x;
  *(uint *)((int)&stack0xfffffef0 + (uint)bVar2 * -8) =
       *(uint *)((int)&CStack_84 + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&stack0xfffffef4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)((int)&CStack_84 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  fStack_54 = fStack_114 + fStack_b4;
  fStack_50 = fStack_110 + fStack_b0;
  fStack_4c = fStack_10c + fStack_ac;
  fStack_48 = fStack_114 + fStack_b4;
  afStack_74[(uint)bVar2 * -2 + 0xc] = afStack_74[(uint)bVar2 * -2 + 9];
  afStack_74[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0xd] =
       afStack_74[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 10];
  fVar1 = fStack_108;
  fStack_18 = fStack_48 * _DAT_005e3d91;
  fStack_14 = fStack_44 * _DAT_005e3d91;
  fStack_10 = fStack_40 * _DAT_005e3d91;
  fStack_24 = fStack_48 * _DAT_005e3d91;
  afStack_74[(uint)bVar2 * -2 + 0x15] = afStack_74[(uint)bVar2 * -2 + 0x18];
  afStack_74[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x16] =
       afStack_74[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x19];
  fStack_30 = fVar1 + fStack_24;
  fStack_2c = fStack_104 + fStack_20;
  fStack_28 = fStack_100 + fStack_1c;
  fStack_3c = fVar1 + fStack_24;
  afStack_74[(uint)bVar2 * -2 + 0xf] = afStack_74[(uint)bVar2 * -2 + 0x12];
  afStack_74[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x10] =
       afStack_74[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x13];
  pfVar3 = &stack0xffffff04;
  fStack_60 = fStack_3c * _DAT_005e3d91;
  fStack_5c = fStack_38 * _DAT_005e3d91;
  fStack_58 = fStack_34 * _DAT_005e3d91;
  fStack_fc = fStack_3c * _DAT_005e3d91;
  *(float *)((int)&stack0xffffff08 + (uint)bVar2 * 0xfffffffe * 4) =
       afStack_74[(uint)bVar2 * -2 + 6];
  afStack_d4[(uint)bVar2 * -2 + (uint)bVar2 * -2 + -8] =
       afStack_74[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7];
  core_actor_cpp_FUN_00408b40(this_ptr,pfVar3);
  CStack_e4.x = fStack_78;
  *(float *)((int)&CStack_e4 + (uint)bVar2 * -8 + 4) = afStack_74[(uint)bVar2 * -2];
  *(float *)((int)&CStack_e4 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       afStack_74[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  if (out_attract_position != &CStack_e4) {
    out_attract_position->x = CStack_e4.x;
    out_attract_position->y = CStack_e4.y;
    out_attract_position->z = CStack_e4.z;
  }
  return 1;
}
