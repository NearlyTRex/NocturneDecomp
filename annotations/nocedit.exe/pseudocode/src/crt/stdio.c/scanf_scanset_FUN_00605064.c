// Name: crt_stdio.c_scanf_scanset_FUN_00605064
// Address: 00605064
// Address Range: [[00605064, 00605176]]
// Convention: __cdecl
// Signature: int crt_stdio.c_scanf_scanset_FUN_00605064(scanf_state_t * state, va_list_t * args, char * * format_ptr)
// Cross-references:
//   crt_stdio.c_doscan_FUN_00604950 (00604950) at 00604b64 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00685030
// Function calls:
//   crt_stdio.c_scanf_getc_wrapper_FUN_00604930
//   crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c
//   crt_unknown.c_FUN_0060501c

#include "nocturne.h"

int __cdecl
crt_stdio_c_scanf_scanset_FUN_00605064(scanf_state_t *state,va_list_t *args,char **format_ptr)

{
  byte bVar1;
  va_list_t pcVar2;
  char *pcVar3;
  uint character;
  BADSPACEBASE *in_ESP;
  uint unaff_EBP;
  int iVar4;
  undefined1 *unaff_ESI;
  int iVar5;
  undefined1 uStack_10;
  
  if (**format_ptr == '^') {
    *format_ptr = *format_ptr + 1;
  }
  pcVar3 = (char *)crt_unknown_c_FUN_0060501c();
  *format_ptr = pcVar3;
  bVar1 = state->flags;
  if ((bVar1 & 1) != 0) {
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 8) == 0) {
        pcVar2 = *args;
        *args = pcVar2 + 4;
        unaff_ESI = *(undefined1 **)pcVar2;
      }
      else {
        pcVar2 = *args;
        *args = pcVar2 + 4;
        unaff_ESI = *(undefined1 **)pcVar2;
      }
    }
    else {
      pcVar2 = *args;
      *args = pcVar2 + 8;
      unaff_ESI = (undefined1 *)*(undefined6 *)pcVar2;
    }
  }
  iVar5 = state->field_width;
  iVar4 = 0;
  do {
    if (iVar5 == 0) {
LAB_0060515e:
      if (((state->flags & 1) != 0) && (0 < iVar4)) {
        *unaff_ESI = 0;
      }
      return iVar4;
    }
    character = crt_stdio_c_scanf_getc_wrapper_FUN_00604930(state);
    if ((state->flags & 2) != 0) goto LAB_0060515e;
    if ((((&DAT_00685030)[character & 7] & (&stack0xffffffc4)[(int)character >> 3]) == 0) !=
        unaff_EBP) {
      crt_stdio_c_scanf_ungetc_wrapper_FUN_0060493c(character,state);
      goto LAB_0060515e;
    }
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + -1;
    if ((state->flags & 1) != 0) {
      uStack_10 = (undefined1)character;
      *unaff_ESI = uStack_10;
      unaff_ESI = unaff_ESI + 1;
    }
  } while( true );
}


