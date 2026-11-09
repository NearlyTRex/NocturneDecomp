// Name: core_gore.cpp_FUN_004cd3f0
// Address: 004cd3f0
// Address Range: [[004cd3f0, 004cd440]]
// Convention: unknown
// Signature: undefined4 core_gore_cpp_FUN_004cd3f0(CVector3f *param_1,CVector3f *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_gore_cpp_FUN_004cd3f0(CVector3f *param_1,CVector3f *param_2)

{
  EBloodType blood_type;
  
  blood_type = *(EBloodType *)&param_1[5].field_0x4;
  if (blood_type != (BLOOD_TYPE_NONE|BLOOD_TYPE_ICHOR)) {
    if ((float)_DAT_005c4649 < *(float *)&param_2->field_0x4) {
      core_gore_cpp_FUN_004ce950(g_CGorePtr,param_1,blood_type);
      return 1;
    }
    core_gore_cpp_CGore_createWallBloodSplat_FUN_004ce980(g_CGorePtr,param_1,param_2,blood_type);
  }
  return 1;
}
