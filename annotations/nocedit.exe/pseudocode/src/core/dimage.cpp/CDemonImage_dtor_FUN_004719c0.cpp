// Name: core_dimage.cpp_CDemonImage_dtor_FUN_004719c0
// Address: 004719c0
// Address Range: [[004719c0, 004719d1]]
// Convention: __cdecl
// Signature: CDemonImage * core_dimage.cpp_CDemonImage_dtor_FUN_004719c0(CDemonImage * this_ptr)
// Function calls:
//   core_dimage.cpp_CDemonImage_freeMemory_FUN_00471a40

#include "nocturne.h"

CDemonImage * __cdecl core_dimage_cpp_CDemonImage_dtor_FUN_004719c0(CDemonImage *this_ptr)

{
  core_dimage_cpp_CDemonImage_freeMemory_FUN_00471a40(this_ptr);
  return this_ptr;
}


// Assembly code:
// 004719c0: PUSH EBX
//   Label: core_dimage.cpp_CDemonImage_dtor_FUN_004719c0
// 004719c1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004719c5: PUSH EBX
// 004719c6: CALL core_dimage.cpp_CDemonImage_freeMemory_FUN_00471a40
//   XREF to: 00471a40 (UNCONDITIONAL_CALL)
// 004719cb: ADD ESP,0x4
// 004719ce: MOV EAX,EBX
// 004719d0: POP EBX
// 004719d1: RET
