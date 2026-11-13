// Name: sound_sndmain.cpp_nextMixingBuffer_FUN_0054d060
// Address: 0054d060
// Address Range: [[0054d060, 0054d210]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_nextMixingBuffer_FUN_0054d060(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_nextMixingBuffer_FUN_0054d060(void)

{
  int *piVar1;
  SMixBuffer mix_buffer;
  int iVar2;
  CSfxSlot *pCVar3;
  ulong count;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  byte bVar7;
  byte in_stack_ffffff94 [28];
  uint in_stack_ffffffb0;
  uint uVar8;
  CSfxSlot *pCVar9;
  float fVar10;
  uint auStack_40 [8];
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar7 = 0;
  if (_DAT_0264901c < 1) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x593;
    core_main_c_FUN_004e4500();
  }
  if (0 < _DAT_02648e90) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x597;
    core_main_c_FUN_004e4500();
  }
  iVar5 = 0;
  count = _DAT_02648e98 * 4;
  if (0 < DAT_0061bc9c) {
    iVar2 = 0;
    do {
      memmove
                (*(void **)(iVar2 + 0x2648ec8),
                 (void *)(_DAT_02648e98 * 4 + (int)*(void **)(iVar2 + 0x2648ec8)),
                 (_DAT_02648e9c + -1) * count);
      piVar1 = (int *)(iVar2 + 0x2648ec8);
      iVar2 = iVar2 + 4;
      iVar5 = iVar5 + 1;
      in_stack_ffffffb0 = 0x54d106;
      memset
                ((void *)(*piVar1 + (_DAT_02648e9c + -1) * _DAT_02648e98 * 4),0,count);
    } while (iVar5 < DAT_0061bc9c);
  }
  iStack_20 = _DAT_02648e98;
  iStack_1c = DAT_0061bc9c;
  iStack_18 = DAT_0061bca0;
  if (0 < DAT_0061bc9c) {
    iVar5 = 0;
    do {
      iVar2 = iVar5 + 4;
      *(uint *)((int)auStack_40 + iVar5) = *(uint *)(iVar5 + 0x2648ec8);
      iVar5 = iVar2;
    } while (iVar2 < DAT_0061bc9c * 4);
  }
  fStack_14 = (float)_DAT_02648e98 / (float)DAT_0061bca0;
  pCVar3 = (CSfxSlot *)0x263cf1c;
  do {
    uVar8 = 0x54d187;
    pCVar9 = pCVar3;
    fVar10 = fStack_14;
    sound_sndmain_cpp_CSfxSlot_compute_FUN_0054e8c0(pCVar3,fStack_14);
    pCVar3 = pCVar3 + 1;
  } while (pCVar3 != (CSfxSlot *)&DAT_0264161c);
  pCVar3 = (CSfxSlot *)0x263cf1c;
  do {
    puVar4 = auStack_40;
    puVar6 = (uint *)&stack0xffffff94;
    for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    mix_buffer.channel_buffers[7] = (float *)in_stack_ffffffb0;
    mix_buffer.channel_buffers[0] = (float *)in_stack_ffffff94._0_4_;
    mix_buffer.channel_buffers[1] = (float *)in_stack_ffffff94._4_4_;
    mix_buffer.channel_buffers[2] = (float *)in_stack_ffffff94._8_4_;
    mix_buffer.channel_buffers[3] = (float *)in_stack_ffffff94._12_4_;
    mix_buffer.channel_buffers[4] = (float *)in_stack_ffffff94._16_4_;
    mix_buffer.channel_buffers[5] = (float *)in_stack_ffffff94._20_4_;
    mix_buffer.channel_buffers[6] = (float *)in_stack_ffffff94._24_4_;
    mix_buffer.num_output_samples = uVar8;
    mix_buffer.num_channels = (int)pCVar9;
    mix_buffer.output_sample_rate = (int)fVar10;
    sound_sndmain_cpp_CSfxSlot_mix_FUN_0054edb0(pCVar3,mix_buffer);
    pCVar3 = pCVar3 + 1;
  } while (pCVar3 != (CSfxSlot *)&DAT_0264161c);
  _DAT_02648e90 = _DAT_02648e98;
  _DAT_02648e94 = 0;
  _DAT_02648f38 = _DAT_02648f38 + 1;
  return;
}
