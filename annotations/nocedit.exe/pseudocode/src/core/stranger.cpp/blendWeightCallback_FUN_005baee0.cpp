// Name: core_stranger.cpp_blendWeightCallback_FUN_005baee0
// Address: 005baee0
// Address Range: [[005baee0, 005baf1d]]
// Convention: __cdecl
// Signature: float __cdecl core_stranger_cpp_blendWeightCallback_FUN_005baee0(int bone,int target,float weight,int distance,CDeformableModelInstance *instance)

#include "nocturne.h"

float __cdecl core_stranger_cpp_blendWeightCallback_FUN_005baee0(int bone,int target,float weight,int distance,CDeformableModelInstance *instance)

{
  double dVar1;
  
  dVar1 = 0.40000000000000002;
  if ((0 < distance) && (dVar1 = 0.69999999999999996, distance != 1)) {
    return weight;
  }
  return weight * (float)dVar1;
}
