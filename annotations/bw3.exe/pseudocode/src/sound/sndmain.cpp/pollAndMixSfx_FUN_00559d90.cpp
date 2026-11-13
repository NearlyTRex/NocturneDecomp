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
  SMixBuffer mix_buffer;
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
  byte in_stack_ffffff68 [20];
  uint in_stack_ffffff7c;
  float *in_stack_ffffff80;
  ushort *in_stack_ffffff84;
  uint uVar10;
  CSfxSlot *pCVar11;
  float fVar12;
  uint local_6c [8];
  int local_4c;
  int local_48;
  int local_44 [9];
  int local_20;
  CSfxSlot *local_1c;
  CSfxSlot *local_18;
  float local_14;
  
  bVar9 = 0;
  if (_DAT_02cf341c < 1) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x19ad;
    core_main_c_FUN_004e4330();
  }
  if (0 < num_channels) {
    iVar2 = 0;
    do {
      if (*(int *)(iVar2 + 0x2cf32cc) == 0) {
        return;
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 < num_channels * 4);
  }
  if (((bits_per_sample == DAT_00604228) && (num_channels == DAT_0060422c)) &&
     (samples_per_sec == DAT_00604230)) {
    sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_005526d0();
    iVar2 = 0;
    if (0 < num_channels) {
      do {
        iVar2 = iVar2 + 1;
        local_44[iVar2] = (int)*channel_buffers;
        channel_buffers = channel_buffers + 1;
      } while (iVar2 < num_channels);
    }
    local_20 = num_channels << 2;
    local_18 = (CSfxSlot *)&DAT_02ceb91c;
    local_1c = (CSfxSlot *)&DAT_02ceb91c;
    for (; 0 < samples_per_block; samples_per_block = samples_per_block - iVar3) {
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
        iVar2 = 0;
        count = _DAT_02cf329c * 4;
        if (0 < DAT_0060422c) {
          iVar3 = 0;
          do {
            memmove
                      (*(void **)(iVar3 + 0x2cf32cc),
                       (void *)(_DAT_02cf329c * 4 + (int)*(void **)(iVar3 + 0x2cf32cc)),
                       (_DAT_02cf32a0 + -1) * count);
            piVar1 = (int *)(iVar3 + 0x2cf32cc);
            iVar3 = iVar3 + 4;
            iVar2 = iVar2 + 1;
            in_stack_ffffff84 = (ushort *)0x559ef4;
            memset
                      ((void *)((_DAT_02cf32a0 + -1) * _DAT_02cf329c * 4 + *piVar1),0,count);
          } while (iVar2 < DAT_0060422c);
        }
        local_4c = _DAT_02cf329c;
        local_48 = DAT_0060422c;
        local_44[0] = DAT_00604230;
        if (0 < DAT_0060422c) {
          iVar2 = 0;
          do {
            iVar3 = iVar2 + 4;
            *(uint *)((int)local_6c + iVar2) = *(uint *)(iVar2 + 0x2cf32cc);
            iVar2 = iVar3;
          } while (iVar3 < DAT_0060422c * 4);
        }
        pCVar4 = local_1c;
        local_14 = (float)_DAT_02cf329c / (float)DAT_00604230;
        this_ptr = (CSfxSlot *)0x2ce721c;
        do {
          uVar10 = 0x559f5f;
          pCVar11 = this_ptr;
          fVar12 = local_14;
          sound_sndmain_cpp_CSfxSlot_compute_FUN_00554430(this_ptr,local_14);
          this_ptr = this_ptr + 1;
        } while (this_ptr != pCVar4);
        pCVar4 = (CSfxSlot *)0x2ce721c;
        do {
          puVar7 = local_6c;
          puVar8 = (uint *)&stack0xffffff68;
          for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
          }
          mix_buffer.channel_buffers[5] = (float *)in_stack_ffffff7c;
          mix_buffer.channel_buffers[0] = (float *)in_stack_ffffff68._0_4_;
          mix_buffer.channel_buffers[1] = (float *)in_stack_ffffff68._4_4_;
          mix_buffer.channel_buffers[2] = (float *)in_stack_ffffff68._8_4_;
          mix_buffer.channel_buffers[3] = (float *)in_stack_ffffff68._12_4_;
          mix_buffer.channel_buffers[4] = (float *)in_stack_ffffff68._16_4_;
          mix_buffer.channel_buffers[6] = in_stack_ffffff80;
          mix_buffer.channel_buffers[7] = (float *)in_stack_ffffff84;
          mix_buffer.num_output_samples = uVar10;
          mix_buffer.num_channels = (int)pCVar11;
          mix_buffer.output_sample_rate = (int)fVar12;
          sound_sndmain_cpp_CSfxSlot_mix_FUN_00554920(pCVar4,mix_buffer);
          pCVar4 = pCVar4 + 1;
        } while (pCVar4 != local_18);
        _DAT_02cf3294 = _DAT_02cf329c;
        _DAT_02cf3338 = _DAT_02cf3338 + 1;
        _DAT_02cf3298 = 0;
      }
      iVar2 = local_20;
      iVar3 = _DAT_02cf3294;
      if (samples_per_block < _DAT_02cf3294) {
        iVar3 = samples_per_block;
      }
      if (0 < num_channels) {
        iVar5 = 0;
        do {
          in_stack_ffffff84 = *(ushort **)((int)local_44 + iVar5 + 4);
          in_stack_ffffff80 = (float *)(_DAT_02cf3298 * 4 + *(int *)(iVar5 + 0x2cf32cc));
          in_stack_ffffff7c = 0x55a006;
          sound_sndmain_cpp_convertMixBufToOutput_FUN_00552d90
                    (in_stack_ffffff80,in_stack_ffffff84,bits_per_sample,iVar3,block_align);
          iVar6 = iVar5 + 4;
          *(int *)((int)local_44 + iVar5 + 4) =
               *(int *)((int)local_44 + iVar5 + 4) + block_align * iVar3;
          iVar5 = iVar6;
        } while (iVar6 < iVar2);
      }
      _DAT_02cf3294 = _DAT_02cf3294 - iVar3;
      _DAT_02cf3298 = _DAT_02cf3298 + iVar3;
    }
  }
  return;
}
