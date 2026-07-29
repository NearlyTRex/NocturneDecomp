// Name: core_morph.cpp_transformAndProjectVertex_FUN_0052cc10
// Address: 0052cc10
// Address Range: [[0052cc10, 0052cc38]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_transformAndProjectVertex_FUN_0052cc10(SProjectedVertex **vertex_buffer_ptr,int vertex_index,CVector3i *input)

#include "nocturne.h"

void __cdecl core_morph_cpp_transformAndProjectVertex_FUN_0052cc10(SProjectedVertex **vertex_buffer_ptr,int vertex_index,CVector3i *input)

{
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (*vertex_buffer_ptr + vertex_index * 2,input);
  return;
}
