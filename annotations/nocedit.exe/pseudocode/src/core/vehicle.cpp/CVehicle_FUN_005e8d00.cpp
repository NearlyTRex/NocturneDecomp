// Name: core_vehicle.cpp_CVehicle_FUN_005e8d00
// Address: 005e8d00
// Address Range: [[005e8d00, 005e8d1c]]
// Convention: __cdecl
// Signature: void core_vehicle.cpp_CVehicle_FUN_005e8d00(CVehicle * this_ptr)
// Globals:
//   TerminatedCString s_data_s_00656fac
// Function calls:
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void __cdecl core_vehicle_cpp_CVehicle_FUN_005e8d00(CVehicle *this_ptr)

{
  FILE *in_stack_00000008;
  
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"data\\%s\n",this_ptr->field6_0x1034);
  return;
}


// Assembly code:
// 005e8d00: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_vehicle.cpp_CVehicle_FUN_005e8d00
//   XREF to: Stack[0x4] (READ)
// 005e8d04: ADD EAX,0x1034
// 005e8d09: PUSH EAX
// 005e8d0a: PUSH 0x656fac
//   XREF to: 00656fac (DATA)
// 005e8d0f: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005e8d13: PUSH EDX
// 005e8d14: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005e8d19: ADD ESP,0xc
// 005e8d1c: RET
