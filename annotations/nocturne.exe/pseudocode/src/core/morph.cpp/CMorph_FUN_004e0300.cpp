// Name: core_morph.cpp_CMorph_FUN_004e0300
// Address: 004e0300
// Address Range: [[004e0300, 004e0330]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_FUN_004e0300(CMorph *this_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_FUN_004e0300(CMorph *this_ptr)

{
  int in_stack_00000008;
  CVector3i *in_stack_0000000c;
  int in_stack_00000010;
  
  core_morph_cpp_CMorphModel_animateFromPartVertexBuffer_FUN_004df740
            (this_ptr->models + in_stack_00000008,in_stack_00000010,in_stack_0000000c);
  return;
}
