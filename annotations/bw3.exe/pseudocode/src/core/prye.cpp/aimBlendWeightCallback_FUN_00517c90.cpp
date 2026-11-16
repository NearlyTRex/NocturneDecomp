// Name: core_prye.cpp_aimBlendWeightCallback_FUN_00517c90
// Address: 00517c90
// Address Range: [[00517c90, 00517cdf]]
// Convention: __cdecl
// Signature: float __cdecl core_prye_cpp_aimBlendWeightCallback_FUN_00517c90(int bone,int target,float weight,int distance,CDeformableModelInstance *instance)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_prye_cpp_aimBlendWeightCallback_FUN_00517c90(int bone,int target,float weight,int distance,CDeformableModelInstance *instance)

{
  double dVar1;
  
  dVar1 = _DAT_005cca7f;
  if ((0 < distance) && (dVar1 = _DAT_005cca77, distance != 1)) {
    return weight;
  }
  return weight * _DAT_01ed36d8 * (float)dVar1;
}
