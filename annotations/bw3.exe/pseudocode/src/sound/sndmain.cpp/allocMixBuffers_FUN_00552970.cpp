// Name: sound_sndmain.cpp_allocMixBuffers_FUN_00552970
// Address: 00552970
// Address Range: [[00552970, 00552b20]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_allocMixBuffers_FUN_00552970(int requested_size,int num_buffers)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_allocMixBuffers_FUN_00552970(int requested_size,int num_buffers)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  _DAT_02cf329c = 1;
  _DAT_02cf32a0 = num_buffers;
  if (1 < requested_size) {
    do {
      _DAT_02cf329c = _DAT_02cf329c * 2;
    } while (_DAT_02cf329c < requested_size);
  }
  iVar4 = _DAT_02cf329c * 4;
  _DAT_02cf3294 = 0;
  _DAT_02cf3298 = 0;
  _DAT_02cf32c8 =
       realloc(_DAT_02cf32c8,num_buffers * iVar4 * DAT_0060422c);
  _DAT_02cf32ec = realloc(_DAT_02cf32ec,DAT_0060422c * iVar4 * 2);
  _DAT_02cf32a4 = realloc(_DAT_02cf32a4,iVar4 * DAT_0060422c);
  if (((_DAT_02cf32c8 == (void *)0x0) || (_DAT_02cf32ec == (void *)0x0)) ||
     (_DAT_02cf32a4 == (void *)0x0)) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x561;
    core_main_c_FUN_004e4330("allocMixBuffers - out of memory");
  }
  iVar4 = 0;
  if (0 < DAT_0060422c) {
    iVar3 = 0;
    iVar5 = _DAT_02cf329c * 4;
    iVar2 = 0;
    iVar6 = iVar3;
    do {
      *(void **)(iVar2 + 0x2cf32cc) =
           (void *)((int)_DAT_02cf32c8 + _DAT_02cf329c * iVar4 * _DAT_02cf32a0 * 4);
      *(int *)(iVar2 + 0x2cf32a8) = (int)_DAT_02cf32a4 + iVar3;
      pvVar1 = _DAT_02cf32ec;
      *(int *)(iVar2 + 0x2cf32f0) = (int)_DAT_02cf32ec + iVar6;
      *(int *)(iVar2 + 0x2cf3310) = (int)pvVar1 + iVar5;
      iVar5 = iVar5 + _DAT_02cf329c * 8;
      iVar6 = iVar6 + _DAT_02cf329c * 8;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + _DAT_02cf329c * 4;
      iVar2 = iVar2 + 4;
    } while (iVar4 < DAT_0060422c);
  }
  return;
}
