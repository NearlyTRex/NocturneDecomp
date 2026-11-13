// Name: engine_mini3d.cpp_addDynamicLight_FUN_00514150
// Address: 00514150
// Address Range: [[00514150, 005142b6]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_addDynamicLight_FUN_00514150(CVector3f *position,CVector3f *rotation,float range,float cone_scale,uint arg5,uint arg6,uint arg7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_addDynamicLight_FUN_00514150(CVector3f *position,CVector3f *rotation,float range,float cone_scale,uint arg5,uint arg6,uint arg7)

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
  
  if (_DAT_01d25004 < 0x32) {
    iVar3 = _DAT_01d25004 * 0x4c;
    puVar1 = (byte *)(_DAT_01d25004 + 0x1d25ee0);
    _DAT_01d25004 = _DAT_01d25004 + 1;
    *puVar1 = 1;
    if ((CVector3f *)(iVar3 + 0x1d25008) != position) {
      ((CVector3f *)(iVar3 + 0x1d25008))->x = position->x;
      *(float *)(iVar3 + 0x1d2500c) = position->y;
      *(float *)(iVar3 + 0x1d25010) = position->z;
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
              ((CMatrix3x3f *)(iVar3 + 0x1d25014),rotation);
    *(float *)(iVar3 + 0x1d2503c) = range;
    *(float *)(iVar3 + 0x1d25044) = cone_scale;
    *(uint *)(iVar3 + 0x1d25048) = arg5;
    *(uint *)(iVar3 + 0x1d2504c) = arg6;
    *(uint *)(iVar3 + 0x1d25050) = arg7;
    pcVar2 = _DAT_02c834a4;
    *(float *)(iVar3 + 0x1d25014) = *(float *)(iVar3 + 0x1d25014) * cone_scale;
    *(float *)(iVar3 + 0x1d25020) = *(float *)(iVar3 + 0x1d25020) * cone_scale;
    *(float *)(iVar3 + 0x1d2502c) = *(float *)(iVar3 + 0x1d2502c) * cone_scale;
    *(float *)(iVar3 + 0x1d25018) = *(float *)(iVar3 + 0x1d25018) * cone_scale;
    *(float *)(iVar3 + 0x1d25024) = *(float *)(iVar3 + 0x1d25024) * cone_scale;
    *(float *)(iVar3 + 0x1d25030) = *(float *)(iVar3 + 0x1d25030) * cone_scale;
    *(float *)(iVar3 + 0x1d25040) = 1.0 / range;
    if ((pcVar2 != (code *)0x0) && (_DAT_01c50948 != 0)) {
      engine_mini3d_cpp_setFrameTranslation_FUN_005116e0((CVector3f *)&DAT_02c8af28);
      engine_mini3d_cpp_updateTransform_FUN_005124f0();
      uStack_24 = *(uint *)(iVar3 + 0x1d2501c);
      uStack_20 = *(uint *)(iVar3 + 0x1d25028);
      uStack_1c = *(uint *)(iVar3 + 0x1d25034);
      fStack_18 = position->x;
      fStack_14 = position->y;
      fStack_10 = position->z;
      fVar4 = (float10)fpatan((float10)1 / (float10)(float)arg5,(float10)1);
      (*_DAT_02c834a4)(&fStack_18,&uStack_24,cone_scale,(float)(fVar4 * (float10)_DAT_005e8e8b),
                       *(uint *)(iVar3 + 0x1d25048),*(uint *)(iVar3 + 0x1d2504c),
                       *(uint *)(iVar3 + 0x1d25050));
      return;
    }
  }
  return;
}
