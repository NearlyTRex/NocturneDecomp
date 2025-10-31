// Name: core_set.cpp_CDemonSet_FUN_00570ec0
// Address: 00570ec0
// Address Range: [[00570ec0, 00570f00]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_00570ec0(CDemonSet * this_ptr)
// Cross-references:
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055cd9e [UNCONDITIONAL_CALL]
// Function calls:
//   core_set.cpp_CDemonSet_FUN_00570ea0

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_00570ec0(CDemonSet *this_ptr)

{
  int iVar1;
  CDemonSet *pCVar2;
  int in_stack_00000008;
  
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->camera_count) {
    do {
      if (in_stack_00000008 == pCVar2->cameras[0].field8_0x14c) {
        core_set_cpp_CDemonSet_FUN_00570ea0(this_ptr);
      }
      iVar1 = iVar1 + 1;
      pCVar2 = (CDemonSet *)&pCVar2->cameras[0].field17_0x1a0;
    } while (iVar1 < this_ptr->camera_count);
  }
  return;
}


// Assembly code:
// 00570ec0: PUSH EBX
//   Label: core_set.cpp_CDemonSet_FUN_00570ec0
// 00570ec1: PUSH ESI
// 00570ec2: PUSH EDI
// 00570ec3: PUSH EBP
// 00570ec4: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00570ec8: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00570ecc: MOV EDX,dword ptr [EDI]
// 00570ece: XOR EBX,EBX
// 00570ed0: TEST EDX,EDX
// 00570ed2: JLE 0x00570eeb
//   XREF to: 00570eeb (CONDITIONAL_JUMP)
// 00570ed4: MOV ESI,EDI
// 00570ed6: CMP EBP,dword ptr [ESI + 0x150]
//   Label: LAB_00570ed6
// 00570edc: JZ 0x00570ef0
//   XREF to: 00570ef0 (CONDITIONAL_JUMP)
// 00570ede: INC EBX
//   Label: LAB_00570ede
// 00570edf: MOV ECX,dword ptr [EDI]
// 00570ee1: ADD ESI,0x1a4
// 00570ee7: CMP EBX,ECX
// 00570ee9: JL 0x00570ed6
//   XREF to: 00570ed6 (CONDITIONAL_JUMP)
// 00570eeb: POP EBP
//   Label: LAB_00570eeb
// 00570eec: POP EDI
// 00570eed: POP ESI
// 00570eee: POP EBX
// 00570eef: RET
// 00570ef0: MOV EDX,dword ptr [ESP + 0x1c]
//   Label: LAB_00570ef0
//   XREF to: Stack[0xc] (READ)
// 00570ef4: PUSH EDX
// 00570ef5: PUSH EBX
// 00570ef6: PUSH EDI
// 00570ef7: CALL core_set.cpp_CDemonSet_FUN_00570ea0
//   XREF to: 00570ea0 (UNCONDITIONAL_CALL)
// 00570efc: ADD ESP,0xc
// 00570eff: JMP 0x00570ede
//   XREF to: 00570ede (UNCONDITIONAL_JUMP)
