// Name: FUN_0052c460
// Address: 0052c460
// Address Range: [[0052c460, 0052c63c]]
// Convention: unknown
// Signature: undefined4 FUN_0052c460(undefined4 *param_1,uint param_2,int param_3,DWORD param_4,uint *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0052c460(uint *param_1,uint param_2,int param_3,DWORD param_4,uint *param_5)

{
  int iVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  MMRESULT MVar4;
  int iVar5;
  float10 fVar6;
  byte auStack_24 [20];
  
  iVar1 = (**(code **)*param_1)(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  _DAT_02dc9428 = param_2;
  _DAT_02dc942c = param_4;
  _DAT_02dc943c = 4;
  _DAT_02dc9430 = param_3;
  auStack_24._16_4_ = FUN_00528970();
  fVar6 = ((float10)(int)_DAT_02dc942c * (float10)(float)auStack_24._16_4_) / (float10)_DAT_02dc943c
  ;
  FUN_00563a30();
  _DAT_02dc9434 = (uint)ROUND(fVar6);
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
  auStack_24._0_2_ = 1;
  auStack_24._14_2_ = _DAT_02dc9428;
  auStack_24._2_2_ = _DAT_02dc9430;
  auStack_24._12_2_ = (short)((int)(_DAT_02dc9428 & 0xffff) >> 3) * _DAT_02dc9430;
  auStack_24._4_4_ = _DAT_02dc942c;
  auStack_24._8_4_ = _DAT_02dc942c * (ushort)auStack_24._12_2_;
  MVar4 = waveOutOpen((LPHWAVEOUT)&DAT_02dc93a4,DAT_005bed44,(LPCWAVEFORMATEX)auStack_24,0,0,0);
  if (MVar4 == 0) {
    *param_5 = _DAT_02dc9434;
    return 1;
  }
  FUN_00529980("waveOutOpen failed");
LAB_0052c613:
  (**(code **)*param_1)(param_1);
  return 0;
}
