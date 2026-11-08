// Name: FUN_00552970
// Address: 00552970
// Address Range: [[00552970, 00552b20]]
// Convention: unknown
// Signature: void FUN_00552970(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00552970(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  _DAT_02cf329c = 1;
  _DAT_02cf32a0 = param_2;
  if (1 < param_1) {
    do {
      _DAT_02cf329c = _DAT_02cf329c * 2;
    } while (_DAT_02cf329c < param_1);
  }
  iVar4 = _DAT_02cf329c * 4;
  _DAT_02cf3294 = 0;
  _DAT_02cf3298 = 0;
  _DAT_02cf32c8 = FUN_005a3e50(_DAT_02cf32c8,param_2 * iVar4 * DAT_0060422c);
  _DAT_02cf32ec = FUN_005a3e50(_DAT_02cf32ec,DAT_0060422c * iVar4 * 2);
  _DAT_02cf32a4 = FUN_005a3e50(_DAT_02cf32a4,iVar4 * DAT_0060422c);
  if (((_DAT_02cf32c8 == 0) || (_DAT_02cf32ec == 0)) || (_DAT_02cf32a4 == 0)) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x561;
    FUN_004e4330("allocMixBuffers - out of memory");
  }
  iVar4 = 0;
  if (0 < DAT_0060422c) {
    iVar3 = 0;
    iVar5 = _DAT_02cf329c * 4;
    iVar2 = 0;
    iVar6 = iVar3;
    do {
      *(int *)(iVar2 + 0x2cf32cc) = _DAT_02cf32c8 + _DAT_02cf329c * iVar4 * _DAT_02cf32a0 * 4;
      *(int *)(iVar2 + 0x2cf32a8) = _DAT_02cf32a4 + iVar3;
      iVar1 = _DAT_02cf32ec;
      *(int *)(iVar2 + 0x2cf32f0) = _DAT_02cf32ec + iVar6;
      *(int *)(iVar2 + 0x2cf3310) = iVar1 + iVar5;
      iVar5 = iVar5 + _DAT_02cf329c * 8;
      iVar6 = iVar6 + _DAT_02cf329c * 8;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + _DAT_02cf329c * 4;
      iVar2 = iVar2 + 4;
    } while (iVar4 < DAT_0060422c);
  }
  return;
}
