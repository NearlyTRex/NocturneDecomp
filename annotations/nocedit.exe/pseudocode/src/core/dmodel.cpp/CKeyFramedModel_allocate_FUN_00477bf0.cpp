// Name: core_dmodel.cpp_CKeyFramedModel_allocate_FUN_00477bf0
// Address: 00477bf0
// Address Range: [[00477bf0, 00477e56]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_allocate_FUN_00477bf0(CKeyFramedModel *this_ptr,int vertex_count,int poly_count,int texture_count,int part_count,int frame_count)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_allocate_FUN_00477bf0(CKeyFramedModel *this_ptr,int vertex_count,int poly_count,int texture_count,int part_count,int frame_count)

{
  float fVar1;
  CVector3i *pCVar2;
  SMRGLPrimitiveQuad *pSVar3;
  int *piVar4;
  CVector3f *pCVar5;
  CVector3f *pCVar6;
  
  core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(this_ptr);
  this_ptr->vertex_count = vertex_count;
  this_ptr->poly_count = poly_count;
  this_ptr->texture_count = texture_count;
  this_ptr->part_count = part_count;
  this_ptr->frame_count = frame_count;
  if (300 < this_ptr->texture_count) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0x2c0;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too many materials!");
  }
  if (0x1e < this_ptr->part_count) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0x2c1;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too many parts!");
  }
  pCVar2 = (CVector3i *)shape_memdbg_cpp_debugAllocTracked_FUN_0050f1f0
                     (this_ptr->frame_count * this_ptr->vertex_count * 0xc,
                      "..\\core\\dmodel.cpp",0x2c5);
  this_ptr->vertex_list = pCVar2;
  pSVar3 = (SMRGLPrimitiveQuad *)shape_memdbg_cpp_debugAllocTracked_FUN_0050f1f0
                     (this_ptr->poly_count * 0x48,"..\\core\\dmodel.cpp",0x2c6);
  this_ptr->poly_vert_list = pSVar3;
  piVar4 = (int *)shape_memdbg_cpp_debugAllocTracked_FUN_0050f1f0
                     (this_ptr->poly_count << 2,"..\\core\\dmodel.cpp",0x2c7);
  fVar1 = (float)this_ptr->frame_count;
  this_ptr->poly_texture_index_list = piVar4;
  pCVar5 = (CVector3f *)shape_memdbg_cpp_debugAllocTracked_FUN_0050f1f0
                     ((int)fVar1 * 0x18 + 4,"..\\core\\dmodel.cpp",0x2c8);
  pCVar6 = pCVar5;
  if (pCVar5 != (CVector3f *)0x0) {
    pCVar6 = (CVector3f *)&pCVar5->y;
    pCVar5->x = fVar1;
  }
  this_ptr->frame_bounds = pCVar6;
  if ((((this_ptr->vertex_list == (CVector3i *)0x0) ||
       ((0 < this_ptr->poly_count && (this_ptr->poly_vert_list == (SMRGLPrimitiveQuad *)0x0)))) ||
      ((0 < this_ptr->poly_count && (this_ptr->poly_texture_index_list == (int *)0x0)))) ||
     (this_ptr->frame_bounds == (CVector3f *)0x0)) {
    core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(this_ptr);
    g_CurrentLineNumber = 0x2d3;
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Out of memory in CKeyFramedModel::allocate.  frameCount=%d, vertexCount=%d, polyCount=%d",this_ptr->frame_count,this_ptr->vertex_count,
               this_ptr->poly_count);
    if (this_ptr->frame_count != 1) {
      return;
    }
  }
  else if (this_ptr->frame_count != 1) {
    return;
  }
  pCVar2 = (CVector3i *)shape_memdbg_cpp_debugAllocTracked_FUN_0050f1f0
                     (this_ptr->vertex_count * 0xc,"..\\core\\dmodel.cpp",0x2d9);
  this_ptr->vertex_normal_list = pCVar2;
  if (pCVar2 != (CVector3i *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\dmodel.cpp";
  g_CurrentLineNumber = 0x2db;
  core_main_c_displayErrorAndQuit_FUN_00506f10
            ("Out of memory for vertex normals in CKeyFramedModel::allocate.  vertexCount=%d",this_ptr->vertex_count);
  return;
}
