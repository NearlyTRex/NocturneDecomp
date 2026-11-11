// Name: core_cloth.cpp_FUN_00441500
// Address: 00441500
// Address Range: [[00441500, 00441709]]
// Convention: unknown
// Signature: void core_cloth_cpp_FUN_00441500(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_cloth_cpp_FUN_00441500(int param_1,int param_2,int param_3)

{
  uint text_color;
  int unaff_EBP;
  int iVar1;
  int vertex_index1;
  int unaff_EDI;
  int iVar2;
  byte bVar3;
  float10 fVar4;
  float10 fVar5;
  float afStackY_1034 [1006];
  CVector3f *euler_angles;
  CVector3f *translation;
  CVector3i CStack_58;
  float fStack_4c;
  float afStack_48 [2];
  CVector3f aCStack_40 [2];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar3 = 0;
  iVar1 = param_1 + 0x37b50 + param_2 * 0xac;
  core_dirmat_cpp_FUN_0045f840(iVar1 + 0x78);
  translation = (CVector3f *)(iVar1 + 0xa0);
  euler_angles = aCStack_40;
  aCStack_40[0].x = fStack_4c;
  *(float *)((int)aCStack_40 + (uint)bVar3 * -8 + 4) = afStack_48[(uint)bVar3 * -2];
  *(float *)((int)aCStack_40 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       afStack_48[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  vertex_index1 = 0;
  iVar2 = 0;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,euler_angles,translation);
  iStack_1c = 0x270;
  iStack_20 = 0;
  iStack_24 = 0xc;
  iStack_18 = -1;
  do {
    iStack_14 = iStack_20;
    fVar4 = (float10)iStack_20 * (float10)_DAT_005d68d4 * (float10)_DAT_005d68d8;
    fVar5 = (float10)fsin(fVar4);
    fVar4 = (float10)fcos(fVar4);
    CStack_58.x = (int)ROUND((float)(fVar5 * (float10)*(float *)(iVar1 + 0x14)) * _DAT_005fd8d0);
    CStack_58.y = (int)ROUND((float)(fVar4 * (float10)*(float *)(iVar1 + 0x18)) * _DAT_005fd8d0);
    CStack_58.z = (int)ROUND(_DAT_005fd8d0 * 0.0);
    engine_special_cpp_FUN_00580173
              ((SProjectedVertex *)
               ((int)&(DAT_00612560->vertex_buffer_ptr->projected_vertex).transformed_x + iVar2),
               &CStack_58);
    iStack_28 = vertex_index1 + 0xd;
    engine_special_cpp_FUN_00580173
              ((SProjectedVertex *)
               ((int)&(DAT_00612560->vertex_buffer_ptr->projected_vertex).transformed_x + iStack_1c)
               ,(CVector3i *)&stack0xffffff90);
    if (0 < vertex_index1) {
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_00483e70
                (DAT_00612560,vertex_index1,iStack_28);
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_00483e70
                (DAT_00612560,vertex_index1,unaff_EDI);
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_00483e70
                (DAT_00612560,unaff_EBP,unaff_EDI);
    }
    iVar2 = iVar2 + 0x30;
    vertex_index1 = vertex_index1 + 1;
    iStack_20 = iStack_20 + 2;
    iStack_24 = iStack_24 + 1;
    iStack_18 = iStack_18 + 1;
    iStack_1c = iStack_1c + 0x30;
  } while (vertex_index1 < 0xd);
  if (param_3 != 0) {
    text_color = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_00497830
                           (g_CEditorToolsPtr);
    shape_edittool_cpp_FUN_00498360
              (g_CEditorToolsPtr,*(float *)(iVar1 + 0x14) + *(float *)(iVar1 + 0x18),text_color);
  }
  engine_matrix_c_pop_FUN_004839a0();
  return;
}
