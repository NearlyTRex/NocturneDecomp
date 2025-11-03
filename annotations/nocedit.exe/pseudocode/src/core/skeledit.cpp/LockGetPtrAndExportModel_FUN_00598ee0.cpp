// Name: core_skeledit.cpp_LockGetPtrAndExportModel_FUN_00598ee0
// Address: 00598ee0
// Address Range: [[00598ee0, 00598f0e]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_LockGetPtrAndExportModel_FUN_00598ee0()
// Cross-references:
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 005988f5 [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeledit.cpp_ExportModel_FUN_00595fc0
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

/* Signature: void core_skeledit.cpp_LockGetPtrAndExportModel(CDeformableModelInstance* param_1,
   undefined4 param_2, undefined4 param_3) */

void core_skeledit_cpp_LockGetPtrAndExportModel_FUN_00598ee0(void)

{
  CDeformableModelInstance *in_stack_0000000c;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x14);
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(in_stack_0000000c);
  core_skeledit_cpp_ExportModel_FUN_00595fc0();
  return;
}


// Assembly code:
// 00598ee0: PUSH 0x14
//   Label: core_skeledit.cpp_LockGetPtrAndExportModel_FUN_00598ee0
// 00598ee5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 00598eea: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 00598eee: LEA EAX,[EDX + 0xe80]
// 00598ef4: PUSH EAX
// 00598ef5: PUSH 0x0
// 00598ef7: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00598efb: PUSH ECX
// 00598efc: PUSH EDX
// 00598efd: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 00598f02: ADD ESP,0x4
// 00598f05: PUSH EAX
// 00598f06: CALL core_skeledit.cpp_ExportModel_FUN_00595fc0
//   XREF to: 00595fc0 (UNCONDITIONAL_CALL)
// 00598f0b: ADD ESP,0x10
// 00598f0e: RET
