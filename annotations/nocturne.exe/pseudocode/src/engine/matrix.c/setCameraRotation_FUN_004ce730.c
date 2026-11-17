// Name: engine_matrix.c_setCameraRotation_FUN_004ce730
// Address: 004ce730
// Address Range: [[004ce730, 004ce758]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_setCameraRotation_FUN_004ce730(int pitch,int yaw,int roll)

#include "nocturne.h"

void __cdecl engine_matrix_c_setCameraRotation_FUN_004ce730(int pitch,int yaw,int roll)

{
  g_INT_01c039d0 = pitch;
  g_INT_01c039d4 = yaw;
  g_INT_01c039d8 = roll;
  engine_matrix_c_buildRotationMatrix_FUN_004ccdc0(pitch,yaw,roll);
  return;
}
