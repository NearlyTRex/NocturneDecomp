// Name: sound_sndmain.cpp_allocMixBuffers_FUN_0054ce00
// Address: 0054ce00
// Address Range: [[0054ce00, 0054cfb0]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_allocMixBuffers_FUN_0054ce00(int requested_size,int num_buffers)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_allocMixBuffers_FUN_0054ce00(int requested_size,int num_buffers)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  _DAT_02648e98 = 1;
  _DAT_02648e9c = num_buffers;
  if (1 < requested_size) {
    do {
      _DAT_02648e98 = _DAT_02648e98 * 2;
    } while (_DAT_02648e98 < requested_size);
  }
  iVar4 = _DAT_02648e98 * 4;
  _DAT_02648e90 = 0;
  _DAT_02648e94 = 0;
  _DAT_02648ec4 =
       realloc(_DAT_02648ec4,num_buffers * iVar4 * DAT_0061bc9c);
  _DAT_02648ee8 = realloc(_DAT_02648ee8,DAT_0061bc9c * iVar4 * 2);
  _DAT_02648ea0 = realloc(_DAT_02648ea0,iVar4 * DAT_0061bc9c);
  if (((_DAT_02648ec4 == (void *)0x0) || (_DAT_02648ee8 == (void *)0x0)) ||
     (_DAT_02648ea0 == (void *)0x0)) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x55f;
    core_main_c_FUN_004e4500("allocMixBuffers - out of memory");
  }
  iVar4 = 0;
  if (0 < DAT_0061bc9c) {
    iVar3 = 0;
    iVar5 = _DAT_02648e98 * 4;
    iVar2 = 0;
    iVar6 = iVar3;
    do {
      *(void **)(iVar2 + 0x2648ec8) =
           (void *)((int)_DAT_02648ec4 + _DAT_02648e98 * iVar4 * _DAT_02648e9c * 4);
      *(int *)(iVar2 + 0x2648ea4) = (int)_DAT_02648ea0 + iVar3;
      pvVar1 = _DAT_02648ee8;
      *(int *)(iVar2 + 0x2648eec) = (int)_DAT_02648ee8 + iVar6;
      *(int *)(iVar2 + 0x2648f0c) = (int)pvVar1 + iVar5;
      iVar5 = iVar5 + _DAT_02648e98 * 8;
      iVar6 = iVar6 + _DAT_02648e98 * 8;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + _DAT_02648e98 * 4;
      iVar2 = iVar2 + 4;
    } while (iVar4 < DAT_0061bc9c);
  }
  return;
}
