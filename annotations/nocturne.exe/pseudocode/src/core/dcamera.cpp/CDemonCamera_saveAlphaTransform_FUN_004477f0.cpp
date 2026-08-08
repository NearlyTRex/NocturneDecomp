// Name: core_dcamera.cpp_CDemonCamera_saveAlphaTransform_FUN_004477f0
// Address: 004477f0
// Address Range: [[004477f0, 00447903]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_saveAlphaTransform_FUN_004477f0(CDemonCamera *this_ptr,int alpha_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_saveAlphaTransform_FUN_004477f0(CDemonCamera *this_ptr,int alpha_index)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  byte bVar4;
  int unaff_retaddr;
  uint auStack_1000 [1019];
  CVector3i CStack_14;
  
  bVar4 = 0;
  engine_matrix_c_getCameraOrigin_FUN_004ce760(&CStack_14);
  iVar1 = (int)this_ptr * 0xc + unaff_retaddr;
  iVar2 = (int)this_ptr * 4 + unaff_retaddr;
  puVar3 = (uint *)(iVar1 + 0x11f0 + (uint)bVar4 * -8);
  *(uint *)(iVar1 + 0x11ec) = 0x4477fc;
  *puVar3 = *(uint *)((int)&CStack_14 + (uint)bVar4 * -8);
  puVar3[(uint)bVar4 * -2 + 1] =
       *(uint *)((int)&CStack_14 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 4);
  *(int *)(iVar2 + 0x124c) = g_TransformMatrix.m[0].x;
  *(int *)(iVar2 + 0x126c) = g_TransformMatrix.m[0].y;
  *(int *)(iVar2 + 0x128c) = g_TransformMatrix.m[0].z;
  *(int *)(iVar2 + 0x12ac) = g_TransformMatrix.m[1].x;
  *(int *)(iVar2 + 0x12cc) = g_TransformMatrix.m[1].y;
  *(int *)(iVar2 + 0x12ec) = g_TransformMatrix.m[1].z;
  *(int *)(iVar2 + 0x130c) = g_TransformMatrix.m[2].x;
  *(int *)(iVar2 + 0x132c) = g_TransformMatrix.m[2].y;
  *(int *)(iVar2 + 0x134c) = g_TransformMatrix.m[2].z;
  *(uint *)(iVar2 + 0x136c) = _DAT_01cc5118;
  *(uint *)(iVar2 + 0x138c) = _DAT_01cc511c;
  *(uint *)(iVar2 + 0x13ac) = _DAT_01cc5120;
  *(uint *)(iVar2 + 0x13cc) = _DAT_01cc5124;
  *(uint *)(iVar2 + 0x13ec) = _DAT_01cc5128;
  *(uint *)(iVar2 + 0x140c) = _DAT_01cc512c;
  *(uint *)(iVar2 + 0x142c) = _DAT_01cc5130;
  *(uint *)(iVar2 + 0x144c) = _DAT_01cc5134;
  *(uint *)(iVar2 + 0x146c) = _DAT_01cc5138;
  return;
}
