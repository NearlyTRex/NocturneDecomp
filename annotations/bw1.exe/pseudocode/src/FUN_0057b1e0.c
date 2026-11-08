// Name: FUN_0057b1e0
// Address: 0057b1e0
// Address Range: [[0057b1e0, 0057b36f]]
// Convention: unknown
// Signature: int FUN_0057b1e0(undefined4 param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0057b1e0(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar3 = _DAT_02c82a20 *
          ((int)((_DAT_02c82a1c + (_DAT_02c82a1c >> 0x1f) * -8) -
                (uint)((_DAT_02c82a1c >> 0x1f) << 2 < 0)) >> 3);
  iVar4 = 0;
  bVar5 = _DAT_02c82a1c == 0x10;
  while( true ) {
    if (*(int *)(&DAT_02c829cc + _DAT_02c82a44 * 4) == 0) {
      return -1;
    }
    iVar1 = ((_DAT_02c82a2c - _DAT_02c82a48) * _DAT_02c82a3c) / _DAT_02c82a24;
    if (param_3 < iVar1) {
      iVar1 = param_3;
    }
    if (0 < iVar1) {
      FUN_005747f0(_DAT_02c82a1c,_DAT_02c82a20,_DAT_02c82a24,bVar5,
                   _DAT_02c82a48 * iVar3 + *(int *)(&DAT_02c829cc + _DAT_02c82a44 * 4),_DAT_02c82a34
                   ,_DAT_02c82a38,_DAT_02c82a3c,_DAT_02c82a40,param_2,iVar1);
      param_2 = param_2 + iVar3 * iVar1;
      param_3 = param_3 - iVar1;
      _DAT_02c82a48 = _DAT_02c82a48 + (_DAT_02c82a24 * iVar1) / _DAT_02c82a3c;
      iVar4 = iVar4 + iVar1;
    }
    if (param_3 < 1) {
      return iVar4;
    }
    iVar1 = _DAT_02c82a44 + 1;
    if (_DAT_02c82a30 <= iVar1) {
      iVar1 = 0;
    }
    iVar2 = *(int *)(iVar1 * 4 + 0x2c8292c);
    if (iVar2 == 0) {
      return -1;
    }
    if ((*(byte *)(iVar2 + 0x10) & 1) == 0) {
      return iVar4;
    }
    iVar2 = FUN_0057abc0(iVar1);
    if (iVar2 == 0) break;
    _DAT_02c82a48 = 0;
    _DAT_02c82a44 = iVar1;
  }
  FUN_005773f0("WavInDevice::poll - queueWavInBuffer failed");
  return -1;
}
