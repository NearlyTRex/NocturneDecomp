// Name: core_morph.cpp_FUN_00523290
// Address: 00523290
// Address Range: [[00523290, 005232c0]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_FUN_00523290(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr,int part_index)

#include "nocturne.h"

void __cdecl core_morph_cpp_FUN_00523290(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr,int part_index)

{
  core_morph_cpp_FUN_00522650((CMorphModel *)(this_ptr + model_index * 0x608),part_index,model_ptr);
  return;
}
