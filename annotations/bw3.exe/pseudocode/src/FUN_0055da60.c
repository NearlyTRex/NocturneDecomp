// Name: FUN_0055da60
// Address: 0055da60
// Address Range: [[0055da60, 0055dc35]]
// Convention: unknown
// Signature: undefined4 FUN_0055da60(undefined4 *param_1,uint param_2,int param_3,DWORD param_4,uint *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0055da60(uint *param_1,uint param_2,int param_3,DWORD param_4,uint *param_5)

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
  _DAT_02cf54f0 = param_2;
  _DAT_02cf54f4 = param_3;
  _DAT_02cf5500 = 4;
  _DAT_02cf54f8 = param_4;
  auStack_24._16_4_ = FUN_005591a0();
  fVar6 = ((float10)(int)_DAT_02cf54f8 * (float10)(float)auStack_24._16_4_) / (float10)_DAT_02cf5500
  ;
  FUN_005a3120();
  _DAT_02cf54fc = (uint)ROUND(fVar6);
  iVar1 = 0;
  _DAT_02cf54fc = _DAT_02cf54fc + 0xf & 0xfffffff0;
  if (0 < _DAT_02cf5500) {
    iVar5 = 0;
    do {
      pvVar2 = GlobalAlloc(0x2002,((int)((_DAT_02cf54f0 + ((int)_DAT_02cf54f0 >> 0x1f) * -8) -
                                        (uint)(((int)_DAT_02cf54f0 >> 0x1f) << 2 < 0)) >> 3) *
                                  _DAT_02cf54fc * _DAT_02cf54f4);
      *(HGLOBAL *)(iVar5 + 0x2cf54b0) = pvVar2;
      if (pvVar2 == (HGLOBAL)0x0) goto LAB_0055dc0c;
      pvVar3 = GlobalLock(pvVar2);
      *(LPVOID *)(iVar5 + 0x2cf54d0) = pvVar3;
      if (pvVar3 == (LPVOID)0x0) goto LAB_0055dc0c;
      pvVar2 = GlobalAlloc(0x2002,0x20);
      *(HGLOBAL *)(iVar5 + 0x2cf5470) = pvVar2;
      if (pvVar2 == (HGLOBAL)0x0) goto LAB_0055dc0c;
      iVar1 = iVar1 + 1;
      pvVar3 = GlobalLock(*(HGLOBAL *)(iVar5 + 0x2cf5470));
      *(LPVOID *)(iVar5 + 0x2cf5490) = pvVar3;
      iVar5 = iVar5 + 4;
    } while (iVar1 < _DAT_02cf5500);
  }
  auStack_24._0_2_ = 1;
  auStack_24._14_2_ = _DAT_02cf54f0;
  auStack_24._2_2_ = _DAT_02cf54f4;
  auStack_24._12_2_ = (short)((int)(_DAT_02cf54f0 & 0xffff) >> 3) * _DAT_02cf54f4;
  auStack_24._4_4_ = _DAT_02cf54f8;
  auStack_24._8_4_ = _DAT_02cf54f8 * (ushort)auStack_24._12_2_;
  MVar4 = waveOutOpen((LPHWAVEOUT)&DAT_02cf546c,DAT_00604514,(LPCWAVEFORMATEX)auStack_24,0,0,0);
  if (MVar4 == 0) {
    *param_5 = _DAT_02cf54fc;
    return 1;
  }
  FUN_0055a560("waveOutOpen failed");
LAB_0055dc0c:
  (**(code **)*param_1)(param_1);
  return 0;
}
