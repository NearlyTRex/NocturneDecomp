// Name: core_dcamera.cpp_CDemonCamera_saveAlphaTransform_FUN_00453950
// Address: 00453950
// Address Range: [[00453950, 00453a63]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_saveAlphaTransform_FUN_00453950(CDemonCamera * this_ptr, int alpha_index)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_saveAlphaTransform_FUN_00453950
          (CDemonCamera *this_ptr,int alpha_index)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  uint *puVar3;
  byte bVar4;
  int in_stack_0000000c;
  uint auStack_ff8 [1017];
  CVector3i CStack_14;
  
  bVar4 = 0;
  engine_matrix_c_getCameraOrigin_FUN_0050e2c0(&CStack_14);
  iVar1 = in_stack_0000000c * 0xc + alpha_index;
  iVar2 = in_stack_0000000c * 4 + alpha_index;
  puVar3 = (uint *)(iVar1 + 0x11f0 + (uint)bVar4 * -8);
  *(int *)(iVar1 + 0x11ec) = CStack_14.y;
  *puVar3 = *(uint *)((int)&CStack_14 + (uint)bVar4 * -8 + 8);
  puVar3[(uint)bVar4 * -2 + 1] =
       *(uint *)(&stack0xfffffff8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  *(int *)(iVar2 + 0x124c) = g_TransformMatrix.m[0].x;
  *(int *)(iVar2 + 0x126c) = g_TransformMatrix.m[0].y;
  *(int *)(iVar2 + 0x128c) = g_TransformMatrix.m[0].z;
  *(int *)(iVar2 + 0x12ac) = g_TransformMatrix.m[1].x;
  *(int *)(iVar2 + 0x12cc) = g_TransformMatrix.m[1].y;
  *(int *)(iVar2 + 0x12ec) = g_TransformMatrix.m[1].z;
  *(int *)(iVar2 + 0x130c) = g_TransformMatrix.m[2].x;
  *(int *)(iVar2 + 0x132c) = g_TransformMatrix.m[2].y;
  *(int *)(iVar2 + 0x134c) = g_TransformMatrix.m[2].z;
  *(int *)(iVar2 + 0x136c) = g_InverseMatrix.m[0].x;
  *(int *)(iVar2 + 0x138c) = g_InverseMatrix.m[0].y;
  *(int *)(iVar2 + 0x13ac) = g_InverseMatrix.m[0].z;
  *(int *)(iVar2 + 0x13cc) = g_InverseMatrix.m[1].x;
  *(int *)(iVar2 + 0x13ec) = g_InverseMatrix.m[1].y;
  *(int *)(iVar2 + 0x140c) = g_InverseMatrix.m[1].z;
  *(int *)(iVar2 + 0x142c) = g_InverseMatrix.m[2].x;
  *(int *)(iVar2 + 0x144c) = g_InverseMatrix.m[2].y;
  *(int *)(iVar2 + 0x146c) = g_InverseMatrix.m[2].z;
  return;
}
