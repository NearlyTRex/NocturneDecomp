// Name: engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
// Address: 0048c760
// Address Range: [[0048c760, 0048c77c]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760(CDemonRenderer * this_ptr, CVector3i * output)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
          (CDemonRenderer *this_ptr,CVector3i *output)

{
  BADSPACEBASE *in_ESP;
  int *unaff_ESI;
  byte bVar1;
  int aiStack_ff8 [1017];
  CVector3i CStack_14;
  
  bVar1 = 0;
  engine_matrix_c_getCameraOrigin_FUN_0050e2c0(&CStack_14);
  *unaff_ESI = CStack_14.y;
  unaff_ESI[(uint)bVar1 * -2 + 1] = *(int *)((int)&CStack_14 + (uint)bVar1 * -8 + 8);
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       *(int *)(&stack0xfffffff8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  return;
}
