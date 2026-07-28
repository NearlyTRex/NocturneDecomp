// Name: core_script.cpp_getDeformableModelFilename_FUN_005058b0
// Address: 005058b0
// Address Range: [[005058b0, 005058b9]]
// Convention: __cdecl
// Signature: char * __cdecl core_script_cpp_getDeformableModelFilename_FUN_005058b0(CDeformableModel *model_ptr)

#include "nocturne.h"

char * __cdecl core_script_cpp_getDeformableModelFilename_FUN_005058b0(CDeformableModel *model_ptr)

{
  return model_ptr->texture_sets[1].textures[0x44].textures[0].texture_name + 8;
}
