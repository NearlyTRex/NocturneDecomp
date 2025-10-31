// Name: core_skeledit.cpp_FUN_0058b200
// Address: 0058b200
// Address Range: [[0058b200, 0058b253]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058b200()
// Cross-references:
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c274 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 00592f90 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

undefined4 core_skeledit_cpp_FUN_0058b200(void)

{
  uint uVar1;
  uint *puVar2;
  uint *in_stack_0000000c;
  uint *in_stack_00000010;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x14);
  if (*in_stack_0000000c != *in_stack_00000010) {
    return 0;
  }
  uVar1 = *in_stack_0000000c ^ *in_stack_00000010;
  puVar2 = in_stack_0000000c;
  if (0 < (int)*in_stack_0000000c) {
    do {
      if (in_stack_00000010[9] != puVar2[9]) {
        return 0;
      }
      in_stack_00000010 = in_stack_00000010 + 0x21;
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 0x21;
    } while ((int)uVar1 < (int)*in_stack_0000000c);
  }
  return 1;
}


// Assembly code:
// 0058b200: PUSH 0x14
//   Label: core_skeledit.cpp_FUN_0058b200
// 0058b205: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058b20a: PUSH EBX
// 0058b20b: PUSH ESI
// 0058b20c: PUSH EDI
// 0058b20d: PUSH EBP
// 0058b20e: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0058b212: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0058b216: MOV ECX,dword ptr [EDX]
// 0058b218: MOV EAX,dword ptr [ESI]
// 0058b21a: CMP EAX,ECX
// 0058b21c: JNZ 0x0058b24d
//   XREF to: 0058b24d (CONDITIONAL_JUMP)
// 0058b21e: MOV EBX,dword ptr [ESI]
// 0058b220: XOR EAX,ECX
// 0058b222: TEST EBX,EBX
// 0058b224: JLE 0x0058b243
//   XREF to: 0058b243 (CONDITIONAL_JUMP)
// 0058b226: MOV ECX,ESI
// 0058b228: MOV EBP,dword ptr [EDX + 0x24]
//   Label: LAB_0058b228
// 0058b22b: CMP EBP,dword ptr [ECX + 0x24]
// 0058b22e: JNZ 0x0058b24d
//   XREF to: 0058b24d (CONDITIONAL_JUMP)
// 0058b230: ADD EDX,0x84
// 0058b236: INC EAX
// 0058b237: MOV EDI,dword ptr [ESI]
// 0058b239: ADD ECX,0x84
// 0058b23f: CMP EAX,EDI
// 0058b241: JL 0x0058b228
//   XREF to: 0058b228 (CONDITIONAL_JUMP)
// 0058b243: MOV EAX,0x1
//   Label: LAB_0058b243
// 0058b248: POP EBP
// 0058b249: POP EDI
// 0058b24a: POP ESI
// 0058b24b: POP EBX
// 0058b24c: RET
// 0058b24d: XOR EAX,EAX
//   Label: LAB_0058b24d
// 0058b24f: POP EBP
// 0058b250: POP EDI
// 0058b251: POP ESI
// 0058b252: POP EBX
// 0058b253: RET
