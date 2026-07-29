// Name: core_scat.cpp_FUN_004fd1d0
// Address: 004fd1d0
// Address Range: [[004fd1d0, 004fd448]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_FUN_004fd1d0(CScat *this_ptr,int hand_index)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_scat_cpp_FUN_004fd1d0(CScat *this_ptr,int hand_index)

{
  uint *puVar1;
  int iVar2;
  CQuaternion4f *pCVar3;
  float *pfVar4;
  byte bVar5;
  float afStackY_1938 [1521];
  float *pfVar6;
  code *blend_callback;
  float local_160;
  uint local_15c;
  CQuaternion4f local_14c;
  float local_13c;
  float afStack_138 [7];
  float local_11c [4];
  float local_10c [4];
  float local_fc [4];
  float local_ec [4];
  float local_dc [4];
  uint local_cc;
  CQuaternion4f local_bc;
  uint local_ac;
  float afStack_a8 [3];
  CQuaternion4f local_9c;
  uint local_8c;
  float afStack_88 [7];
  float local_6c;
  uint local_5c;
  uint local_4c;
  float local_3c;
  CQuaternion4f local_2c;
  int local_1c;
  int local_18;
  
  bVar5 = 0;
  if (hand_index == 0) {
    local_1c = _DAT_01e53394;
    local_18 = _DAT_01e5339c;
    core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(0x3fc90fdb);
    local_fc[0] = (float)local_cc;
    afStack_138[(uint)bVar5 * -2 + 0x10] = afStack_138[(uint)bVar5 * -2 + 0x1c];
    afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11] =
         afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1d];
    (afStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11)[(uint)bVar5 * -2 + 1] =
         (afStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1d)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_0055d520(1.5707964,&local_bc);
    pCVar3 = &local_bc;
  }
  else {
    local_1c = _DAT_01e53398;
    local_18 = _DAT_01e533a0;
    core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(0xbfc90fdb);
    local_fc[0] = (float)local_ac;
    afStack_138[(uint)bVar5 * -2 + 0x10] = afStack_a8[(uint)bVar5 * -2];
    afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11] =
         afStack_a8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    (afStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11)[(uint)bVar5 * -2 + 1] =
         (afStack_a8 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_0055d520(-1.5707964,&local_9c);
    pCVar3 = &local_9c;
  }
  pfVar6 = (float *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
  local_13c = pCVar3->w;
  pfVar4 = pfVar6 + (uint)bVar5 * -2 + 1;
  afStack_138[(uint)bVar5 * -2] = *pfVar6;
  afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] = *pfVar4;
  (afStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       pfVar4[(uint)bVar5 * -2 + 1];
  local_160 = (this_ptr->base).base.layer_action_t;
  if (local_160 <= 0.0) {
    return;
  }
  core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(this_ptr->aim_yaw);
  local_10c[0] = afStack_88[3];
  afStack_138[(uint)bVar5 * -2 + 0xc] = afStack_88[(uint)bVar5 * -2 + 4];
  afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
       afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
  (afStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd)[(uint)bVar5 * -2 + 1] =
       (afStack_88 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1];
  pfVar6 = afStack_138 + 0xb;
  core_xform_cpp_quaternionFromAngleX_FUN_0055d4a0(this_ptr->aim_pitch,&local_14c);
  local_11c[0] = local_14c.w;
  pfVar4 = (float *)((int)&local_14c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  afStack_138[(uint)bVar5 * -2 + 8] = *(float *)((int)&local_14c + (uint)bVar5 * -8 + 4);
  afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9] = *pfVar4;
  (afStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 9)[(uint)bVar5 * -2 + 1] =
       pfVar4[(uint)bVar5 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_0055d130(afStack_138 + 7,pfVar6);
  afStack_138[3] = (float)local_15c;
  afStack_138[(uint)bVar5 * -2 + 4] = *(float *)(&stack0xfffffea8 + (uint)bVar5 * -8);
  afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5] =
       *(float *)(&stack0xfffffeac + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  (afStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1] =
       *(float *)((int)(&stack0xfffffeac + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
                 ((uint)bVar5 * -2 + 1) * 4);
  core_xform_cpp_slerpQuaternion_FUN_0055d2d0
            (&DAT_005a4508,afStack_138 + 0xf,0x3f733333,afStack_138 + 3);
  local_ec[0] = (float)local_4c;
  afStack_138[(uint)bVar5 * -2 + 0x14] = afStack_88[(uint)bVar5 * -2 + 0x10];
  afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x15] =
       afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11];
  (afStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x15)[(uint)bVar5 * -2 + 1] =
       (afStack_88 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11)[(uint)bVar5 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_0055d130(afStack_138 + 0x13);
  local_2c.w = local_3c;
  pfVar6 = (float *)((int)&local_2c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  *(float *)((int)&local_2c + (uint)bVar5 * -8 + 4) = afStack_88[(uint)bVar5 * -2 + 0x14];
  *pfVar6 = afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x15];
  pfVar6[(uint)bVar5 * -2 + 1] =
       (afStack_88 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x15)[(uint)bVar5 * -2 + 1];
  iVar2 = local_1c;
  core_xform_cpp_slerpQuaternion_FUN_0055d2d0
            ((this_ptr->base).base.model.bone_transform.pose_data.bone_rotations + local_1c,
             &local_2c,local_160);
  puVar1 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[iVar2].w;
  pfVar6 = (float *)(puVar1 + (uint)bVar5 * -2 + 1);
  *puVar1 = local_8c;
  *pfVar6 = afStack_88[(uint)bVar5 * -2];
  pfVar6[(uint)bVar5 * -2 + 1] = afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  (pfVar6 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       (afStack_88 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_0055d130(afStack_138 + 0xf,&local_13c,afStack_138 + 3);
  local_dc[0] = (float)local_5c;
  afStack_138[(uint)bVar5 * -2 + 0x18] = afStack_88[(uint)bVar5 * -2 + 0xc];
  afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19] =
       afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
  (afStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19)[(uint)bVar5 * -2 + 1] =
       (afStack_88 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd)[(uint)bVar5 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_0055d130(afStack_138 + 0x17);
  iVar2 = local_18;
  blend_callback = core_skeleton_cpp_FUN_0051b650;
  local_2c.w = local_6c;
  pfVar6 = (float *)((int)&local_2c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  *(float *)((int)&local_2c + (uint)bVar5 * -8 + 4) = afStack_88[(uint)bVar5 * -2 + 8];
  *pfVar6 = afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9];
  pfVar6[(uint)bVar5 * -2 + 1] =
       (afStack_88 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 9)[(uint)bVar5 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
            (&(this_ptr->base).base.model,&local_2c,local_160,iVar2,blend_callback);
  return;
}
