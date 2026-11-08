// Name: FUN_004f5400
// Address: 004f5400
// Address Range: [[004f5400, 004f5566]]
// Convention: unknown
// Signature: void FUN_004f5400(undefined4 *param_1,undefined4 param_2,float param_3,float param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f5400(uint *param_1,uint param_2,float param_3,float param_4,uint param_5,uint param_6,uint param_7)

{
  byte *puVar1;
  code *pcVar2;
  int iVar3;
  float10 fVar4;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  float fStack_10;
  
  if (_DAT_01d0c3a0 < 0x32) {
    iVar3 = _DAT_01d0c3a0 * 0x4c;
    puVar1 = (byte *)(_DAT_01d0c3a0 + 0x1d0d280);
    _DAT_01d0c3a0 = _DAT_01d0c3a0 + 1;
    *puVar1 = 1;
    if ((uint *)(iVar3 + 0x1d0c3a4) != param_1) {
      *(uint *)(iVar3 + 0x1d0c3a4) = *param_1;
      *(uint *)(iVar3 + 0x1d0c3a8) = param_1[1];
      *(uint *)(iVar3 + 0x1d0c3ac) = param_1[2];
    }
    FUN_00449280(iVar3 + 0x1d0c3b0,param_2);
    *(float *)(iVar3 + 0x1d0c3d8) = param_3;
    *(float *)(iVar3 + 0x1d0c3e0) = param_4;
    *(uint *)(iVar3 + 0x1d0c3e4) = param_5;
    *(uint *)(iVar3 + 0x1d0c3e8) = param_6;
    *(uint *)(iVar3 + 0x1d0c3ec) = param_7;
    pcVar2 = _DAT_0264bcd4;
    *(float *)(iVar3 + 0x1d0c3b0) = *(float *)(iVar3 + 0x1d0c3b0) * param_4;
    *(float *)(iVar3 + 0x1d0c3bc) = *(float *)(iVar3 + 0x1d0c3bc) * param_4;
    *(float *)(iVar3 + 0x1d0c3c8) = *(float *)(iVar3 + 0x1d0c3c8) * param_4;
    *(float *)(iVar3 + 0x1d0c3b4) = *(float *)(iVar3 + 0x1d0c3b4) * param_4;
    *(float *)(iVar3 + 0x1d0c3c0) = *(float *)(iVar3 + 0x1d0c3c0) * param_4;
    *(float *)(iVar3 + 0x1d0c3cc) = *(float *)(iVar3 + 0x1d0c3cc) * param_4;
    *(float *)(iVar3 + 0x1d0c3dc) = 1.0 / param_3;
    if ((pcVar2 != (code *)0x0) && (_DAT_01c37788 != 0)) {
      FUN_004f2950(&DAT_0265370c);
      FUN_004f3740();
      uStack_28 = *(uint *)(iVar3 + 0x1d0c3b8);
      uStack_24 = *(uint *)(iVar3 + 0x1d0c3c4);
      uStack_20 = *(uint *)(iVar3 + 0x1d0c3d0);
      uStack_1c = *param_1;
      uStack_18 = param_1[1];
      uStack_14 = param_1[2];
      fVar4 = (float10)fpatan((float10)1 / (float10)param_4,(float10)1);
      fStack_10 = (float)(fVar4 * (float10)_DAT_005dde44);
      (*_DAT_0264bcd4)(&uStack_1c,&uStack_28,param_3,fStack_10,*(uint *)(iVar3 + 0x1d0c3e4),
                       *(uint *)(iVar3 + 0x1d0c3e8),*(uint *)(iVar3 + 0x1d0c3ec));
      return;
    }
  }
  return;
}
