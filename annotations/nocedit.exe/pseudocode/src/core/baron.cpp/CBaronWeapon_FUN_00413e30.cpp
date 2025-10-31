// Name: core_baron.cpp_CBaronWeapon_FUN_00413e30
// Address: 00413e30
// Address Range: [[00413e30, 00413e5f] [00413e61, 00413e89]]
// Convention: __cdecl
// Signature: int core_baron.cpp_CBaronWeapon_FUN_00413e30(CBaronWeapon * this_ptr)
// Globals:
//   void* switchdataD_00413e20 = 00413e65
// Function calls:
//   core_baron.cpp_FUN_00413f20
//   core_motion.cpp_CMotionController_FUN_0052dab0

#include "nocturne.h"

int __cdecl core_baron_cpp_CBaronWeapon_FUN_00413e30(CBaronWeapon *this_ptr)

{
  int iVar1;
  
  core_baron_cpp_FUN_00413f20();
  if (this_ptr->field1_0x578 != 0) {
    if (*(int *)(this_ptr->field1_0x578 + 0xbe38) != 0) {
      return 0;
    }
    iVar1 = core_motion_cpp_CMotionController_FUN_0052dab0();
    switch(*(undefined4 *)(iVar1 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
      return 1;
    }
  }
  return 0;
}


// Assembly code:
// 00413e30: PUSH EBX
//   Label: core_baron.cpp_CBaronWeapon_FUN_00413e30
// 00413e31: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00413e35: PUSH EBX
// 00413e36: CALL core_baron.cpp_FUN_00413f20
//   XREF to: 00413f20 (UNCONDITIONAL_CALL)
// 00413e3b: MOV EDX,dword ptr [EBX + 0x578]
// 00413e41: ADD ESP,0x4
// 00413e44: TEST EDX,EDX
// 00413e46: JZ 0x00413e61
//   XREF to: 00413e61 (CONDITIONAL_JUMP)
// 00413e48: MOV ECX,dword ptr [EDX + 0xbe38]
// 00413e4e: MOV EAX,EDX
// 00413e50: TEST ECX,ECX
// 00413e52: JZ 0x00413e6c
//   XREF to: 00413e6c (CONDITIONAL_JUMP)
// 00413e54: XOR EAX,EDX
// 00413e56: POP EBX
// 00413e57: LEA EAX,[EAX]
// 00413e5d: LEA EDX,[EDX]
// 00413e61: XOR EAX,EAX
//   Label: default
// 00413e63: POP EBX
// 00413e64: RET
// 00413e65: MOV EAX,0x1
//   Label: caseD_3
// 00413e6a: POP EBX
// 00413e6b: RET
// 00413e6c: LEA EAX,[EDX + 0x158]
//   Label: LAB_00413e6c
// 00413e72: PUSH EAX
// 00413e73: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00413e78: MOV EAX,dword ptr [EAX + 0x24]
// 00413e7b: ADD ESP,0x4
// 00413e7e: CMP EAX,0x3
// 00413e81: JA 0x00413e61
//   XREF to: 00413e61 (CONDITIONAL_JUMP)
// 00413e83: JMP dword ptr [EAX*0x4 + 0x413e20]
//   Label: switchD
//   XREF to: 00413e65 (COMPUTED_JUMP)
//   XREF to: 00413e20 (DATA)
