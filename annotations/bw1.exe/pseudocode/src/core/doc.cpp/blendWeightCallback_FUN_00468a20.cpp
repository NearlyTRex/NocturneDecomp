// Name: core_doc.cpp_blendWeightCallback_FUN_00468a20
// Address: 00468a20
// Address Range: [[00468a20, 00468a5d]]
// Convention: __cdecl
// Signature: float __cdecl core_doc_cpp_blendWeightCallback_FUN_00468a20(int bone,int target,float weight,int distance,CDeformableModelInstance *instance)

#include "nocturne.h"

float __cdecl core_doc_cpp_blendWeightCallback_FUN_00468a20(int bone,int target,float weight,int distance,CDeformableModelInstance *instance)

{
  double dVar1;
  
  dVar1 = 0.80000000000000004;
  if ((0 < distance) && (dVar1 = 0.69999999999999996, distance != 1)) {
    return weight;
  }
  return weight * (float)dVar1;
}
