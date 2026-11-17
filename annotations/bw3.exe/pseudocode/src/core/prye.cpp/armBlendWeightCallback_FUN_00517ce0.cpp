// Name: core_prye.cpp_armBlendWeightCallback_FUN_00517ce0
// Address: 00517ce0
// Address Range: [[00517ce0, 00517d1d]]
// Convention: __cdecl
// Signature: float __cdecl core_prye_cpp_armBlendWeightCallback_FUN_00517ce0(int bone,int target,float weight,int distance,CDeformableModelInstance *instance)

#include "nocturne.h"

float __cdecl core_prye_cpp_armBlendWeightCallback_FUN_00517ce0(int bone,int target,float weight,int distance,CDeformableModelInstance *instance)

{
  double dVar1;
  
  dVar1 = 0.80000000000000004;
  if ((0 < distance) && (dVar1 = 0.69999999999999996, distance != 1)) {
    return weight;
  }
  return weight * (float)dVar1;
}
