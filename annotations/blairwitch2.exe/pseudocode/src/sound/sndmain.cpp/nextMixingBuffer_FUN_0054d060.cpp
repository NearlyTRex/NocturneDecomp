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
  int iVar2;
  CSfxSlot *this_ptr;
  byte *puVar3;
  ulong count;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  byte bVar7;
  uint auStack_6c [7];
  uint uStack_50;
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
      uStack_50 = 0x54d0d8;
      memmove
                (*(void **)(iVar2 + 0x2648ec8),
                 (void *)(_DAT_02648e98 * 4 + (int)*(void **)(iVar2 + 0x2648ec8)),
                 (_DAT_02648e9c + -1) * count);
      piVar1 = (int *)(iVar2 + 0x2648ec8);
      iVar2 = iVar2 + 4;
      iVar5 = iVar5 + 1;
      uStack_50 = 0x54d106;
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
  this_ptr = (CSfxSlot *)0x263cf1c;
  do {
    sound_sndmain_cpp_CSfxSlot_compute_FUN_0054e8c0(this_ptr,fStack_14);
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CSfxSlot *)&DAT_0264161c);
  puVar3 = (byte *)0x263cf1c;
  do {
    puVar4 = auStack_40;
    puVar6 = auStack_6c;
    for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    sound_sndmain_cpp_FUN_0054edb0(puVar3);
    puVar3 = puVar3 + 0x11c;
  } while (puVar3 != &DAT_0264161c);
  _DAT_02648e90 = _DAT_02648e98;
  _DAT_02648e94 = 0;
  _DAT_02648f38 = _DAT_02648f38 + 1;
  return;
}
