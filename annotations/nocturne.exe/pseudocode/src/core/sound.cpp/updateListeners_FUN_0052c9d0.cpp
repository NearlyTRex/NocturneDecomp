// Name: core_sound.cpp_updateListeners_FUN_0052c9d0
// Address: 0052c9d0
// Address Range: [[0052c9d0, 0052d026]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_updateListeners_FUN_0052c9d0(void)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_updateListeners_FUN_0052c9d0(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_10cc [965];
  float local_160;
  uint local_e4;
  float local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
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
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  int local_54;
  float afStack_50 [4];
  float local_40;
  uint local_3c;
  float afStack_38 [4];
  float local_28;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar6 = 0;
  if (*(int *)(0x01C775EC + 0x240) == 0) {
    afStack_50[2] = _DAT_01fb860c;
    afStack_50[3] = _DAT_01fb8610;
    local_40 = _DAT_01fb8614;
    if (&stack0xffffff34 != afStack_50 + 2) {
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
    puVar4 = (uint *)&DAT_01fb8618;
    puVar5 = (uint *)&stack0xfffffef4;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    iVar3 = 10;
    puVar5 = (uint *)&stack0xfffffef4;
    puVar4 = (uint *)&stack0xfffffea4;
  }
  else {
    local_a8 = _DAT_01c74744;
    local_a4 = _DAT_01c74748;
    local_a0 = _DAT_01c7474c;
    if (&stack0xffffff34 != &stack0xffffff58) {
      local_cc = _DAT_01c74744;
      local_c8 = _DAT_01c74748;
      local_c4 = _DAT_01c7474c;
    }
    puVar4 = (uint *)&DAT_01c74750;
    puVar5 = (uint *)&stack0xfffffecc;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    iVar3 = 10;
    puVar4 = (uint *)&stack0xfffffea4;
    puVar5 = (uint *)&stack0xfffffecc;
  }
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
  }
  sound_sndmain_cpp_set3DListenerPos_FUN_00527610
            ((double)local_cc,(double)local_c8,(double)local_c4);
  local_d8 = 0x3f800000;
  local_d4 = 0;
  local_d0 = 0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40();
  local_5c = 0x3f800000;
  local_60 = 0;
  local_58 = 0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40();
  local_b4 = 0;
  local_b0 = 0;
  local_ac = 0x3f800000;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40();
  sound_sndmain_cpp_set3DListenerOrient_FUN_00527690
            ((double)afStack_38[2],(double)afStack_38[3],(double)local_28,(double)local_c0,
             (double)local_bc,(double)local_b8,(double)local_78,(double)local_74,(double)local_70);
  _DAT_02dc9468 = 0.0;
  if (*(int *)(0x01C775EC + 0x240) == 0) {
    iVar3 = _strnicmp();
    if (iVar3 == 0) {
      local_1c = 1;
      do {
        iVar3 = 1;
        local_18 = local_1c;
        do {
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0();
          local_e4 = local_3c;
          *(float *)((int)&stack0xffffff20 + (uint)bVar6 * 0xfffffffe * 4) =
               afStack_38[(uint)bVar6 * -2];
          (&stack0xffffff24)[(uint)bVar6 * -2 + (uint)bVar6 * -2] =
               afStack_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          local_160 = 0.0;
          if ((int)local_dc < 0x7fffffff) {
            local_dc = (float)((int)local_dc + -0x300);
            if ((int)local_dc < 1) {
              local_dc = 1.4013e-45;
            }
            core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_004411b0
                      (0x1fb8508,&stack0xffffff1c);
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
