// Name: FUN_0056f470
// Address: 0056f470
// Address Range: [[0056f470, 0056f620]]
// Convention: unknown
// Signature: void FUN_0056f470(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056f470(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  _DAT_02c80668 = 1;
  _DAT_02c8066c = param_2;
  if (1 < param_1) {
    do {
      _DAT_02c80668 = _DAT_02c80668 * 2;
    } while (_DAT_02c80668 < param_1);
  }
  iVar4 = _DAT_02c80668 * 4;
  _DAT_02c80660 = 0;
  _DAT_02c80664 = 0;
  _DAT_02c80694 = FUN_005c10d0(_DAT_02c80694,param_2 * iVar4 * DAT_006232ec);
  _DAT_02c806b8 = FUN_005c10d0(_DAT_02c806b8,DAT_006232ec * iVar4 * 2);
  _DAT_02c80670 = FUN_005c10d0(_DAT_02c80670,iVar4 * DAT_006232ec);
  if (((_DAT_02c80694 == 0) || (_DAT_02c806b8 == 0)) || (_DAT_02c80670 == 0)) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x55f;
    FUN_005030e0("allocMixBuffers - out of memory");
  }
  iVar4 = 0;
  if (0 < DAT_006232ec) {
    iVar3 = 0;
    iVar5 = _DAT_02c80668 * 4;
    iVar2 = 0;
    iVar6 = iVar3;
    do {
      *(int *)(iVar2 + 0x2c80698) = _DAT_02c80694 + _DAT_02c80668 * iVar4 * _DAT_02c8066c * 4;
      *(int *)(iVar2 + 0x2c80674) = _DAT_02c80670 + iVar3;
      iVar1 = _DAT_02c806b8;
      *(int *)(iVar2 + 0x2c806bc) = _DAT_02c806b8 + iVar6;
      *(int *)(iVar2 + 0x2c806dc) = iVar1 + iVar5;
      iVar5 = iVar5 + _DAT_02c80668 * 8;
      iVar6 = iVar6 + _DAT_02c80668 * 8;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + _DAT_02c80668 * 4;
      iVar2 = iVar2 + 4;
    } while (iVar4 < DAT_006232ec);
  }
  return;
}
