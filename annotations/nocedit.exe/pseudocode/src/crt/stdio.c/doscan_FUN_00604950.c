// Name: crt_stdio.c_doscan_FUN_00604950
// Address: 00604950
// Address Range: [[00604950, 00604c1a]]
// Convention: __cdecl
// Signature: int crt_stdio.c_doscan_FUN_00604950(scanf_state_t * state, char * * format_ptr, va_list_t * args)
// Cross-references:
//   crt_stdio.c_vfscanf_FUN_005fe738 (005fe738) at 005fe79c [UNCONDITIONAL_CALL]
//   crt_stdio.c_vsscanf_FUN_00600100 (00600100) at 0060012e [UNCONDITIONAL_CALL]
// Globals:
//   char[256] g_CharacterClassificationTable
// Function calls:
//   crt_stdio.c_parse_format_spec_FUN_00604c1c
//   crt_stdio.c_scanf_char_FUN_00604d54
//   crt_stdio.c_scanf_float_FUN_00605178
//   crt_stdio.c_scanf_getc_wrapper_FUN_00604930
//   crt_stdio.c_scanf_integer_FUN_0060547c
//   crt_stdio.c_scanf_scanset_FUN_00605064
//   crt_stdio.c_scanf_string_FUN_00604e4c
//   crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c
//   crt_stdio.c_skip_whitespace_FUN_00604d18
//   crt_stdio.c_store_count_FUN_00604fb0

#include "nocturne.h"

int __cdecl crt_stdio_c_doscan_FUN_00604950(scanf_state_t *state,char **format_ptr,va_list_t *args)

