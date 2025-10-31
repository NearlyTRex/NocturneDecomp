// Name: core_scat.cpp_FUN_00557df0
// Address: 00557df0
// Address Range: [[00557df0, 00557e9b]]
// Convention: unknown
// Signature: undefined core_scat.cpp_FUN_00557df0()
// Globals:
//   void* switchdataD_00557dc0 = 00557e46
//   double DOUBLE_0064141c = 0.950000000000000
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042a2c0
//   core_charactr.cpp_CCharacter_FUN_0042e840

#include "nocturne.h"

/* Signature: undefined1 actors_hero_scat.cpp_FUN_00557df0(undefined4 param_1) */

int core_scat_cpp_FUN_00557df0(void)

{
  int iVar1;
  float fVar2;
  CCharacter *in_stack_00000004;
  
  iVar1 = core_charactr_cpp_CCharacter_FUN_0042a2c0(in_stack_00000004);
  if (iVar1 != 0) {
    if (*(int *)(in_stack_00000004[2].cloth_data + 0x5508) != 0) {
      (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5508) + 0x154) + 8))();
      if (*(int *)(in_stack_00000004[2].cloth_data + 0x5508) != 0) {
        switch(*(undefined4 *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5508) + 0x2e0)) {
        default:
          break;
        case 8:
        }
      }
      fVar2 = (float)core_charactr_cpp_CCharacter_FUN_0042e840();
      if ((float)DOUBLE_0064141c < fVar2) {
        (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5508) + 0x154) + 0x104))
                  ();
        return 1;
      }
      return 1;
    }
    iVar1 = 1;
  }
  return iVar1;
}


// Assembly code:
// 00557df0: PUSH EBX
//   Label: core_scat.cpp_FUN_00557df0
// 00557df1: SUB ESP,0x4
// 00557df4: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00557df8: PUSH EBX
// 00557df9: CALL core_charactr.cpp_CCharacter_FUN_0042a2c0
//   XREF to: 0042a2c0 (UNCONDITIONAL_CALL)
// 00557dfe: ADD ESP,0x4
// 00557e01: TEST EAX,EAX
// 00557e03: JZ 0x00557e16
//   XREF to: 00557e16 (CONDITIONAL_JUMP)
// 00557e05: PUSH ESI
// 00557e06: MOV EDX,dword ptr [EBX + 0x1fbe8]
// 00557e0c: TEST EDX,EDX
// 00557e0e: JNZ 0x00557e1b
//   XREF to: 00557e1b (CONDITIONAL_JUMP)
// 00557e10: MOV EAX,0x1
// 00557e15: POP ESI
// 00557e16: ADD ESP,0x4
//   Label: LAB_00557e16
// 00557e19: POP EBX
// 00557e1a: RET
// 00557e1b: PUSH EDX
//   Label: LAB_00557e1b
// 00557e1c: MOV ESI,dword ptr [EDX + 0x154]
// 00557e22: CALL dword ptr [ESI + 0x8]
// 00557e25: ADD ESP,0x4
// 00557e28: MOV EAX,dword ptr [EBX + 0x1fbe8]
// 00557e2e: XOR ESI,ESI
// 00557e30: TEST EAX,EAX
// 00557e32: JZ 0x00557e4b
//   XREF to: 00557e4b (CONDITIONAL_JUMP)
// 00557e34: MOV EAX,dword ptr [EAX + 0x2e0]
// 00557e3a: CMP EAX,0x8
// 00557e3d: JA 0x00557e46
//   XREF to: 00557e46 (CONDITIONAL_JUMP)
// 00557e3f: JMP dword ptr [EAX*0x4 + 0x557dc0]
//   Label: switchD
//   XREF to: 00557e46 (COMPUTED_JUMP)
//   XREF to: 00557e89 (COMPUTED_JUMP)
//   XREF to: 00557dc0 (DATA)
// 00557e46: MOV EAX,0x2
//   Label: caseD_7
// 00557e4b: PUSH EAX
//   Label: LAB_00557e4b
// 00557e4c: PUSH EBX
// 00557e4d: CALL core_charactr.cpp_CCharacter_FUN_0042e840
//   XREF to: 0042e840 (UNCONDITIONAL_CALL)
// 00557e52: MOV dword ptr [ESP + 0xc],EAX
// 00557e56: FLD float ptr [ESP + 0xc]
// 00557e5a: ADD ESP,0x8
// 00557e5d: FCOMP double ptr [0x0064141c]
//   XREF to: 0064141c (READ)
// 00557e63: FNSTSW AX
// 00557e65: SAHF
// 00557e66: JBE 0x00557e8d
//   XREF to: 00557e8d (CONDITIONAL_JUMP)
// 00557e68: MOV EAX,dword ptr [EBX + 0x1fbe8]
//   Label: LAB_00557e68
// 00557e6e: PUSH EAX
// 00557e6f: MOV EBX,dword ptr [EAX + 0x154]
// 00557e75: CALL dword ptr [EBX + 0x104]
// 00557e7b: ADD ESP,0x4
// 00557e7e: MOV EAX,0x1
// 00557e83: POP ESI
// 00557e84: ADD ESP,0x4
// 00557e87: POP EBX
// 00557e88: RET
// 00557e89: XOR EAX,EAX
//   Label: caseD_8
// 00557e8b: JMP 0x00557e4b
//   XREF to: 00557e4b (UNCONDITIONAL_JUMP)
// 00557e8d: TEST ESI,ESI
//   Label: LAB_00557e8d
// 00557e8f: JNZ 0x00557e68
//   XREF to: 00557e68 (CONDITIONAL_JUMP)
// 00557e91: MOV EAX,0x1
// 00557e96: POP ESI
// 00557e97: ADD ESP,0x4
// 00557e9a: POP EBX
// 00557e9b: RET
