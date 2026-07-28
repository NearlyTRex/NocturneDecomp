// Name: core_setutil.cpp_FUN_00515c40
// Address: 00515c40
// Address Range: [[00515c40, 00515cbc]]
// Convention: unknown
// Signature: int core_setutil_cpp_FUN_00515c40(int param_1)

#include "nocturne.h"

int core_setutil_cpp_FUN_00515c40(int param_1)

{
  int iVar1;
  CBoundingBox3D CStack_18;
  
  if ((*(uint *)(param_1 + 0x11d4) & 0x7fffffff) == 0) {
    return 1;
  }
  CStack_18.min.x = -*(float *)(param_1 + 0x11d4);
  CStack_18.min.y = -*(float *)(param_1 + 0x11d4);
  CStack_18.min.z = -*(float *)(param_1 + 0x11d4);
  CStack_18.max.x = *(float *)(param_1 + 0x11d4);
  CStack_18.max.y = CStack_18.max.x;
  CStack_18.max.z = CStack_18.max.x;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (DAT_005ae704,(CVector3f *)(param_1 + 0x104));
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(&CStack_18);
  return iVar1;
}
