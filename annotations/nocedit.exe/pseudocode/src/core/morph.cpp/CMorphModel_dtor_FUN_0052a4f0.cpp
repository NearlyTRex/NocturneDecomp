// Name: core_morph.cpp_CMorphModel_dtor_FUN_0052a4f0
// Address: 0052a4f0
// Address Range: [[0052a4f0, 0052a501]]
// Convention: __cdecl
// Signature: CMorphModel * core_morph.cpp_CMorphModel_dtor_FUN_0052a4f0(CMorphModel * this_ptr)
// Function calls:
//   core_morph.cpp_CMorphModel_free_FUN_0052a510

#include "nocturne.h"

CMorphModel * __cdecl core_morph_cpp_CMorphModel_dtor_FUN_0052a4f0(CMorphModel *this_ptr)

{
  core_morph_cpp_CMorphModel_free_FUN_0052a510(this_ptr);
  return this_ptr;
}


// Assembly code:
// 0052a4f0: PUSH EBX
//   Label: core_morph.cpp_CMorphModel_dtor_FUN_0052a4f0
// 0052a4f1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0052a4f5: PUSH EBX
// 0052a4f6: CALL core_morph.cpp_CMorphModel_free_FUN_0052a510
//   XREF to: 0052a510 (UNCONDITIONAL_CALL)
// 0052a4fb: ADD ESP,0x4
// 0052a4fe: MOV EAX,EBX
// 0052a500: POP EBX
// 0052a501: RET
