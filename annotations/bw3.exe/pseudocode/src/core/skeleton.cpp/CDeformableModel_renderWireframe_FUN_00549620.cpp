// Name: core_skeleton.cpp_CDeformableModel_renderWireframe_FUN_00549620
// Address: 00549620
// Address Range: [[00549620, 005496b5]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_renderWireframe_FUN_00549620(CDeformableModel *this_ptr,int lod_level)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_renderWireframe_FUN_00549620(CDeformableModel *this_ptr,int lod_level)

{
  int iVar1;
  SInputFace *pSVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  while( true ) {
    if (this_ptr->tri_count[lod_level] <= iVar3) break;
    pSVar2 = this_ptr->tri_data_ptr[lod_level];
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046d550
              (DAT_005f2afc,(uint)*(ushort *)(pSVar2 + iVar4),(uint)*(ushort *)(pSVar2 + iVar4 + 2))
    ;
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046d550
              (DAT_005f2afc,(uint)*(ushort *)(pSVar2 + iVar4 + 2),
               (uint)*(ushort *)(pSVar2 + iVar4 + 4));
    this_ptr = (CDeformableModel *)(uint)*(ushort *)(pSVar2 + iVar4);
    iVar1 = iVar4 + 4;
    iVar4 = iVar4 + 0x12;
    iVar3 = iVar3 + 1;
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046d550
              (DAT_005f2afc,(uint)*(ushort *)(pSVar2 + iVar1),(int)this_ptr);
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(DAT_005f2afc,1);
  return;
}
