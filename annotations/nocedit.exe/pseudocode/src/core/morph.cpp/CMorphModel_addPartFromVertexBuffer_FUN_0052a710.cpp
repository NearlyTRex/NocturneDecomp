// Name: core_morph.cpp_CMorphModel_addPartFromVertexBuffer_FUN_0052a710
// Address: 0052a710
// Address Range: [[0052a710, 0052a869]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_addPartFromVertexBuffer_FUN_0052a710(CMorphModel *this_ptr,int vertex_count,CVector3i *skinned_vertices,int tri_count,SInputFace *tri_data,STextureSet *texture_sets,int *index_data)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_addPartFromVertexBuffer_FUN_0052a710(CMorphModel *this_ptr,int vertex_count,CVector3i *skinned_vertices,int tri_count,SInputFace *tri_data,STextureSet *texture_sets,int *index_data)

{
  SMorphPoint *pSVar1;
  SMRGLPrimitiveTriangle *pSVar2;
  
  if (4 < this_ptr->part_count) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 172;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::addPart - too many parts!");
  }
  this_ptr->parts[this_ptr->part_count].start_vertex = this_ptr->num_points;
  this_ptr->parts[this_ptr->part_count].vertex_count = vertex_count;
  this_ptr->parts[this_ptr->part_count].start_face = this_ptr->num_faces;
  this_ptr->parts[this_ptr->part_count].face_count = tri_count;
  this_ptr->num_points = this_ptr->num_points + this_ptr->parts[this_ptr->part_count].vertex_count;
  this_ptr->num_faces = this_ptr->num_faces + this_ptr->parts[this_ptr->part_count].face_count;
  pSVar1 = (SMorphPoint *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->points,this_ptr->num_points << 4,"..\\core\\morph.cpp",190);
  this_ptr->points = pSVar1;
  pSVar2 = (SMRGLPrimitiveTriangle *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->faces,this_ptr->num_faces * 0x3c,"..\\core\\morph.cpp",191);
  this_ptr->faces = pSVar2;
  this_ptr->part_count = this_ptr->part_count + 1;
  if ((this_ptr->points == (SMorphPoint *)0x0) || (this_ptr->faces == (SMRGLPrimitiveTriangle *)0x0)
     ) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 197;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::setup - out of memory!");
  }
  if (skinned_vertices != (CVector3i *)0x0) {
    core_morph_cpp_CMorphModel_animateFromVertexBuffer_FUN_0052a920
              (this_ptr,this_ptr->part_count + -1,skinned_vertices,0,vertex_count);
  }
  if (tri_data != (SInputFace *)0x0) {
    core_morph_cpp_CMorphModel_setFaceListFromTriangles_FUN_0052aca0
              (this_ptr,this_ptr->part_count + -1,tri_data,texture_sets,index_data,0,tri_count);
    return;
  }
  return;
}
