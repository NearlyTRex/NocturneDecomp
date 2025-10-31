// Name: shape_superopt.cpp_FUN_005d30f0
// Address: 005d30f0
// Address Range: [[005d30f0, 005d3136]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d30f0()

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d30f0(undefined4 param_1, undefined4 param_2) */

undefined4 shape_superopt_cpp_FUN_005d30f0(void)

{
  int iVar1;
  uint uVar2;
  int in_stack_00000004;
  uint in_stack_00000008;
  
  uVar2 = 0;
  if (*(int *)(in_stack_00000004 + 8) != 0) {
    do {
      if ((*(uint *)(*(int *)(in_stack_00000004 + 0xc) + 0x60 + uVar2 * 0x68) & in_stack_00000008)
          == in_stack_00000008) {
        uVar2 = uVar2 - 1;
        iVar1 = (**(code **)(*(int *)(in_stack_00000004 + 0x18) + 0x40))();
        if (iVar1 == 0) {
          return 0;
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(in_stack_00000004 + 8));
  }
  return 1;
}


// Assembly code:
// 005d30f0: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005d30f0
// 005d30f1: PUSH ESI
// 005d30f2: PUSH EDI
// 005d30f3: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005d30f7: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005d30fb: MOV EDX,dword ptr [ESI + 0x8]
// 005d30fe: XOR EBX,EBX
// 005d3100: TEST EDX,EDX
// 005d3102: JBE 0x005d311a
//   XREF to: 005d311a (CONDITIONAL_JUMP)
// 005d3104: IMUL EAX,EBX,0x68
//   Label: LAB_005d3104
// 005d3107: MOV EDX,dword ptr [ESI + 0xc]
// 005d310a: MOV EAX,dword ptr [EDX + EAX*0x1 + 0x60]
// 005d310e: AND EAX,EDI
// 005d3110: CMP EAX,EDI
// 005d3112: JZ 0x005d3123
//   XREF to: 005d3123 (CONDITIONAL_JUMP)
// 005d3114: INC EBX
//   Label: LAB_005d3114
// 005d3115: CMP EBX,dword ptr [ESI + 0x8]
// 005d3118: JC 0x005d3104
//   XREF to: 005d3104 (CONDITIONAL_JUMP)
// 005d311a: MOV EAX,0x1
//   Label: LAB_005d311a
// 005d311f: POP EDI
// 005d3120: POP ESI
// 005d3121: POP EBX
// 005d3122: RET
// 005d3123: PUSH EBX
//   Label: LAB_005d3123
// 005d3124: MOV EAX,dword ptr [ESI + 0x18]
// 005d3127: PUSH ESI
// 005d3128: DEC EBX
// 005d3129: CALL dword ptr [EAX + 0x40]
// 005d312c: ADD ESP,0x8
// 005d312f: TEST EAX,EAX
// 005d3131: JNZ 0x005d3114
//   XREF to: 005d3114 (CONDITIONAL_JUMP)
// 005d3133: POP EDI
// 005d3134: POP ESI
// 005d3135: POP EBX
// 005d3136: RET
