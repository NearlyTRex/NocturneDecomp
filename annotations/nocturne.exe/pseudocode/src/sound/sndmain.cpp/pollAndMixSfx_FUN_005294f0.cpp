// Name: sound_sndmain.cpp_pollAndMixSfx_FUN_005294f0
// Address: 005294f0
// Address Range: [[005294f0, 00529802]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_pollAndMixSfx_FUN_005294f0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_pollAndMixSfx_FUN_005294f0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  CSfxSlot *pCVar2;
  int iVar3;
  int iVar4;
  CSfxSlot *this_ptr;
  byte *puVar5;
  int iVar6;
  int iVar7;
  ulong count;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  uint auStack_98 [5];
  uint uStack_84;
  uint local_6c [8];
  int local_4c;
  int local_48;
  int local_44 [9];
  int local_20;
  CSfxSlot *local_1c;
  byte *local_18;
  float local_14;
  
  bVar10 = 0;
  if (_DAT_02dc84bc < 1) {
    PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    INT_01cc4804 = 0x1442;
    core_main_c_FUN_004c8440();
  }
  if (0 < param_3) {
    iVar3 = 0;
    do {
      if (*(int *)(iVar3 + 0x2dc8360) == 0) {
        return;
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 < param_3 * 4);
  }
  if (((param_2 == DAT_005bea64) && (param_3 == DAT_005bea68)) && (param_4 == DAT_005bea6c)) {
    sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_00522d10();
    iVar3 = 0;
    if (0 < param_3) {
      do {
        iVar3 = iVar3 + 1;
        local_44[iVar3] = *param_1;
        param_1 = param_1 + 1;
      } while (iVar3 < param_3);
    }
    local_20 = param_3 << 2;
    local_18 = &DAT_02dc1b74;
    local_1c = (CSfxSlot *)&DAT_02dc1b74;
    for (; 0 < param_5; param_5 = param_5 - iVar4) {
      if (_DAT_02dc8328 < 1) {
        if (_DAT_02dc84bc < 1) {
          PTR_01cc4800 = "..\\sound\\sndmain.cpp";
          INT_01cc4804 = 0x4e0;
          core_main_c_FUN_004c8440();
        }
        if (0 < _DAT_02dc8328) {
          PTR_01cc4800 = "..\\sound\\sndmain.cpp";
          INT_01cc4804 = 0x4e4;
          core_main_c_FUN_004c8440();
        }
        iVar3 = 0;
        count = _DAT_02dc8330 * 4;
        if (0 < DAT_005bea68) {
          iVar4 = 0;
          do {
            memmove
                      (*(void **)(iVar4 + 0x2dc8360),
                       (void *)(_DAT_02dc8330 * 4 + (int)*(void **)(iVar4 + 0x2dc8360)),
                       (_DAT_02dc8334 + -1) * count);
            piVar1 = (int *)(iVar4 + 0x2dc8360);
            iVar4 = iVar4 + 4;
            iVar3 = iVar3 + 1;
            memset
                      ((void *)((_DAT_02dc8334 + -1) * _DAT_02dc8330 * 4 + *piVar1),0,count);
          } while (iVar3 < DAT_005bea68);
        }
        local_4c = _DAT_02dc8330;
        local_48 = DAT_005bea68;
        local_44[0] = DAT_005bea6c;
        if (0 < DAT_005bea68) {
          iVar3 = 0;
          do {
            iVar4 = iVar3 + 4;
            *(uint *)((int)local_6c + iVar3) = *(uint *)(iVar3 + 0x2dc8360);
            iVar3 = iVar4;
          } while (iVar4 < DAT_005bea68 * 4);
        }
        pCVar2 = local_1c;
        local_14 = (float)_DAT_02dc8330 / (float)DAT_005bea6c;
        this_ptr = (CSfxSlot *)0x2dbd374;
        do {
          sound_sndmain_cpp_CSfxSlot_compute_FUN_00524830(this_ptr,local_14);
          this_ptr = (CSfxSlot *)((int)&this_ptr->prev_hardware_playback_pos + 4);
        } while (this_ptr != pCVar2);
        puVar5 = (byte *)0x2dbd374;
        do {
          puVar8 = local_6c;
          puVar9 = auStack_98;
          for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
          }
          sound_sndmain_cpp_CSfxSlot_mix_FUN_00524d10(puVar5);
          puVar5 = puVar5 + 0x120;
        } while (puVar5 != local_18);
        _DAT_02dc8328 = _DAT_02dc8330;
        _DAT_02dc83d0 = _DAT_02dc83d0 + 1;
        _DAT_02dc832c = 0;
      }
      iVar3 = local_20;
      iVar4 = _DAT_02dc8328;
      if (param_5 < _DAT_02dc8328) {
        iVar4 = param_5;
      }
      if (0 < param_3) {
        iVar6 = 0;
        do {
          uStack_84 = 0x529766;
          sound_sndmain_cpp_convertMixBufToOutput_FUN_00523330
                    ((float *)(_DAT_02dc832c * 4 + *(int *)(iVar6 + 0x2dc8360)),
                     *(ushort **)((int)local_44 + iVar6 + 4),param_2,iVar4,param_6);
          iVar7 = iVar6 + 4;
          *(int *)((int)local_44 + iVar6 + 4) =
               *(int *)((int)local_44 + iVar6 + 4) + param_6 * iVar4;
          iVar6 = iVar7;
        } while (iVar7 < iVar3);
      }
      _DAT_02dc8328 = _DAT_02dc8328 - iVar4;
      _DAT_02dc832c = _DAT_02dc832c + iVar4;
    }
  }
  return;
}
