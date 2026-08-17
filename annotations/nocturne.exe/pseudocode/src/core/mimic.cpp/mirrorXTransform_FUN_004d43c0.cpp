// Name: core_mimic.cpp_mirrorXTransform_FUN_004d43c0
// Address: 004d43c0
// Address Range: [[004d43c0, 004d4411]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_mirrorXTransform_FUN_004d43c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mimic_cpp_mirrorXTransform_FUN_004d43c0(void)

{
  engine_matrix_c_matrixPush_FUN_004cdac0();
  g_RelativeX = -g_RelativeX;
  _DAT_01c039dc = -_DAT_01c039dc;
  g_TransformMatrix.m[0].x = -g_TransformMatrix.m[0].x;
  g_TransformMatrix.m[0].y = -g_TransformMatrix.m[0].y;
  g_TransformMatrix.m[0].z = -g_TransformMatrix.m[0].z;
  return;
}
