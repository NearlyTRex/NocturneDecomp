// Name: core_dmodel.cpp_CKeyFramedModel_allocate_FUN_00461300
// Address: 00461300
// Address Range: [[00461300, 00461524]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_allocate_FUN_00461300(CKeyFramedModel *this_ptr,int vertex_count,int poly_count,int texture_count,int part_count,int frame_count)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_allocate_FUN_00461300(CKeyFramedModel *this_ptr,int vertex_count,int poly_count,int texture_count,int part_count,int frame_count)

{
  CVector3i *pCVar1;
  SMRGLPrimitiveQuad *pSVar2;
  int *piVar3;
  CBoundingBox3D *pCVar4;
  
  core_dmodel_cpp_CKeyFramedModel_free_FUN_00460e10(this_ptr);
  this_ptr->vertex_count = vertex_count;
  this_ptr->poly_count = poly_count;
  this_ptr->texture_count = texture_count;
  this_ptr->part_count = part_count;
  this_ptr->frame_count = frame_count;
  if (4 < this_ptr->texture_count) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 704;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Too many materials!");
  }
  if (0x1e < this_ptr->part_count) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 705;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Too many parts!");
  }
  pCVar1 = operator_new_array
                     (this_ptr->frame_count * this_ptr->vertex_count * 0xc);
  this_ptr->vertex_list = pCVar1;
  pSVar2 = operator_new_array(this_ptr->poly_count * 0x48);
  this_ptr->poly_vert_list = pSVar2;
  piVar3 = operator_new_array(this_ptr->poly_count << 2);
  this_ptr->poly_texture_index_list = piVar3;
  pCVar4 = operator_new_array(this_ptr->frame_count * 0x18);
  this_ptr->frame_bounds = pCVar4;
  if ((((this_ptr->vertex_list == (CVector3i *)0x0) ||
       ((0 < this_ptr->poly_count && (this_ptr->poly_vert_list == (SMRGLPrimitiveQuad *)0x0)))) ||
      ((0 < this_ptr->poly_count && (this_ptr->poly_texture_index_list == (int *)0x0)))) ||
     (this_ptr->frame_bounds == (CBoundingBox3D *)0x0)) {
    core_dmodel_cpp_CKeyFramedModel_free_FUN_00460e10(this_ptr);
    g_CurrentLineNumber = 723;
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    core_main_c_displayErrorAndQuit_FUN_004e4330("Out of memory in CKeyFramedModel::allocate.  frameCount=%d, vertexCount=%d, polyCount=%d");
    if (this_ptr->frame_count != 1) {
      return;
    }
  }
  else if (this_ptr->frame_count != 1) {
    return;
  }
  pCVar1 = operator_new_array(this_ptr->vertex_count * 0xc);
  this_ptr->vertex_normal_list = pCVar1;
  if (pCVar1 != (CVector3i *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\dmodel.cpp";
  g_CurrentLineNumber = 731;
  core_main_c_displayErrorAndQuit_FUN_004e4330("Out of memory for vertex normals in CKeyFramedModel::allocate.  vertexCount=%d");
  return;
}
