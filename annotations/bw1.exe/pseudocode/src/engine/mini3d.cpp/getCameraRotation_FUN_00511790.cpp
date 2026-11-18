// Name: engine_mini3d.cpp_getCameraRotation_FUN_00511790
// Address: 00511790
// Address Range: [[00511790, 005117be]]
// Convention: __esi
// Signature: void __esi engine_mini3d_cpp_getCameraRotation_FUN_00511790(CVector3f *output)

#include "nocturne.h"

void __esi engine_mini3d_cpp_getCameraRotation_FUN_00511790(CVector3f *output)

{
  int iVar1;
  int iVar2;
  
  iVar2 = g_INT_01d22524;
  iVar1 = g_INT_01d22520;
  output->x = (float)g_INT_01d2251c;
  output->y = (float)iVar2;
  output->z = (float)iVar1;
  return;
}
