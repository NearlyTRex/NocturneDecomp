// Name: sound_sndmain.cpp_nextMixingBuffer_FUN_0056f6d0
// Address: 0056f6d0
// Address Range: [[0056f6d0, 0056f880]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_nextMixingBuffer_FUN_0056f6d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_nextMixingBuffer_FUN_0056f6d0(void)

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
  iVar5 = 0;
  count = _DAT_02c80668 * 4;
  if (0 < DAT_006232ec) {
    iVar2 = 0;
    do {
      memmove
                (*(void **)(iVar2 + 0x2c80698),
                 (void *)(_DAT_02c80668 * 4 + (int)*(void **)(iVar2 + 0x2c80698)),
                 (_DAT_02c8066c + -1) * count);
      piVar1 = (int *)(iVar2 + 0x2c80698);
      iVar2 = iVar2 + 4;
      iVar5 = iVar5 + 1;
      in_stack_ffffffb0 = 0x56f776;
      memset
                ((void *)(*piVar1 + (_DAT_02c8066c + -1) * _DAT_02c80668 * 4),0,count);
    } while (iVar5 < DAT_006232ec);
  }
  iStack_20 = _DAT_02c80668;
  iStack_1c = DAT_006232ec;
  iStack_18 = DAT_006232f0;
  if (0 < DAT_006232ec) {
    iVar5 = 0;
    do {
      iVar2 = iVar5 + 4;
      *(uint *)((int)auStack_40 + iVar5) = *(uint *)(iVar5 + 0x2c80698);
      iVar5 = iVar2;
    } while (iVar2 < DAT_006232ec * 4);
  }
  fStack_14 = (float)_DAT_02c80668 / (float)DAT_006232f0;
  pCVar3 = (CSfxSlot *)0x2c745ec;
  do {
    uVar8 = 0x56f7f7;
    pCVar9 = pCVar3;
    fVar10 = fStack_14;
    sound_sndmain_cpp_CSfxSlot_compute_FUN_00570f30(pCVar3,fStack_14);
    pCVar3 = pCVar3 + 1;
  } while (pCVar3 != (CSfxSlot *)&DAT_02c78cec);
  pCVar3 = (CSfxSlot *)0x2c745ec;
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
    sound_sndmain_cpp_CSfxSlot_mix_FUN_00571420(pCVar3,mix_buffer);
    pCVar3 = pCVar3 + 1;
  } while (pCVar3 != (CSfxSlot *)&DAT_02c78cec);
  _DAT_02c80660 = _DAT_02c80668;
  _DAT_02c80664 = 0;
  _DAT_02c80708 = _DAT_02c80708 + 1;
  return;
}
