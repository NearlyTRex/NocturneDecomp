// Name: sound_sndmain.cpp_pollAndMixSfx_FUN_00559d90
// Address: 00559d90
// Address Range: [[00559d90, 0055a0a2]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_pollAndMixSfx_FUN_00559d90(LPVOID *channel_buffers,int bits_per_sample,int num_channels,int samples_per_sec,int samples_per_block,int block_align)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_pollAndMixSfx_FUN_00559d90(LPVOID *channel_buffers,int bits_per_sample,int num_channels,int samples_per_sec,int samples_per_block,int block_align)

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
  if (_DAT_02cf341c < 1) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x19ad;
    core_main_c_FUN_004e4330();
  }
  if (0 < num_channels) {
    iVar3 = 0;
    do {
      if (*(int *)(iVar3 + 0x2cf32cc) == 0) {
        return;
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 < num_channels * 4);
  }
  if (((bits_per_sample == DAT_00604228) && (num_channels == DAT_0060422c)) &&
     (samples_per_sec == DAT_00604230)) {
    sound_sndmain_cpp_FUN_005526d0();
    iVar3 = 0;
    if (0 < num_channels) {
      do {
        iVar3 = iVar3 + 1;
        local_44[iVar3] = (int)*channel_buffers;
        channel_buffers = channel_buffers + 1;
      } while (iVar3 < num_channels);
    }
    local_20 = num_channels << 2;
    local_18 = &DAT_02ceb91c;
    local_1c = (CSfxSlot *)&DAT_02ceb91c;
    for (; 0 < samples_per_block; samples_per_block = samples_per_block - iVar4) {
      if (_DAT_02cf3294 < 1) {
        if (_DAT_02cf341c < 1) {
          _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
          _DAT_01d71de4 = 0x595;
          core_main_c_FUN_004e4330();
        }
        if (0 < _DAT_02cf3294) {
          _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
          _DAT_01d71de4 = 0x599;
          core_main_c_FUN_004e4330();
        }
        iVar3 = 0;
        count = _DAT_02cf329c * 4;
        if (0 < DAT_0060422c) {
          iVar4 = 0;
          do {
            memmove
                      (*(void **)(iVar4 + 0x2cf32cc),
                       (void *)(_DAT_02cf329c * 4 + (int)*(void **)(iVar4 + 0x2cf32cc)),
                       (_DAT_02cf32a0 + -1) * count);
            piVar1 = (int *)(iVar4 + 0x2cf32cc);
            iVar4 = iVar4 + 4;
            iVar3 = iVar3 + 1;
            memset
                      ((void *)((_DAT_02cf32a0 + -1) * _DAT_02cf329c * 4 + *piVar1),0,count);
          } while (iVar3 < DAT_0060422c);
        }
        local_4c = _DAT_02cf329c;
        local_48 = DAT_0060422c;
        local_44[0] = DAT_00604230;
        if (0 < DAT_0060422c) {
          iVar3 = 0;
          do {
            iVar4 = iVar3 + 4;
            *(uint *)((int)local_6c + iVar3) = *(uint *)(iVar3 + 0x2cf32cc);
            iVar3 = iVar4;
          } while (iVar4 < DAT_0060422c * 4);
        }
        pCVar2 = local_1c;
        local_14 = (float)_DAT_02cf329c / (float)DAT_00604230;
        this_ptr = (CSfxSlot *)0x2ce721c;
        do {
          sound_sndmain_cpp_CSfxSlot_compute_FUN_00554430(this_ptr,local_14);
          this_ptr = this_ptr + 1;
        } while (this_ptr != pCVar2);
        puVar5 = (byte *)0x2ce721c;
        do {
          puVar8 = local_6c;
          puVar9 = auStack_98;
          for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
          }
          sound_sndmain_cpp_FUN_00554920(puVar5);
          puVar5 = puVar5 + 0x11c;
        } while (puVar5 != local_18);
        _DAT_02cf3294 = _DAT_02cf329c;
        _DAT_02cf3338 = _DAT_02cf3338 + 1;
        _DAT_02cf3298 = 0;
      }
      iVar3 = local_20;
      iVar4 = _DAT_02cf3294;
      if (samples_per_block < _DAT_02cf3294) {
        iVar4 = samples_per_block;
      }
      if (0 < num_channels) {
        iVar6 = 0;
        do {
          uStack_84 = 0x55a006;
          sound_sndmain_cpp_convertMixBufToOutput_FUN_00552d90
                    ((float *)(_DAT_02cf3298 * 4 + *(int *)(iVar6 + 0x2cf32cc)),
                     *(ushort **)((int)local_44 + iVar6 + 4),bits_per_sample,iVar4,block_align);
          iVar7 = iVar6 + 4;
          *(int *)((int)local_44 + iVar6 + 4) =
               *(int *)((int)local_44 + iVar6 + 4) + block_align * iVar4;
          iVar6 = iVar7;
        } while (iVar7 < iVar3);
      }
      _DAT_02cf3294 = _DAT_02cf3294 - iVar4;
      _DAT_02cf3298 = _DAT_02cf3298 + iVar4;
    }
  }
  return;
}
