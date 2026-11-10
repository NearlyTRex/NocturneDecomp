// Name: core_gore.cpp_FUN_004cd3f0
// Address: 004cd3f0
// Address Range: [[004cd3f0, 004cd440]]
// Convention: unknown
// Signature: undefined4 core_gore_cpp_FUN_004cd3f0(CVector3f *param_1,CVector3f *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_gore_cpp_FUN_004cd3f0(CVector3f *param_1,CVector3f *param_2)

{
  float blood_type;
  
  blood_type = param_1[5].y;
  if (blood_type != 4.2039e-45) {
    if ((float)_DAT_005c4649 < param_2->y) {
      core_gore_cpp_CGore_createGroundBloodSplat_FUN_004ce950
                (g_CGorePtr,param_1,(EBloodType)blood_type);
      return 1;
    }
    core_gore_cpp_CGore_createWallBloodSplat_FUN_004ce980
              (g_CGorePtr,param_1,param_2,(EBloodType)blood_type);
  }
  return 1;
}
