// Name: core_dmodel.cpp_CKeyFramedModel_allocate_FUN_004533e0
// Address: 004533e0
// Address Range: [[004533e0, 00453611]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_allocate_FUN_004533e0(CKeyFramedModel *this_ptr,int vertex_count,int poly_count,int texture_count,int part_count,int frame_count)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_allocate_FUN_004533e0(CKeyFramedModel *this_ptr,int vertex_count,int poly_count,int texture_count,int part_count,int frame_count)

{
  int iVar1;
  CVector3i *pCVar2;
  SMRGLPrimitiveQuad *pSVar3;
  int *piVar4;
  CBoundingBox3D *pCVar5;
  
  core_dmodel_cpp_CKeyFramedModel_FUN_00452f10(this_ptr);
  this_ptr->vertex_count = vertex_count;
  this_ptr->poly_count = poly_count;
  this_ptr->texture_count = texture_count;
  this_ptr->part_count = part_count;
  this_ptr->frame_count = frame_count;
  if (4 < this_ptr->texture_count) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 704;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Too many materials!");
  }
  if (0x1e < this_ptr->part_count) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 705;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Too many parts!");
  }
  pCVar2 = shape_memdbg_cpp_malloc_FUN_00564c18
                     (this_ptr->frame_count * this_ptr->vertex_count * 0xc);
  this_ptr->vertex_list = pCVar2;
  pSVar3 = shape_memdbg_cpp_malloc_FUN_00564c18(this_ptr->poly_count * 0x48);
  this_ptr->poly_vert_list = pSVar3;
  piVar4 = shape_memdbg_cpp_malloc_FUN_00564c18(this_ptr->poly_count << 2);
  iVar1 = this_ptr->frame_count;
  this_ptr->poly_texture_index_list = piVar4;
  piVar4 = shape_memdbg_cpp_malloc_FUN_00564c18(iVar1 * 0x18 + 4);
  pCVar5 = (CBoundingBox3D *)0x0;
  if (piVar4 != (int *)0x0) {
    pCVar5 = (CBoundingBox3D *)(piVar4 + 1);
    *piVar4 = iVar1;
  }
  this_ptr->frame_bounds = pCVar5;
  if ((((this_ptr->vertex_list == (CVector3i *)0x0) ||
       ((0 < this_ptr->poly_count && (this_ptr->poly_vert_list == (SMRGLPrimitiveQuad *)0x0)))) ||
      ((0 < this_ptr->poly_count && (this_ptr->poly_texture_index_list == (int *)0x0)))) ||
     (this_ptr->frame_bounds == (CBoundingBox3D *)0x0)) {
    core_dmodel_cpp_CKeyFramedModel_FUN_00452f10(this_ptr);
    g_CurrentLineNumber = 723;
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    core_main_c_displayErrorAndQuit_FUN_004c8440("Out of memory in CKeyFramedModel::allocate.  frameCount=%d, vertexCount=%d, polyCount=%d");
    if (this_ptr->frame_count != 1) {
      return;
    }
  }
  else if (this_ptr->frame_count != 1) {
    return;
  }
  pCVar2 = shape_memdbg_cpp_malloc_FUN_00564c18(this_ptr->vertex_count * 0xc);
  this_ptr->vertex_normal_list = pCVar2;
  if (pCVar2 != (CVector3i *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\dmodel.cpp";
  g_CurrentLineNumber = 731;
  core_main_c_displayErrorAndQuit_FUN_004c8440("Out of memory for vertex normals in CKeyFramedModel::allocate.  vertexCount=%d");
  return;
}
