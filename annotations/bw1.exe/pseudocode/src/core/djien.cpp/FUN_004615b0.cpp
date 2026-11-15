// Name: core_djien.cpp_FUN_004615b0
// Address: 004615b0
// Address Range: [[004615b0, 004623aa]]
// Convention: unknown
// Signature: int core_djien_cpp_FUN_004615b0(CCharacter *param_1,CVector3f *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_djien_cpp_FUN_004615b0(CCharacter *param_1,CVector3f *param_2,int param_3)

{
  CVector3f *pCVar1;
  EDeathState EVar2;
  int iVar3;
  byte bVar4;
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
  CVector3f CStack_268;
  CVector3f CStack_25c;
  CVector3f CStack_250;
  float fStack_244;
  float afStack_240 [2];
  CVector3f CStack_238;
  CVector3f CStack_22c;
  CVector3f CStack_220;
  CVector3f CStack_214;
  CVector3f CStack_208;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  CVector3f CStack_1f0;
  float fStack_1e4;
  float afStack_1e0 [2];
  CVector3f CStack_1d8;
  float fStack_1cc;
  float afStack_1c8 [2];
  CVector3f CStack_1c0;
  CVector3f CStack_1b4;
  CVector3f CStack_1a8;
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
  CVector3f CStack_148;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  CVector3f CStack_124;
  CVector3f CStack_118;
  CVector3f CStack_10c;
  float fStack_100;
  float afStack_fc [2];
  CVector3f CStack_f4;
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
  CVector3f CStack_ac;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  CVector3f CStack_88;
  CVector3f CStack_7c;
  float fStack_70;
  float afStack_6c [2];
  CVector3f CStack_64;
  CVector3f CStack_58;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  CVector3f CStack_34;
  float fStack_28;
  float afStack_24 [4];
  float fStack_14;
  EDeathState EStack_10;
  int iStack_c;
  
  bVar4 = 0;
  EStack_10 = (*(((param_1->base).vtable._uc)->_uc).getDeathState)(param_1);
  if (EStack_10 != DEATH_STATE_ALIVE) {
    return 0;
  }
  EVar2 = 0;
  if ((param_1->model).part_data.visibility_flags[(int)param_1[1].base.platform_position_delta.x] !=
      0) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              (&param_1->model,*(int *)(param_1[1].base.create_event + 0x38),&CStack_238);
    fStack_184 = CStack_238.x;
    afStack_1c8[(uint)bVar4 * -2 + 0x12] = *(float *)((int)&CStack_238 + (uint)bVar4 * -8 + 4);
    afStack_1c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13] =
         *(float *)((int)&CStack_238 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    if (&fStack_1fc != afStack_1c8 + 0x11) {
      fStack_1fc = fStack_184;
      fStack_1f8 = fStack_180;
      fStack_1f4 = fStack_17c;
    }
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              (&param_1->model,*(int *)(param_1[1].base.create_event + 0x50),&CStack_dc);
    CStack_148.x = CStack_dc.x;
    afStack_15c[(uint)bVar4 * -2 + 6] = *(float *)((int)&CStack_dc + (uint)bVar4 * -8 + 4);
    afStack_15c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
         *(float *)((int)&CStack_dc + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    if (&CStack_1d8 != (CVector3f *)(afStack_15c + 5)) {
      CStack_1d8.x = CStack_148.x;
      CStack_1d8.y = CStack_148.y;
      CStack_1d8.z = CStack_148.z;
    }
    fStack_280 = fStack_1fc + CStack_1d8.x;
    fStack_27c = fStack_1f8 + CStack_1d8.y;
    fStack_278 = fStack_1f4 + CStack_1d8.z;
    fStack_94 = fStack_1fc + CStack_1d8.x;
    afStack_cc[(uint)bVar4 * -2 + 0xf] = *(float *)((int)&stack0xfffffd84 + (uint)bVar4 * -8);
    afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
         *(float *)((int)&stack0xfffffd88 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    fStack_70 = fStack_94 * _DAT_005d8ee0;
    afStack_6c[0] = fStack_90 * _DAT_005d8ee0;
    afStack_6c[1] = fStack_8c * _DAT_005d8ee0;
    CStack_124.x = fStack_94 * _DAT_005d8ee0;
    afStack_15c[(uint)bVar4 * -2 + 0xf] = afStack_6c[(uint)bVar4 * -2];
    afStack_15c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
         afStack_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if (&CStack_250 != (CVector3f *)(afStack_15c + 0xe)) {
      CStack_250.x = CStack_124.x;
      CStack_250.y = CStack_124.y;
      CStack_250.z = CStack_124.z;
    }
    pCVar1 = param_2 + EStack_10;
    if (pCVar1 != &CStack_250) {
      pCVar1->x = CStack_250.x;
      pCVar1->y = CStack_250.y;
      pCVar1->z = CStack_250.z;
    }
    *(float *)(param_3 + EStack_10 * 4) = param_1[1].base.platform_position_delta.x;
    EVar2 = EStack_10 + DEATH_STATE_DYING;
  }
  EStack_10 = EVar2;
  if ((param_1->model).part_data.visibility_flags[(int)param_1[1].base.platform_position_delta.y] !=
      0) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              (&param_1->model,*(int *)(param_1[1].base.create_event + 0x3c),&CStack_274);
    fStack_1cc = CStack_274.x;
    afStack_1c8[(uint)bVar4 * -2] = *(float *)((int)&CStack_274 + (uint)bVar4 * -8 + 4);
    afStack_1c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         *(float *)((int)&CStack_274 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    if (&fStack_1fc != &fStack_1cc) {
      fStack_1fc = fStack_1cc;
      fStack_1f8 = afStack_1c8[0];
      fStack_1f4 = afStack_1c8[1];
    }
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              (&param_1->model,*(int *)(param_1[1].base.create_event + 0x54),&CStack_25c);
    CStack_f4.x = CStack_25c.x;
    afStack_fc[(uint)bVar4 * -2 + 3] = *(float *)((int)&CStack_25c + (uint)bVar4 * -8 + 4);
    afStack_fc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         *(float *)((int)&CStack_25c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    if (&CStack_1d8 != (CVector3f *)(afStack_fc + 2)) {
      CStack_1d8.x = CStack_f4.x;
      CStack_1d8.y = CStack_f4.y;
      CStack_1d8.z = CStack_f4.z;
    }
    fStack_160 = fStack_1fc + CStack_1d8.x;
    afStack_15c[0] = fStack_1f8 + CStack_1d8.y;
    afStack_15c[1] = fStack_1f4 + CStack_1d8.z;
    fStack_e8 = fStack_1fc + CStack_1d8.x;
    afStack_fc[(uint)bVar4 * -2 + 6] = afStack_15c[(uint)bVar4 * -2];
    afStack_fc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
         afStack_15c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    fStack_130 = fStack_e8 * _DAT_005d8ee0;
    fStack_12c = fStack_e4 * _DAT_005d8ee0;
    fStack_128 = fStack_e0 * _DAT_005d8ee0;
    CStack_58.x = fStack_e8 * _DAT_005d8ee0;
    *(float *)((int)&CStack_58 + (uint)bVar4 * -8 + 4) = afStack_15c[(uint)bVar4 * -2 + 0xc];
    *(float *)((int)&CStack_58 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         afStack_15c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
    if (&CStack_250 != &CStack_58) {
      CStack_250.x = CStack_58.x;
      CStack_250.y = CStack_58.y;
      CStack_250.z = CStack_58.z;
    }
    pCVar1 = param_2 + EStack_10;
    if (pCVar1 != &CStack_1d8) {
      pCVar1->x = CStack_1d8.x;
      pCVar1->y = CStack_1d8.y;
      pCVar1->z = CStack_1d8.z;
    }
    iVar3 = EStack_10 * 4;
    EStack_10 = EStack_10 + 1;
    *(float *)(param_3 + iVar3) = param_1[1].base.platform_position_delta.y;
  }
  if ((param_1->model).part_data.visibility_flags[(int)param_1[1].base.platform_position_delta.z] !=
      0) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              (&param_1->model,*(int *)(param_1[1].base.create_event + 0x40),&CStack_178);
    fStack_28 = CStack_178.x;
    afStack_24[(uint)bVar4 * -2] = *(float *)((int)&CStack_178 + (uint)bVar4 * -8 + 4);
    afStack_24[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         *(float *)((int)&CStack_178 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    if (&fStack_1fc != &fStack_28) {
      fStack_1fc = fStack_28;
      fStack_1f8 = afStack_24[0];
      fStack_1f4 = afStack_24[1];
    }
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              (&param_1->model,*(int *)(param_1[1].base.create_event + 0x58),&CStack_16c);
    CStack_1c0.x = CStack_16c.x;
    afStack_1c8[(uint)bVar4 * -2 + 3] = *(float *)((int)&CStack_16c + (uint)bVar4 * -8 + 4);
    afStack_1c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         *(float *)((int)&CStack_16c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    if (&CStack_1d8 != (CVector3f *)(afStack_1c8 + 2)) {
      CStack_1d8.x = CStack_1c0.x;
      CStack_1d8.y = CStack_1c0.y;
      CStack_1d8.z = CStack_1c0.z;
    }
    afStack_24[2] = fStack_1fc + CStack_1d8.x;
    afStack_24[3] = fStack_1f8 + CStack_1d8.y;
    fStack_14 = fStack_1f4 + CStack_1d8.z;
    fStack_190 = fStack_1fc + CStack_1d8.x;
    afStack_1c8[(uint)bVar4 * -2 + 0xf] = afStack_24[(uint)bVar4 * -2 + 3];
    afStack_1c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
         afStack_24[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    fStack_2a4 = fStack_190 * _DAT_005d8ee0;
    fStack_2a0 = fStack_18c * _DAT_005d8ee0;
    fStack_29c = fStack_188 * _DAT_005d8ee0;
    CStack_1a8.x = fStack_190 * _DAT_005d8ee0;
    afStack_1c8[(uint)bVar4 * -2 + 9] = *(float *)((int)&stack0xfffffd60 + (uint)bVar4 * -8);
    afStack_1c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
         *(float *)((int)&stack0xfffffd64 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    if (&CStack_250 != (CVector3f *)(afStack_1c8 + 8)) {
      CStack_250.x = CStack_1a8.x;
      CStack_250.y = CStack_1a8.y;
      CStack_250.z = CStack_1a8.z;
    }
    pCVar1 = param_2 + EStack_10;
    if (pCVar1 != &CStack_250) {
      pCVar1->x = CStack_250.x;
      pCVar1->y = CStack_250.y;
      pCVar1->z = CStack_250.z;
    }
    *(float *)(EStack_10 * 4 + param_3) = param_1[1].base.platform_position_delta.z;
    EStack_10 = EStack_10 + 1;
  }
  if ((param_1->model).part_data.visibility_flags[(int)param_1[1].base.platform_orientation_delta.x]
      != 0) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              (&param_1->model,*(int *)(param_1[1].base.create_event + 0x44),&CStack_118);
    fStack_100 = CStack_118.x;
    afStack_fc[(uint)bVar4 * -2] = *(float *)((int)&CStack_118 + (uint)bVar4 * -8 + 4);
    afStack_fc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         *(float *)((int)&CStack_118 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    if (&fStack_1fc != &fStack_100) {
      fStack_1fc = fStack_100;
      fStack_1f8 = afStack_fc[0];
      fStack_1f4 = afStack_fc[1];
    }
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              (&param_1->model,*(int *)(param_1[1].base.create_event + 0x5c),&CStack_64);
    CStack_214.x = CStack_64.x;
    *(uint *)((int)&CStack_214 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&CStack_64 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&CStack_214 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&CStack_64 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    if (&CStack_1d8 != &CStack_214) {
      CStack_1d8.x = CStack_214.x;
      CStack_1d8.y = CStack_214.y;
      CStack_1d8.z = CStack_214.z;
    }
    afStack_15c[2] = fStack_1fc + CStack_1d8.x;
    afStack_15c[3] = fStack_1f8 + CStack_1d8.y;
    fStack_14c = fStack_1f4 + CStack_1d8.z;
    fStack_1e4 = fStack_1fc + CStack_1d8.x;
    afStack_1e0[(uint)bVar4 * -2] = afStack_15c[(uint)bVar4 * -2 + 3];
    afStack_1e0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_15c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    fStack_298 = fStack_1e4 * _DAT_005d8ee0;
    fStack_294 = afStack_1e0[0] * _DAT_005d8ee0;
    fStack_290 = afStack_1e0[1] * _DAT_005d8ee0;
    CStack_ac.x = fStack_1e4 * _DAT_005d8ee0;
    afStack_cc[(uint)bVar4 * -2 + 9] = *(float *)((int)&stack0xfffffd6c + (uint)bVar4 * -8);
    afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
         *(float *)((int)&stack0xfffffd70 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    if (&CStack_250 != (CVector3f *)(afStack_cc + 8)) {
      CStack_250.x = CStack_ac.x;
      CStack_250.y = CStack_ac.y;
      CStack_250.z = CStack_ac.z;
    }
    pCVar1 = param_2 + EStack_10;
    if (pCVar1 != &CStack_250) {
      pCVar1->x = CStack_250.x;
      pCVar1->y = CStack_250.y;
      pCVar1->z = CStack_250.z;
    }
    iVar3 = EStack_10 * 4;
    EStack_10 = EStack_10 + 1;
    *(float *)(param_3 + iVar3) = param_1[1].base.platform_orientation_delta.x;
  }
  if ((param_1->model).part_data.visibility_flags[(int)param_1[1].base.platform_orientation_delta.y]
      != 0) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              (&param_1->model,*(int *)(param_1[1].base.create_event + 0x48),&CStack_208);
    fStack_28c = CStack_208.x;
    *(uint *)((int)&stack0xfffffd78 + (uint)bVar4 * -8) =
         *(uint *)((int)&CStack_208 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&stack0xfffffd7c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)((int)&CStack_208 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    if (&fStack_1fc != &stack0xfffffd74) {
      fStack_1fc = fStack_28c;
      fStack_1f8 = fStack_288;
      fStack_1f4 = fStack_284;
    }
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              (&param_1->model,*(int *)(param_1[1].base.create_event + 0x60),&CStack_1f0);
    CStack_268.x = CStack_1f0.x;
    *(uint *)((int)&CStack_268 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&CStack_1f0 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&CStack_268 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&CStack_1f0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    if (&CStack_1d8 != &CStack_268) {
      CStack_1d8.x = CStack_268.x;
      CStack_1d8.y = CStack_268.y;
      CStack_1d8.z = CStack_268.z;
    }
    afStack_cc[2] = fStack_1fc + CStack_1d8.x;
    afStack_cc[3] = fStack_1f8 + CStack_1d8.y;
    fStack_bc = fStack_1f4 + CStack_1d8.z;
    fStack_244 = fStack_1fc + CStack_1d8.x;
    afStack_240[(uint)bVar4 * -2] = afStack_cc[(uint)bVar4 * -2 + 3];
    afStack_240[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    fStack_b8 = fStack_244 * _DAT_005d8ee0;
    fStack_b4 = afStack_240[0] * _DAT_005d8ee0;
    fStack_b0 = afStack_240[1] * _DAT_005d8ee0;
    CStack_220.x = fStack_244 * _DAT_005d8ee0;
    *(float *)((int)&CStack_220 + (uint)bVar4 * -8 + 4) = afStack_cc[(uint)bVar4 * -2 + 6];
    *(float *)((int)&CStack_220 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
    if (&CStack_250 != &CStack_220) {
      CStack_250.x = CStack_220.x;
      CStack_250.y = CStack_220.y;
      CStack_250.z = CStack_220.z;
    }
    pCVar1 = param_2 + EStack_10;
    if (pCVar1 != &CStack_250) {
      pCVar1->x = CStack_250.x;
      pCVar1->y = CStack_250.y;
      pCVar1->z = CStack_250.z;
    }
    iVar3 = EStack_10 * 4;
    EStack_10 = EStack_10 + 1;
    *(float *)(param_3 + iVar3) = param_1[1].base.platform_orientation_delta.y;
  }
  if ((param_1->model).part_data.visibility_flags[(int)param_1[1].base.platform_orientation_delta.z]
      != 0) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              (&param_1->model,*(int *)(param_1[1].base.create_event + 0x4c),&CStack_10c);
    fStack_19c = CStack_10c.x;
    afStack_1c8[(uint)bVar4 * -2 + 0xc] = *(float *)((int)&CStack_10c + (uint)bVar4 * -8 + 4);
    afStack_1c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
         *(float *)((int)&CStack_10c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    if (&fStack_1fc != afStack_1c8 + 0xb) {
      fStack_1fc = fStack_19c;
      fStack_1f8 = fStack_198;
      fStack_1f4 = fStack_194;
    }
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              (&param_1->model,(int)param_1[1].base.standing_platform,&CStack_22c);
    CStack_34.x = CStack_22c.x;
    *(uint *)((int)&CStack_34 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&CStack_22c + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&CStack_34 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&CStack_22c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    if (&CStack_1d8 != &CStack_34) {
      CStack_1d8.x = CStack_34.x;
      CStack_1d8.y = CStack_34.y;
      CStack_1d8.z = CStack_34.z;
    }
    fStack_d0 = fStack_1fc + CStack_1d8.x;
    afStack_cc[0] = fStack_1f8 + CStack_1d8.y;
    afStack_cc[1] = fStack_1f4 + CStack_1d8.z;
    fStack_13c = fStack_1fc + CStack_1d8.x;
    afStack_15c[(uint)bVar4 * -2 + 9] = afStack_cc[(uint)bVar4 * -2];
    afStack_15c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
         afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    fStack_a0 = fStack_13c * _DAT_005d8ee0;
    fStack_9c = fStack_138 * _DAT_005d8ee0;
    fStack_98 = fStack_134 * _DAT_005d8ee0;
    CStack_1b4.x = fStack_13c * _DAT_005d8ee0;
    afStack_1c8[(uint)bVar4 * -2 + 6] = afStack_cc[(uint)bVar4 * -2 + 0xc];
    afStack_1c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
         afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
    if (&CStack_250 != (CVector3f *)(afStack_1c8 + 5)) {
      CStack_250.x = CStack_1b4.x;
      CStack_250.y = CStack_1b4.y;
      CStack_250.z = CStack_1b4.z;
    }
    pCVar1 = param_2 + EStack_10;
    if (pCVar1 != &CStack_250) {
      pCVar1->x = CStack_250.x;
      pCVar1->y = CStack_250.y;
      pCVar1->z = CStack_250.z;
    }
    iVar3 = EStack_10 * 4;
    EStack_10 = EStack_10 + 1;
    *(float *)(param_3 + iVar3) = param_1[1].base.platform_orientation_delta.z;
  }
  if (EStack_10 == 0) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              (&param_1->model,*(int *)(param_1[1].base.create_event + 0x20),&CStack_88);
    CStack_7c.x = CStack_88.x;
    *(uint *)((int)&CStack_7c + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&CStack_88 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&CStack_7c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&CStack_88 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    if (&CStack_250 != &CStack_7c) {
      CStack_250.x = CStack_7c.x;
      CStack_250.y = CStack_7c.y;
      CStack_250.z = CStack_7c.z;
    }
    pCVar1 = param_2 + EStack_10;
    if (pCVar1 != &CStack_250) {
      pCVar1->x = CStack_250.x;
      pCVar1->y = CStack_250.y;
      pCVar1->z = CStack_250.z;
    }
    iVar3 = EStack_10 * 4;
    EStack_10 = EStack_10 + 1;
    *(uint *)(iVar3 + param_3) = 0;
  }
  if ((((param_1[1].model.rest_bone_scales[0x61] == 0.0) &&
       (*(float *)(param_1[1].base.actor_name + 0x14) <= 0.0)) &&
      (param_1[1].base.collision_disabled < param_1[1].base.process_disabled)) &&
     (iStack_c = 0, 0 < (int)EStack_10)) {
    do {
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40(&param_1->base,param_2,&CStack_40);
      texture_ptr = (SMRGLTextureBasic *)&DAT_00612258;
      lifetime = 1.0;
      alpha = 0.5;
      size = 1.0;
      CStack_4c.x = CStack_40.x;
      *(uint *)((int)&CStack_4c + (uint)bVar4 * -8 + 4) =
           *(uint *)((int)&CStack_40 + (uint)bVar4 * -8 + 4);
      *(uint *)((int)&CStack_4c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           *(uint *)((int)&CStack_40 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      core_fire_cpp_CFireEffect_createTrailSegment_FUN_004b70f0
                (0x01C57074,&CStack_4c,size,alpha,lifetime,texture_ptr);
      param_2 = param_2 + 1;
      iStack_c = iStack_c + 1;
    } while (iStack_c < (int)EStack_10);
  }
  return EStack_10;
}
