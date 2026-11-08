// Name: FUN_0055dfa0
// Address: 0055dfa0
// Address Range: [[0055dfa0, 0055e300]]
// Convention: unknown
// Signature: undefined4 FUN_0055dfa0(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0055dfa0(uint *param_1,int param_2,int param_3,int param_4,int param_5)

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
  _DAT_02cf5668 = param_4;
  _DAT_02cf566c = (uint)(param_5 != 0);
  auStack_28._16_4_ = tStack_58.dwFormats;
  do {
    uVar8 = 99999;
    iVar2 = 0;
    iVar7 = 0;
    iStack_14 = -1;
    do {
      if ((*(uint *)((int)&DAT_0060451c + iVar7) & auStack_28._16_4_) != 0) {
        uVar4 = (uint)(param_2 < *(int *)((int)&DAT_00604520 + iVar7));
        if (*(int *)((int)&DAT_00604520 + iVar7) < param_2) {
          uVar4 = uVar4 + 2;
        }
        if (_DAT_02cf5668 < *(int *)((int)&DAT_00604528 + iVar7)) {
          uVar4 = uVar4 + 1;
        }
        if (*(int *)((int)&DAT_00604528 + iVar7) < _DAT_02cf5668) {
          uVar4 = uVar4 + 2;
        }
        if (param_3 < *(int *)((int)&DAT_00604524 + iVar7)) {
          uVar4 = uVar4 + 2;
        }
        if (*(int *)((int)&DAT_00604524 + iVar7) < param_3) {
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
    _DAT_02cf5660 = param_2;
    _DAT_02cf5664 = param_3;
    if (iStack_14 < 0) {
      FUN_0055a560("WavInDevice::setMode - Can't set any recording modes!");
      return 0;
    }
    _DAT_02cf5648 = (&DAT_00604520)[iStack_14 * 4];
    _DAT_02cf564c = (&DAT_00604524)[iStack_14 * 4];
    _DAT_02cf5650 = (&DAT_00604528)[iStack_14 * 4];
    _DAT_02cf5654 = (uint)(_DAT_02cf5648 == 8);
    _DAT_02cf5658 = (int)_DAT_02cf5650 / 0x14;
    _DAT_02cf565c = (int)(_DAT_02cf5650 * 2) / _DAT_02cf5658;
    if (0x14 < _DAT_02cf565c) {
      _DAT_02cf565c = 0x14;
    }
    iVar2 = 0;
    if (0 < _DAT_02cf565c) {
      iVar7 = 0;
      do {
        pvVar5 = GlobalAlloc(0x2002,((int)((_DAT_02cf5648 + ((int)_DAT_02cf5648 >> 0x1f) * -8) -
                                          (uint)(((int)_DAT_02cf5648 >> 0x1f) << 2 < 0)) >> 3) *
                                    _DAT_02cf5658 * _DAT_02cf564c);
        *(HGLOBAL *)(iVar7 + 0x2cf55a8) = pvVar5;
        if (pvVar5 == (HGLOBAL)0x0) break;
        pvVar6 = GlobalLock(pvVar5);
        *(LPVOID *)(&DAT_02cf55f8 + iVar7) = pvVar6;
        if (pvVar6 == (LPVOID)0x0) break;
        pvVar5 = GlobalAlloc(0x2002,0x20);
        *(HGLOBAL *)(iVar7 + 0x2cf5508) = pvVar5;
        if (pvVar5 == (HGLOBAL)0x0) break;
        iVar2 = iVar2 + 1;
        pvVar6 = GlobalLock(*(HGLOBAL *)(iVar7 + 0x2cf5508));
        iVar1 = _DAT_02cf565c;
        *(LPVOID *)(iVar7 + 0x2cf5558) = pvVar6;
        iVar7 = iVar7 + 4;
      } while (iVar2 < iVar1);
    }
    if (_DAT_02cf565c <= iVar2) {
      auStack_28._0_2_ = 1;
      auStack_28._14_2_ = _DAT_02cf5648;
      auStack_28._2_2_ = _DAT_02cf564c;
      auStack_28._12_2_ = (short)((int)(_DAT_02cf5648 & 0xffff) >> 3) * _DAT_02cf564c;
      auStack_28._4_4_ = _DAT_02cf5650;
      auStack_28._8_4_ = _DAT_02cf5650 * (ushort)auStack_28._12_2_;
      MVar3 = waveInOpen((LPHWAVEIN)&DAT_02cf5504,DAT_00604514,(LPCWAVEFORMATEX)auStack_28,0,0,0);
      if (MVar3 == 0) {
        return 1;
      }
    }
    iVar2 = (**(code **)*param_1)(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    auStack_28._16_4_ = auStack_28._16_4_ & ~(&DAT_0060451c)[iStack_14 * 4];
    param_2 = _DAT_02cf5660;
    param_3 = _DAT_02cf5664;
  } while( true );
}
