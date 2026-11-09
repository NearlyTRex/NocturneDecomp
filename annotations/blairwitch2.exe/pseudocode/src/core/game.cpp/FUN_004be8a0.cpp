// Name: core_game.cpp_FUN_004be8a0
// Address: 004be8a0
// Address Range: [[004be8a0, 004bfa65]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004be8a0(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004be8a0(int param_1,uint *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  CPathMap *this_ptr;
  byte bVar6;
  float afStackY_1200 [51];
  int aiStackY_1134 [3];
  float afStackY_1128 [960];
  CDemonSet *this_ptr_00;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  int iStack_1d0;
  float fStack_1cc;
  int iStack_1c8;
  float fStack_1c4;
  float afStack_1c0 [4];
  float fStack_1b0;
  float fStack_1ac;
  float afStack_1a8 [4];
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  uint uStack_188;
  int iStack_17c;
  float fStack_178;
  int iStack_174;
  int iStack_170;
  float fStack_164;
  float afStack_160 [2];
  int iStack_158;
  float afStack_154 [2];
  int iStack_14c;
  float fStack_140;
  float afStack_13c [2];
  int iStack_134;
  float afStack_130 [4];
  float fStack_120;
  CVector3f CStack_11c;
  float fStack_110;
  float afStack_10c [5];
  uint uStack_f8;
  uint uStack_ec;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint uStack_bc;
  float afStack_b8 [2];
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  uint uStack_98;
  float afStack_94 [4];
  float fStack_84;
  uint uStack_80;
  uint uStack_74;
  int iStack_68;
  float afStack_64 [5];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float local_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  float local_2c;
  int local_28;
  int local_24;
  int local_20;
  float fStack_1c;
  float fStack_14;
  
  bVar6 = 0;
  if ((DAT_01cb394c & 1) == 0) {
    DAT_01cb394c = DAT_01cb394c | 1;
  }
  local_2c = 0.25;
  if ((DAT_01cb394c & 2) == 0) {
    DAT_01cb394c = DAT_01cb394c | 2;
  }
  local_24 = _DAT_01c2a37c;
  local_28 = _DAT_01c2a380;
  local_20 = DAT_006141b8;
  local_3c = 4.0;
  local_30 = DAT_006141bc;
  if (0x1e0 < DAT_006141bc) {
    local_24 = (_DAT_01c2a37c * DAT_006141bc) / 0x1e0;
    local_28 = (_DAT_01c2a380 * DAT_006141bc) / 0x1e0;
    local_30 = 0x1e0;
    local_20 = 0x280;
  }
  if (local_24 < 2) {
    local_24 = 2;
  }
  if (DAT_006141b8 + -2 < local_24) {
    local_24 = DAT_006141b8 + -2;
  }
  if (local_28 < 2) {
    local_28 = 2;
  }
  if (DAT_006141bc + -2 < local_28) {
    local_28 = DAT_006141bc + -2;
  }
  memset(param_2,0,0x34);
  if ((&DAT_01cb7528)[*(int *)(param_1 + 0x4c)] == (&DAT_01c37790)[*(int *)(param_1 + 0x4c)]) {
    param_2[4] = 0;
  }
  else {
    param_2[4] = (uint)(byte)(&DAT_01c37790)[*(int *)(param_1 + 0x4c)];
  }
  if ((&DAT_01cb7528)[*(int *)(param_1 + 0x50)] == (&DAT_01c37790)[*(int *)(param_1 + 0x50)]) {
    param_2[5] = 0;
  }
  else {
    param_2[5] = (uint)(byte)(&DAT_01c37790)[*(int *)(param_1 + 0x50)];
  }
  if ((&DAT_01cb7528)[*(int *)(param_1 + 0x68)] == (&DAT_01c37790)[*(int *)(param_1 + 0x68)]) {
    param_2[6] = 0;
  }
  else {
    param_2[6] = (uint)(byte)(&DAT_01c37790)[*(int *)(param_1 + 0x68)];
  }
  if ((&DAT_01cb7528)[*(int *)(param_1 + 0xaf0)] == (&DAT_01c37790)[*(int *)(param_1 + 0xaf0)]) {
    param_2[0xc] = 0;
  }
  else {
    param_2[0xc] = (uint)(byte)(&DAT_01c37790)[*(int *)(param_1 + 0xaf0)];
  }
  iVar5 = (**(code **)(*0x01D02F84 + 4))();
  if ((iVar5 != 0) &&
     ((iVar5 = core_actor_cpp_castToClassHash_FUN_0040c8f0(), iVar5 == 0 ||
      (*(float *)(iVar5 + 0x259b0) <= 0.0)))) {
    core_inv_cpp_FUN_004db9d0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c,0);
  }
  iVar5 = (**(code **)(*0x01D02F84 + 4))();
  if ((iVar5 != 0) &&
     ((iVar5 = core_actor_cpp_castToClassHash_FUN_0040c8f0(), iVar5 == 0 ||
      (*(float *)(iVar5 + 0x259b0) <= 0.0)))) {
    core_inv_cpp_FUN_004db9d0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c,0);
  }
  iVar5 = (**(code **)(*0x01D02F84 + 4))();
  if (iVar5 != 0) {
    core_inv_cpp_FUN_004dbb50((CInventory *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c),1);
  }
  iVar5 = (**(code **)(*0x01D02F84 + 4))();
  if (iVar5 != 0) {
    core_inv_cpp_FUN_004dbb50((CInventory *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c),-1);
  }
  iVar5 = (**(code **)(*0x01D02F84 + 4))();
  if (iVar5 != 0) {
    core_inv_cpp_FUN_004dbc60((CInventory *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c),1);
  }
  iVar5 = (**(code **)(*0x01D02F84 + 4))();
  if (iVar5 != 0) {
    core_inv_cpp_FUN_004defa0((CInventory *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c));
  }
  iVar5 = (**(code **)(*0x01D02F84 + 4))();
  if ((iVar5 != 0) &&
     ((iVar5 = core_actor_cpp_castToClassHash_FUN_0040c8f0(), iVar5 == 0 ||
      (*(float *)(iVar5 + 0x259b0) <= 0.0)))) {
    core_inv_cpp_FUN_004db9d0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c,0);
  }
  iVar5 = (**(code **)(*0x01D02F84 + 4))();
  if ((iVar5 != 0) &&
     ((iVar5 = core_actor_cpp_castToClassHash_FUN_0040c8f0(), iVar5 == 0 ||
      (*(float *)(iVar5 + 0x259b0) <= 0.0)))) {
    core_inv_cpp_FUN_004db9d0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c,0);
  }
  iVar5 = (**(code **)(*0x01D02F84 + 4))();
  if ((iVar5 != 0) &&
     ((iVar5 = core_actor_cpp_castToClassHash_FUN_0040c8f0(), iVar5 == 0 ||
      (*(float *)(iVar5 + 0x259b0) <= 0.0)))) {
    core_inv_cpp_FUN_004db9d0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c,0);
  }
  if ((_DAT_01cb811c != 0) ||
     (iVar5 = core_script_cpp_CScript_getLetterboxHeight_FUN_00521840(g_CScriptPtr), 2 < iVar5)) {
    _DAT_01cb3930 = 0;
    _DAT_01cb3920 = 0;
    _DAT_01c2a384 = 0;
    _DAT_01cb3948 = 0;
    _DAT_01cb811c = 0;
  }
  iStack_38 = (**(code **)(*(int *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2b0) + 0x154))();
  iStack_34 = 0;
  if ((_DAT_01cb3920 == 0) && (_DAT_01c2a384 == 1)) {
    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
    core_dcamera_cpp_FUN_0043c6b0(&g_CDemonCameraInstance);
    iStack_17c = uStack_74;
    (&fStack_178)[(uint)bVar6 * -2] = afStack_94[(uint)bVar6 * -2 + 9];
    (&fStack_178)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_94[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
    core_dcamera_cpp_FUN_0043c780();
    iStack_17c = iStack_14c;
    (&fStack_178)[(uint)bVar6 * -2] = afStack_154[(uint)bVar6 * -2 + 3];
    (&fStack_178)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_154[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    fStack_c8 = (float)iStack_17c * _DAT_005f7558;
    fStack_c4 = (float)(int)fStack_178 * _DAT_005f7558;
    fStack_c0 = (float)iStack_174 * _DAT_005f7558;
    iVar5 = 1;
    uStack_80 = g_CDemonCameraInstance._4_4_;
    afStack_94[(uint)bVar6 * -2 + 6] =
         *(float *)((int)&g_CDemonCameraInstance + (uint)bVar6 * -8 + 8);
    afStack_94[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         *(float *)((uint)bVar6 * -8 + 0x1fc7844 + (uint)bVar6 * -8);
    uStack_bc = uStack_80;
    afStack_b8[(uint)bVar6 * -2] = afStack_94[(uint)bVar6 * -2 + 6];
    this_ptr_00 = g_CDemonSetPtr;
    afStack_b8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_94[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
    core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(this_ptr_00,iVar5);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
              (g_CDemonSetPtr,*(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4));
    fStack_14 = (float)core_setcolid_cpp_FUN_00535ee0(g_CDemonSetPtr);
    fStack_4c = fStack_14;
    if ((0.0 <= fStack_14) && ((int)fStack_14 < 0x3f800001)) {
      iStack_34 = *(int *)&g_CDemonSetPtr->field_0x14d144;
    }
  }
  if ((iStack_38 == 0) || ((_DAT_01c2a384 & 2) == 0)) {
    if (iStack_38 == 0) {
      _DAT_01cb3948 = iStack_38;
    }
  }
  else {
    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
    core_dcamera_cpp_FUN_0043c6b0(&g_CDemonCameraInstance);
    iStack_1d0 = uStack_f8;
    (&fStack_1cc)[(uint)bVar6 * -2] = afStack_10c[(uint)bVar6 * -2 + 6];
    (&fStack_1cc)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_10c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
    core_dcamera_cpp_FUN_0043c780();
    iStack_1d0 = iStack_68;
    (&fStack_1cc)[(uint)bVar6 * -2] = afStack_64[(uint)bVar6 * -2];
    (&fStack_1cc)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_64[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    afStack_1c0[2] = (float)iStack_1d0 * _DAT_005f7558;
    afStack_1c0[3] = (float)(int)fStack_1cc * _DAT_005f7558;
    fStack_1b0 = (float)iStack_1c8 * _DAT_005f7558;
    uStack_ec = g_CDemonCameraInstance._4_4_;
    afStack_10c[(uint)bVar6 * -2 + 9] =
         *(float *)((int)&g_CDemonCameraInstance + (uint)bVar6 * -8 + 8);
    afStack_10c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
         *(float *)((uint)bVar6 * -8 + 0x1fc7844 + (uint)bVar6 * -8);
    afStack_10c[2] = (float)uStack_ec;
    afStack_10c[(uint)bVar6 * -2 + 3] = afStack_10c[(uint)bVar6 * -2 + 9];
    afStack_10c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_10c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
    core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(g_CDemonSetPtr,1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
              (g_CDemonSetPtr,*(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4));
    fStack_14 = (float)core_setcolid_cpp_FUN_00535ee0(g_CDemonSetPtr);
    fStack_44 = fStack_14;
    if (((0.0 <= fStack_14) && ((int)fStack_14 < 0x3f800001)) &&
       (iVar5 = core_actor_cpp_castToClassHash_FUN_0040c8f0(), iVar5 != 0)) {
      _DAT_01cb3948 = iVar5;
    }
    param_2[3] = 1;
  }
  if ((_DAT_01cb3920 == 0) && (_DAT_01c2a384 == 1)) {
    core_dcamera_cpp_FUN_0043c6b0(&g_CDemonCameraInstance);
    iVar5 = iStack_34;
    iStack_b0 = iStack_158;
    afStack_b8[(uint)bVar6 * -2 + 3] = afStack_154[(uint)bVar6 * -2];
    afStack_b8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_154[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    if (iVar5 == 0) {
      if (((local_24 < 0x20) || (local_20 + -0x20 < local_24)) ||
         ((local_28 < 0x20 || (local_30 + -0x20 < local_28)))) {
        core_dcamera_cpp_FUN_0043c780();
        iStack_b0 = iStack_134;
        afStack_b8[(uint)bVar6 * -2 + 3] = afStack_130[(uint)bVar6 * -2];
        afStack_b8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             afStack_130[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        fStack_a4 = (float)iStack_b0 * _DAT_005f7558;
        fStack_a0 = (float)iStack_ac * _DAT_005f7558;
        fStack_9c = (float)iStack_a8 * _DAT_005f7558;
        iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        fStack_1f4 = (float)iStack_b0 * _DAT_005f7558 - *(float *)(iVar5 + 0x20);
        fStack_1f0 = (float)iStack_ac * _DAT_005f7558 - *(float *)(iVar5 + 0x24);
        fStack_1ec = (float)iStack_a8 * _DAT_005f7558 - *(float *)(iVar5 + 0x28);
        fStack_e0 = fStack_1f4;
        afStack_10c[(uint)bVar6 * -2 + 0xc] = *(float *)((int)&stack0xfffffe10 + (uint)bVar6 * -8);
        fVar4 = fStack_9c;
        fVar3 = fStack_a0;
        fVar2 = fStack_a4;
        afStack_10c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
             *(float *)((int)&stack0xfffffe14 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        fStack_48 = SQRT(fStack_d8 * fStack_d8 + fStack_e0 * fStack_e0);
        fStack_dc = 0.0;
        if (fStack_48 <= 0.0) {
          fStack_e0 = 0.0;
          fStack_d8 = 0.0;
        }
        else {
          fVar1 = 1.0 / fStack_48;
          fStack_e0 = fStack_e0 * fVar1;
          fStack_dc = fVar1 * 0.0;
          fStack_d8 = fStack_d8 * fVar1;
        }
        afStack_1a8[2] = fStack_e0 * local_3c;
        afStack_1a8[3] = fStack_dc * local_3c;
        fStack_198 = fStack_d8 * local_3c;
        fStack_194 = fStack_e0 * local_3c;
        afStack_1a8[(uint)bVar6 * -2 + 6] = afStack_1a8[(uint)bVar6 * -2 + 3];
        afStack_1a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
             afStack_1a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
        fStack_20c = fVar2 + fStack_194;
        fStack_208 = fVar3 + fStack_190;
        fStack_204 = fVar4 + fStack_18c;
        afStack_94[2] = fVar2 + fStack_194;
        afStack_94[(uint)bVar6 * -2 + 3] = *(float *)((int)&stack0xfffffdf8 + (uint)bVar6 * -8);
        afStack_94[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             *(float *)((int)&stack0xfffffdfc + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        if (&stack0x00000000 != &g_CDemonLightInstance.field_0x60) {
          _DAT_01cb3924 = afStack_94[2];
          _DAT_01cb3928 = afStack_94[3];
          _DAT_01cb392c = fStack_84;
        }
      }
      else {
        core_dcamera_cpp_FUN_0043c780();
        iStack_b0 = iStack_170;
        afStack_b8[(uint)bVar6 * -2 + 3] = (&fStack_178)[(uint)bVar6 * -2 + 3];
        afStack_b8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             (&fStack_178)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
        _DAT_01cb3924 = (float)iStack_b0 * _DAT_005f7558;
        _DAT_01cb3928 = (float)iStack_ac * _DAT_005f7558;
        _DAT_01cb392c = (float)iStack_a8 * _DAT_005f7558;
      }
    }
    else {
      iVar5 = core_actor_cpp_castToClassHash_FUN_0040c8f0();
      if (iVar5 == 0) {
        if ((float *)(iStack_34 + 0x20) != (float *)&DAT_01cb3924) {
          _DAT_01cb3924 = *(float *)(iStack_34 + 0x20);
          _DAT_01cb392c = *(float *)(iStack_34 + 0x28);
          _DAT_01cb3928 = *(float *)(iStack_34 + 0x24);
        }
      }
      else {
        core_door_cpp_FUN_0045fec0();
        fStack_1e8 = fStack_110;
        *(float *)((int)&stack0xfffffe1c + (uint)bVar6 * -8) = afStack_10c[(uint)bVar6 * -2];
        *(float *)((int)&stack0xfffffe20 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             afStack_10c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        if (&stack0x00000000 != &g_CDemonLightInstance.field_0x1bc) {
          _DAT_01cb3924 = fStack_1e8;
          _DAT_01cb3928 = fStack_1e4;
          _DAT_01cb392c = fStack_1e0;
        }
      }
    }
    _DAT_01cb3940 = 0.0;
    _DAT_01cb3930 = 1;
    iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    afStack_130[2] = _DAT_01cb3924 - *(float *)(iVar5 + 0x20);
    afStack_130[3] = _DAT_01cb3928 - *(float *)(iVar5 + 0x24);
    fStack_120 = _DAT_01cb392c - *(float *)(iVar5 + 0x28);
    fStack_164 = afStack_130[2];
    afStack_160[(uint)bVar6 * -2] = afStack_130[(uint)bVar6 * -2 + 3];
    afStack_160[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_130[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    if (SQRT(afStack_160[1] * afStack_160[1] +
             fStack_164 * fStack_164 + afStack_160[0] * afStack_160[0]) <= _DAT_005d8ac7) {
      _DAT_01cb3944 = 0;
    }
    else {
      _DAT_01cb3944 = 1;
    }
  }
  iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  fStack_d4 = *(float *)(iVar5 + 0x20) - _DAT_01cb3924;
  fStack_d0 = *(float *)(iVar5 + 0x24) - _DAT_01cb3928;
  fStack_cc = *(float *)(iVar5 + 0x28) - _DAT_01cb392c;
  fStack_1ac = fStack_d4;
  afStack_1a8[(uint)bVar6 * -2] = afStack_10c[(uint)bVar6 * -2 + 0xf];
  afStack_1a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       afStack_10c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
  fStack_50 = SQRT(afStack_1a8[1] * afStack_1a8[1] +
                   fStack_1ac * fStack_1ac + afStack_1a8[0] * afStack_1a8[0]);
  if ((_DAT_01cb3930 != 0) && (_DAT_01cb3948 == 0)) {
    if ((fStack_50 < _DAT_005d8acb) && (_DAT_01cb3930 = _DAT_01cb3948, iStack_38 == 0)) {
      param_2[3] = 1;
    }
    iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    fStack_200 = _DAT_01cb3934 - *(float *)(iVar5 + 0x20);
    fStack_1fc = _DAT_01cb3938 - *(float *)(iVar5 + 0x24);
    fStack_1f8 = _DAT_01cb393c - *(float *)(iVar5 + 0x28);
    fStack_1dc = fStack_200;
    *(uint *)((int)&stack0xfffffe28 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xfffffe04 + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xfffffe2c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xfffffe08 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    if (_DAT_005d8acf <=
        SQRT(fStack_1d4 * fStack_1d4 + fStack_1dc * fStack_1dc + fStack_1d8 * fStack_1d8)) {
      _DAT_01cb3940 = 0.0;
    }
    else {
      _DAT_01cb3940 = *(float *)(param_1 + 0x284) + _DAT_01cb3940;
      if ((0x3f7fffff < (int)_DAT_01cb3940) && (_DAT_01cb3930 = 0, iStack_38 == 0)) {
        param_2[3] = 1;
      }
    }
    this_ptr = core_path_cpp_getPathMap_FUN_00513ea0((CLocation *)&DAT_01cb3924);
    iVar5 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00513650
                      (this_ptr,(CVector3f *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x20),
                       &CStack_11c,0);
    if (iVar5 == 0) {
      _DAT_01cb3930 = 0;
    }
    else {
      fStack_14 = (float)core_actor_cpp_FUN_0040d0c0();
      fVar2 = fStack_14 * _DAT_005d8ad3 * (float)_DAT_005d8adb;
      fStack_40 = -local_2c;
      param_2[10] = fVar2;
      if (fVar2 < fStack_40) {
        param_2[10] = fStack_40;
      }
      if (local_2c < (float)param_2[10]) {
        param_2[10] = local_2c;
      }
      iVar5 = _DAT_01cb3944;
      *param_2 = 1;
      if (iVar5 != 0) {
        param_2[2] = 1;
      }
    }
  }
  if (_DAT_01cb3948 != 0) {
    iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    fStack_218 = *(float *)(_DAT_01cb3948 + 0x20) - *(float *)(iVar5 + 0x20);
    fStack_214 = *(float *)(_DAT_01cb3948 + 0x24) - *(float *)(iVar5 + 0x24);
    fStack_210 = *(float *)(_DAT_01cb3948 + 0x28) - *(float *)(iVar5 + 0x28);
    afStack_64[2] = fStack_218;
    afStack_64[(uint)bVar6 * -2 + 3] = *(float *)((int)&stack0xfffffdec + (uint)bVar6 * -8);
    afStack_64[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         *(float *)((int)&stack0xfffffdf0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    core_vecdir_cpp_FUN_005838f0();
    uStack_98 = uStack_188;
    afStack_94[(uint)bVar6 * -2] = afStack_1a8[(uint)bVar6 * -2 + 9];
    afStack_94[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_1a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
    fStack_14 = (float)core_actor_cpp_FUN_0040d0c0();
    fVar2 = fStack_14 * _DAT_005d8ad3 * (float)_DAT_005d8adb;
    fStack_1c = -local_2c;
    param_2[10] = fVar2;
    if (fVar2 < fStack_1c) {
      param_2[10] = fStack_1c;
    }
    if (local_2c < (float)param_2[10]) {
      param_2[10] = local_2c;
    }
    if (_DAT_01cb3930 != 0) {
      core_actor_cpp_FUN_00408de0();
      fStack_140 = fStack_1c4;
      afStack_13c[(uint)bVar6 * -2] = afStack_1c0[(uint)bVar6 * -2];
      afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_1c0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      if (0x40000000 < (int)fStack_140) {
        param_2[2] = 1;
        param_2[9] = 0x3f800000;
      }
      if (fStack_140 < _DAT_005d8ae3) {
        param_2[2] = 1;
        param_2[9] = 0xbf800000;
      }
      if (0x40000000 < (int)afStack_13c[1]) {
        param_2[2] = 1;
        *param_2 = 1;
      }
      if (afStack_13c[1] < _DAT_005d8ae3) {
        param_2[2] = 1;
        param_2[1] = 1;
      }
    }
    iVar5 = (**(code **)(*(int *)(_DAT_01cb3948 + 0x2b0) + 0x114))();
    if (iVar5 != 0) {
      _DAT_01cb3948 = 0;
    }
  }
  _DAT_01cb3920 = _DAT_01c2a384;
  iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  if ((uint *)(iVar5 + 0x20) != (uint *)&DAT_01cb3934) {
    _DAT_01cb3938 = (float)*(uint *)(iVar5 + 0x24);
    _DAT_01cb393c = (float)*(uint *)(iVar5 + 0x28);
    _DAT_01cb3934 = (float)*(uint *)(iVar5 + 0x20);
    return;
  }
  return;
}
