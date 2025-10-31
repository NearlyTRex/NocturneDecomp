// Name: core_setdir.cpp_CZThumb_dtor_FUN_005748f0
// Address: 005748f0
// Address Range: [[005748f0, 00574901]]
// Convention: __cdecl
// Signature: CZThumb * core_setdir.cpp_CZThumb_dtor_FUN_005748f0(CZThumb * this_ptr)
// Function calls:
//   core_setdir.cpp_CZThumb_free_FUN_00574b50

#include "nocturne.h"

CZThumb * __cdecl core_setdir_cpp_CZThumb_dtor_FUN_005748f0(CZThumb *this_ptr)

{
  core_setdir_cpp_CZThumb_free_FUN_00574b50(this_ptr);
  return this_ptr;
}


// Assembly code:
// 005748f0: PUSH EBX
//   Label: core_setdir.cpp_CZThumb_dtor_FUN_005748f0
// 005748f1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005748f5: PUSH EBX
// 005748f6: CALL core_setdir.cpp_CZThumb_free_FUN_00574b50
//   XREF to: 00574b50 (UNCONDITIONAL_CALL)
// 005748fb: ADD ESP,0x4
// 005748fe: MOV EAX,EBX
// 00574900: POP EBX
// 00574901: RET
