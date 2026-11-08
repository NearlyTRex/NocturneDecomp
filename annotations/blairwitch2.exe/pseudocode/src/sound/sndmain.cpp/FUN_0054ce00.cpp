// Name: FUN_0054ce00
// Address: 0054ce00
// Address Range: [[0054ce00, 0054cfb0]]
// Convention: unknown
// Signature: void FUN_0054ce00(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054ce00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  _DAT_02648e98 = 1;
  _DAT_02648e9c = param_2;
  if (1 < param_1) {
    do {
      _DAT_02648e98 = _DAT_02648e98 * 2;
    } while (_DAT_02648e98 < param_1);
  }
  iVar4 = _DAT_02648e98 * 4;
  _DAT_02648e90 = 0;
  _DAT_02648e94 = 0;
  _DAT_02648ec4 = FUN_005b8ce0(_DAT_02648ec4,param_2 * iVar4 * DAT_0061bc9c);
  _DAT_02648ee8 = FUN_005b8ce0(_DAT_02648ee8,DAT_0061bc9c * iVar4 * 2);
  _DAT_02648ea0 = FUN_005b8ce0(_DAT_02648ea0,iVar4 * DAT_0061bc9c);
  if (((_DAT_02648ec4 == 0) || (_DAT_02648ee8 == 0)) || (_DAT_02648ea0 == 0)) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x55f;
    FUN_004e4500("allocMixBuffers - out of memory");
  }
  iVar4 = 0;
  if (0 < DAT_0061bc9c) {
    iVar3 = 0;
    iVar5 = _DAT_02648e98 * 4;
    iVar2 = 0;
    iVar6 = iVar3;
    do {
      *(int *)(iVar2 + 0x2648ec8) = _DAT_02648ec4 + _DAT_02648e98 * iVar4 * _DAT_02648e9c * 4;
      *(int *)(iVar2 + 0x2648ea4) = _DAT_02648ea0 + iVar3;
      iVar1 = _DAT_02648ee8;
      *(int *)(iVar2 + 0x2648eec) = _DAT_02648ee8 + iVar6;
      *(int *)(iVar2 + 0x2648f0c) = iVar1 + iVar5;
      iVar5 = iVar5 + _DAT_02648e98 * 8;
      iVar6 = iVar6 + _DAT_02648e98 * 8;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + _DAT_02648e98 * 4;
      iVar2 = iVar2 + 4;
    } while (iVar4 < DAT_0061bc9c);
  }
  return;
}
