// Name: engine_mini3d.cpp_addDynamicLight_FUN_004f5400
// Address: 004f5400
// Address Range: [[004f5400, 004f5566]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_addDynamicLight_FUN_004f5400(CVector3f *position,CVector3f *rotation,float range,float cone_scale,uint arg5,uint arg6,uint arg7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_addDynamicLight_FUN_004f5400(CVector3f *position,CVector3f *rotation,float range,float cone_scale,uint arg5,uint arg6,uint arg7)

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
  
  if (_DAT_01d0c3a0 < 0x32) {
    iVar3 = _DAT_01d0c3a0 * 0x4c;
    puVar1 = (byte *)(_DAT_01d0c3a0 + 0x1d0d280);
    _DAT_01d0c3a0 = _DAT_01d0c3a0 + 1;
    *puVar1 = 1;
    if ((CVector3f *)(iVar3 + 0x1d0c3a4) != position) {
      ((CVector3f *)(iVar3 + 0x1d0c3a4))->x = position->x;
      *(float *)(iVar3 + 0x1d0c3a8) = position->y;
      *(float *)(iVar3 + 0x1d0c3ac) = position->z;
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
              ((CMatrix3x3f *)(iVar3 + 0x1d0c3b0),rotation);
    *(float *)(iVar3 + 0x1d0c3d8) = range;
    *(float *)(iVar3 + 0x1d0c3e0) = cone_scale;
    *(uint *)(iVar3 + 0x1d0c3e4) = arg5;
    *(uint *)(iVar3 + 0x1d0c3e8) = arg6;
    *(uint *)(iVar3 + 0x1d0c3ec) = arg7;
    pcVar2 = _DAT_0264bcd4;
    *(float *)(iVar3 + 0x1d0c3b0) = *(float *)(iVar3 + 0x1d0c3b0) * cone_scale;
    *(float *)(iVar3 + 0x1d0c3bc) = *(float *)(iVar3 + 0x1d0c3bc) * cone_scale;
    *(float *)(iVar3 + 0x1d0c3c8) = *(float *)(iVar3 + 0x1d0c3c8) * cone_scale;
    *(float *)(iVar3 + 0x1d0c3b4) = *(float *)(iVar3 + 0x1d0c3b4) * cone_scale;
    *(float *)(iVar3 + 0x1d0c3c0) = *(float *)(iVar3 + 0x1d0c3c0) * cone_scale;
    *(float *)(iVar3 + 0x1d0c3cc) = *(float *)(iVar3 + 0x1d0c3cc) * cone_scale;
    *(float *)(iVar3 + 0x1d0c3dc) = 1.0 / range;
    if ((pcVar2 != (code *)0x0) && (_DAT_01c37788 != 0)) {
      engine_mini3d_cpp_setFrameTranslation_FUN_004f2950((CVector3f *)&DAT_0265370c);
      engine_mini3d_cpp_updateTransform_FUN_004f3740();
      uStack_24 = *(uint *)(iVar3 + 0x1d0c3b8);
      uStack_20 = *(uint *)(iVar3 + 0x1d0c3c4);
      uStack_1c = *(uint *)(iVar3 + 0x1d0c3d0);
      fStack_18 = position->x;
      fStack_14 = position->y;
      fStack_10 = position->z;
      fVar4 = (float10)fpatan((float10)1 / (float10)(float)arg5,(float10)1);
      (*_DAT_0264bcd4)(&fStack_18,&uStack_24,cone_scale,(float)(fVar4 * (float10)_DAT_005dde44),
                       *(uint *)(iVar3 + 0x1d0c3e4),*(uint *)(iVar3 + 0x1d0c3e8),
                       *(uint *)(iVar3 + 0x1d0c3ec));
      return;
    }
  }
  return;
}
