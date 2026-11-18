// Name: engine_mini3d.cpp_getCameraRotation_FUN_004f2a00
// Address: 004f2a00
// Address Range: [[004f2a00, 004f2a2e]]
// Convention: __esi
// Signature: void __esi engine_mini3d_cpp_getCameraRotation_FUN_004f2a00(CVector3f *output)

#include "nocturne.h"

void __esi engine_mini3d_cpp_getCameraRotation_FUN_004f2a00(CVector3f *output)

{
  int iVar1;
  int iVar2;
  
  iVar2 = g_INT_01d098c4;
  iVar1 = g_INT_01d098c0;
  output->x = (float)g_INT_01d098bc;
  output->y = (float)iVar2;
  output->z = (float)iVar1;
  return;
}
