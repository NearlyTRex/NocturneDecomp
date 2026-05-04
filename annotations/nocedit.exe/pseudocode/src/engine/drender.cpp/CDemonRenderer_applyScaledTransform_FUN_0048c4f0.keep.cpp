// Name: engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
// Address: 0048c4f0
// MANUAL RECONSTRUCTION
// Address Range: [[0048c4f0, 0048c621]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer *this_ptr,CVector3f *position,CVector3f *rotation)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer *this_ptr,CVector3f *position,CVector3f *rotation)

{
  if (rotation == (CVector3f *)0x0) {
    engine_matrix_c_matrixPushAndTransform_FUN_0050cee0
              ((int)ROUND(ROUND((double)(float)position->x * 0.31830988619288902 * 32768)),
               (int)ROUND(ROUND((double)(float)position->z * 0.31830988619288902 * 32768)),
               (int)ROUND(ROUND((double)(float)position->y * 0.31830988619288902 * 32768)),0,0
               ,0);
    return;
  }
  engine_matrix_c_matrixPushAndTransform_FUN_0050cee0
            ((int)ROUND(ROUND((double)(float)position->x * 0.31830988619288902 * 32768)),
             (int)ROUND(ROUND((double)(float)position->z * 0.31830988619288902 * 32768)),
             (int)ROUND(ROUND((double)(float)position->y * 0.31830988619288902 * 32768)),
             (int)ROUND(ROUND((double)(float)rotation->x * 256)),
             (int)ROUND(ROUND((double)(float)rotation->y * 256)),
             (int)ROUND(ROUND((double)(float)rotation->z * 256)));
  return;
}
