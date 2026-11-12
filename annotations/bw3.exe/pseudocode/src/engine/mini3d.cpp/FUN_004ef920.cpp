// Name: engine_mini3d.cpp_FUN_004ef920
// Address: 004ef920
// Address Range: [[004ef920, 004efa86]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004ef920(undefined4 *param_1,CVector3f *param_2,float param_3,float param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004ef920(uint *param_1,CVector3f *param_2,float param_3,float param_4,uint param_5,uint param_6,uint param_7)

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
  
  if (_DAT_01d79784 < 0x32) {
    iVar3 = _DAT_01d79784 * 0x4c;
    puVar1 = (byte *)(_DAT_01d79784 + 0x1d7a660);
    _DAT_01d79784 = _DAT_01d79784 + 1;
    *puVar1 = 1;
    if ((uint *)(iVar3 + 0x1d79788) != param_1) {
      *(uint *)(iVar3 + 0x1d79788) = *param_1;
      *(uint *)(iVar3 + 0x1d7978c) = param_1[1];
      *(uint *)(iVar3 + 0x1d79790) = param_1[2];
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
              ((CMatrix3x3f *)(iVar3 + 0x1d79794),param_2);
    *(float *)(iVar3 + 0x1d797bc) = param_3;
    *(float *)(iVar3 + 0x1d797c4) = param_4;
    *(uint *)(iVar3 + 0x1d797c8) = param_5;
    *(uint *)(iVar3 + 0x1d797cc) = param_6;
    *(uint *)(iVar3 + 0x1d797d0) = param_7;
    pcVar2 = _DAT_02cf6100;
    *(float *)(iVar3 + 0x1d79794) = *(float *)(iVar3 + 0x1d79794) * param_4;
    *(float *)(iVar3 + 0x1d797a0) = *(float *)(iVar3 + 0x1d797a0) * param_4;
    *(float *)(iVar3 + 0x1d797ac) = *(float *)(iVar3 + 0x1d797ac) * param_4;
    *(float *)(iVar3 + 0x1d79798) = *(float *)(iVar3 + 0x1d79798) * param_4;
    *(float *)(iVar3 + 0x1d797a4) = *(float *)(iVar3 + 0x1d797a4) * param_4;
    *(float *)(iVar3 + 0x1d797b0) = *(float *)(iVar3 + 0x1d797b0) * param_4;
    *(float *)(iVar3 + 0x1d797c0) = 1.0 / param_3;
    if ((pcVar2 != (code *)0x0) && (_DAT_01c6cee8 != 0)) {
      engine_mini3d_cpp_FUN_004eceb0(&DAT_02cfd900);
      engine_mini3d_cpp_FUN_004edcc0();
      uStack_28 = *(uint *)(iVar3 + 0x1d7979c);
      uStack_24 = *(uint *)(iVar3 + 0x1d797a8);
      uStack_20 = *(uint *)(iVar3 + 0x1d797b4);
      uStack_1c = *param_1;
      uStack_18 = param_1[1];
      uStack_14 = param_1[2];
      fVar4 = (float10)fpatan((float10)1 / (float10)param_4,(float10)1);
      fStack_10 = (float)(fVar4 * (float10)_DAT_005c818d);
      (*_DAT_02cf6100)(&uStack_1c,&uStack_28,param_3,fStack_10,*(uint *)(iVar3 + 0x1d797c8),
                       *(uint *)(iVar3 + 0x1d797cc),*(uint *)(iVar3 + 0x1d797d0));
      return;
    }
  }
  return;
}
