// Name: core_morph.cpp_CMorph_updateModelFromDeformable_FUN_005b7150
// Address: 005b7150
// Address Range: [[005b7150, 005b7180]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_updateModelFromDeformable_FUN_005b7150(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr,int part_index)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_updateModelFromDeformable_FUN_005b7150(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr,int part_index)

{
  core_morph_cpp_CMorphModel_animateFromDeformableModel_FUN_005b6510
            ((CMorphModel *)(this_ptr + model_index * 0x608),part_index,model_ptr);
  return;
}
