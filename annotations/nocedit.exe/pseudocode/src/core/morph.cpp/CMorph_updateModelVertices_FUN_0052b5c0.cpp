// Name: core_morph.cpp_CMorph_updateModelVertices_FUN_0052b5c0
// Address: 0052b5c0
// Address Range: [[0052b5c0, 0052b5f0]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_updateModelVertices_FUN_0052b5c0(CMorph *this_ptr,int model_index)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_updateModelVertices_FUN_0052b5c0(CMorph *this_ptr,int model_index)

{
  int unaff_EBX;
  int unaff_retaddr;
  CVector3i *in_stack_0000000c;
  int in_stack_00000010;
  
  core_morph_cpp_CMorphModel_animateFromPartVertexBuffer_FUN_0052aa00
            (this_ptr->models + model_index,in_stack_00000010,in_stack_0000000c,unaff_EBX,
             unaff_retaddr);
  return;
}
