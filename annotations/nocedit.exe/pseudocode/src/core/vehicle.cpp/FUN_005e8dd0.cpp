// Name: core_vehicle.cpp_FUN_005e8dd0
// Address: 005e8dd0
// Address Range: [[005e8dd0, 005e8de4]]
// Convention: unknown
// Signature: undefined core_vehicle.cpp_FUN_005e8dd0()
// Cross-references:
//   core_vehicle.cpp_CVehicle_dtor_FUN_005e8d20 (005e8d20) at 005e8d45 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_CTireTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

/* Signature: undefined1 actors_other_vehicle.cpp_FUN_005e8dd0(undefined4 param_1) */

void core_vehicle_cpp_FUN_005e8dd0(void)

{
  void **in_stack_00000004;
  
  crt_memory_c_freeTypeArray_FUN_005feee9(in_stack_00000004,4,&g_CTireTypeInfo);
  return;
}


// Assembly code:
// 005e8dd0: PUSH 0x665150
//   Label: core_vehicle.cpp_FUN_005e8dd0
//   XREF to: 00665150 (DATA)
// 005e8dd5: PUSH 0x4
// 005e8dd7: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005e8ddb: PUSH EDX
// 005e8ddc: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 005e8de1: ADD ESP,0xc
// 005e8de4: RET
