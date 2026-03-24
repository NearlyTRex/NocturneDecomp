// Name: core_dcamera.cpp_CDemonCamera_saveAlphaTransform_FUN_00453950
// Address: 00453950
// Address Range: [[00453950, 00453a63] [0060c7ab, 0060c7cb]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_saveAlphaTransform_FUN_00453950(CDemonCamera *this_ptr,int alpha_index)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_saveAlphaTransform_FUN_00453950(CDemonCamera *this_ptr,int alpha_index)

{
  int iVar1;
  int iVar2;
  int unaff_retaddr;
  CVector3i CStack_14;
  
  engine_matrix_c_getCameraOrigin_FUN_0050e2c0(&CStack_14);
  iVar1 = (int)this_ptr * 0xc + unaff_retaddr;
  iVar2 = (int)this_ptr * 4 + unaff_retaddr;
  *(uint *)(iVar1 + 0x11ec) = 0x45395c;
  *(int *)(iVar1 + 0x11f0) = CStack_14.x;
  *(int *)(iVar1 + 0x11f4) = CStack_14.y;
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
