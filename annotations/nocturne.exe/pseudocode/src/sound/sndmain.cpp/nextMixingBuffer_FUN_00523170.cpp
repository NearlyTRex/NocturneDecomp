// Name: sound_sndmain.cpp_nextMixingBuffer_FUN_00523170
// Address: 00523170
// Address Range: [[00523170, 00523320]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_nextMixingBuffer_FUN_00523170(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_nextMixingBuffer_FUN_00523170(void)

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
  if (_DAT_02dc84bc < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 1248;
    core_main_c_displayErrorAndQuit_FUN_004c8440("SfxSlot::kill - must be locked!");
  }
  if (0 < _DAT_02dc8328) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 1252;
    core_main_c_displayErrorAndQuit_FUN_004c8440("nextMixingBuffer - shouldn't have any data pending!");
  }
  iVar5 = 0;
  count = _DAT_02dc8330 * 4;
  if (0 < DAT_005bea68) {
    iVar2 = 0;
    do {
      memmove
                (*(void **)(iVar2 + 0x2dc8360),
                 (void *)(_DAT_02dc8330 * 4 + (int)*(void **)(iVar2 + 0x2dc8360)),
                 (_DAT_02dc8334 + -1) * count);
      piVar1 = (int *)(iVar2 + 0x2dc8360);
      iVar2 = iVar2 + 4;
      iVar5 = iVar5 + 1;
      in_stack_ffffffb0 = 0x523216;
      memset
                ((void *)(*piVar1 + (_DAT_02dc8334 + -1) * _DAT_02dc8330 * 4),0,count);
    } while (iVar5 < DAT_005bea68);
  }
  iStack_20 = _DAT_02dc8330;
  iStack_1c = DAT_005bea68;
  iStack_18 = DAT_005bea6c;
  if (0 < DAT_005bea68) {
    iVar5 = 0;
    do {
      iVar2 = iVar5 + 4;
      *(uint *)((int)auStack_40 + iVar5) = *(uint *)(iVar5 + 0x2dc8360);
      iVar5 = iVar2;
    } while (iVar2 < DAT_005bea68 * 4);
  }
  fStack_14 = (float)_DAT_02dc8330 / (float)DAT_005bea6c;
  pCVar3 = g_CSfxSlot_ARRAY_02dbd374;
  do {
    uVar8 = 0x523297;
    pCVar9 = pCVar3;
    fVar10 = fStack_14;
    sound_sndmain_cpp_CSfxSlot_compute_FUN_00524830(pCVar3,fStack_14);
    pCVar3 = pCVar3 + 1;
  } while (pCVar3 != (CSfxSlot *)&DAT_02dc1b74);
  pCVar3 = g_CSfxSlot_ARRAY_02dbd374;
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
    sound_sndmain_cpp_CSfxSlot_mix_FUN_00524d10(pCVar3,mix_buffer);
    pCVar3 = pCVar3 + 1;
  } while (pCVar3 != (CSfxSlot *)&DAT_02dc1b74);
  _DAT_02dc8328 = _DAT_02dc8330;
  _DAT_02dc832c = 0;
  _DAT_02dc83d0 = _DAT_02dc83d0 + 1;
  return;
}
