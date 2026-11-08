// Name: FUN_0057a930
// Address: 0057a930
// Address Range: [[0057a930, 0057ab05]]
// Convention: unknown
// Signature: undefined4 FUN_0057a930(undefined4 *param_1,uint param_2,int param_3,DWORD param_4,uint *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0057a930(uint *param_1,uint param_2,int param_3,DWORD param_4,uint *param_5)

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
  _DAT_02c828c4 = param_2;
  _DAT_02c828c8 = param_3;
  _DAT_02c828d4 = 4;
  _DAT_02c828cc = param_4;
  auStack_24._16_4_ = FUN_00576030();
  fVar6 = ((float10)(int)_DAT_02c828cc * (float10)(float)auStack_24._16_4_) / (float10)_DAT_02c828d4
  ;
  FUN_005c03a0();
  _DAT_02c828d0 = (uint)ROUND(fVar6);
  iVar1 = 0;
  _DAT_02c828d0 = _DAT_02c828d0 + 0xf & 0xfffffff0;
  if (0 < _DAT_02c828d4) {
    iVar5 = 0;
    do {
      pvVar2 = GlobalAlloc(0x2002,((int)((_DAT_02c828c4 + ((int)_DAT_02c828c4 >> 0x1f) * -8) -
                                        (uint)(((int)_DAT_02c828c4 >> 0x1f) << 2 < 0)) >> 3) *
                                  _DAT_02c828d0 * _DAT_02c828c8);
      *(HGLOBAL *)(iVar5 + 0x2c82884) = pvVar2;
      if (pvVar2 == (HGLOBAL)0x0) goto LAB_0057aadc;
      pvVar3 = GlobalLock(pvVar2);
      *(LPVOID *)(iVar5 + 0x2c828a4) = pvVar3;
      if (pvVar3 == (LPVOID)0x0) goto LAB_0057aadc;
      pvVar2 = GlobalAlloc(0x2002,0x20);
      *(HGLOBAL *)(iVar5 + 0x2c82844) = pvVar2;
      if (pvVar2 == (HGLOBAL)0x0) goto LAB_0057aadc;
      iVar1 = iVar1 + 1;
      pvVar3 = GlobalLock(*(HGLOBAL *)(iVar5 + 0x2c82844));
      *(LPVOID *)(iVar5 + 0x2c82864) = pvVar3;
      iVar5 = iVar5 + 4;
    } while (iVar1 < _DAT_02c828d4);
  }
  auStack_24._0_2_ = 1;
  auStack_24._14_2_ = _DAT_02c828c4;
  auStack_24._2_2_ = _DAT_02c828c8;
  auStack_24._12_2_ = (short)((int)(_DAT_02c828c4 & 0xffff) >> 3) * _DAT_02c828c8;
  auStack_24._4_4_ = _DAT_02c828cc;
  auStack_24._8_4_ = _DAT_02c828cc * (ushort)auStack_24._12_2_;
  MVar4 = waveOutOpen((LPHWAVEOUT)&DAT_02c82840,DAT_006235d4,(LPCWAVEFORMATEX)auStack_24,0,0,0);
  if (MVar4 == 0) {
    *param_5 = _DAT_02c828d0;
    return 1;
  }
  FUN_005773f0("waveOutOpen failed");
LAB_0057aadc:
  (**(code **)*param_1)(param_1);
  return 0;
}
