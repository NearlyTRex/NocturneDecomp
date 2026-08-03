// Name: core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_004df2f0
// Address: 004df2f0
// Address Range: [[004df2f0, 004df45e]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_addPartFromPolygon_FUN_004df2f0(CMorphModel *this_ptr,int vertex_count,CVector3i *vertex_data,int poly_count,SMRGLHeaderPrimitive *poly_data,int poly_stride,SMRGLTextureLod *texture_list,int *texture_index_list)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_addPartFromPolygon_FUN_004df2f0(CMorphModel *this_ptr,int vertex_count,CVector3i *vertex_data,int poly_count,SMRGLHeaderPrimitive *poly_data,int poly_stride,SMRGLTextureLod *texture_list,int *texture_index_list)

{
  SMRGLHeaderBasic *pSVar1;
  int iVar2;
  SMorphPoint *pSVar3;
  SMRGLPrimitiveTriangle *pSVar4;
  int iVar5;
  SMRGLHeaderPrimitive *pSVar6;
  
  if (4 < this_ptr->part_count) {
    g_CHAR_PTR_01cc4800 = "..\\core\\morph.cpp";
    g_INT_01cc4804 = 0x77;
    core_main_c_FUN_004c8440("CMorphModel::addPart - too many parts!");
  }
  iVar5 = 0;
  pSVar6 = poly_data;
  for (iVar2 = poly_count; 0 < iVar2; iVar2 = iVar2 + -1) {
    pSVar1 = &pSVar6->base;
    pSVar6 = (SMRGLHeaderPrimitive *)((int)&(pSVar6->base).type + poly_stride);
    iVar5 = iVar5 + pSVar1->count + -2;
  }
  this_ptr->parts[this_ptr->part_count].start_vertex = this_ptr->num_points;
  this_ptr->parts[this_ptr->part_count].vertex_count = vertex_count;
  this_ptr->parts[this_ptr->part_count].start_face = this_ptr->num_faces;
  this_ptr->parts[this_ptr->part_count].face_count = iVar5;
  this_ptr->num_points = this_ptr->num_points + this_ptr->parts[this_ptr->part_count].vertex_count;
  this_ptr->num_faces = this_ptr->num_faces + this_ptr->parts[this_ptr->part_count].face_count;
  pSVar3 = (SMorphPoint *)realloc(this_ptr->points,this_ptr->num_points << 4);
  this_ptr->points = pSVar3;
  pSVar4 = (SMRGLPrimitiveTriangle *)realloc(this_ptr->faces,this_ptr->num_faces * 0x3c);
  this_ptr->faces = pSVar4;
  this_ptr->part_count = this_ptr->part_count + 1;
  if ((this_ptr->points == (SMorphPoint *)0x0) || (this_ptr->faces == (SMRGLPrimitiveTriangle *)0x0)
     ) {
    g_CHAR_PTR_01cc4800 = "..\\core\\morph.cpp";
    g_INT_01cc4804 = 0x90;
    core_main_c_FUN_004c8440("CMorphModel::setup - out of memory!");
  }
  if (vertex_data != (CVector3i *)0x0) {
    core_morph_cpp_CMorphModel_animateFromVertexBuffer_FUN_004df660
              (this_ptr,this_ptr->part_count + -1,vertex_data,0,vertex_count);
  }
  if (poly_data == (SMRGLHeaderPrimitive *)0x0) {
    return;
  }
  core_morph_cpp_CMorphModel_setFaceListFromPolygon_FUN_004df800
            (this_ptr,this_ptr->part_count + -1,poly_data,poly_stride,texture_list,
             texture_index_list,0,poly_count);
  return;
}
