// Name: shape_superopt.cpp_FUN_005d3e80
// Address: 005d3e80
// Address Range: [[005d3e80, 005d3ecf]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d3e80()

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d3e80(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void shape_superopt_cpp_FUN_005d3e80(void)

{
  int iVar1;
  uint uVar2;
  int in_stack_00000004;
  uint in_stack_0000000c;
  
  iVar1 = *(int *)(in_stack_00000004 + 0xc);
  uVar2 = 0;
  if (*(int *)(in_stack_00000004 + 8) != 0) {
    do {
      while ((*(uint *)(iVar1 + 0x60) & in_stack_0000000c) == in_stack_0000000c) {
        (**(code **)(*(int *)(iVar1 + 100) + 0x4c))();
        uVar2 = uVar2 + 1;
        iVar1 = iVar1 + 0x68;
        if (*(uint *)(in_stack_00000004 + 8) <= uVar2) {
          return;
        }
      }
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x68;
    } while (uVar2 < *(uint *)(in_stack_00000004 + 8));
  }
  return;
}


// Assembly code:
// 005d3e80: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005d3e80
// 005d3e81: PUSH ESI
// 005d3e82: PUSH EDI
// 005d3e83: PUSH EBP
// 005d3e84: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d3e88: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d3e8c: MOV EDX,dword ptr [EBP + 0x8]
// 005d3e8f: MOV EBX,dword ptr [EBP + 0xc]
// 005d3e92: XOR ESI,ESI
// 005d3e94: TEST EDX,EDX
// 005d3e96: JBE 0x005d3eac
//   XREF to: 005d3eac (CONDITIONAL_JUMP)
// 005d3e98: MOV EAX,dword ptr [EBX + 0x60]
//   Label: LAB_005d3e98
// 005d3e9b: AND EAX,EDI
// 005d3e9d: CMP EAX,EDI
// 005d3e9f: JZ 0x005d3eb1
//   XREF to: 005d3eb1 (CONDITIONAL_JUMP)
// 005d3ea1: INC ESI
// 005d3ea2: MOV ECX,dword ptr [EBP + 0x8]
// 005d3ea5: ADD EBX,0x68
// 005d3ea8: CMP ESI,ECX
// 005d3eaa: JC 0x005d3e98
//   XREF to: 005d3e98 (CONDITIONAL_JUMP)
// 005d3eac: POP EBP
//   Label: LAB_005d3eac
// 005d3ead: POP EDI
// 005d3eae: POP ESI
// 005d3eaf: POP EBX
// 005d3eb0: RET
// 005d3eb1: MOV EDX,dword ptr [ESP + 0x18]
//   Label: LAB_005d3eb1
//   XREF to: Stack[0x8] (READ)
// 005d3eb5: PUSH EDX
// 005d3eb6: MOV EAX,dword ptr [EBX + 0x64]
// 005d3eb9: PUSH EBX
// 005d3eba: CALL dword ptr [EAX + 0x4c]
// 005d3ebd: ADD ESP,0x8
// 005d3ec0: INC ESI
// 005d3ec1: MOV ECX,dword ptr [EBP + 0x8]
// 005d3ec4: ADD EBX,0x68
// 005d3ec7: CMP ESI,ECX
// 005d3ec9: JC 0x005d3e98
//   XREF to: 005d3e98 (CONDITIONAL_JUMP)
// 005d3ecb: POP EBP
// 005d3ecc: POP EDI
// 005d3ecd: POP ESI
// 005d3ece: POP EBX
// 005d3ecf: RET
