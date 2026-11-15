// Name: core_cloth.cpp_CCloth_renderBone_FUN_005b0ce0
// Address: 005b0ce0
// Address Range: [[005b0ce0, 005b0ee9]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_renderBone_FUN_005b0ce0(CCloth *this_ptr,int bone_index,int show_labels)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_CCloth_renderBone_FUN_005b0ce0(CCloth *this_ptr,int bone_index,int show_labels)

{
  uint text_color;
  int unaff_EBP;
  int vertex_index1;
  int unaff_EDI;
  int iVar1;
  byte bVar2;
  float10 fVar3;
  float10 fVar4;
  int aiStackY_1034 [1006];
  CVector3f *euler_angles;
  CVector3f *translation;
  CVector3i CStack_58;
  CVector3f CStack_4c;
  CVector3f aCStack_40 [2];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar2 = 0;
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_004496e0
            (&this_ptr->collide_bones[bone_index].local_matrix,&CStack_4c);
  translation = &this_ptr->collide_bones[bone_index].position_offset;
  euler_angles = aCStack_40;
  aCStack_40[0].x = CStack_4c.x;
  *(uint *)((int)aCStack_40 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)aCStack_40 + (uint)bVar2 * -8 + -8);
  *(uint *)((int)aCStack_40 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)aCStack_40 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + -4);
  vertex_index1 = 0;
  iVar1 = 0;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,euler_angles,translation);
  iStack_1c = 0x270;
  iStack_20 = 0;
  iStack_24 = 0xc;
  iStack_18 = -1;
  do {
    iStack_14 = iStack_20;
    fVar3 = (float10)iStack_20 * (float10)_DAT_005f1107 * (float10)_DAT_005f110b;
    fVar4 = (float10)fsin(fVar3);
    fVar3 = (float10)fcos(fVar3);
    CStack_58.x = (int)ROUND((float)(fVar4 * (float10)this_ptr->collide_bones[bone_index].radius1) *
                             _DAT_006011a0);
    CStack_58.y = (int)ROUND((float)(fVar3 * (float10)this_ptr->collide_bones[bone_index].radius2) *
                             _DAT_006011a0);
    CStack_58.z = (int)ROUND(_DAT_006011a0 * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              ((SProjectedVertex *)
               ((int)&(DAT_0060b280->vertex_buffer_ptr->projected_vertex).transformed_x + iVar1),
               &CStack_58);
    iStack_28 = vertex_index1 + 0xd;
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              ((SProjectedVertex *)
               ((int)&(DAT_0060b280->vertex_buffer_ptr->projected_vertex).transformed_x + iStack_1c)
               ,(CVector3i *)&stack0xffffff90);
    if (0 < vertex_index1) {
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046b970
                (DAT_0060b280,vertex_index1,iStack_28);
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046b970
                (DAT_0060b280,vertex_index1,unaff_EDI);
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046b970
                (DAT_0060b280,unaff_EBP,unaff_EDI);
    }
    iVar1 = iVar1 + 0x30;
    vertex_index1 = vertex_index1 + 1;
    iStack_20 = iStack_20 + 2;
    iStack_24 = iStack_24 + 1;
    iStack_18 = iStack_18 + 1;
    iStack_1c = iStack_1c + 0x30;
  } while (vertex_index1 < 0xd);
  if (show_labels != 0) {
    text_color = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_0047f1c0
                           (g_CEditorToolsPtr);
    shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_0047fd00
              (g_CEditorToolsPtr,
               this_ptr->collide_bones[bone_index].radius1 +
               this_ptr->collide_bones[bone_index].radius2,text_color);
  }
  engine_drender_cpp_pop_FUN_0046b4a0();
  return;
}
