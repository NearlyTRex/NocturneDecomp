// Name: core_dcube.cpp_CDemonCube_dtor_FUN_00456790
// Address: 00456790
// Address Range: [[00456790, 004567a1]]
// Convention: __cdecl
// Signature: CDemonCube * core_dcube.cpp_CDemonCube_dtor_FUN_00456790(CDemonCube * this_ptr)
// Function calls:
//   core_dcube.cpp_CDemonCube_freeMemory_FUN_004569b0

#include "nocturne.h"

CDemonCube * __cdecl core_dcube_cpp_CDemonCube_dtor_FUN_00456790(CDemonCube *this_ptr)

{
  core_dcube_cpp_CDemonCube_freeMemory_FUN_004569b0(this_ptr);
  return this_ptr;
}


// Assembly code:
// 00456790: PUSH EBX
//   Label: core_dcube.cpp_CDemonCube_dtor_FUN_00456790
// 00456791: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00456795: PUSH EBX
// 00456796: CALL core_dcube.cpp_CDemonCube_freeMemory_FUN_004569b0
//   XREF to: 004569b0 (UNCONDITIONAL_CALL)
// 0045679b: ADD ESP,0x4
// 0045679e: MOV EAX,EBX
// 004567a0: POP EBX
// 004567a1: RET
