// Name: core_doc.cpp_blendWeightCallback_FUN_00468a20
// Address: 00468a20
// Address Range: [[00468a20, 00468a5d]]
// Convention: __cdecl
// Signature: float __cdecl core_doc_cpp_blendWeightCallback_FUN_00468a20(int bone,int target,float weight,int distance,CDeformableModelInstance *instance)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_doc_cpp_blendWeightCallback_FUN_00468a20(int bone,int target,float weight,int distance,CDeformableModelInstance *instance)

{
  double dVar1;
  
  dVar1 = _DAT_005d9894;
  if ((0 < distance) && (dVar1 = _DAT_005d988c, distance != 1)) {
    return weight;
  }
  return weight * (float)dVar1;
}
