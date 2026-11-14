// Name: engine_mini3d.cpp_addDynamicLight_FUN_004ef920
// Address: 004ef920
// Address Range: [[004ef920, 004efa86]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_addDynamicLight_FUN_004ef920(CVector3f *position,CVector3f *rotation,float range,float cone_scale,uint arg5,uint arg6,uint arg7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_addDynamicLight_FUN_004ef920(CVector3f *position,CVector3f *rotation,float range,float cone_scale,uint arg5,uint arg6,uint arg7)

{
  byte *puVar1;
  code *pcVar2;
  int iVar3;
  float10 fVar4;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  if (_DAT_01d79784 < 0x32) {
    iVar3 = _DAT_01d79784 * 0x4c;
    puVar1 = (byte *)(_DAT_01d79784 + 0x1d7a660);
    _DAT_01d79784 = _DAT_01d79784 + 1;
    *puVar1 = 1;
    if ((CVector3f *)(iVar3 + 0x1d79788) != position) {
      ((CVector3f *)(iVar3 + 0x1d79788))->x = position->x;
      *(float *)(iVar3 + 0x1d7978c) = position->y;
      *(float *)(iVar3 + 0x1d79790) = position->z;
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
              ((CMatrix3x3f *)(iVar3 + 0x1d79794),rotation);
    *(float *)(iVar3 + 0x1d797bc) = range;
    *(float *)(iVar3 + 0x1d797c4) = cone_scale;
    *(uint *)(iVar3 + 0x1d797c8) = arg5;
    *(uint *)(iVar3 + 0x1d797cc) = arg6;
    *(uint *)(iVar3 + 0x1d797d0) = arg7;
    pcVar2 = _DAT_02cf6100;
    *(float *)(iVar3 + 0x1d79794) = *(float *)(iVar3 + 0x1d79794) * cone_scale;
    *(float *)(iVar3 + 0x1d797a0) = *(float *)(iVar3 + 0x1d797a0) * cone_scale;
    *(float *)(iVar3 + 0x1d797ac) = *(float *)(iVar3 + 0x1d797ac) * cone_scale;
    *(float *)(iVar3 + 0x1d79798) = *(float *)(iVar3 + 0x1d79798) * cone_scale;
    *(float *)(iVar3 + 0x1d797a4) = *(float *)(iVar3 + 0x1d797a4) * cone_scale;
    *(float *)(iVar3 + 0x1d797b0) = *(float *)(iVar3 + 0x1d797b0) * cone_scale;
    *(float *)(iVar3 + 0x1d797c0) = 1.0 / range;
    if ((pcVar2 != (code *)0x0) && (_DAT_01c6cee8 != 0)) {
      engine_mini3d_cpp_setFrameTranslation_FUN_004eceb0((CVector3f *)&DAT_02cfd900);
      engine_mini3d_cpp_updateTransform_FUN_004edcc0();
      uStack_24 = *(uint *)(iVar3 + 0x1d7979c);
      uStack_20 = *(uint *)(iVar3 + 0x1d797a8);
      uStack_1c = *(uint *)(iVar3 + 0x1d797b4);
      fStack_18 = position->x;
      fStack_14 = position->y;
      fStack_10 = position->z;
      fVar4 = (float10)fpatan((float10)1 / (float10)(float)arg5,(float10)1);
      (*_DAT_02cf6100)(&fStack_18,&uStack_24,cone_scale,(float)(fVar4 * (float10)_DAT_005c818d),
                       *(uint *)(iVar3 + 0x1d797c8),*(uint *)(iVar3 + 0x1d797cc),
                       *(uint *)(iVar3 + 0x1d797d0));
      return;
    }
  }
  return;
}
