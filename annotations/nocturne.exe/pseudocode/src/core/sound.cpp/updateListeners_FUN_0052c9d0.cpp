// Name: core_sound.cpp_updateListeners_FUN_0052c9d0
// Address: 0052c9d0
// Address Range: [[0052c9d0, 0052d026]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_updateListeners_FUN_0052c9d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_updateListeners_FUN_0052c9d0(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  byte bVar6;
  float afStackY_10cc [965];
  float local_160;
  CMatrix3x3f local_15c;
  float local_134 [10];
  float local_10c [10];
  uint local_e4;
  float fStack_e0;
  int local_dc;
  CVector3f local_d8;
  float local_cc;
  float local_c8;
  float local_c4;
  CVector3f local_c0;
  CVector3f local_b4;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  int local_90;
  float local_8c;
  int local_88;
  float local_84;
  float local_80;
  float local_7c;
  CVector3f local_78;
  float local_6c;
  float local_68;
  float local_64;
  CVector3f local_60;
  int local_54;
  float afStack_50 [4];
  float local_40;
  uint local_3c;
  float afStack_38 [2];
  CVector3f local_30;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar6 = 0;
  if (*(int *)(0x01C775EC + 0x240) == 0) {
    afStack_50[2] = _DAT_01fb860c;
    afStack_50[3] = _DAT_01fb8610;
    local_40 = _DAT_01fb8614;
    if (&local_cc != afStack_50 + 2) {
      local_cc = _DAT_01fb860c;
      local_c8 = _DAT_01fb8610;
      local_c4 = _DAT_01fb8614;
    }
    local_68 = local_c8 - _DAT_02dc9460;
    local_6c = local_cc - _DAT_02dc945c;
    local_64 = local_c4 - _DAT_02dc9464;
    if (SQRT(local_64 * local_64 + local_6c * local_6c + local_68 * local_68) <
        (float)0.0001) {
      return;
    }
    pfVar4 = (float *)&DAT_01fb8618;
    pfVar5 = local_10c;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
    iVar3 = 10;
    pfVar5 = local_10c;
    pfVar4 = (float *)&local_15c;
  }
  else {
    local_a8 = _DAT_01c74744;
    local_a4 = _DAT_01c74748;
    local_a0 = _DAT_01c7474c;
    if (&local_cc != &local_a8) {
      local_cc = _DAT_01c74744;
      local_c8 = _DAT_01c74748;
      local_c4 = _DAT_01c7474c;
    }
    pfVar4 = (float *)&DAT_01c74750;
    pfVar5 = local_134;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
    iVar3 = 10;
    pfVar4 = (float *)&local_15c;
    pfVar5 = local_134;
  }
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar4 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar4 = pfVar4 + 1;
  }
  sound_sndmain_cpp_set3DListenerPos_FUN_00527610
            ((double)local_cc,(double)local_c8,(double)local_c4);
  local_d8.x = 1.0;
  local_d8.y = 0.0;
  local_d8.z = 0.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40(&local_15c,&local_30,&local_d8);
  local_60.y = 1.0;
  local_60.x = 0.0;
  local_60.z = 0.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40(&local_15c,&local_c0,&local_60);
  local_b4.x = 0.0;
  local_b4.y = 0.0;
  local_b4.z = 1.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40(&local_15c,&local_78,&local_b4);
  sound_sndmain_cpp_set3DListenerOrient_FUN_00527690
            ((double)local_30.x,(double)local_30.y,(double)local_30.z,(double)local_c0.x,
             (double)local_c0.y,(double)local_c0.z,(double)local_78.x,(double)local_78.y,
             (double)local_78.z);
  _DAT_02dc9468 = 0.0;
  if (*(int *)(0x01C775EC + 0x240) == 0) {
    iVar3 = _strnicmp
                      ((char *)(0x01E57284 + 0x14cd08),"castle",6);
    if (iVar3 == 0) {
      local_1c = 1;
      do {
        iVar3 = 1;
        local_18 = local_1c;
        do {
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0();
          local_e4 = local_3c;
          (&fStack_e0)[(uint)bVar6 * -2] = afStack_38[(uint)bVar6 * -2];
          (&fStack_e0)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
               afStack_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          local_160 = 0.0;
          if (local_dc < 0x7fffffff) {
            local_dc = local_dc + -0x300;
            if (local_dc < 1) {
              local_dc = 1;
            }
            core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_004411b0(0x1fb8508,&local_e4);
            local_90 = local_54;
            (&local_8c)[(uint)bVar6 * -2] = afStack_50[(uint)bVar6 * -2];
            (&local_8c)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                 afStack_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
            fVar2 = (float)0.00390625;
            local_84 = (float)local_90 * fVar2;
            local_14 = (float)local_88;
            local_7c = (float)local_88 * fVar2;
            local_98 = (float)(int)local_8c * fVar2 - local_c8;
            local_9c = local_84 - local_cc;
            local_94 = local_7c - local_c4;
            fVar1 = SQRT(local_94 * local_94 + local_9c * local_9c + local_98 * local_98);
            if ((float)50 < fVar1) {
              local_160 = (fVar1 + (float)-50) * (float)0.02 + 0.0;
            }
            local_80 = (float)(int)local_8c * fVar2 + 1.0;
            local_14 = (float)core_setcolid_cpp_FUN_0050f910(0x01E57284);
            if ((float)60 < local_14 - local_80) {
              local_160 = ((local_14 - local_80) + (float)-60) * (float)0.016666666666666701
                          + local_160;
            }
          }
          else {
            local_160 = 1.0;
          }
          if (0.0 < local_160) {
            local_160 = local_160 + 0.2f;
          }
          local_160 = local_160 * local_160;
          if (1.0 < local_160) {
            local_160 = 1.0;
          }
          _DAT_02dc9468 = local_160 * 0.015625f + _DAT_02dc9468;
          iVar3 = iVar3 + 2;
        } while (iVar3 != 0x21);
        local_1c = local_1c + 2;
      } while (local_1c != 0x21);
    }
    _DAT_02dc9468 = _DAT_02dc9468 * _DAT_02dc9468;
    if (0.0 < _DAT_02dc9468) {
      _DAT_02dc9468 = _DAT_02dc9468 + 0.3f;
    }
    if (1.0 < _DAT_02dc9468) {
      _DAT_02dc9468 = 1.0;
    }
  }
  if (&stack0x00000000 == (byte *)0x2dc9528) {
    return;
  }
  _DAT_02dc945c = local_cc;
  _DAT_02dc9460 = local_c8;
  _DAT_02dc9464 = local_c4;
  return;
}
