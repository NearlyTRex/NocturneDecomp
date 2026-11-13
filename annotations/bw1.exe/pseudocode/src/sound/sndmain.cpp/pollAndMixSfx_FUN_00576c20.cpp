// Name: sound_sndmain.cpp_pollAndMixSfx_FUN_00576c20
// Address: 00576c20
// Address Range: [[00576c20, 00576f32]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_pollAndMixSfx_FUN_00576c20(LPVOID *channel_buffers,int bits_per_sample,int num_channels,int samples_per_sec,int samples_per_block,int block_align)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_pollAndMixSfx_FUN_00576c20(LPVOID *channel_buffers,int bits_per_sample,int num_channels,int samples_per_sec,int samples_per_block,int block_align)

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
  if (_DAT_02c807ec < 1) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x199a;
    core_main_c_FUN_005030e0();
  }
  if (0 < num_channels) {
    iVar2 = 0;
    do {
      if (*(int *)(iVar2 + 0x2c80698) == 0) {
        return;
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 < num_channels * 4);
  }
  if (((bits_per_sample == DAT_006232e8) && (num_channels == DAT_006232ec)) &&
     (samples_per_sec == DAT_006232f0)) {
    sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_0056f1e0();
    iVar2 = 0;
    if (0 < num_channels) {
      do {
        iVar2 = iVar2 + 1;
        local_44[iVar2] = (int)*channel_buffers;
        channel_buffers = channel_buffers + 1;
      } while (iVar2 < num_channels);
    }
    local_20 = num_channels << 2;
    local_18 = (CSfxSlot *)&DAT_02c78cec;
    local_1c = (CSfxSlot *)&DAT_02c78cec;
    for (; 0 < samples_per_block; samples_per_block = samples_per_block - iVar3) {
      if (_DAT_02c80660 < 1) {
        if (_DAT_02c807ec < 1) {
          _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
          _DAT_01d1d404 = 0x593;
          core_main_c_FUN_005030e0();
        }
        if (0 < _DAT_02c80660) {
          _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
          _DAT_01d1d404 = 0x597;
          core_main_c_FUN_005030e0();
        }
        iVar2 = 0;
        count = _DAT_02c80668 * 4;
        if (0 < DAT_006232ec) {
          iVar3 = 0;
          do {
            memmove
                      (*(void **)(iVar3 + 0x2c80698),
                       (void *)(_DAT_02c80668 * 4 + (int)*(void **)(iVar3 + 0x2c80698)),
                       (_DAT_02c8066c + -1) * count);
            piVar1 = (int *)(iVar3 + 0x2c80698);
            iVar3 = iVar3 + 4;
            iVar2 = iVar2 + 1;
            in_stack_ffffff84 = (ushort *)0x576d84;
            memset
                      ((void *)((_DAT_02c8066c + -1) * _DAT_02c80668 * 4 + *piVar1),0,count);
          } while (iVar2 < DAT_006232ec);
        }
        local_4c = _DAT_02c80668;
        local_48 = DAT_006232ec;
        local_44[0] = DAT_006232f0;
        if (0 < DAT_006232ec) {
          iVar2 = 0;
          do {
            iVar3 = iVar2 + 4;
            *(uint *)((int)local_6c + iVar2) = *(uint *)(iVar2 + 0x2c80698);
            iVar2 = iVar3;
          } while (iVar3 < DAT_006232ec * 4);
        }
        pCVar4 = local_1c;
        local_14 = (float)_DAT_02c80668 / (float)DAT_006232f0;
        this_ptr = (CSfxSlot *)0x2c745ec;
        do {
          uVar10 = 0x576def;
          pCVar11 = this_ptr;
          fVar12 = local_14;
          sound_sndmain_cpp_CSfxSlot_compute_FUN_00570f30(this_ptr,local_14);
          this_ptr = this_ptr + 1;
        } while (this_ptr != pCVar4);
        pCVar4 = (CSfxSlot *)0x2c745ec;
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
          sound_sndmain_cpp_CSfxSlot_mix_FUN_00571420(pCVar4,mix_buffer);
          pCVar4 = pCVar4 + 1;
        } while (pCVar4 != local_18);
        _DAT_02c80660 = _DAT_02c80668;
        _DAT_02c80708 = _DAT_02c80708 + 1;
        _DAT_02c80664 = 0;
      }
      iVar2 = local_20;
      iVar3 = _DAT_02c80660;
      if (samples_per_block < _DAT_02c80660) {
        iVar3 = samples_per_block;
      }
      if (0 < num_channels) {
        iVar5 = 0;
        do {
          in_stack_ffffff84 = *(ushort **)((int)local_44 + iVar5 + 4);
          in_stack_ffffff80 = (float *)(_DAT_02c80664 * 4 + *(int *)(iVar5 + 0x2c80698));
          in_stack_ffffff7c = 0x576e96;
          sound_sndmain_cpp_convertMixBufToOutput_FUN_0056f890
                    (in_stack_ffffff80,in_stack_ffffff84,bits_per_sample,iVar3,block_align);
          iVar6 = iVar5 + 4;
          *(int *)((int)local_44 + iVar5 + 4) =
               *(int *)((int)local_44 + iVar5 + 4) + block_align * iVar3;
          iVar5 = iVar6;
        } while (iVar6 < iVar2);
      }
      _DAT_02c80660 = _DAT_02c80660 - iVar3;
      _DAT_02c80664 = _DAT_02c80664 + iVar3;
    }
  }
  return;
}