{
  char **format_ptr_00;
  byte bVar1;
  int iVar2;
  uint character;
  uint uVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  int chars_consumed;
  
  iVar4 = 0;
  chars_consumed = 0;
  state->flags = state->flags & 0xfd;
  format_ptr_00 = format_ptr;
  do {
    format_ptr = format_ptr_00;
    format_ptr_00 = (char **)((int)format_ptr + 1);
    uVar3 = (uint)*(byte *)format_ptr;
    if (uVar3 == 0) goto LAB_00604c00;
    if ((g_CharacterClassificationTable[(byte)(*(byte *)format_ptr + 1)] & 2U) != 0) {
      iVar2 = crt_stdio_c_skip_whitespace_FUN_00604d18(state);
      chars_consumed = chars_consumed + iVar2;
      goto LAB_00604bc4;
    }
    if (uVar3 == 0x25) {
      args = (va_list_t *)crt_stdio_c_parse_format_spec_FUN_00604c1c((char *)format_ptr_00,state);
      bVar1 = *(byte *)args;
      if (bVar1 != 0) {
        args = (va_list_t *)((int)args + 1);
      }
      if (bVar1 < 100) {
        if (bVar1 < 0x47) {
          if (bVar1 < 0x43) {
            if (bVar1 == 0x25) {
              iVar2 = crt_stdio_c_scanf_getc_wrapper_FUN_00604930(state);
              if (iVar2 == 0x25) goto LAB_00604bc3;
              if ((state->flags & 2) == 0) {
                crt_stdio_c_scanf_ungetc_wrapper_FUN_0060493c(iVar2,state);
              }
              goto LAB_00604c00;
            }
          }
          else {
            if (bVar1 < 0x44) {
              state->flags = state->flags | 0x20;
LAB_00604b72:
              iVar2 = crt_stdio_c_scanf_char_FUN_00604d54(state,(va_list_t *)&stack0xfffffff0);
              goto LAB_00604b7e;
            }
            if (bVar1 == 0x45) goto LAB_00604b3f;
          }
        }
        else {
          if (bVar1 < 0x48) {
LAB_00604b3f:
            iVar2 = crt_stdio_c_scanf_float_FUN_00605178(state,(va_list_t *)&stack0xfffffff0);
            goto LAB_00604b7e;
          }
          if (bVar1 < 0x58) {
            if (bVar1 == 0x53) {
              state->flags = state->flags | 0x20;
LAB_00604b4e:
              iVar2 = crt_stdio_c_scanf_string_FUN_00604e4c(state,(va_list_t *)&stack0xfffffff0);
              goto LAB_00604b7e;
            }
          }
          else {
            if (bVar1 < 0x59) goto LAB_00604b2b;
            if (0x5a < bVar1) {
              if (bVar1 < 0x5c) {
                iVar2 = crt_stdio_c_scanf_scanset_FUN_00605064
                                  (state,(va_list_t *)&stack0xfffffff0,(char **)&args);
                goto LAB_00604b7e;
              }
              if (bVar1 == 99) goto LAB_00604b72;
            }
          }
        }
      }
      else if (bVar1 < 0x65) {
        iVar2 = crt_stdio_c_scanf_integer_FUN_0060547c(state,(va_list_t *)&stack0xfffffff0,10,1);
LAB_00604b7e:
        if (iVar2 < 1) goto LAB_00604c00;
        chars_consumed = chars_consumed + iVar2;
        if ((state->flags & 1) != 0) {
          iVar4 = iVar4 + 1;
        }
      }
      else if (bVar1 < 0x6f) {
        if (bVar1 < 0x69) {
          if (bVar1 < 0x68) goto LAB_00604b3f;
        }
        else {
          if (bVar1 < 0x6a) {
            iVar2 = crt_stdio_c_scanf_integer_FUN_0060547c(state,(va_list_t *)&stack0xfffffff0,0,1);
            goto LAB_00604b7e;
          }
          if (bVar1 == 0x6e) {
            crt_stdio_c_store_count_FUN_00604fb0(state,(va_list_t *)&stack0xfffffff0,chars_consumed)
            ;
          }
        }
      }
      else {
        if (bVar1 < 0x70) {
          iVar2 = crt_stdio_c_scanf_integer_FUN_0060547c(state,(va_list_t *)&stack0xfffffff0,8,1);
          goto LAB_00604b7e;
        }
        if (bVar1 < 0x73) {
          if (bVar1 == 0x70) {
LAB_00604b2b:
            iVar2 = crt_stdio_c_scanf_integer_FUN_0060547c
                              (state,(va_list_t *)&stack0xfffffff0,0x10,1);
            goto LAB_00604b7e;
          }
        }
        else {
          if (bVar1 < 0x74) goto LAB_00604b4e;
          if (0x74 < bVar1) {
            if (bVar1 < 0x76) {
              iVar2 = crt_stdio_c_scanf_integer_FUN_0060547c
                                (state,(va_list_t *)&stack0xfffffff0,10,0);
              goto LAB_00604b7e;
            }
            if (bVar1 == 0x78) goto LAB_00604b2b;
          }
        }
      }
    }
    else {
      character = crt_stdio_c_scanf_getc_wrapper_FUN_00604930(state);
      if (character != uVar3) {
        if ((state->flags & 2) == 0) {
          crt_stdio_c_scanf_ungetc_wrapper_FUN_0060493c(character,state);
        }
        goto LAB_00604c00;
      }
LAB_00604bc3:
      chars_consumed = chars_consumed + 1;
    }
LAB_00604bc4:
  } while ((state->flags & 2) == 0);
  if (*(char *)format_ptr_00 == '%') {
    args = (va_list_t *)
           crt_stdio_c_parse_format_spec_FUN_00604c1c((char *)((int)format_ptr + 2),state);
    if (*(char *)args == 'n') {
      crt_stdio_c_store_count_FUN_00604fb0(state,(va_list_t *)&stack0xfffffff0,chars_consumed);
    }
  }
LAB_00604c00:
  if ((iVar4 == 0) && ((state->flags & 2) != 0)) {
    iVar4 = -1;
  }
  return iVar4;
}


