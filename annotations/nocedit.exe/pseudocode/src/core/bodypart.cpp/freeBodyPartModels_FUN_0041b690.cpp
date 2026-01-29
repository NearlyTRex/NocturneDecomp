// Name: core_bodypart.cpp_freeBodyPartModels_FUN_0041b690
// Address: 0041b690
// Address Range: [[0041b690, 0041b6a4]]
// Convention: __cdecl
// Signature: int __cdecl core_bodypart_cpp_freeBodyPartModels_FUN_0041b690(SBodyPartModel **objs)

#include "nocturne.h"

int __cdecl core_bodypart_cpp_freeBodyPartModels_FUN_0041b690(SBodyPartModel **objs)

{
  int iVar1;
  
  iVar1 = __arrfini(objs,3,&g_SBodyPartModelTypeInfo);
  return iVar1;
}
