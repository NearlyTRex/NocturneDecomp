// Name: core_mimic.cpp_mirrorXTransform_FUN_004f0280
// Address: 004f0280
// Address Range: [[004f0280, 004f02d1]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_mirrorXTransform_FUN_004f0280(void)

#include "nocturne.h"

void __cdecl core_mimic_cpp_mirrorXTransform_FUN_004f0280(void)

{
  engine_matrix_c_matrixPush_FUN_004e9710();
  g_RelativeX = -g_RelativeX;
  g_LightDirectionX = -g_LightDirectionX;
  g_INT_01c38b9c = -g_INT_01c38b9c;
  g_INT_01c38ba0 = -g_INT_01c38ba0;
  g_INT_01c38ba4 = -g_INT_01c38ba4;
  return;
}
