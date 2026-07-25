// Name: FUN_0051dc30
// Address: 0051dc30
// Address Range: [[0051dc30, 0051dc81]]
// Convention: unknown
// Signature: void FUN_0051dc30(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_0051dc30(void)

{
  uint uVar1;
  int in_stack_00000004;
  uint uVar2;
  
  if (*(int *)(in_stack_00000004 + 0x2230) < 0) {
    _DAT_01cc4800 = "..\\core\\skeleton.cpp";
    _DAT_01cc4804 = 0xd33;
    FUN_004c8440("CDeformableModelInstance::outlinePolygons called but LOD is not set!");
  }
  uVar2 = *(uint *)(in_stack_00000004 + 0x2230);
  uVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020();
  core_skeleton_cpp_CDeformableModel_renderWireframe_FUN_00518ec0(uVar1,uVar2);
  return;
}
