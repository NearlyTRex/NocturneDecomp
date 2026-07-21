// Name: sound_sndmain.cpp_allocMixBuffers_FUN_00522f10
// Address: 00522f10
// Address Range: [[00522f10, 005230c0]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_allocMixBuffers_FUN_00522f10(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_allocMixBuffers_FUN_00522f10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  _DAT_02dc8330 = 1;
  _DAT_02dc8334 = param_2;
  if (1 < param_1) {
    do {
      _DAT_02dc8330 = _DAT_02dc8330 * 2;
    } while (_DAT_02dc8330 < param_1);
  }
  iVar4 = _DAT_02dc8330 * 4;
  _DAT_02dc8328 = 0;
  _DAT_02dc832c = 0;
  _DAT_02dc835c = realloc(_DAT_02dc835c,param_2 * iVar4 * DAT_005bea68);
  _DAT_02dc8380 = realloc(_DAT_02dc8380,DAT_005bea68 * iVar4 * 2);
  _DAT_02dc8338 = realloc(_DAT_02dc8338,iVar4 * DAT_005bea68);
  if (((_DAT_02dc835c == 0) || (_DAT_02dc8380 == 0)) || (_DAT_02dc8338 == 0)) {
    _DAT_01cc4800 = "?..\\sound\\sndmain.cpp" + 1;
    _DAT_01cc4804 = 0x4ac;
    FUN_004c8440("allocMixBuffers - out of memory");
  }
  iVar4 = 0;
  if (0 < DAT_005bea68) {
    iVar3 = 0;
    iVar5 = _DAT_02dc8330 * 4;
    iVar2 = 0;
    iVar6 = iVar3;
    do {
      *(int *)(iVar2 + 0x2dc8360) = _DAT_02dc835c + _DAT_02dc8330 * iVar4 * _DAT_02dc8334 * 4;
      *(int *)(iVar2 + 0x2dc833c) = _DAT_02dc8338 + iVar3;
      iVar1 = _DAT_02dc8380;
      *(int *)(iVar2 + 0x2dc8384) = _DAT_02dc8380 + iVar6;
      *(int *)(iVar2 + 0x2dc83a4) = iVar1 + iVar5;
      iVar5 = iVar5 + _DAT_02dc8330 * 8;
      iVar6 = iVar6 + _DAT_02dc8330 * 8;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + _DAT_02dc8330 * 4;
      iVar2 = iVar2 + 4;
    } while (iVar4 < DAT_005bea68);
  }
  return;
}
