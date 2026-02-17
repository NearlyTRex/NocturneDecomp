// Name: core_morph.cpp_CMorph_setupModelFromPolygons_FUN_0052b3d0
// Address: 0052b3d0
// Address Range: [[0052b3d0, 0052b425]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_setupModelFromPolygons_FUN_0052b3d0(CMorph *this_ptr,int model_index)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_setupModelFromPolygons_FUN_0052b3d0(CMorph *this_ptr,int model_index)

{
  int in_stack_0000000c;
  CVector3i *in_stack_00000010;
  int in_stack_00000014;
  SMRGLPrimitiveQuad *in_stack_00000018;
  SMRGLTextureExtended *in_stack_0000001c;
  int *in_stack_00000020;
  
  core_morph_cpp_CMorphModel_free_FUN_0052a510(this_ptr->models + model_index);
  core_morph_cpp_CMorphModel_addPartFromPolygon_FUN_0052a580
            (this_ptr->models + model_index,in_stack_0000000c,in_stack_00000010,in_stack_00000014,
             in_stack_00000018,0x48,in_stack_0000001c,in_stack_00000020);
  return;
}
