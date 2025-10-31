// Name: shape_superopt.cpp_FUN_005d3590
// Address: 005d3590
// Address Range: [[005d3590, 005d35d3]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d3590()

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d3590(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void shape_superopt_cpp_FUN_005d3590(void)

{
  uint uVar1;
  uint uVar2;
  uint *in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  uVar1 = in_stack_00000004[1];
  uVar2 = 0;
  if (*in_stack_00000004 != 0) {
    do {
      if ((*(uint *)(uVar1 + 0x30) & in_stack_0000000c) == in_stack_0000000c) {
        *(uint *)(uVar1 + 0x34) = *(uint *)(uVar1 + 0x34) | in_stack_00000008;
      }
      uVar2 = uVar2 + 1;
      uVar1 = uVar1 + 0x38;
    } while (uVar2 < *in_stack_00000004);
  }
  (**(code **)(in_stack_00000004[6] + 0x8c))();
  return;
}


// Assembly code:
// 005d3590: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005d3590
// 005d3591: PUSH ESI
// 005d3592: PUSH EDI
// 005d3593: PUSH EBP
// 005d3594: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d3598: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d359c: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d35a0: MOV ECX,dword ptr [ESI]
// 005d35a2: MOV EAX,dword ptr [ESI + 0x4]
// 005d35a5: XOR EDX,EDX
// 005d35a7: TEST ECX,ECX
// 005d35a9: JBE 0x005d35c1
//   XREF to: 005d35c1 (CONDITIONAL_JUMP)
// 005d35ab: MOV ECX,dword ptr [EAX + 0x30]
//   Label: LAB_005d35ab
// 005d35ae: AND ECX,EBX
// 005d35b0: CMP ECX,EBX
// 005d35b2: JNZ 0x005d35b7
//   XREF to: 005d35b7 (CONDITIONAL_JUMP)
// 005d35b4: OR dword ptr [EAX + 0x34],EDI
// 005d35b7: INC EDX
//   Label: LAB_005d35b7
// 005d35b8: MOV EBP,dword ptr [ESI]
// 005d35ba: ADD EAX,0x38
// 005d35bd: CMP EDX,EBP
// 005d35bf: JC 0x005d35ab
//   XREF to: 005d35ab (CONDITIONAL_JUMP)
// 005d35c1: PUSH EDI
//   Label: LAB_005d35c1
// 005d35c2: MOV EAX,dword ptr [ESI + 0x18]
// 005d35c5: PUSH ESI
// 005d35c6: CALL dword ptr [EAX + 0x8c]
// 005d35cc: ADD ESP,0x8
// 005d35cf: POP EBP
// 005d35d0: POP EDI
// 005d35d1: POP ESI
// 005d35d2: POP EBX
// 005d35d3: RET
