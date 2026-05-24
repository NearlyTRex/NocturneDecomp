// Name: core_cloth.cpp_CCloth_renderBone_FUN_0043b7e0
// Address: 0043b7e0
// MANUAL RECONSTRUCTION
// Address Range: [[0043b7e0, 0043b9ec]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_renderBone_FUN_0043b7e0(CCloth *this_ptr,int bone_index,int show_labels)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_renderBone_FUN_0043b7e0(CCloth *this_ptr,int bone_index,int show_labels)

{
  float fVar3;
  float fVar4;
  uint text_color;
  int vertex_index1;
  float10 fVar1;
  float10 fVar2;
  float10 fVar5;
  int local_68;
  CVector3i local_64;
  CVector3f local_58;
  CVector3i local_4c;
  int local_24;
  int local_18;
  
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
            (&this_ptr->collide_bones[bone_index].local_matrix,&local_58);
  vertex_index1 = 0;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,&local_58,&this_ptr->collide_bones[bone_index].position_offset);
  local_68 = 0;
  local_24 = 0xc;
  local_18 = -1;
  do {
    fVar1 = (float10)local_68 * (float10)3.1415926535000001 * (float10)0.083333333333333301;
    fVar2 = (float10)fsin(fVar1);
    fVar5 = (float10)fcos(fVar1);
    fVar3 = (float)(fVar2 * (float10)this_ptr->collide_bones[bone_index].radius1);
    fVar4 = (float)(fVar5 * (float10)this_ptr->collide_bones[bone_index].radius2);
    local_64.x = (int)ROUND(fVar3 * 256.0f);
    local_64.y = (int)ROUND(fVar4 * 256.0f);
    local_64.z = (int)ROUND(256.0f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[vertex_index1].projected_vertex,&local_64);
    local_4c.x = (int)ROUND(fVar3 * 256.0f);
    local_4c.y = (int)ROUND(fVar4 * 256.0f);
    local_4c.z = (int)ROUND(this_ptr->collide_bones[bone_index].child_distance * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[vertex_index1 + 0xd].projected_vertex,&local_4c);
    if (0 < vertex_index1) {
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
                (g_CDemonRendererPtr2,vertex_index1,vertex_index1 + 0xd);
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
                (g_CDemonRendererPtr2,vertex_index1,local_18);
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
                (g_CDemonRendererPtr2,vertex_index1 + 0xd,local_24);
    }
    vertex_index1 = vertex_index1 + 1;
    local_68 = local_68 + 2;
    local_24 = local_24 + 1;
    local_18 = local_18 + 1;
  } while (vertex_index1 < 0xd);
  if (show_labels != 0) {
    text_color = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                           (g_CEditorToolsPtr);
    shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
              (g_CEditorToolsPtr,
               this_ptr->collide_bones[bone_index].radius1 +
               this_ptr->collide_bones[bone_index].radius2,text_color);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  return;
}
