// Name: core_cloth.cpp_CCloth_FUN_00437ab0
// Address: 00437ab0
// Address Range: [[00437ab0, 00437cbc]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_FUN_00437ab0(CCloth *this_ptr,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_CCloth_FUN_00437ab0(CCloth *this_ptr,int param_2,int param_3)

{
  uint text_color;
  int unaff_EBP;
  int vertex_index1;
  int unaff_EDI;
  float10 fVar1;
  float10 fVar2;
  CDemonRenderer *pCVar3;
  CVector3i local_4c;
  float local_40;
  float local_3c;
  float local_38;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  CDemonRenderer *local_14;
  
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0
            (&this_ptr->collide_bones[param_2].local_matrix,(CVector3f *)&stack0xffffffa8);
  vertex_index1 = 0;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (g_CDemonRenderer_PTR_005ae704,(CVector3f *)&stack0xffffffa8,
             &this_ptr->collide_bones[param_2].position_offset);
  local_20 = 0x270;
  local_1c = 0;
  pCVar3 = (CDemonRenderer *)0x0;
  local_24 = 0xc;
  local_18 = -1;
  do {
    fVar1 = (float10)(int)pCVar3 * (float10)3.1415926535000001 * (float10)0.083333333333333301;
    fVar2 = (float10)fsin(fVar1);
    fVar1 = (float10)fcos(fVar1);
    local_40 = (float)(fVar2 * (float10)this_ptr->collide_bones[param_2].radius1);
    local_38 = 0.0;
    local_3c = (float)(fVar1 * (float10)this_ptr->collide_bones[param_2].radius2);
    local_14 = pCVar3;
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex).
                      transformed_x + local_1c),(CVector3i *)&stack0xffffff9c);
    local_38 = this_ptr->collide_bones[param_2].child_distance;
    local_28 = vertex_index1 + 0xd;
    local_4c.x = (int)ROUND(local_40 * _DAT_0059b360);
    local_4c.y = (int)ROUND(local_3c * _DAT_0059b360);
    local_4c.z = (int)ROUND(local_38 * _DAT_0059b360);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex).
                      transformed_x + local_20),&local_4c);
    if (0 < vertex_index1) {
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0
                (g_CDemonRenderer_PTR_005ae704,vertex_index1,local_28);
      pCVar3 = g_CDemonRenderer_PTR_005ae704;
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0
                (g_CDemonRenderer_PTR_005ae704,vertex_index1,unaff_EDI);
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0
                (g_CDemonRenderer_PTR_005ae704,unaff_EBP,unaff_EDI);
    }
    vertex_index1 = vertex_index1 + 1;
    local_20 = local_20 + 0x30;
    local_1c = local_1c + 0x30;
    pCVar3 = (CDemonRenderer *)((int)&pCVar3->vertex_buffer_ptr + 2);
    local_24 = local_24 + 1;
    local_18 = local_18 + 1;
  } while (vertex_index1 < 0xd);
  if (param_3 != 0) {
    text_color = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_00472490
                           (g_CEditorTools_PTR_005b6d50);
    shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_00472de0
              (g_CEditorTools_PTR_005b6d50,
               this_ptr->collide_bones[param_2].radius1 + this_ptr->collide_bones[param_2].radius2,
               text_color);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(g_CDemonRenderer_PTR_005ae704);
  return;
}
