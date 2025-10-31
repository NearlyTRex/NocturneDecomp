// Name: shape_edittool.cpp_CEdCheck_dtor_FUN_004a6a40
// Address: 004a6a40
// Address Range: [[004a6a40, 004a6a51]]
// Convention: __cdecl
// Signature: CEdCheck * shape_edittool.cpp_CEdCheck_dtor_FUN_004a6a40(CEdCheck * this_ptr)
// Function calls:
//   shape_edittool.cpp_CEdCheck_clearActiveButtonIfMatch_FUN_004a6b50

#include "nocturne.h"

CEdCheck * __cdecl shape_edittool_cpp_CEdCheck_dtor_FUN_004a6a40(CEdCheck *this_ptr)

{
  shape_edittool_cpp_CEdCheck_clearActiveButtonIfMatch_FUN_004a6b50(this_ptr);
  return this_ptr;
}


// Assembly code:
// 004a6a40: PUSH EBX
//   Label: shape_edittool.cpp_CEdCheck_dtor_FUN_004a6a40
// 004a6a41: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004a6a45: PUSH EBX
// 004a6a46: CALL shape_edittool.cpp_CEdCheck_clearActiveButtonIfMatch_FUN_004a6b50
//   XREF to: 004a6b50 (UNCONDITIONAL_CALL)
// 004a6a4b: ADD ESP,0x4
// 004a6a4e: MOV EAX,EBX
// 004a6a50: POP EBX
// 004a6a51: RET
