// Name: core_morph.cpp_CMorphModel_FUN_0052b350
// Address: 0052b350
// Address Range: [[0052b350, 0052b36f]]
// Convention: __cdecl
// Signature: void core_morph.cpp_CMorphModel_FUN_0052b350(CMorphModel * this_ptr)
// Cross-references:
//   core_morph.cpp_CMorphModel_FUN_0052b330 (0052b330) at 0052b335 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052bcb0 (0052bcb0) at 0052c4c9 [UNCONDITIONAL_CALL]
// Function calls:
//   core_morph.cpp_CMorphModel_free_FUN_0052a510

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_FUN_0052b350(CMorphModel *this_ptr)

{
  int in_stack_00000008;
  
  core_morph_cpp_CMorphModel_free_FUN_0052a510(this_ptr);
  core_morph_cpp_CMorphModel_free_FUN_0052a510((CMorphModel *)(in_stack_00000008 + 0x608));
  return;
}


// Assembly code:
// 0052b350: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_morph.cpp_CMorphModel_FUN_0052b350
//   XREF to: Stack[0x4] (READ)
// 0052b354: PUSH EDX
// 0052b355: CALL core_morph.cpp_CMorphModel_free_FUN_0052a510
//   XREF to: 0052a510 (UNCONDITIONAL_CALL)
// 0052b35a: ADD ESP,0x4
// 0052b35d: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0052b361: ADD EAX,0x608
// 0052b366: PUSH EAX
// 0052b367: CALL core_morph.cpp_CMorphModel_free_FUN_0052a510
//   XREF to: 0052a510 (UNCONDITIONAL_CALL)
// 0052b36c: ADD ESP,0x4
// 0052b36f: RET