// Assembly code:
// 00605064: PUSH EBX
//   Label: crt_stdio.c_scanf_scanset_FUN_00605064
// 00605065: PUSH ESI
// 00605066: PUSH EDI
// 00605067: PUSH ES
// 00605068: PUSH EBP
// 00605069: SUB ESP,0x2c
// 0060506c: MOV EBX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 00605070: MOV EDI,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x8] (READ)
// 00605074: MOV EBP,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0xc] (READ)
// 00605078: MOV EAX,dword ptr [EBP]
// 0060507b: CMP byte ptr [EAX],0x5e
// 0060507e: SETZ DL
// 00605081: AND EDX,0xff
// 00605087: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0060508b: JZ 0x00605091
//   XREF to: 00605091 (CONDITIONAL_JUMP)
// 0060508d: INC EAX
// 0060508e: MOV dword ptr [EBP],EAX
// 00605091: MOV EAX,ESP
//   Label: LAB_00605091
// 00605093: PUSH EAX
// 00605094: MOV EDX,dword ptr [EBP]
// 00605097: PUSH EDX
// 00605098: CALL crt_unknown.c_FUN_0060501c
//   XREF to: 0060501c (UNCONDITIONAL_CALL)
// 0060509d: MOV dword ptr [EBP],EAX
// 006050a0: MOV CL,byte ptr [EBX + 0x10]
// 006050a3: ADD ESP,0x8
// 006050a6: TEST CL,0x1
// 006050a9: JZ 0x006050df
//   XREF to: 006050df (CONDITIONAL_JUMP)
// 006050ab: TEST CL,0x4
// 006050ae: JZ 0x006050bc
//   XREF to: 006050bc (CONDITIONAL_JUMP)
// 006050b0: MOV EBP,dword ptr [EDI]
// 006050b2: ADD EBP,0x8
// 006050b5: MOV dword ptr [EDI],EBP
// 006050b7: LES ESI,[EBP + -0x8]
// 006050ba: JMP 0x006050df
//   XREF to: 006050df (UNCONDITIONAL_JUMP)
// 006050bc: TEST CL,0x8
//   Label: LAB_006050bc
// 006050bf: JZ 0x006050d1
//   XREF to: 006050d1 (CONDITIONAL_JUMP)
// 006050c1: MOV ESI,dword ptr [EDI]
// 006050c3: ADD ESI,0x4
// 006050c6: MOV AX,DS
// 006050c8: MOV dword ptr [EDI],ESI
// 006050ca: MOV ES,AX
// 006050cc: MOV ESI,dword ptr [ESI + -0x4]
// 006050cf: JMP 0x006050df
//   XREF to: 006050df (UNCONDITIONAL_JUMP)
// 006050d1: MOV ECX,dword ptr [EDI]
//   Label: LAB_006050d1
// 006050d3: ADD ECX,0x4
// 006050d6: MOV AX,DS
// 006050d8: MOV dword ptr [EDI],ECX
// 006050da: MOV ES,AX
// 006050dc: MOV ESI,dword ptr [ECX + -0x4]
// 006050df: MOV EDI,dword ptr [EBX + 0xc]
//   Label: LAB_006050df
// 006050e2: XOR EBP,EBP
// 006050e4: TEST EDI,EDI
// 006050e6: JBE 0x0060515e
//   XREF to: 0060515e (CONDITIONAL_JUMP)
// 006050ec: PUSH EBX
//   Label: LAB_006050ec
// 006050ed: CALL crt_stdio.c_scanf_getc_wrapper_FUN_00604930
//   XREF to: 00604930 (UNCONDITIONAL_CALL)
// 006050f2: ADD ESP,0x4
// 006050f5: MOV DL,byte ptr [EBX + 0x10]
// 006050f8: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 006050fc: TEST DL,0x2
// 006050ff: JNZ 0x0060515e
//   XREF to: 0060515e (CONDITIONAL_JUMP)
// 00605101: MOV EDX,EAX
// 00605103: SAR EDX,0x3
// 00605106: MOV DL,byte ptr [ESP + EDX*0x1]
// 00605109: AND EDX,0xff
// 0060510f: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00605113: MOV EDX,EAX
// 00605115: AND EDX,0x7
// 00605118: MOV DL,byte ptr [EDX + 0x685030]
//   XREF to: 00685030 (DATA)
// 0060511e: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 00605122: AND EDX,0xff
// 00605128: TEST EDX,ECX
// 0060512a: SETZ DL
// 0060512d: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 00605131: AND EDX,0xff
// 00605137: CMP EDX,ECX
// 00605139: JZ 0x00605147
//   XREF to: 00605147 (CONDITIONAL_JUMP)
// 0060513b: PUSH EBX
// 0060513c: PUSH EAX
// 0060513d: CALL crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c
//   XREF to: 0060493c (UNCONDITIONAL_CALL)
// 00605142: ADD ESP,0x8
// 00605145: JMP 0x0060515e
//   XREF to: 0060515e (UNCONDITIONAL_JUMP)
// 00605147: INC EBP
//   Label: LAB_00605147
// 00605148: MOV DH,byte ptr [EBX + 0x10]
// 0060514b: DEC EDI
// 0060514c: TEST DH,0x1
// 0060514f: JZ 0x0060515a
//   XREF to: 0060515a (CONDITIONAL_JUMP)
// 00605151: INC ESI
// 00605152: MOV AL,byte ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 00605156: MOV byte ptr ES:[ESI + -0x1],AL
// 0060515a: TEST EDI,EDI
//   Label: LAB_0060515a
// 0060515c: JA 0x006050ec
//   XREF to: 006050ec (CONDITIONAL_JUMP)
// 0060515e: TEST byte ptr [EBX + 0x10],0x1
//   Label: LAB_0060515e
// 00605162: JZ 0x0060516c
//   XREF to: 0060516c (CONDITIONAL_JUMP)
// 00605164: TEST EBP,EBP
// 00605166: JLE 0x0060516c
//   XREF to: 0060516c (CONDITIONAL_JUMP)
// 00605168: MOV byte ptr ES:[ESI],0x0
// 0060516c: MOV EAX,EBP
//   Label: LAB_0060516c
// 0060516e: ADD ESP,0x2c
// 00605171: POP EBP
// 00605172: POP ES
// 00605173: POP EDI
// 00605174: POP ESI
// 00605175: POP EBX
// 00605176: RET
