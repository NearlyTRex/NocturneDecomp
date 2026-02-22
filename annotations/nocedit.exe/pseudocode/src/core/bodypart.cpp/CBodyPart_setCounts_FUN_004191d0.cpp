// Name: core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0
// Address: 004191d0
// Address Range: [[004191d0, 0041933d]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0(CBodyPart *this_ptr,int vertex_count,int tri_count)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0(CBodyPart *this_ptr,int vertex_count,int tri_count)

{
  CVector3i *pCVar1;
  SMRGLPrimitiveTriangle *pSVar2;
  int *piVar3;
  
  this_ptr->vertex_count = vertex_count;
  this_ptr->tri_count = tri_count;
  pCVar1 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->vertices,this_ptr->vertex_count * 0xc,"..\\core\\bodypart.cpp",
                      0xa8);
  this_ptr->vertices = pCVar1;
  pCVar1 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->normals,this_ptr->vertex_count * 0xc,"..\\core\\bodypart.cpp",
                      0xa9);
  this_ptr->normals = pCVar1;
  pSVar2 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->faces,this_ptr->tri_count * 0x3c,"..\\core\\bodypart.cpp",0xab);
  this_ptr->faces = pSVar2;
  piVar3 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->face_texture_indices,this_ptr->tri_count << 2,
                      "..\\core\\bodypart.cpp",0xac);
  this_ptr->face_texture_indices = piVar3;
  if ((0 < this_ptr->vertex_count) &&
     ((this_ptr->vertices == (CVector3i *)0x0 || (this_ptr->normals == (CVector3i *)0x0)))) {
    g_CurrentFilename = "..\\core\\bodypart.cpp";
    g_CurrentLineNumber = 0xb2;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CBodyPart::setCounts - out of memory for vertices - vertexCount = %d",this_ptr->vertex_count);
  }
  if ((0 < this_ptr->tri_count) &&
     ((this_ptr->faces == (SMRGLPrimitiveTriangle *)0x0 ||
      (this_ptr->face_texture_indices == (int *)0x0)))) {
    g_CurrentFilename = "..\\core\\bodypart.cpp";
    g_CurrentLineNumber = 0xb7;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CBodyPart::setCounts - out of memory for triangles - triCount = %d",this_ptr->tri_count);
    return;
  }
  return;
}
