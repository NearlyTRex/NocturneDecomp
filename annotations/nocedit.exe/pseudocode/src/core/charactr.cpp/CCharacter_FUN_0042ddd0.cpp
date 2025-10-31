// Name: core_charactr.cpp_CCharacter_FUN_0042ddd0
// Address: 0042ddd0
// Address Range: [[0042ddd0, 0042ddde]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042ddd0(CCharacter * this_ptr)
// Cross-references:
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055dbe7 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042ddd0(CCharacter *this_ptr)

{
  undefined4 in_stack_00000008;
  
  *(undefined4 *)(this_ptr->field11_0x25a0 + 0x34) = in_stack_00000008;
  return;
}


// Assembly code:
// 0042ddd0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_charactr.cpp_CCharacter_FUN_0042ddd0
//   XREF to: Stack[0x4] (READ)
// 0042ddd4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0042ddd8: MOV dword ptr [EDX + 0x25d4],EAX
// 0042ddde: RET
