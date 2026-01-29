// Name: core_skeleton.cpp_freeDeformableModels_FUN_005a1fd0
// Address: 005a1fd0
// Address Range: [[005a1fd0, 005a1fe4]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_freeDeformableModels_FUN_005a1fd0(CDeformableModel **array)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_freeDeformableModels_FUN_005a1fd0(CDeformableModel **array)

{
  __arrfini(array,0x40,&g_CDeformableModelTypeInfo);
  return;
}
