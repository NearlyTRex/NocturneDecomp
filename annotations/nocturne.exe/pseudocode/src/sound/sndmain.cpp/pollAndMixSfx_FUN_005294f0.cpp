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
  int iVar2;
  int iVar3;
  CSfxSlot *this_ptr;
  CSfxSlot *pCVar4;
  int iVar5;
  int iVar6;
  ulong count;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  uint auStack_98 [5];
  uint uStack_84;
  uint local_6c [8];
  int local_4c;
  int local_48;
  int local_44 [9];
  int local_20;
  CSfxSlot *local_1c;
  CSfxSlot *local_18;
  float local_14;
  
  bVar9 = 0;
  if (_DAT_02dc84bc < 1) {
    g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    g_INT_01cc4804 = 0x1442;
    core_main_c_FUN_004c8440();
  }
  if (0 < param_3) {
    iVar2 = 0;
    do {
      if (*(int *)(iVar2 + 0x2dc8360) == 0) {
        return;
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 < param_3 * 4);
  }
  if (((param_2 == DAT_005bea64) && (param_3 == DAT_005bea68)) && (param_4 == DAT_005bea6c)) {
    sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_00522d10();
    iVar2 = 0;
    if (0 < param_3) {
      do {
        iVar2 = iVar2 + 1;
        local_44[iVar2] = *param_1;
        param_1 = param_1 + 1;
      } while (iVar2 < param_3);
    }
    local_20 = param_3 << 2;
    local_18 = (CSfxSlot *)&DAT_02dc1b74;
    local_1c = (CSfxSlot *)&DAT_02dc1b74;
    for (; 0 < param_5; param_5 = param_5 - iVar3) {
      if (_DAT_02dc8328 < 1) {
        if (_DAT_02dc84bc < 1) {
          g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
          g_INT_01cc4804 = 0x4e0;
          core_main_c_FUN_004c8440();
        }
        if (0 < _DAT_02dc8328) {
          g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
          g_INT_01cc4804 = 0x4e4;
          core_main_c_FUN_004c8440();
        }
        iVar2 = 0;
        count = _DAT_02dc8330 * 4;
        if (0 < DAT_005bea68) {
          iVar3 = 0;
          do {
            memmove
                      (*(void **)(iVar3 + 0x2dc8360),
                       (void *)(_DAT_02dc8330 * 4 + (int)*(void **)(iVar3 + 0x2dc8360)),
                       (_DAT_02dc8334 + -1) * count);
            piVar1 = (int *)(iVar3 + 0x2dc8360);
            iVar3 = iVar3 + 4;
            iVar2 = iVar2 + 1;
            memset
                      ((void *)((_DAT_02dc8334 + -1) * _DAT_02dc8330 * 4 + *piVar1),0,count);
          } while (iVar2 < DAT_005bea68);
        }
        local_4c = _DAT_02dc8330;
        local_48 = DAT_005bea68;
        local_44[0] = DAT_005bea6c;
        if (0 < DAT_005bea68) {
          iVar2 = 0;
          do {
            iVar3 = iVar2 + 4;
            *(uint *)((int)local_6c + iVar2) = *(uint *)(iVar2 + 0x2dc8360);
            iVar2 = iVar3;
          } while (iVar3 < DAT_005bea68 * 4);
        }
        pCVar4 = local_1c;
        local_14 = (float)_DAT_02dc8330 / (float)DAT_005bea6c;
        this_ptr = g_CSfxSlot_ARRAY_02dbd374;
        do {
          sound_sndmain_cpp_CSfxSlot_compute_FUN_00524830(this_ptr,local_14);
          this_ptr = this_ptr + 1;
        } while (this_ptr != pCVar4);
        pCVar4 = g_CSfxSlot_ARRAY_02dbd374;
        do {
          puVar7 = local_6c;
          puVar8 = auStack_98;
          for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
          }
          sound_sndmain_cpp_CSfxSlot_mix_FUN_00524d10(pCVar4);
          pCVar4 = pCVar4 + 1;
        } while (pCVar4 != local_18);
        _DAT_02dc8328 = _DAT_02dc8330;
        _DAT_02dc83d0 = _DAT_02dc83d0 + 1;
        _DAT_02dc832c = 0;
      }
      iVar2 = local_20;
      iVar3 = _DAT_02dc8328;
      if (param_5 < _DAT_02dc8328) {
        iVar3 = param_5;
      }
      if (0 < param_3) {
        iVar5 = 0;
        do {
          uStack_84 = 0x529766;
          sound_sndmain_cpp_convertMixBufToOutput_FUN_00523330
                    ((float *)(_DAT_02dc832c * 4 + *(int *)(iVar5 + 0x2dc8360)),
                     *(ushort **)((int)local_44 + iVar5 + 4),param_2,iVar3,param_6);
          iVar6 = iVar5 + 4;
          *(int *)((int)local_44 + iVar5 + 4) =
               *(int *)((int)local_44 + iVar5 + 4) + param_6 * iVar3;
          iVar5 = iVar6;
        } while (iVar6 < iVar2);
      }
      _DAT_02dc8328 = _DAT_02dc8328 - iVar3;
      _DAT_02dc832c = _DAT_02dc832c + iVar3;
    }
  }
  return;
}
