// Name: core_skeleton.cpp_freeDeformableModels_FUN_005a1fd0
// Address: 005a1fd0
// Address Range: [[005a1fd0, 005a1fe4]]
// Convention: __cdecl
// Signature: CDeformableModel * __cdecl core_skeleton_cpp_freeDeformableModels_FUN_005a1fd0(CDeformableModel *objs)

#include "nocturne.h"

CDeformableModel * __cdecl
core_skeleton_cpp_freeDeformableModels_FUN_005a1fd0(CDeformableModel *objs)

{
  CDeformableModel *pCVar1;
  
  pCVar1 = __arrfini(objs,0x40,&g_CDeformableModelTypeInfo);
  return pCVar1;
}