// Assembly code:
// 00604950: PUSH EBX
//   Label: crt_stdio.c_doscan_FUN_00604950
// 00604951: PUSH ESI
// 00604952: PUSH EDI
// 00604953: PUSH EBP
// 00604954: SUB ESP,0x4
// 00604957: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0060495b: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0060495f: MOV EAX,dword ptr [EAX]
// 00604961: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00604964: MOV AH,byte ptr [ESI + 0x10]
// 00604967: XOR EBP,EBP
// 00604969: AND AH,0xfd
// 0060496c: XOR EDI,EDI
// 0060496e: MOV byte ptr [ESI + 0x10],AH
// 00604971: MOV EBX,dword ptr [ESP + 0x1c]
//   Label: LAB_00604971
//   XREF to: Stack[0x8] (READ)
// 00604975: LEA EDX,[EBX + 0x1]
// 00604978: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[0x8] (WRITE)
// 0060497c: MOV BL,byte ptr [EBX]
// 0060497e: AND EBX,0xff
// 00604984: JZ 0x00604c00
//   XREF to: 00604c00 (CONDITIONAL_JUMP)
// 0060498a: MOV AL,BL
// 0060498c: INC AL
// 0060498e: AND EAX,0xff
// 00604993: TEST byte ptr [EAX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 0060499a: JZ 0x006049ac
//   XREF to: 006049ac (CONDITIONAL_JUMP)
// 0060499c: PUSH ESI
// 0060499d: CALL crt_stdio.c_skip_whitespace_FUN_00604d18
//   XREF to: 00604d18 (UNCONDITIONAL_CALL)
// 006049a2: ADD ESP,0x4
// 006049a5: ADD EDI,EAX
// 006049a7: JMP 0x00604bc4
//   XREF to: 00604bc4 (UNCONDITIONAL_JUMP)
// 006049ac: CMP EBX,0x25
//   Label: LAB_006049ac
// 006049af: JZ 0x006049db
//   XREF to: 006049db (CONDITIONAL_JUMP)
// 006049b1: PUSH ESI
// 006049b2: CALL crt_stdio.c_scanf_getc_wrapper_FUN_00604930
//   XREF to: 00604930 (UNCONDITIONAL_CALL)
// 006049b7: ADD ESP,0x4
// 006049ba: CMP EAX,EBX
// 006049bc: JZ 0x00604bc3
//   XREF to: 00604bc3 (CONDITIONAL_JUMP)
// 006049c2: TEST byte ptr [ESI + 0x10],0x2
// 006049c6: JNZ 0x00604c00
//   XREF to: 00604c00 (CONDITIONAL_JUMP)
// 006049cc: PUSH ESI
// 006049cd: PUSH EAX
// 006049ce: CALL crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c
//   XREF to: 0060493c (UNCONDITIONAL_CALL)
// 006049d3: ADD ESP,0x8
// 006049d6: JMP 0x00604c00
//   XREF to: 00604c00 (UNCONDITIONAL_JUMP)
// 006049db: PUSH ESI
//   Label: LAB_006049db
// 006049dc: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 006049e0: PUSH EBX
// 006049e1: CALL crt_stdio.c_parse_format_spec_FUN_00604c1c
//   XREF to: 00604c1c (UNCONDITIONAL_CALL)
// 006049e6: ADD ESP,0x8
// 006049e9: XOR EBX,EBX
// 006049eb: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[0x8] (WRITE)
// 006049ef: MOV BL,byte ptr [EAX]
// 006049f1: TEST EBX,EBX
// 006049f3: JZ 0x006049fa
//   XREF to: 006049fa (CONDITIONAL_JUMP)
// 006049f5: INC EAX
// 006049f6: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[0x8] (WRITE)
// 006049fa: CMP EBX,0x64
//   Label: LAB_006049fa
// 006049fd: JC 0x00604a6d
//   XREF to: 00604a6d (CONDITIONAL_JUMP)
// 006049ff: JBE 0x00604ad5
//   XREF to: 00604ad5 (CONDITIONAL_JUMP)
// 00604a05: CMP EBX,0x6f
// 00604a08: JC 0x00604a46
//   XREF to: 00604a46 (CONDITIONAL_JUMP)
// 00604a0a: JBE 0x00604b03
//   XREF to: 00604b03 (CONDITIONAL_JUMP)
// 00604a10: CMP EBX,0x73
// 00604a13: JC 0x00604a38
//   XREF to: 00604a38 (CONDITIONAL_JUMP)
// 00604a15: JBE 0x00604b4e
//   XREF to: 00604b4e (CONDITIONAL_JUMP)
// 00604a1b: CMP EBX,0x75
// 00604a1e: JC 0x00604bc4
//   XREF to: 00604bc4 (CONDITIONAL_JUMP)
// 00604a24: JBE 0x00604b17
//   XREF to: 00604b17 (CONDITIONAL_JUMP)
// 00604a2a: CMP EBX,0x78
// 00604a2d: JZ 0x00604b2b
//   XREF to: 00604b2b (CONDITIONAL_JUMP)
// 00604a33: JMP 0x00604bc4
//   XREF to: 00604bc4 (UNCONDITIONAL_JUMP)
// 00604a38: CMP EBX,0x70
//   Label: LAB_00604a38
// 00604a3b: JZ 0x00604b2b
//   XREF to: 00604b2b (CONDITIONAL_JUMP)
// 00604a41: JMP 0x00604bc4
//   XREF to: 00604bc4 (UNCONDITIONAL_JUMP)
// 00604a46: CMP EBX,0x69
//   Label: LAB_00604a46
// 00604a49: JC 0x00604a5f
//   XREF to: 00604a5f (CONDITIONAL_JUMP)
// 00604a4b: JBE 0x00604aec
//   XREF to: 00604aec (CONDITIONAL_JUMP)
// 00604a51: CMP EBX,0x6e
// 00604a54: JZ 0x00604b93
//   XREF to: 00604b93 (CONDITIONAL_JUMP)
// 00604a5a: JMP 0x00604bc4
//   XREF to: 00604bc4 (UNCONDITIONAL_JUMP)
// 00604a5f: CMP EBX,0x67
//   Label: LAB_00604a5f
// 00604a62: JBE 0x00604b3f
//   XREF to: 00604b3f (CONDITIONAL_JUMP)
// 00604a68: JMP 0x00604bc4
//   XREF to: 00604bc4 (UNCONDITIONAL_JUMP)
// 00604a6d: CMP EBX,0x47
//   Label: LAB_00604a6d
// 00604a70: JC 0x00604aae
//   XREF to: 00604aae (CONDITIONAL_JUMP)
// 00604a72: JBE 0x00604b3f
//   XREF to: 00604b3f (CONDITIONAL_JUMP)
// 00604a78: CMP EBX,0x58
// 00604a7b: JC 0x00604aa0
//   XREF to: 00604aa0 (CONDITIONAL_JUMP)
// 00604a7d: JBE 0x00604b2b
//   XREF to: 00604b2b (CONDITIONAL_JUMP)
// 00604a83: CMP EBX,0x5b
// 00604a86: JC 0x00604bc4
//   XREF to: 00604bc4 (CONDITIONAL_JUMP)
// 00604a8c: JBE 0x00604b59
//   XREF to: 00604b59 (CONDITIONAL_JUMP)
// 00604a92: CMP EBX,0x63
// 00604a95: JZ 0x00604b72
//   XREF to: 00604b72 (CONDITIONAL_JUMP)
// 00604a9b: JMP 0x00604bc4
//   XREF to: 00604bc4 (UNCONDITIONAL_JUMP)
// 00604aa0: CMP EBX,0x53
//   Label: LAB_00604aa0
// 00604aa3: JZ 0x00604b4a
//   XREF to: 00604b4a (CONDITIONAL_JUMP)
// 00604aa9: JMP 0x00604bc4
//   XREF to: 00604bc4 (UNCONDITIONAL_JUMP)
// 00604aae: CMP EBX,0x43
//   Label: LAB_00604aae
// 00604ab1: JC 0x00604ac7
//   XREF to: 00604ac7 (CONDITIONAL_JUMP)
// 00604ab3: JBE 0x00604b6e
//   XREF to: 00604b6e (CONDITIONAL_JUMP)
// 00604ab9: CMP EBX,0x45
// 00604abc: JZ 0x00604b3f
//   XREF to: 00604b3f (CONDITIONAL_JUMP)
// 00604ac2: JMP 0x00604bc4
//   XREF to: 00604bc4 (UNCONDITIONAL_JUMP)
// 00604ac7: CMP EBX,0x25
//   Label: LAB_00604ac7
// 00604aca: JZ 0x00604ba4
//   XREF to: 00604ba4 (CONDITIONAL_JUMP)
// 00604ad0: JMP 0x00604bc4
//   XREF to: 00604bc4 (UNCONDITIONAL_JUMP)
// 00604ad5: PUSH 0x1
//   Label: LAB_00604ad5
// 00604ad7: PUSH 0xa
// 00604ad9: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x14] (DATA)
// 00604add: PUSH EAX
// 00604ade: PUSH ESI
// 00604adf: CALL crt_stdio.c_scanf_integer_FUN_0060547c
//   XREF to: 0060547c (UNCONDITIONAL_CALL)
// 00604ae4: ADD ESP,0x10
// 00604ae7: JMP 0x00604b7e
//   XREF to: 00604b7e (UNCONDITIONAL_JUMP)
// 00604aec: PUSH 0x1
//   Label: LAB_00604aec
// 00604aee: PUSH 0x0
// 00604af0: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x14] (DATA)
// 00604af4: PUSH EAX
// 00604af5: PUSH ESI
// 00604af6: CALL crt_stdio.c_scanf_integer_FUN_0060547c
//   XREF to: 0060547c (UNCONDITIONAL_CALL)
// 00604afb: ADD ESP,0x10
// 00604afe: JMP 0x00604b7e
//   XREF to: 00604b7e (UNCONDITIONAL_JUMP)
// 00604b03: PUSH 0x1
//   Label: LAB_00604b03
// 00604b05: PUSH 0x8
// 00604b07: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x14] (DATA)
// 00604b0b: PUSH EAX
// 00604b0c: PUSH ESI
// 00604b0d: CALL crt_stdio.c_scanf_integer_FUN_0060547c
//   XREF to: 0060547c (UNCONDITIONAL_CALL)
// 00604b12: ADD ESP,0x10
// 00604b15: JMP 0x00604b7e
//   XREF to: 00604b7e (UNCONDITIONAL_JUMP)
// 00604b17: PUSH 0x0
//   Label: LAB_00604b17
// 00604b19: PUSH 0xa
// 00604b1b: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x14] (DATA)
// 00604b1f: PUSH EAX
// 00604b20: PUSH ESI
// 00604b21: CALL crt_stdio.c_scanf_integer_FUN_0060547c
//   XREF to: 0060547c (UNCONDITIONAL_CALL)
// 00604b26: ADD ESP,0x10
// 00604b29: JMP 0x00604b7e
//   XREF to: 00604b7e (UNCONDITIONAL_JUMP)
// 00604b2b: PUSH 0x1
//   Label: LAB_00604b2b
// 00604b2d: PUSH 0x10
// 00604b2f: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x14] (DATA)
// 00604b33: PUSH EAX
// 00604b34: PUSH ESI
// 00604b35: CALL crt_stdio.c_scanf_integer_FUN_0060547c
//   XREF to: 0060547c (UNCONDITIONAL_CALL)
// 00604b3a: ADD ESP,0x10
// 00604b3d: JMP 0x00604b7e
//   XREF to: 00604b7e (UNCONDITIONAL_JUMP)
// 00604b3f: MOV EAX,ESP
//   Label: LAB_00604b3f
// 00604b41: PUSH EAX
// 00604b42: PUSH ESI
// 00604b43: CALL crt_stdio.c_scanf_float_FUN_00605178
//   XREF to: 00605178 (UNCONDITIONAL_CALL)
// 00604b48: JMP 0x00604b7b
//   XREF to: 00604b7b (UNCONDITIONAL_JUMP)
// 00604b4a: OR byte ptr [ESI + 0x10],0x20
//   Label: LAB_00604b4a
// 00604b4e: MOV EAX,ESP
//   Label: LAB_00604b4e
// 00604b50: PUSH EAX
// 00604b51: PUSH ESI
// 00604b52: CALL crt_stdio.c_scanf_string_FUN_00604e4c
//   XREF to: 00604e4c (UNCONDITIONAL_CALL)
// 00604b57: JMP 0x00604b7b
//   XREF to: 00604b7b (UNCONDITIONAL_JUMP)
// 00604b59: LEA EAX,[ESP + 0x1c]
//   Label: LAB_00604b59
//   XREF to: Stack[0x8] (DATA)
// 00604b5d: PUSH EAX
// 00604b5e: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x14] (DATA)
// 00604b62: PUSH EAX
// 00604b63: PUSH ESI
// 00604b64: CALL crt_stdio.c_scanf_scanset_FUN_00605064
//   XREF to: 00605064 (UNCONDITIONAL_CALL)
// 00604b69: ADD ESP,0xc
// 00604b6c: JMP 0x00604b7e
//   XREF to: 00604b7e (UNCONDITIONAL_JUMP)
// 00604b6e: OR byte ptr [ESI + 0x10],0x20
//   Label: LAB_00604b6e
// 00604b72: MOV EAX,ESP
//   Label: LAB_00604b72
// 00604b74: PUSH EAX
// 00604b75: PUSH ESI
// 00604b76: CALL crt_stdio.c_scanf_char_FUN_00604d54
//   XREF to: 00604d54 (UNCONDITIONAL_CALL)
// 00604b7b: ADD ESP,0x8
//   Label: LAB_00604b7b
// 00604b7e: MOV EBX,EAX
//   Label: LAB_00604b7e
// 00604b80: TEST EBX,EBX
// 00604b82: JLE 0x00604c00
//   XREF to: 00604c00 (CONDITIONAL_JUMP)
// 00604b88: ADD EDI,EBX
// 00604b8a: TEST byte ptr [ESI + 0x10],0x1
// 00604b8e: JZ 0x00604bc4
//   XREF to: 00604bc4 (CONDITIONAL_JUMP)
// 00604b90: INC EBP
// 00604b91: JMP 0x00604bc4
//   XREF to: 00604bc4 (UNCONDITIONAL_JUMP)
// 00604b93: PUSH EDI
//   Label: LAB_00604b93
// 00604b94: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x14] (DATA)
// 00604b98: PUSH EAX
// 00604b99: PUSH ESI
// 00604b9a: CALL crt_stdio.c_store_count_FUN_00604fb0
//   XREF to: 00604fb0 (UNCONDITIONAL_CALL)
// 00604b9f: ADD ESP,0xc
// 00604ba2: JMP 0x00604bc4
//   XREF to: 00604bc4 (UNCONDITIONAL_JUMP)
// 00604ba4: PUSH ESI
//   Label: LAB_00604ba4
// 00604ba5: CALL crt_stdio.c_scanf_getc_wrapper_FUN_00604930
//   XREF to: 00604930 (UNCONDITIONAL_CALL)
// 00604baa: ADD ESP,0x4
// 00604bad: CMP EAX,EBX
// 00604baf: JZ 0x00604bc3
//   XREF to: 00604bc3 (CONDITIONAL_JUMP)
// 00604bb1: TEST byte ptr [ESI + 0x10],0x2
// 00604bb5: JNZ 0x00604c00
//   XREF to: 00604c00 (CONDITIONAL_JUMP)
// 00604bb7: PUSH ESI
// 00604bb8: PUSH EAX
// 00604bb9: CALL crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c
//   XREF to: 0060493c (UNCONDITIONAL_CALL)
// 00604bbe: ADD ESP,0x8
// 00604bc1: JMP 0x00604c00
//   XREF to: 00604c00 (UNCONDITIONAL_JUMP)
// 00604bc3: INC EDI
//   Label: LAB_00604bc3
// 00604bc4: TEST byte ptr [ESI + 0x10],0x2
//   Label: LAB_00604bc4
// 00604bc8: JZ 0x00604971
//   XREF to: 00604971 (CONDITIONAL_JUMP)
// 00604bce: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00604bd2: CMP byte ptr [EAX],0x25
// 00604bd5: JNZ 0x00604c00
//   XREF to: 00604c00 (CONDITIONAL_JUMP)
// 00604bd7: PUSH ESI
// 00604bd8: LEA ECX,[EAX + 0x1]
// 00604bdb: PUSH ECX
// 00604bdc: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[0x8] (WRITE)
// 00604be0: CALL crt_stdio.c_parse_format_spec_FUN_00604c1c
//   XREF to: 00604c1c (UNCONDITIONAL_CALL)
// 00604be5: ADD ESP,0x8
// 00604be8: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[0x8] (WRITE)
// 00604bec: CMP byte ptr [EAX],0x6e
// 00604bef: JNZ 0x00604c00
//   XREF to: 00604c00 (CONDITIONAL_JUMP)
// 00604bf1: PUSH EDI
// 00604bf2: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x14] (DATA)
// 00604bf6: PUSH EAX
// 00604bf7: PUSH ESI
// 00604bf8: CALL crt_stdio.c_store_count_FUN_00604fb0
//   XREF to: 00604fb0 (UNCONDITIONAL_CALL)
// 00604bfd: ADD ESP,0xc
// 00604c00: TEST EBP,EBP
//   Label: LAB_00604c00
// 00604c02: JNZ 0x00604c11
//   XREF to: 00604c11 (CONDITIONAL_JUMP)
// 00604c04: TEST byte ptr [ESI + 0x10],0x2
// 00604c08: JZ 0x00604c11
//   XREF to: 00604c11 (CONDITIONAL_JUMP)
// 00604c0a: MOV EAX,0xffffffff
// 00604c0f: JMP 0x00604c13
//   XREF to: 00604c13 (UNCONDITIONAL_JUMP)
// 00604c11: MOV EAX,EBP
//   Label: LAB_00604c11
// 00604c13: ADD ESP,0x4
//   Label: LAB_00604c13
// 00604c16: POP EBP
// 00604c17: POP EDI
// 00604c18: POP ESI
// 00604c19: POP EBX
// 00604c1a: RET
