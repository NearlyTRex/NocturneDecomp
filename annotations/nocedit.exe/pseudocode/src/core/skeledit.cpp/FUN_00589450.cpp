// Name: core_skeledit.cpp_FUN_00589450
// Address: 00589450
// Address Range: [[00589450, 00589480]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_00589450()
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

void core_skeledit_cpp_FUN_00589450(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  SIZE_T n;
  byte bVar4;
  char *in_stack_0000000c;
  
  bVar4 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x1c);
  uVar3 = 0xffffffff;
  pcVar2 = in_stack_0000000c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + (uint)bVar4 * -2 + 1;
  } while (cVar1 != '\0');
  n = ~uVar3 - 1;
  if (0 < (int)n) {
    pcVar2 = in_stack_0000000c + n;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar2[-1] + 1)] & 2U) == 0) break;
      n = n - 1;
      pcVar2 = pcVar2 + -1;
    } while (0 < (int)n);
  }
  in_stack_0000000c[n] = '\0';
  while ((g_CharacterClassificationTable[(byte)(*in_stack_0000000c + 1)] & 2U) != 0) {
    crt_string_c_memmove_FUN_005fe5e0(in_stack_0000000c,in_stack_0000000c + 1,n);
    n = n - 1;
  }
  return;
}


// Assembly code:
// 00589450: PUSH 0x1c
//   Label: core_skeledit.cpp_FUN_00589450
// 00589455: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058945a: PUSH EBX
// 0058945b: PUSH ESI
// 0058945c: PUSH EDI
// 0058945d: MOV ESI,dword ptr [ESP + 0x10]
// 00589461: MOV EDI,ESI
// 00589463: SUB ECX,ECX
// 00589465: DEC ECX
// 00589466: XOR EAX,EAX
// 00589468: SCASB.REPNE ES:EDI
// 0058946a: NOT ECX
// 0058946c: DEC ECX
// 0058946d: MOV EBX,ECX
// 0058946f: TEST ECX,ECX
// 00589471: JLE 0x0058948a
//   XREF to: 0058948a (CONDITIONAL_JUMP)
// 00589473: LEA EAX,[ECX + ESI*0x1]
// 00589476: MOV DL,byte ptr [EAX + -0x1]
//   Label: LAB_00589476
// 00589479: INC DL
// 0058947b: AND EDX,0xff
