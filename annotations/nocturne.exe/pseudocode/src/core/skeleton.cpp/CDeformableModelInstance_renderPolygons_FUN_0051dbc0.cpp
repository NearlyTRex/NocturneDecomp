// Name: core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_0051dbc0
// Address: 0051dbc0
// Address Range: [[0051dbc0, 0051dc2b]]
// Convention: unknown
// Signature: void core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_0051dbc0(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_0051dbc0(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x2230) < 0) {
    PTR_01cc4800 = "..\\core\\skeleton.cpp";
    INT_01cc4804 = 0xd23;
    core_main_c_FUN_004c8440("CDeformableModelInstance::renderPolygons called but LOD is not set!");
  }
  uVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
                    (param_1,*(uint *)(param_1 + 0x2230),param_1 + 0x2140,param_1 + 0x21b8,
                     param_2,param_3);
  core_skeleton_cpp_CDeformableModel_renderParts_FUN_00518510(uVar1);
  return;
}
