// Name: core_morph.cpp_CMorphModel_addPartFromVertexBuffer_FUN_004df460
// Address: 004df460
// Address Range: [[004df460, 004df5a3]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_addPartFromVertexBuffer_FUN_004df460(CMorphModel *this_ptr,int vertex_count,CVector3i *skinned_vertices,int tri_count,SInputFace *tri_data,STextureSet *texture_sets,int *index_data)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_addPartFromVertexBuffer_FUN_004df460(CMorphModel *this_ptr,int vertex_count,CVector3i *skinned_vertices,int tri_count,SInputFace *tri_data,STextureSet *texture_sets,int *index_data)

{
  SMorphPoint *pSVar1;
  SMRGLPrimitiveTriangle *pSVar2;
  
  if (4 < this_ptr->part_count) {
    g_CHAR_PTR_01cc4800 = "..\\core\\morph.cpp";
    g_INT_01cc4804 = 0xac;
    core_main_c_FUN_004c8440("CMorphModel::addPart - too many parts!");
  }
  this_ptr->parts[this_ptr->part_count].start_vertex = this_ptr->num_points;
  this_ptr->parts[this_ptr->part_count].vertex_count = vertex_count;
  this_ptr->parts[this_ptr->part_count].start_face = this_ptr->num_faces;
  this_ptr->parts[this_ptr->part_count].face_count = tri_count;
  this_ptr->num_points = this_ptr->num_points + this_ptr->parts[this_ptr->part_count].vertex_count;
  this_ptr->num_faces = this_ptr->num_faces + this_ptr->parts[this_ptr->part_count].face_count;
  pSVar1 = (SMorphPoint *)realloc(this_ptr->points,this_ptr->num_points << 4);
  this_ptr->points = pSVar1;
  pSVar2 = (SMRGLPrimitiveTriangle *)realloc(this_ptr->faces,this_ptr->num_faces * 0x3c);
  this_ptr->faces = pSVar2;
  this_ptr->part_count = this_ptr->part_count + 1;
  if ((this_ptr->points == (SMorphPoint *)0x0) || (this_ptr->faces == (SMRGLPrimitiveTriangle *)0x0)
     ) {
    g_CHAR_PTR_01cc4800 = "..\\core\\morph.cpp";
    g_INT_01cc4804 = 0xc5;
    core_main_c_FUN_004c8440("CMorphModel::setup - out of memory!");
  }
  if (skinned_vertices != (CVector3i *)0x0) {
    core_morph_cpp_CMorphModel_animateFromVertexBuffer_FUN_004df660
              (this_ptr,this_ptr->part_count + -1,skinned_vertices,0,vertex_count);
  }
  if (tri_data != (SInputFace *)0x0) {
    core_morph_cpp_CMorphModel_setFaceListFromTriangles_FUN_004df9e0
              (this_ptr,this_ptr->part_count + -1,tri_data,texture_sets,index_data,0,tri_count);
    return;
  }
  return;
}
