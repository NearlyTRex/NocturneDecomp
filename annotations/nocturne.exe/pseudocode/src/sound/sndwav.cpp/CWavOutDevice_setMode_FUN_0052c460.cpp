// Name: sound_sndwav.cpp_CWavOutDevice_setMode_FUN_0052c460
// Address: 0052c460
// Address Range: [[0052c460, 0052c63c]]
// Convention: unknown
// Signature: undefined4 sound_sndwav_cpp_CWavOutDevice_setMode_FUN_0052c460(undefined4 *param_1,uint param_2,int param_3,uint *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sound_sndwav_cpp_CWavOutDevice_setMode_FUN_0052c460(uint *param_1,uint param_2,int param_3,uint *param_4)

{
  int iVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  MMRESULT MVar4;
  int iVar5;
  double dVar6;
  uint uStack_28;
  uint *puStack_24;
  DWORD DStack_20;
  ushort uStack_1c;
  WORD WStack_1a;
  float fStack_14;
  
  uStack_28 = param_1;
  iVar1 = (**(code **)*param_1)();
  if (iVar1 == 0) {
    return 0;
  }
  _DAT_02dc9428 = param_2;
  _DAT_02dc942c = param_4;
  _DAT_02dc943c = 4;
  _DAT_02dc9430 = param_3;
  uStack_28._0_2_ = 0xc4aa;
  uStack_28._2_2_ = 0x52;
  fStack_14 = sound_sndmain_cpp_getMaxSwLatency_FUN_00528970();
  uStack_28._0_2_ = 0xc4c7;
  uStack_28._2_2_ = 0x52;
  dVar6 = round
                    ((double)(((float)(int)_DAT_02dc942c * fStack_14) / (float)_DAT_02dc943c));
  _DAT_02dc9434 = (uint)ROUND(dVar6);
  _DAT_02dc9434 = _DAT_02dc9434 + 0xf & 0xfffffff0;
  _DAT_02dc9438 =
       _DAT_02dc9434 *
       ((int)((_DAT_02dc9428 + ((int)_DAT_02dc9428 >> 0x1f) * -8) -
             (uint)(((int)_DAT_02dc9428 >> 0x1f) << 2 < 0)) >> 3) * _DAT_02dc9430;
  iVar1 = 0;
  if (0 < _DAT_02dc943c) {
    iVar5 = 0;
    do {
      pvVar2 = GlobalAlloc(0x2002,_DAT_02dc9438);
      *(HGLOBAL *)(iVar5 + 0x2dc93e8) = pvVar2;
      if (pvVar2 == (HGLOBAL)0x0) goto LAB_0052c613;
      pvVar3 = GlobalLock(pvVar2);
      *(LPVOID *)(iVar5 + 0x2dc93c8) = pvVar3;
      if (pvVar3 == (LPVOID)0x0) goto LAB_0052c613;
      pvVar2 = GlobalAlloc(0x2002,0x20);
      *(HGLOBAL *)(iVar5 + 0x2dc9408) = pvVar2;
      if (pvVar2 == (HGLOBAL)0x0) goto LAB_0052c613;
      iVar1 = iVar1 + 1;
      pvVar3 = GlobalLock(*(HGLOBAL *)(iVar5 + 0x2dc9408));
      *(LPVOID *)(iVar5 + 0x2dc93a8) = pvVar3;
      iVar5 = iVar5 + 4;
    } while (iVar1 < _DAT_02dc943c);
  }
  WStack_1a = _DAT_02dc9428;
  uStack_28._2_2_ = _DAT_02dc9430;
  uStack_28._0_2_ = 1;
  uStack_1c = (short)((int)(_DAT_02dc9428 & 0xffff) >> 3) * _DAT_02dc9430;
  puStack_24 = _DAT_02dc942c;
  DStack_20 = (int)_DAT_02dc942c * (uint)uStack_1c;
  MVar4 = waveOutOpen((LPHWAVEOUT)&DAT_02dc93a4,DAT_005bed44,(LPCWAVEFORMATEX)&uStack_28,0,0,0);
  if (MVar4 == 0) {
    *param_4 = _DAT_02dc9434;
    return 1;
  }
  sound_sndmain_cpp_FUN_00529980("waveOutOpen failed");
LAB_0052c613:
  (**(code **)*param_1)(param_1);
  return 0;
}
