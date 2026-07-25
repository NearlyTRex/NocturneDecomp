// Name: FUN_0051e860
// Address: 0051e860
// Address Range: [[0051e860, 0051e8b7]]
// Convention: unknown
// Signature: int FUN_0051e860(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

int FUN_0051e860(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  
  iVar1 = core_bodypart_cpp_createBodyPart_FUN_00415b30(param_3,param_4,param_5,param_6,0,0,0);
  core_skeleton_cpp_CDeformableModelInstance_dismemberPart_FUN_0051e8c0(param_1,iVar1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416d40(iVar1);
  return iVar1;
}
