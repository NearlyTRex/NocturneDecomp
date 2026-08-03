// Name: core_bodypart.cpp_CBodyPart_setCounts_FUN_00415ee0
// Address: 00415ee0
// Address Range: [[00415ee0, 00416025]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_setCounts_FUN_00415ee0(CBodyPart *this_ptr,int vertex_count,int tri_count)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_setCounts_FUN_00415ee0(CBodyPart *this_ptr,int vertex_count,int tri_count)

{
  CVector3i *pCVar1;
  SMRGLPrimitiveTriangle *pSVar2;
  int *piVar3;
  
  this_ptr->vertex_count = vertex_count;
  this_ptr->tri_count = tri_count;
  pCVar1 = (CVector3i *)realloc(this_ptr->vertices,this_ptr->vertex_count * 0xc);
  this_ptr->vertices = pCVar1;
  pCVar1 = (CVector3i *)realloc(this_ptr->normals,this_ptr->vertex_count * 0xc);
  this_ptr->normals = pCVar1;
  pSVar2 = (SMRGLPrimitiveTriangle *)realloc(this_ptr->faces,this_ptr->tri_count * 0x3c);
  this_ptr->faces = pSVar2;
  piVar3 = (int *)realloc
                     (this_ptr->face_texture_indices,this_ptr->tri_count << 2);
  this_ptr->face_texture_indices = piVar3;
  if ((0 < this_ptr->vertex_count) &&
     ((this_ptr->vertices == (CVector3i *)0x0 || (this_ptr->normals == (CVector3i *)0x0)))) {
    g_CHAR_PTR_01cc4800 = "..\\core\\bodypart.cpp";
    g_INT_01cc4804 = 0xb2;
    core_main_c_FUN_004c8440("CBodyPart::setCounts - out of memory for vertices - vertexCount = %d",this_ptr->vertex_count);
  }
  if ((0 < this_ptr->tri_count) &&
     ((this_ptr->faces == (SMRGLPrimitiveTriangle *)0x0 ||
      (this_ptr->face_texture_indices == (int *)0x0)))) {
    g_CHAR_PTR_01cc4800 = "..\\core\\bodypart.cpp";
    g_INT_01cc4804 = 0xb7;
    core_main_c_FUN_004c8440("CBodyPart::setCounts - out of memory for triangles - triCount = %d",this_ptr->tri_count);
    return;
  }
  return;
}
