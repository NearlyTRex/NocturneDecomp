// Name: core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190
// Address: 0050e190
// Address Range: [[0050e190, 0050e203]]
// Convention: unknown
// Signature: void core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190(int param_1)

{
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
            (DAT_005ae704,(CVector3f *)&DAT_020842b4);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_00460c00(DAT_005ae704,_DAT_020842cc);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00460780
            (DAT_005ae704,(CVector3f *)&DAT_020842c0);
  engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_004613c0(DAT_005ae704,0);
  engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_004613a0(DAT_005ae704,0);
  *(uint *)(param_1 + 0x161268) = 0;
  return;
}
