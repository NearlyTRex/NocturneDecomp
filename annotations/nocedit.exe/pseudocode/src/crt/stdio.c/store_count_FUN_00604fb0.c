// Name: crt_stdio.c_store_count_FUN_00604fb0
// Address: 00604fb0
// Address Range: [[00604fb0, 00605019]]
// Convention: __cdecl
// Signature: void crt_stdio.c_store_count_FUN_00604fb0(scanf_state_t * state, va_list_t * args, int chars_consumed)
// Cross-references:
//   crt_stdio.c_doscan_FUN_00604950 (00604950) at 00604bf8 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
crt_stdio_c_store_count_FUN_00604fb0(scanf_state_t *state,va_list_t *args,int chars_consumed)

{
  byte bVar1;
  va_list_t pcVar2;
  int *piVar3;
  
  bVar1 = state->flags;
  if ((bVar1 & 1) != 0) {
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 8) == 0) {
        pcVar2 = *args;
        *args = pcVar2 + 4;
        piVar3 = *(int **)pcVar2;
      }
      else {
        pcVar2 = *args;
        *args = pcVar2 + 4;
        piVar3 = *(int **)pcVar2;
      }
    }
    else {
      pcVar2 = *args;
      *args = pcVar2 + 8;
      piVar3 = (int *)*(undefined6 *)pcVar2;
    }
    if ((state->flags & 0x10) != 0) {
      *(short *)piVar3 = (short)chars_consumed;
      return;
    }
    *piVar3 = chars_consumed;
  }
  return;
}


// Assembly code:
// 00604fb0: PUSH EBX
//   Label: crt_stdio.c_store_count_FUN_00604fb0
// 00604fb1: PUSH ESI
// 00604fb2: PUSH EDI
// 00604fb3: PUSH ES
// 00604fb4: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00604fb8: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00604fbc: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00604fc0: MOV CL,byte ptr [EDX + 0x10]
// 00604fc3: TEST CL,0x1
// 00604fc6: JZ 0x00605015
//   XREF to: 00605015 (CONDITIONAL_JUMP)
// 00604fc8: TEST CL,0x4
// 00604fcb: JZ 0x00604fd9
//   XREF to: 00604fd9 (CONDITIONAL_JUMP)
// 00604fcd: MOV EDI,dword ptr [EAX]
// 00604fcf: ADD EDI,0x8
// 00604fd2: MOV dword ptr [EAX],EDI
// 00604fd4: LES EAX,[EDI + -0x8]
// 00604fd7: JMP 0x00604ffe
//   XREF to: 00604ffe (UNCONDITIONAL_JUMP)
// 00604fd9: TEST CL,0x8
//   Label: LAB_00604fd9
// 00604fdc: JZ 0x00604fee
//   XREF to: 00604fee (CONDITIONAL_JUMP)
// 00604fde: MOV ESI,dword ptr [EAX]
// 00604fe0: ADD ESI,0x4
// 00604fe3: MOV CX,DS
// 00604fe5: MOV dword ptr [EAX],ESI
// 00604fe7: MOV ES,CX
// 00604fe9: MOV EAX,dword ptr [ESI + -0x4]
// 00604fec: JMP 0x00604ffe
//   XREF to: 00604ffe (UNCONDITIONAL_JUMP)
// 00604fee: MOV ECX,dword ptr [EAX]
//   Label: LAB_00604fee
// 00604ff0: ADD ECX,0x4
// 00604ff3: MOV dword ptr [EAX],ECX
// 00604ff5: MOV EAX,ECX
// 00604ff7: MOV CX,DS
// 00604ff9: MOV ES,CX
// 00604ffb: MOV EAX,dword ptr [EAX + -0x4]
// 00604ffe: MOV CH,byte ptr [EDX + 0x10]
//   Label: LAB_00604ffe
// 00605001: TEST CH,0x10
// 00605004: JZ 0x0060500f
//   XREF to: 0060500f (CONDITIONAL_JUMP)
// 00605006: MOV word ptr ES:[EAX],BX
// 0060500a: POP ES
// 0060500b: POP EDI
// 0060500c: POP ESI
// 0060500d: POP EBX
// 0060500e: RET
// 0060500f: TEST CH,0x20
//   Label: LAB_0060500f
// 00605012: MOV dword ptr ES:[EAX],EBX
// 00605015: POP ES
//   Label: LAB_00605015
// 00605016: POP EDI
// 00605017: POP ESI
// 00605018: POP EBX
// 00605019: RET
