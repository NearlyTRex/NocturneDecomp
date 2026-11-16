// Name: core_prye.cpp_armBlendWeightCallback_FUN_00517ce0
// Address: 00517ce0
// Address Range: [[00517ce0, 00517d1d]]
// Convention: __cdecl
// Signature: float __cdecl core_prye_cpp_armBlendWeightCallback_FUN_00517ce0(int bone,int target,float weight,int distance,CDeformableModelInstance *instance)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_prye_cpp_armBlendWeightCallback_FUN_00517ce0(int bone,int target,float weight,int distance,CDeformableModelInstance *instance)

{
  double dVar1;
  
  dVar1 = _DAT_005cca8f;
  if ((0 < distance) && (dVar1 = _DAT_005cca87, distance != 1)) {
    return weight;
  }
  return weight * (float)dVar1;
}
