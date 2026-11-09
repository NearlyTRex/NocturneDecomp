// Name: core_skeleton.cpp_CDeformableModel_renderWireframe_FUN_00542410
// Address: 00542410
// Address Range: [[00542410, 005424a5]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_renderWireframe_FUN_00542410(CDeformableModel *this_ptr,int lod_level)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_renderWireframe_FUN_00542410(CDeformableModel *this_ptr,int lod_level)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  while( true ) {
    if (*(int *)(&this_ptr->field_0x54 + lod_level * 4) <= iVar3) break;
    iVar2 = *(int *)(&this_ptr->field_0x7c + lod_level * 4);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046b970
              (DAT_0060b280,(uint)*(ushort *)(iVar4 + iVar2),(uint)*(ushort *)(iVar4 + 2 + iVar2));
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046b970
              (DAT_0060b280,(uint)*(ushort *)(iVar4 + 2 + iVar2),
               (uint)*(ushort *)(iVar4 + 4 + iVar2));
    this_ptr = (CDeformableModel *)(uint)*(ushort *)(iVar4 + iVar2);
    iVar1 = iVar4 + 4;
    iVar4 = iVar4 + 0x12;
    iVar3 = iVar3 + 1;
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046b970
              (DAT_0060b280,(uint)*(ushort *)(iVar1 + iVar2),(int)this_ptr);
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(DAT_0060b280,1);
  return;
}
