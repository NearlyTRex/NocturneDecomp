// Name: core_djien.cpp_FUN_004615b0
// Address: 004615b0
// Address Range: [[004615b0, 004623aa]]
// Convention: unknown
// Signature: int core_djien_cpp_FUN_004615b0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_djien_cpp_FUN_004615b0(int param_1,int param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  byte bVar3;
  float afStackY_128c [1010];
  float size;
  float alpha;
  float lifetime;
  SMRGLTextureBasic *texture_ptr;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  CVector3f CStack_274;
  float fStack_268;
  float afStack_264 [2];
  CVector3f CStack_25c;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float afStack_240 [2];
  CVector3f CStack_238;
  CVector3f CStack_22c;
  float fStack_220;
  float afStack_21c [4];
  float fStack_20c;
  CVector3f CStack_208;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  CVector3f CStack_1f0;
  float fStack_1e4;
  float afStack_1e0 [4];
  float fStack_1d0;
  float fStack_1cc;
  float afStack_1c8 [4];
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  CVector3f CStack_178;
  CVector3f CStack_16c;
  float fStack_160;
  float afStack_15c [4];
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  CVector3f CStack_118;
  CVector3f CStack_10c;
  float fStack_100;
  float afStack_fc [4];
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  CVector3f CStack_dc;
  float fStack_d0;
  float afStack_cc [4];
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  CVector3f CStack_88;
  float fStack_7c;
  float afStack_78 [4];
  float fStack_68;
  CVector3f CStack_64;
  float fStack_58;
  float afStack_54 [2];
  CVector3f CStack_4c;
  float fStack_40;
  float afStack_3c [4];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  int iStack_10;
  int iStack_c;
  
  bVar3 = 0;
  iStack_10 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
  if (iStack_10 != 0) {
    return 0;
  }
  iVar2 = 0;
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc2b0) * 4) != 0) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              ((CDeformableModelInstance *)(param_1 + 0x158),*(int *)(param_1 + 0xc280),&CStack_238)
    ;
    fStack_184 = CStack_238.x;
    afStack_1c8[(uint)bVar3 * -2 + 0x12] = *(float *)((int)&CStack_238 + (uint)bVar3 * -8 + 4);
    afStack_1c8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x13] =
         *(float *)((int)&CStack_238 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    if (&fStack_1fc != afStack_1c8 + 0x11) {
      fStack_1fc = fStack_184;
      fStack_1f8 = fStack_180;
      fStack_1f4 = fStack_17c;
    }
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              ((CDeformableModelInstance *)(param_1 + 0x158),*(int *)(param_1 + 0xc298),&CStack_dc);
    fStack_148 = CStack_dc.x;
    afStack_15c[(uint)bVar3 * -2 + 6] = *(float *)((int)&CStack_dc + (uint)bVar3 * -8 + 4);
    afStack_15c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7] =
         *(float *)((int)&CStack_dc + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    if (afStack_1e0 + 2 != afStack_15c + 5) {
      afStack_1e0[2] = fStack_148;
      afStack_1e0[3] = fStack_144;
      fStack_1d0 = fStack_140;
    }
    fStack_280 = fStack_1fc + afStack_1e0[2];
    fStack_27c = fStack_1f8 + afStack_1e0[3];
    fStack_278 = fStack_1f4 + fStack_1d0;
    fStack_94 = fStack_1fc + afStack_1e0[2];
    afStack_cc[(uint)bVar3 * -2 + 0xf] = *(float *)((int)&stack0xfffffd84 + (uint)bVar3 * -8);
    afStack_cc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x10] =
         *(float *)((int)&stack0xfffffd88 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    afStack_78[2] = fStack_94 * _DAT_005d8ee0;
    afStack_78[3] = fStack_90 * _DAT_005d8ee0;
    fStack_68 = fStack_8c * _DAT_005d8ee0;
    fStack_124 = fStack_94 * _DAT_005d8ee0;
    afStack_15c[(uint)bVar3 * -2 + 0xf] = afStack_78[(uint)bVar3 * -2 + 3];
    afStack_15c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x10] =
         afStack_78[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
    if (&fStack_250 != afStack_15c + 0xe) {
      fStack_250 = fStack_124;
      fStack_24c = fStack_120;
      fStack_248 = fStack_11c;
    }
    pfVar1 = (float *)(iStack_10 * 0xc + param_2);
    if (pfVar1 != &fStack_250) {
      *pfVar1 = fStack_250;
      pfVar1[1] = fStack_24c;
      pfVar1[2] = fStack_248;
    }
    *(uint *)(param_3 + iStack_10 * 4) = *(uint *)(param_1 + 0xc2b0);
    iVar2 = iStack_10 + 1;
  }
  iStack_10 = iVar2;
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc2b4) * 4) != 0) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              ((CDeformableModelInstance *)(param_1 + 0x158),*(int *)(param_1 + 0xc284),&CStack_274)
    ;
    fStack_1cc = CStack_274.x;
    afStack_1c8[(uint)bVar3 * -2] = *(float *)((int)&CStack_274 + (uint)bVar3 * -8 + 4);
    afStack_1c8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         *(float *)((int)&CStack_274 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    if (&fStack_1fc != &fStack_1cc) {
      fStack_1fc = fStack_1cc;
      fStack_1f8 = afStack_1c8[0];
      fStack_1f4 = afStack_1c8[1];
    }
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              ((CDeformableModelInstance *)(param_1 + 0x158),*(int *)(param_1 + 0xc29c),&CStack_25c)
    ;
    afStack_fc[2] = CStack_25c.x;
    afStack_fc[(uint)bVar3 * -2 + 3] = *(float *)((int)&CStack_25c + (uint)bVar3 * -8 + 4);
    afStack_fc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
         *(float *)((int)&CStack_25c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    if (afStack_1e0 + 2 != afStack_fc + 2) {
      afStack_1e0[2] = afStack_fc[2];
      afStack_1e0[3] = afStack_fc[3];
      fStack_1d0 = fStack_ec;
    }
    fStack_160 = fStack_1fc + afStack_1e0[2];
    afStack_15c[0] = fStack_1f8 + afStack_1e0[3];
    afStack_15c[1] = fStack_1f4 + fStack_1d0;
    fStack_e8 = fStack_1fc + afStack_1e0[2];
    afStack_fc[(uint)bVar3 * -2 + 6] = afStack_15c[(uint)bVar3 * -2];
    afStack_fc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7] =
         afStack_15c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
    fStack_130 = fStack_e8 * _DAT_005d8ee0;
    fStack_12c = fStack_e4 * _DAT_005d8ee0;
    fStack_128 = fStack_e0 * _DAT_005d8ee0;
    fStack_58 = fStack_e8 * _DAT_005d8ee0;
    afStack_54[(uint)bVar3 * -2] = afStack_15c[(uint)bVar3 * -2 + 0xc];
    afStack_54[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         afStack_15c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd];
    if (&fStack_250 != &fStack_58) {
      fStack_250 = fStack_58;
      fStack_24c = afStack_54[0];
      fStack_248 = afStack_54[1];
    }
    pfVar1 = (float *)(iStack_10 * 0xc + param_2);
    if (pfVar1 != afStack_1e0 + 2) {
      *pfVar1 = afStack_1e0[2];
      pfVar1[1] = afStack_1e0[3];
      pfVar1[2] = fStack_1d0;
    }
    iVar2 = iStack_10 * 4;
    iStack_10 = iStack_10 + 1;
    *(uint *)(param_3 + iVar2) = *(uint *)(param_1 + 0xc2b4);
  }
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc2b8) * 4) != 0) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              ((CDeformableModelInstance *)(param_1 + 0x158),*(int *)(param_1 + 0xc288),&CStack_178)
    ;
    fStack_28 = CStack_178.x;
    afStack_3c[(uint)bVar3 * -2 + 6] = *(float *)((int)&CStack_178 + (uint)bVar3 * -8 + 4);
    afStack_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7] =
         *(float *)((int)&CStack_178 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    if (&fStack_1fc != afStack_3c + 5) {
      fStack_1fc = fStack_28;
      fStack_1f8 = fStack_24;
      fStack_1f4 = fStack_20;
    }
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              ((CDeformableModelInstance *)(param_1 + 0x158),*(int *)(param_1 + 0xc2a0),&CStack_16c)
    ;
    afStack_1c8[2] = CStack_16c.x;
    afStack_1c8[(uint)bVar3 * -2 + 3] = *(float *)((int)&CStack_16c + (uint)bVar3 * -8 + 4);
    afStack_1c8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
         *(float *)((int)&CStack_16c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    if (afStack_1e0 + 2 != afStack_1c8 + 2) {
      afStack_1e0[2] = afStack_1c8[2];
      afStack_1e0[3] = afStack_1c8[3];
      fStack_1d0 = fStack_1b8;
    }
    fStack_1c = fStack_1fc + afStack_1e0[2];
    fStack_18 = fStack_1f8 + afStack_1e0[3];
    fStack_14 = fStack_1f4 + fStack_1d0;
    fStack_190 = fStack_1fc + afStack_1e0[2];
    afStack_1c8[(uint)bVar3 * -2 + 0xf] = afStack_3c[(uint)bVar3 * -2 + 9];
    afStack_1c8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x10] =
         afStack_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10];
    fStack_2a4 = fStack_190 * _DAT_005d8ee0;
    fStack_2a0 = fStack_18c * _DAT_005d8ee0;
    fStack_29c = fStack_188 * _DAT_005d8ee0;
    fStack_1a8 = fStack_190 * _DAT_005d8ee0;
    afStack_1c8[(uint)bVar3 * -2 + 9] = *(float *)((int)&stack0xfffffd60 + (uint)bVar3 * -8);
    afStack_1c8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10] =
         *(float *)((int)&stack0xfffffd64 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (&fStack_250 != afStack_1c8 + 8) {
      fStack_250 = fStack_1a8;
      fStack_24c = fStack_1a4;
      fStack_248 = fStack_1a0;
    }
    pfVar1 = (float *)(iStack_10 * 0xc + param_2);
    if (pfVar1 != &fStack_250) {
      *pfVar1 = fStack_250;
      pfVar1[1] = fStack_24c;
      pfVar1[2] = fStack_248;
    }
    *(uint *)(iStack_10 * 4 + param_3) = *(uint *)(param_1 + 0xc2b8);
    iStack_10 = iStack_10 + 1;
  }
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc2bc) * 4) != 0) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              ((CDeformableModelInstance *)(param_1 + 0x158),*(int *)(param_1 + 0xc28c),&CStack_118)
    ;
    fStack_100 = CStack_118.x;
    afStack_fc[(uint)bVar3 * -2] = *(float *)((int)&CStack_118 + (uint)bVar3 * -8 + 4);
    afStack_fc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         *(float *)((int)&CStack_118 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    if (&fStack_1fc != &fStack_100) {
      fStack_1fc = fStack_100;
      fStack_1f8 = afStack_fc[0];
      fStack_1f4 = afStack_fc[1];
    }
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              ((CDeformableModelInstance *)(param_1 + 0x158),*(int *)(param_1 + 0xc2a4),&CStack_64);
    afStack_21c[2] = CStack_64.x;
    afStack_21c[(uint)bVar3 * -2 + 3] = *(float *)((int)&CStack_64 + (uint)bVar3 * -8 + 4);
    afStack_21c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
         *(float *)((int)&CStack_64 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    if (afStack_1e0 + 2 != afStack_21c + 2) {
      afStack_1e0[2] = afStack_21c[2];
      afStack_1e0[3] = afStack_21c[3];
      fStack_1d0 = fStack_20c;
    }
    afStack_15c[2] = fStack_1fc + afStack_1e0[2];
    afStack_15c[3] = fStack_1f8 + afStack_1e0[3];
    fStack_14c = fStack_1f4 + fStack_1d0;
    fStack_1e4 = fStack_1fc + afStack_1e0[2];
    afStack_1e0[(uint)bVar3 * -2] = afStack_15c[(uint)bVar3 * -2 + 3];
    afStack_1e0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         afStack_15c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
    fStack_298 = fStack_1e4 * _DAT_005d8ee0;
    fStack_294 = afStack_1e0[0] * _DAT_005d8ee0;
    fStack_290 = afStack_1e0[1] * _DAT_005d8ee0;
    fStack_ac = fStack_1e4 * _DAT_005d8ee0;
    afStack_cc[(uint)bVar3 * -2 + 9] = *(float *)((int)&stack0xfffffd6c + (uint)bVar3 * -8);
    afStack_cc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10] =
         *(float *)((int)&stack0xfffffd70 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (&fStack_250 != afStack_cc + 8) {
      fStack_250 = fStack_ac;
      fStack_24c = fStack_a8;
      fStack_248 = fStack_a4;
    }
    pfVar1 = (float *)(iStack_10 * 0xc + param_2);
    if (pfVar1 != &fStack_250) {
      *pfVar1 = fStack_250;
      pfVar1[1] = fStack_24c;
      pfVar1[2] = fStack_248;
    }
    iVar2 = iStack_10 * 4;
    iStack_10 = iStack_10 + 1;
    *(uint *)(param_3 + iVar2) = *(uint *)(param_1 + 0xc2bc);
  }
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc2c0) * 4) != 0) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              ((CDeformableModelInstance *)(param_1 + 0x158),*(int *)(param_1 + 0xc290),&CStack_208)
    ;
    fStack_28c = CStack_208.x;
    *(uint *)((int)&stack0xfffffd78 + (uint)bVar3 * -8) =
         *(uint *)((int)&CStack_208 + (uint)bVar3 * -8 + 4);
    *(uint *)((int)&stack0xfffffd7c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&CStack_208 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    if (&fStack_1fc != &stack0xfffffd74) {
      fStack_1fc = fStack_28c;
      fStack_1f8 = fStack_288;
      fStack_1f4 = fStack_284;
    }
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              ((CDeformableModelInstance *)(param_1 + 0x158),*(int *)(param_1 + 0xc2a8),&CStack_1f0)
    ;
    fStack_268 = CStack_1f0.x;
    afStack_264[(uint)bVar3 * -2] = *(float *)((int)&CStack_1f0 + (uint)bVar3 * -8 + 4);
    afStack_264[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         *(float *)((int)&CStack_1f0 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    if (afStack_1e0 + 2 != &fStack_268) {
      afStack_1e0[2] = fStack_268;
      afStack_1e0[3] = afStack_264[0];
      fStack_1d0 = afStack_264[1];
    }
    afStack_cc[2] = fStack_1fc + afStack_1e0[2];
    afStack_cc[3] = fStack_1f8 + afStack_1e0[3];
    fStack_bc = fStack_1f4 + fStack_1d0;
    fStack_244 = fStack_1fc + afStack_1e0[2];
    afStack_240[(uint)bVar3 * -2] = afStack_cc[(uint)bVar3 * -2 + 3];
    afStack_240[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         afStack_cc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
    fStack_b8 = fStack_244 * _DAT_005d8ee0;
    fStack_b4 = afStack_240[0] * _DAT_005d8ee0;
    fStack_b0 = afStack_240[1] * _DAT_005d8ee0;
    fStack_220 = fStack_244 * _DAT_005d8ee0;
    afStack_21c[(uint)bVar3 * -2] = afStack_cc[(uint)bVar3 * -2 + 6];
    afStack_21c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         afStack_cc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7];
    if (&fStack_250 != &fStack_220) {
      fStack_250 = fStack_220;
      fStack_24c = afStack_21c[0];
      fStack_248 = afStack_21c[1];
    }
    pfVar1 = (float *)(iStack_10 * 0xc + param_2);
    if (pfVar1 != &fStack_250) {
      *pfVar1 = fStack_250;
      pfVar1[1] = fStack_24c;
      pfVar1[2] = fStack_248;
    }
    iVar2 = iStack_10 * 4;
    iStack_10 = iStack_10 + 1;
    *(uint *)(param_3 + iVar2) = *(uint *)(param_1 + 0xc2c0);
  }
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc2c4) * 4) != 0) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              ((CDeformableModelInstance *)(param_1 + 0x158),*(int *)(param_1 + 0xc294),&CStack_10c)
    ;
    fStack_19c = CStack_10c.x;
    afStack_1c8[(uint)bVar3 * -2 + 0xc] = *(float *)((int)&CStack_10c + (uint)bVar3 * -8 + 4);
    afStack_1c8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd] =
         *(float *)((int)&CStack_10c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    if (&fStack_1fc != afStack_1c8 + 0xb) {
      fStack_1fc = fStack_19c;
      fStack_1f8 = fStack_198;
      fStack_1f4 = fStack_194;
    }
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              ((CDeformableModelInstance *)(param_1 + 0x158),*(int *)(param_1 + 0xc2ac),&CStack_22c)
    ;
    afStack_3c[2] = CStack_22c.x;
    afStack_3c[(uint)bVar3 * -2 + 3] = *(float *)((int)&CStack_22c + (uint)bVar3 * -8 + 4);
    afStack_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
         *(float *)((int)&CStack_22c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    if (afStack_1e0 + 2 != afStack_3c + 2) {
      afStack_1e0[2] = afStack_3c[2];
      afStack_1e0[3] = afStack_3c[3];
      fStack_1d0 = fStack_2c;
    }
    fStack_d0 = fStack_1fc + afStack_1e0[2];
    afStack_cc[0] = fStack_1f8 + afStack_1e0[3];
    afStack_cc[1] = fStack_1f4 + fStack_1d0;
    fStack_13c = fStack_1fc + afStack_1e0[2];
    afStack_15c[(uint)bVar3 * -2 + 9] = afStack_cc[(uint)bVar3 * -2];
    afStack_15c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10] =
         afStack_cc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
    fStack_a0 = fStack_13c * _DAT_005d8ee0;
    fStack_9c = fStack_138 * _DAT_005d8ee0;
    fStack_98 = fStack_134 * _DAT_005d8ee0;
    fStack_1b4 = fStack_13c * _DAT_005d8ee0;
    afStack_1c8[(uint)bVar3 * -2 + 6] = afStack_cc[(uint)bVar3 * -2 + 0xc];
    afStack_1c8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7] =
         afStack_cc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd];
    if (&fStack_250 != afStack_1c8 + 5) {
      fStack_250 = fStack_1b4;
      fStack_24c = fStack_1b0;
      fStack_248 = fStack_1ac;
    }
    pfVar1 = (float *)(iStack_10 * 0xc + param_2);
    if (pfVar1 != &fStack_250) {
      *pfVar1 = fStack_250;
      pfVar1[1] = fStack_24c;
      pfVar1[2] = fStack_248;
    }
    iVar2 = iStack_10 * 4;
    iStack_10 = iStack_10 + 1;
    *(uint *)(param_3 + iVar2) = *(uint *)(param_1 + 0xc2c4);
  }
  if (iStack_10 == 0) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              ((CDeformableModelInstance *)(param_1 + 0x158),*(int *)(param_1 + 0xc268),&CStack_88);
    fStack_7c = CStack_88.x;
    afStack_78[(uint)bVar3 * -2] = *(float *)((int)&CStack_88 + (uint)bVar3 * -8 + 4);
    afStack_78[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         *(float *)((int)&CStack_88 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    if (&fStack_250 != &fStack_7c) {
      fStack_250 = fStack_7c;
      fStack_24c = afStack_78[0];
      fStack_248 = afStack_78[1];
    }
    pfVar1 = (float *)(iStack_10 * 0xc + param_2);
    if (pfVar1 != &fStack_250) {
      *pfVar1 = fStack_250;
      pfVar1[1] = fStack_24c;
      pfVar1[2] = fStack_248;
    }
    iVar2 = iStack_10 * 4;
    iStack_10 = iStack_10 + 1;
    *(uint *)(iVar2 + param_3) = 0;
  }
  if ((((*(int *)(param_1 + 0xc9c0) == 0) && (*(float *)(param_1 + 0xc1e4) <= 0.0)) &&
      (*(int *)(param_1 + 0xc2d0) < *(int *)(param_1 + 0xc2d4))) && (iStack_c = 0, 0 < iStack_10)) {
    do {
      core_actor_cpp_FUN_00408b40(param_1,param_2);
      texture_ptr = (SMRGLTextureBasic *)&DAT_00612258;
      lifetime = 1.0;
      alpha = 0.5;
      size = 1.0;
      CStack_4c.x = fStack_40;
      *(float *)((int)&CStack_4c + (uint)bVar3 * -8 + 4) = afStack_3c[(uint)bVar3 * -2];
      *(float *)((int)&CStack_4c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           afStack_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      core_fire_cpp_CFireEffect_createTrailSegment_FUN_004b70f0
                (0x01C57074,&CStack_4c,size,alpha,lifetime,texture_ptr);
      param_2 = param_2 + 0xc;
      iStack_c = iStack_c + 1;
    } while (iStack_c < iStack_10);
  }
  return iStack_10;
}
