// Name: engine_mini3d.cpp_getCameraRotation_FUN_004ecf60
// Address: 004ecf60
// Address Range: [[004ecf60, 004ecf8e]]
// Convention: __esi
// Signature: void __esi engine_mini3d_cpp_getCameraRotation_FUN_004ecf60(CVector3f *output)

#include "nocturne.h"

void __esi engine_mini3d_cpp_getCameraRotation_FUN_004ecf60(CVector3f *output)

{
  int iVar1;
  int iVar2;
  
  iVar2 = g_INT_01d76ca4;
  iVar1 = g_INT_01d76ca0;
  output->x = (float)g_INT_01d76c9c;
  output->y = (float)iVar2;
  output->z = (float)iVar1;
  return;
}
