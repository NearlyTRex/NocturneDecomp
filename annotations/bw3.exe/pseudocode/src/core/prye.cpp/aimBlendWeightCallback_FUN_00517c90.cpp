// Name: core_prye.cpp_aimBlendWeightCallback_FUN_00517c90
// Address: 00517c90
// Address Range: [[00517c90, 00517cdf]]
// Convention: __cdecl
// Signature: float __cdecl core_prye_cpp_aimBlendWeightCallback_FUN_00517c90(int bone,int target,float weight,int distance,CDeformableModelInstance *instance)

#include "nocturne.h"

float __cdecl core_prye_cpp_aimBlendWeightCallback_FUN_00517c90(int bone,int target,float weight,int distance,CDeformableModelInstance *instance)

{
  double dVar1;
  
  dVar1 = 0.90000000000000002;
  if ((0 < distance) && (dVar1 = 0.94999999999999996, distance != 1)) {
    return weight;
  }
  return weight * g_FLOAT_01ed36d8 * (float)dVar1;
}
