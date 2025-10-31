// Name: core_dlight.cpp_resetRestoreMemoryAllocator_FUN_004729c0
// Address: 004729c0
// Address Range: [[004729c0, 004729c8]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_resetRestoreMemoryAllocator_FUN_004729c0(void)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056d2d0 (0056d2d0) at 0056d350 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_initScene_FUN_0056aa10 (0056aa10) at 0056aa3a [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056af30 [UNCONDITIONAL_CALL]
// Globals:
//   uint g_ShadowRestoreAllocator

#include "nocturne.h"

void __cdecl core_dlight_cpp_resetRestoreMemoryAllocator_FUN_004729c0(void)

{
  g_ShadowRestoreAllocator = 0;
  return;
}


// Assembly code:
// 004729c0: XOR EDX,EDX
//   Label: core_dlight.cpp_resetRestoreMemoryAllocator_FUN_004729c0
// 004729c2: MOV dword ptr [0x026a580c],EDX
//   XREF to: 026a580c (WRITE)
// 004729c8: RET
