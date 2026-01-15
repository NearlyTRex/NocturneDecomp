// Name: engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
// Address: 0048c7e0
// Address Range: [[0048c7e0, 0048c7fc]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0(CDemonRenderer * this_ptr, CVector3i * output)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
          (CDemonRenderer *this_ptr,CVector3i *output)

{
  int *unaff_ESI;
  byte bVar1;
  int aiStack_ffc [1018];
  CVector3i CStack_14;
  
  bVar1 = 0;
  engine_matrix_c_getCameraRotation_FUN_0050e2f0(&CStack_14);
  *unaff_ESI = CStack_14.x;
  unaff_ESI[(uint)bVar1 * -2 + 1] = *(int *)((int)&CStack_14 + (uint)bVar1 * -8 + 4);
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       *(int *)((int)&CStack_14 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  return;
}
