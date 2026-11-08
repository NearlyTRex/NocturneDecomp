// Name: FUN_00557f00
// Address: 00557f00
// Address Range: [[00557f00, 005580d5]]
// Convention: unknown
// Signature: undefined4 FUN_00557f00(undefined4 *param_1,uint param_2,int param_3,DWORD param_4,uint *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00557f00(uint *param_1,uint param_2,int param_3,DWORD param_4,uint *param_5)

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
  _DAT_0264b0f4 = param_2;
  _DAT_0264b0f8 = param_3;
  _DAT_0264b104 = 4;
  _DAT_0264b0fc = param_4;
  auStack_24._16_4_ = FUN_00553600();
  fVar6 = ((float10)(int)_DAT_0264b0fc * (float10)(float)auStack_24._16_4_) / (float10)_DAT_0264b104
  ;
  FUN_005b7ff0();
  _DAT_0264b100 = (uint)ROUND(fVar6);
  iVar1 = 0;
  _DAT_0264b100 = _DAT_0264b100 + 0xf & 0xfffffff0;
  if (0 < _DAT_0264b104) {
    iVar5 = 0;
    do {
      pvVar2 = GlobalAlloc(0x2002,((int)((_DAT_0264b0f4 + ((int)_DAT_0264b0f4 >> 0x1f) * -8) -
                                        (uint)(((int)_DAT_0264b0f4 >> 0x1f) << 2 < 0)) >> 3) *
                                  _DAT_0264b100 * _DAT_0264b0f8);
      *(HGLOBAL *)(iVar5 + 0x264b0b4) = pvVar2;
      if (pvVar2 == (HGLOBAL)0x0) goto LAB_005580ac;
      pvVar3 = GlobalLock(pvVar2);
      *(LPVOID *)(iVar5 + 0x264b0d4) = pvVar3;
      if (pvVar3 == (LPVOID)0x0) goto LAB_005580ac;
      pvVar2 = GlobalAlloc(0x2002,0x20);
      *(HGLOBAL *)(iVar5 + 0x264b074) = pvVar2;
      if (pvVar2 == (HGLOBAL)0x0) goto LAB_005580ac;
      iVar1 = iVar1 + 1;
      pvVar3 = GlobalLock(*(HGLOBAL *)(iVar5 + 0x264b074));
      *(LPVOID *)(iVar5 + 0x264b094) = pvVar3;
      iVar5 = iVar5 + 4;
    } while (iVar1 < _DAT_0264b104);
  }
  auStack_24._0_2_ = 1;
  auStack_24._14_2_ = _DAT_0264b0f4;
  auStack_24._2_2_ = _DAT_0264b0f8;
  auStack_24._12_2_ = (short)((int)(_DAT_0264b0f4 & 0xffff) >> 3) * _DAT_0264b0f8;
  auStack_24._4_4_ = _DAT_0264b0fc;
  auStack_24._8_4_ = _DAT_0264b0fc * (ushort)auStack_24._12_2_;
  MVar4 = waveOutOpen((LPHWAVEOUT)&DAT_0264b070,DAT_0061bf84,(LPCWAVEFORMATEX)auStack_24,0,0,0);
  if (MVar4 == 0) {
    *param_5 = _DAT_0264b100;
    return 1;
  }
  FUN_005549c0("waveOutOpen failed");
LAB_005580ac:
  (**(code **)*param_1)(param_1);
  return 0;
}
