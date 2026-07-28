// Name: core_skeleton.cpp_CDeformableModel_renderWireframe_FUN_00518ec0
// Address: 00518ec0
// Address Range: [[00518ec0, 00518f55]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_renderWireframe_FUN_00518ec0(CDeformableModel *this_ptr,int lod_level)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_renderWireframe_FUN_00518ec0(CDeformableModel *this_ptr,int lod_level)

{
  ushort *puVar1;
  SInputFace *pSVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  while( true ) {
    if (this_ptr->tri_count[lod_level] <= iVar3) break;
    pSVar2 = this_ptr->tri_data_ptr[lod_level];
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0
              (DAT_005ae704,(uint)*(ushort *)((int)&(pSVar2->vertex_indices).vertex_index_0 + iVar4)
               ,(uint)*(ushort *)((int)&(pSVar2->vertex_indices).vertex_index_1 + iVar4));
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0
              (DAT_005ae704,(uint)*(ushort *)((int)&(pSVar2->vertex_indices).vertex_index_1 + iVar4)
               ,(uint)*(ushort *)((int)&(pSVar2->vertex_indices).vertex_index_2 + iVar4));
    this_ptr = (CDeformableModel *)
               (uint)*(ushort *)((int)&(pSVar2->vertex_indices).vertex_index_0 + iVar4);
    puVar1 = (ushort *)((int)&(pSVar2->vertex_indices).vertex_index_2 + iVar4);
    iVar4 = iVar4 + 0x12;
    iVar3 = iVar3 + 1;
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0
              (DAT_005ae704,(uint)*puVar1,(int)this_ptr);
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
  return;
}
