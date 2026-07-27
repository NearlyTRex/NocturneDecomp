// Name: core_skeleton.cpp_FUN_0051dc30
// Address: 0051dc30
// Address Range: [[0051dc30, 0051dc81]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_0051dc30(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_skeleton_cpp_FUN_0051dc30(void)

{
  uint uVar1;
  int in_stack_00000004;
  uint uVar2;
  
  if (*(int *)(in_stack_00000004 + 0x2230) < 0) {
    PTR_01cc4800 = "..\\core\\skeleton.cpp";
    INT_01cc4804 = 0xd33;
    core_main_c_FUN_004c8440("CDeformableModelInstance::outlinePolygons called but LOD is not set!");
  }
  uVar2 = *(uint *)(in_stack_00000004 + 0x2230);
  uVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020();
  core_skeleton_cpp_CDeformableModel_renderWireframe_FUN_00518ec0(uVar1,uVar2);
  return;
}
