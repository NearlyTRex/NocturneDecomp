// Name: core_ground.cpp_CGround_dtor_FUN_004eeee0
// Address: 004eeee0
// Address Range: [[004eeee0, 004eeef1]]
// Convention: __cdecl
// Signature: CGround * core_ground.cpp_CGround_dtor_FUN_004eeee0(CGround * this_ptr)
// Function calls:
//   core_ground.cpp_CGround_free_FUN_004eefb0

#include "nocturne.h"

CGround * __cdecl core_ground_cpp_CGround_dtor_FUN_004eeee0(CGround *this_ptr)

{
  core_ground_cpp_CGround_free_FUN_004eefb0(this_ptr);
  return this_ptr;
}


// Assembly code:
// 004eeee0: PUSH EBX
//   Label: core_ground.cpp_CGround_dtor_FUN_004eeee0
// 004eeee1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004eeee5: PUSH EBX
// 004eeee6: CALL core_ground.cpp_CGround_free_FUN_004eefb0
//   XREF to: 004eefb0 (UNCONDITIONAL_CALL)
// 004eeeeb: ADD ESP,0x4
// 004eeeee: MOV EAX,EBX
// 004eeef0: POP EBX
// 004eeef1: RET
