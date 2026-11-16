// Name: core_doc.cpp_blendWeightCallback_FUN_0044fe40
// Address: 0044fe40
// Address Range: [[0044fe40, 0044fe7d]]
// Convention: __cdecl
// Signature: float __cdecl core_doc_cpp_blendWeightCallback_FUN_0044fe40(int bone,int target,float weight,int distance,CDeformableModelInstance *instance)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_doc_cpp_blendWeightCallback_FUN_0044fe40(int bone,int target,float weight,int distance,CDeformableModelInstance *instance)

{
  double dVar1;
  
  dVar1 = _DAT_005cfb77;
  if ((0 < distance) && (dVar1 = _DAT_005cfb6f, distance != 1)) {
    return weight;
  }
  return weight * (float)dVar1;
}
