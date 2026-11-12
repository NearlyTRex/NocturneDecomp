// Name: engine_mini3d.cpp_FUN_00514150
// Address: 00514150
// Address Range: [[00514150, 005142b6]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_00514150(undefined4 *param_1,CVector3f *param_2,float param_3,float param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_00514150(uint *param_1,CVector3f *param_2,float param_3,float param_4,uint param_5,uint param_6,uint param_7)

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
  
  if (_DAT_01d25004 < 0x32) {
    iVar3 = _DAT_01d25004 * 0x4c;
    puVar1 = (byte *)(_DAT_01d25004 + 0x1d25ee0);
    _DAT_01d25004 = _DAT_01d25004 + 1;
    *puVar1 = 1;
    if ((uint *)(iVar3 + 0x1d25008) != param_1) {
      *(uint *)(iVar3 + 0x1d25008) = *param_1;
      *(uint *)(iVar3 + 0x1d2500c) = param_1[1];
      *(uint *)(iVar3 + 0x1d25010) = param_1[2];
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
              ((CMatrix3x3f *)(iVar3 + 0x1d25014),param_2);
    *(float *)(iVar3 + 0x1d2503c) = param_3;
    *(float *)(iVar3 + 0x1d25044) = param_4;
    *(uint *)(iVar3 + 0x1d25048) = param_5;
    *(uint *)(iVar3 + 0x1d2504c) = param_6;
    *(uint *)(iVar3 + 0x1d25050) = param_7;
    pcVar2 = _DAT_02c834a4;
    *(float *)(iVar3 + 0x1d25014) = *(float *)(iVar3 + 0x1d25014) * param_4;
    *(float *)(iVar3 + 0x1d25020) = *(float *)(iVar3 + 0x1d25020) * param_4;
    *(float *)(iVar3 + 0x1d2502c) = *(float *)(iVar3 + 0x1d2502c) * param_4;
    *(float *)(iVar3 + 0x1d25018) = *(float *)(iVar3 + 0x1d25018) * param_4;
    *(float *)(iVar3 + 0x1d25024) = *(float *)(iVar3 + 0x1d25024) * param_4;
    *(float *)(iVar3 + 0x1d25030) = *(float *)(iVar3 + 0x1d25030) * param_4;
    *(float *)(iVar3 + 0x1d25040) = 1.0 / param_3;
    if ((pcVar2 != (code *)0x0) && (_DAT_01c50948 != 0)) {
      engine_mini3d_cpp_FUN_005116e0(&DAT_02c8af28);
      engine_mini3d_cpp_FUN_005124f0();
      uStack_28 = *(uint *)(iVar3 + 0x1d2501c);
      uStack_24 = *(uint *)(iVar3 + 0x1d25028);
      uStack_20 = *(uint *)(iVar3 + 0x1d25034);
      uStack_1c = *param_1;
      uStack_18 = param_1[1];
      uStack_14 = param_1[2];
      fVar4 = (float10)fpatan((float10)1 / (float10)param_4,(float10)1);
      fStack_10 = (float)(fVar4 * (float10)_DAT_005e8e8b);
      (*_DAT_02c834a4)(&uStack_1c,&uStack_28,param_3,fStack_10,*(uint *)(iVar3 + 0x1d25048),
                       *(uint *)(iVar3 + 0x1d2504c),*(uint *)(iVar3 + 0x1d25050));
      return;
    }
  }
  return;
}
