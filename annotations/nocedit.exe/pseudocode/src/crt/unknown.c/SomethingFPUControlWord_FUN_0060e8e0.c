// Name: crt_unknown.c_SomethingFPUControlWord_FUN_0060e8e0
// Address: 0060e8e0
// Address Range: [[0060e8e0, 0060e92d]]
// Convention: unknown
// Signature: undefined crt_unknown.c_SomethingFPUControlWord_FUN_0060e8e0()
// Cross-references:
//   crt_unknown.c_DoSomethingAndSetCtrlHandler_FUN_0060d068 (0060d068) at 0060d0bd [UNCONDITIONAL_CALL]
// Globals:
//   undefined1 DAT_00684acc

#include "nocturne.h"

/* Signature: undefined1 unk_SomethingFPUControlWord(undefined4 param_1, undefined4 param_2) */

uint crt_unknown_c_SomethingFPUControlWord_FUN_0060e8e0(void)

{
  ushort in_FPUControlWord;
  uint in_stack_00000004;
  uint in_stack_00000008;
  undefined4 local_c;
  
  local_c = 0;
  if ((DAT_00684acc != '\0') && (local_c = (uint)in_FPUControlWord, in_stack_00000008 != 0)) {
    local_c = ~in_stack_00000008 & local_c | in_stack_00000004 & in_stack_00000008 & 0xffff;
  }
  return local_c;
}


// Assembly code:
// 0060e8e0: PUSH EBX
//   Label: crt_unknown.c_SomethingFPUControlWord_FUN_0060e8e0
// 0060e8e1: PUSH EDI
// 0060e8e2: SUB ESP,0x4
// 0060e8e5: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0060e8e9: XOR EDX,EDX
// 0060e8eb: MOV AH,byte ptr [0x00684acc]
//   XREF to: 00684acc (READ)
// 0060e8f1: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0xc] (DATA)
// 0060e8f4: TEST AH,AH
// 0060e8f6: JZ 0x0060e922
//   XREF to: 0060e922 (CONDITIONAL_JUMP)
// 0060e8f8: MOV EDI,ESP
// 0060e8fa: FNSTCW word ptr SS:[EDI]
//   XREF to: Stack[-0xc] (DATA)
// 0060e8fd: WAIT
// 0060e8fe: TEST EBX,EBX
// 0060e900: JZ 0x0060e922
//   XREF to: 0060e922 (CONDITIONAL_JUMP)
// 0060e902: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 0060e905: MOV EAX,EBX
// 0060e907: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0060e90b: NOT EAX
// 0060e90d: AND EDI,EBX
// 0060e90f: AND EAX,ECX
// 0060e911: OR EAX,EDI
// 0060e913: MOV EDI,ESP
// 0060e915: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0xc] (DATA)
// 0060e918: FLDCW word ptr SS:[EDI]
//   XREF to: Stack[-0xc] (DATA)
// 0060e91b: WAIT
// 0060e91c: MOV EDI,ESP
// 0060e91e: FNSTCW word ptr SS:[EDI]
//   XREF to: Stack[-0xc] (DATA)
// 0060e921: WAIT
// 0060e922: XOR EAX,EAX
//   Label: LAB_0060e922
// 0060e924: MOV AX,word ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 0060e928: ADD ESP,0x4
// 0060e92b: POP EDI
// 0060e92c: POP EBX
// 0060e92d: RET
