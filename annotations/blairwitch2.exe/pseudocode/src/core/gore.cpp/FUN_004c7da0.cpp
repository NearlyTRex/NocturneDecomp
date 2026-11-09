// Name: core_gore.cpp_FUN_004c7da0
// Address: 004c7da0
// Address Range: [[004c7da0, 004c7df4]]
// Convention: unknown
// Signature: undefined4 core_gore_cpp_FUN_004c7da0(CVector3f *param_1,CVector3f *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_gore_cpp_FUN_004c7da0(CVector3f *param_1,CVector3f *param_2)

{
  if ((float)_DAT_005d9452 < *(float *)&param_2->field_0x4) {
    core_gore_cpp_CGore_createGroundBloodSplat_FUN_004c97e0
              (g_CGorePtr,param_1,*(EBloodType *)&param_1[5].field_0x4);
    return 1;
  }
  core_gore_cpp_CGore_createWallBloodSplat_FUN_004c9810
            (g_CGorePtr,param_1,param_2,*(EBloodType *)&param_1[5].field_0x4);
  return 1;
}
