// Name: crt_unknown.c_FUN_00607080
// Address: 00607080
// Address Range: [[00607080, 006070c5]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00607080()
// Cross-references:
//   crt_string.c_strtok_FUN_005fff50 (005fff50) at 005fff7b [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00665f28
// Function calls:
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

/* Signature: undefined1 FUN_00607080(undefined4 param_1, undefined4 param_2) */

void crt_unknown_c_FUN_00607080(void)

{
  byte bVar1;
  void *in_stack_00000004;
  byte *in_stack_00000008;
  
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004,0,0x20);
  bVar1 = *in_stack_00000008;
  if (bVar1 == 0) {
    return;
  }
  do {
    in_stack_00000008 = in_stack_00000008 + 1;
    *(byte *)(((int)(uint)bVar1 >> 3) + (int)in_stack_00000004) =
         *(byte *)(((int)(uint)bVar1 >> 3) + (int)in_stack_00000004) | (&DAT_00665f28)[bVar1 & 7];
    bVar1 = *in_stack_00000008;
  } while (bVar1 != 0);
  return;
}


// Assembly code:
// 00607080: PUSH EBX
//   Label: crt_unknown.c_FUN_00607080
// 00607081: PUSH ESI
// 00607082: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00607086: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0060708a: PUSH 0x20
// 0060708c: PUSH 0x0
// 0060708e: PUSH ESI
// 0060708f: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00607094: ADD ESP,0xc
// 00607097: MOV AL,byte ptr [EBX]
// 00607099: TEST AL,AL
// 0060709b: JNZ 0x006070a0
//   XREF to: 006070a0 (CONDITIONAL_JUMP)
// 0060709d: POP ESI
// 0060709e: POP EBX
// 0060709f: RET
// 006070a0: XOR EDX,EDX
//   Label: LAB_006070a0
// 006070a2: MOV DL,AL
// 006070a4: SAR EDX,0x3
// 006070a7: AND AL,0x7
// 006070a9: AND EAX,0xff
// 006070ae: MOV AL,byte ptr [EAX + 0x665f28]
//   XREF to: 00665f28 (DATA)
// 006070b4: MOV AH,byte ptr [EDX + ESI*0x1]
// 006070b7: OR AH,AL
// 006070b9: INC EBX
// 006070ba: MOV byte ptr [EDX + ESI*0x1],AH
// 006070bd: MOV AL,byte ptr [EBX]
// 006070bf: TEST AL,AL
// 006070c1: JNZ 0x006070a0
//   XREF to: 006070a0 (CONDITIONAL_JUMP)
// 006070c3: POP ESI
// 006070c4: POP EBX
// 006070c5: RET
