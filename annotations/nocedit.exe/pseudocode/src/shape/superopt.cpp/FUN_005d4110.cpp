// Name: shape_superopt.cpp_FUN_005d4110
// Address: 005d4110
// Address Range: [[005d4110, 005d4155]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d4110()

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d4110(undefined4 param_1, undefined4 param_2) */

undefined4 shape_superopt_cpp_FUN_005d4110(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  
  uVar3 = 0;
  if (*(int *)(in_stack_00000004 + 8) != 0) {
    iVar2 = 0;
    do {
      iVar1 = (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0xc) + iVar2 + 100) + 0x54))();
      if (iVar1 == in_stack_00000008) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x68;
    } while (uVar3 < *(uint *)(in_stack_00000004 + 8));
  }
  return 0;
}


// Assembly code:
// 005d4110: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005d4110
// 005d4111: PUSH ESI
// 005d4112: PUSH EDI
// 005d4113: PUSH EBP
// 005d4114: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d4118: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d411c: MOV EDX,dword ptr [EDI + 0x8]
// 005d411f: XOR ESI,ESI
// 005d4121: TEST EDX,EDX
// 005d4123: JBE 0x005d4145
//   XREF to: 005d4145 (CONDITIONAL_JUMP)
// 005d4125: XOR EBX,EBX
// 005d4127: MOV EAX,dword ptr [EDI + 0xc]
//   Label: LAB_005d4127
// 005d412a: ADD EAX,EBX
// 005d412c: PUSH EAX
// 005d412d: MOV EDX,dword ptr [EAX + 0x64]
// 005d4130: CALL dword ptr [EDX + 0x54]
// 005d4133: ADD ESP,0x4
// 005d4136: CMP EAX,EBP
// 005d4138: JZ 0x005d414c
//   XREF to: 005d414c (CONDITIONAL_JUMP)
// 005d413a: INC ESI
// 005d413b: MOV ECX,dword ptr [EDI + 0x8]
// 005d413e: ADD EBX,0x68
// 005d4141: CMP ESI,ECX
// 005d4143: JC 0x005d4127
//   XREF to: 005d4127 (CONDITIONAL_JUMP)
// 005d4145: XOR EAX,EAX
//   Label: LAB_005d4145
// 005d4147: POP EBP
// 005d4148: POP EDI
// 005d4149: POP ESI
// 005d414a: POP EBX
// 005d414b: RET
// 005d414c: MOV EAX,0x1
//   Label: LAB_005d414c
// 005d4151: POP EBP
// 005d4152: POP EDI
// 005d4153: POP ESI
// 005d4154: POP EBX
// 005d4155: RET
