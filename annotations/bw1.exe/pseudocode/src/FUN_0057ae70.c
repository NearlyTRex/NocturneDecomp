// Name: FUN_0057ae70
// Address: 0057ae70
// Address Range: [[0057ae70, 0057b1d0]]
// Convention: unknown
// Signature: undefined4 FUN_0057ae70(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0057ae70(uint *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  MMRESULT MVar3;
  uint uVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  int iVar7;
  uint uVar8;
  tagWAVEINCAPSA tStack_58;
  byte auStack_28 [20];
  int iStack_14;
  
  iVar2 = (**(code **)*param_1)(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  MVar3 = waveInGetDevCapsA(0xFFFFFFFF,&tStack_58,0x30);
  if (MVar3 != 0) {
    return 0;
  }
  _DAT_02c82a3c = param_4;
  _DAT_02c82a40 = (uint)(param_5 != 0);
  auStack_28._16_4_ = tStack_58.dwFormats;
  do {
    uVar8 = 99999;
    iVar2 = 0;
    iVar7 = 0;
    iStack_14 = -1;
    do {
      if ((*(uint *)((int)&DAT_006235dc + iVar7) & auStack_28._16_4_) != 0) {
        uVar4 = (uint)(param_2 < *(int *)((int)&DAT_006235e0 + iVar7));
        if (*(int *)((int)&DAT_006235e0 + iVar7) < param_2) {
          uVar4 = uVar4 + 2;
        }
        if (_DAT_02c82a3c < *(int *)((int)&DAT_006235e8 + iVar7)) {
          uVar4 = uVar4 + 1;
        }
        if (*(int *)((int)&DAT_006235e8 + iVar7) < _DAT_02c82a3c) {
          uVar4 = uVar4 + 2;
        }
        if (param_3 < *(int *)((int)&DAT_006235e4 + iVar7)) {
          uVar4 = uVar4 + 2;
        }
        if (*(int *)((int)&DAT_006235e4 + iVar7) < param_3) {
          uVar4 = uVar4 + 3;
        }
        if (uVar4 < uVar8) {
          uVar8 = uVar4;
          iStack_14 = iVar2;
        }
      }
      iVar2 = iVar2 + 1;
      iVar7 = iVar7 + 0x10;
    } while (iVar2 < 0xc);
    _DAT_02c82a34 = param_2;
    _DAT_02c82a38 = param_3;
    if (iStack_14 < 0) {
      FUN_005773f0("WavInDevice::setMode - Can't set any recording modes!");
      return 0;
    }
    _DAT_02c82a1c = (&DAT_006235e0)[iStack_14 * 4];
    _DAT_02c82a20 = (&DAT_006235e4)[iStack_14 * 4];
    _DAT_02c82a24 = (&DAT_006235e8)[iStack_14 * 4];
    _DAT_02c82a28 = (uint)(_DAT_02c82a1c == 8);
    _DAT_02c82a2c = (int)_DAT_02c82a24 / 0x14;
    _DAT_02c82a30 = (int)(_DAT_02c82a24 * 2) / _DAT_02c82a2c;
    if (0x14 < _DAT_02c82a30) {
      _DAT_02c82a30 = 0x14;
    }
    iVar2 = 0;
    if (0 < _DAT_02c82a30) {
      iVar7 = 0;
      do {
        pvVar5 = GlobalAlloc(0x2002,((int)((_DAT_02c82a1c + ((int)_DAT_02c82a1c >> 0x1f) * -8) -
                                          (uint)(((int)_DAT_02c82a1c >> 0x1f) << 2 < 0)) >> 3) *
                                    _DAT_02c82a2c * _DAT_02c82a20);
        *(HGLOBAL *)(iVar7 + 0x2c8297c) = pvVar5;
        if (pvVar5 == (HGLOBAL)0x0) break;
        pvVar6 = GlobalLock(pvVar5);
        *(LPVOID *)(&DAT_02c829cc + iVar7) = pvVar6;
        if (pvVar6 == (LPVOID)0x0) break;
        pvVar5 = GlobalAlloc(0x2002,0x20);
        *(HGLOBAL *)(iVar7 + 0x2c828dc) = pvVar5;
        if (pvVar5 == (HGLOBAL)0x0) break;
        iVar2 = iVar2 + 1;
        pvVar6 = GlobalLock(*(HGLOBAL *)(iVar7 + 0x2c828dc));
        iVar1 = _DAT_02c82a30;
        *(LPVOID *)(iVar7 + 0x2c8292c) = pvVar6;
        iVar7 = iVar7 + 4;
      } while (iVar2 < iVar1);
    }
    if (_DAT_02c82a30 <= iVar2) {
      auStack_28._0_2_ = 1;
      auStack_28._14_2_ = _DAT_02c82a1c;
      auStack_28._2_2_ = _DAT_02c82a20;
      auStack_28._12_2_ = (short)((int)(_DAT_02c82a1c & 0xffff) >> 3) * _DAT_02c82a20;
      auStack_28._4_4_ = _DAT_02c82a24;
      auStack_28._8_4_ = _DAT_02c82a24 * (ushort)auStack_28._12_2_;
      MVar3 = waveInOpen((LPHWAVEIN)&DAT_02c828d8,DAT_006235d4,(LPCWAVEFORMATEX)auStack_28,0,0,0);
      if (MVar3 == 0) {
        return 1;
      }
    }
    iVar2 = (**(code **)*param_1)(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    auStack_28._16_4_ = auStack_28._16_4_ & ~(&DAT_006235dc)[iStack_14 * 4];
    param_2 = _DAT_02c82a34;
    param_3 = _DAT_02c82a38;
  } while( true );
}
