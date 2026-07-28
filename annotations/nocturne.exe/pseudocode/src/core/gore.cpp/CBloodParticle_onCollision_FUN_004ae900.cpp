// Name: core_gore.cpp_CBloodParticle_onCollision_FUN_004ae900
// Address: 004ae900
// Address Range: [[004ae900, 004ae954]]
// Convention: unknown
// Signature: undefined4 core_gore_cpp_CBloodParticle_onCollision_FUN_004ae900(CVector3f *param_1,CVector3f *param_2)

#include "nocturne.h"

uint core_gore_cpp_CBloodParticle_onCollision_FUN_004ae900(CVector3f *param_1,CVector3f *param_2)

{
  if ((float)0.90000000000000002 < param_2->y) {
    core_gore_cpp_CGore_createGroundBloodSplat_FUN_004b0190
              ((CGore *)INT_005b96c4,param_1,(int)param_1[4].z);
    return 1;
  }
  core_gore_cpp_CGore_createWallBloodSplat_FUN_004b01c0
            ((CGore *)INT_005b96c4,param_1,param_2,(int)param_1[4].z);
  return 1;
}
