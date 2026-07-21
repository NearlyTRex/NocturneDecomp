// Name: FUN_004f5f60
// Address: 004f5f60
// Address Range: [[004f5f60, 004f5fec]]
// Convention: unknown
// Signature: void FUN_004f5f60(int param_1)

#include "nocturne.h"

void FUN_004f5f60(int param_1)

{
  int iVar1;
  int iVar2;
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  if (*(char *)(param_1 + 0x2e8) != '\0') {
    core_course_cpp_CCourse_load_FUN_0043b690(param_1 + 0x308,param_1 + 0x2e8);
    *(uint *)(param_1 + 0x310) = 0;
  }
  core_platfrm_cpp_CPlatform_evaluatePosition_FUN_004f5ff0(param_1);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(param_1 + 0x150);
  iVar2 = param_1;
  do {
    while (iVar1 = *(int *)(iVar2 + 0x514), iVar1 != 0) {
      *(uint *)(iVar2 + 0x514) = 0;
      core_platfrm_cpp_CPlatform_attachActor_FUN_004f75c0(param_1,iVar1);
      iVar2 = iVar2 + 0x34;
      if (iVar2 == param_1 + 0x208) {
        return;
      }
    }
    iVar2 = iVar2 + 0x34;
  } while (iVar2 != param_1 + 0x208);
  return;
}
