// Name: core_stranger.cpp_CStranger_FUN_005c5e80
// Address: 005c5e80
// Address Range: [[005c5e80, 005c5ee0]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c5e80()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005c5b90 (005c5b90) at 005c5bb4 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00663744

#include "nocturne.h"

/* Signature: undefined1 actors_hero_stranger.cpp_CStranger_FUN_005c5e80(undefined4 param_1) */

undefined4 core_stranger_cpp_CStranger_FUN_005c5e80(void)

{
  undefined4 uVar1;
  uint uVar2;
  int in_stack_00000004;
  
  if (((*(int *)(in_stack_00000004 + 0x24f8) == 0) ||
      (uVar2 = (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0x24f8) + 0x154) + 0x6c))(),
      (uVar2 & 4) == 0)) &&
     ((*(int *)(in_stack_00000004 + 0x1fc2c) == 0 ||
      (*(int *)(*(int *)(in_stack_00000004 + 0x1fc2c) + 0x2e0) != 3)))) {
    return 0;
  }
  uVar1 = DAT_00663744;
  *(undefined4 *)(in_stack_00000004 + 0x1fc38) = 3;
  *(undefined4 *)(in_stack_00000004 + 0x1fbe4) = uVar1;
  return 1;
}


// Assembly code:
// 005c5e80: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005c5e80
// 005c5e81: PUSH ESI
// 005c5e82: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005c5e86: MOV EDX,dword ptr [EBX + 0x24f8]
// 005c5e8c: XOR ESI,ESI
// 005c5e8e: TEST EDX,EDX
// 005c5e90: JNZ 0x005c5ec3
//   XREF to: 005c5ec3 (CONDITIONAL_JUMP)
// 005c5e92: MOV ECX,dword ptr [EBX + 0x1fc2c]
//   Label: LAB_005c5e92
// 005c5e98: TEST ECX,ECX
// 005c5e9a: JZ 0x005c5ed8
//   XREF to: 005c5ed8 (CONDITIONAL_JUMP)
// 005c5e9c: CMP dword ptr [ECX + 0x2e0],0x3
// 005c5ea3: JNZ 0x005c5ed8
//   XREF to: 005c5ed8 (CONDITIONAL_JUMP)
// 005c5ea5: FLD float ptr [0x00663744]
//   Label: LAB_005c5ea5
//   XREF to: 00663744 (READ)
// 005c5eab: MOV dword ptr [EBX + 0x1fc38],0x3
// 005c5eb5: MOV EAX,0x1
// 005c5eba: FSTP float ptr [EBX + 0x1fbe4]
// 005c5ec0: POP ESI
// 005c5ec1: POP EBX
// 005c5ec2: RET
// 005c5ec3: MOV EAX,EDX
//   Label: LAB_005c5ec3
// 005c5ec5: PUSH EAX
// 005c5ec6: MOV EDX,dword ptr [EDX + 0x154]
// 005c5ecc: CALL dword ptr [EDX + 0x6c]
// 005c5ecf: ADD ESP,0x4
// 005c5ed2: TEST AL,0x4
// 005c5ed4: JZ 0x005c5e92
//   XREF to: 005c5e92 (CONDITIONAL_JUMP)
// 005c5ed6: JMP 0x005c5ea5
//   XREF to: 005c5ea5 (UNCONDITIONAL_JUMP)
// 005c5ed8: TEST ESI,ESI
//   Label: LAB_005c5ed8
// 005c5eda: JNZ 0x005c5ea5
//   XREF to: 005c5ea5 (CONDITIONAL_JUMP)
// 005c5edc: XOR EAX,EAX
// 005c5ede: POP ESI
// 005c5edf: POP EBX
// 005c5ee0: RET
