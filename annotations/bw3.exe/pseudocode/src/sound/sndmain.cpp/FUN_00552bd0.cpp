// Name: sound_sndmain.cpp_FUN_00552bd0
// Address: 00552bd0
// Address Range: [[00552bd0, 00552d80]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00552bd0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_00552bd0(void)

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
  iVar5 = 0;
  count = _DAT_02cf329c * 4;
  if (0 < DAT_0060422c) {
    iVar2 = 0;
    do {
      uStack_50 = 0x552c48;
      memmove
                (*(void **)(iVar2 + 0x2cf32cc),
                 (void *)(_DAT_02cf329c * 4 + (int)*(void **)(iVar2 + 0x2cf32cc)),
                 (_DAT_02cf32a0 + -1) * count);
      piVar1 = (int *)(iVar2 + 0x2cf32cc);
      iVar2 = iVar2 + 4;
      iVar5 = iVar5 + 1;
      uStack_50 = 0x552c76;
      memset
                ((void *)(*piVar1 + (_DAT_02cf32a0 + -1) * _DAT_02cf329c * 4),0,count);
    } while (iVar5 < DAT_0060422c);
  }
  iStack_20 = _DAT_02cf329c;
  iStack_1c = DAT_0060422c;
  iStack_18 = DAT_00604230;
  if (0 < DAT_0060422c) {
    iVar5 = 0;
    do {
      iVar2 = iVar5 + 4;
      *(uint *)((int)auStack_40 + iVar5) = *(uint *)(iVar5 + 0x2cf32cc);
      iVar5 = iVar2;
    } while (iVar2 < DAT_0060422c * 4);
  }
  fStack_14 = (float)_DAT_02cf329c / (float)DAT_00604230;
  this_ptr = (CSfxSlot *)0x2ce721c;
  do {
    sound_sndmain_cpp_CSfxSlot_compute_FUN_00554430(this_ptr,fStack_14);
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CSfxSlot *)&DAT_02ceb91c);
  puVar3 = (byte *)0x2ce721c;
  do {
    puVar4 = auStack_40;
    puVar6 = auStack_6c;
    for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    sound_sndmain_cpp_FUN_00554920(puVar3);
    puVar3 = puVar3 + 0x11c;
  } while (puVar3 != &DAT_02ceb91c);
  _DAT_02cf3294 = _DAT_02cf329c;
  _DAT_02cf3298 = 0;
  _DAT_02cf3338 = _DAT_02cf3338 + 1;
  return;
}
