// Name: crt_stdio.c_scanf_string_FUN_00604e4c
// Address: 00604e4c
// Address Range: [[00604e4c, 00604faf]]
// Convention: __cdecl
// Signature: int crt_stdio.c_scanf_string_FUN_00604e4c(scanf_state_t * state, va_list_t * args)

#include "nocturne.h"

int __cdecl crt_stdio_c_scanf_string_FUN_00604e4c(scanf_state_t *state,va_list_t *args)

{
  byte bVar1;
  va_list_t pcVar2;
  uint character;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  byte *unaff_EDI;
  scanf_state_t *psVar5;
  byte local_1c;
  char local_18;
  
  if ((state->flags & 0x20) == 0) {
    local_18 = '\x01';
  }
  else {
    local_18 = '\x02';
  }
  bVar1 = state->flags;
  if ((bVar1 & 1) != 0) {
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 8) == 0) {
        pcVar2 = *args;
        *args = pcVar2 + 4;
        unaff_EDI = *(byte **)pcVar2;
      }
      else {
        pcVar2 = *args;
        *args = pcVar2 + 4;
        unaff_EDI = *(byte **)pcVar2;
      }
    }
    else {
      pcVar2 = *args;
      *args = pcVar2 + 8;
      unaff_EDI = (byte *)*(undefined6 *)pcVar2;
    }
  }
  iVar4 = 0;
  while (psVar5 = state, character = crt_stdio_c_scanf_getc_wrapper_FUN_00604930(state),
        (g_CharacterClassificationTable[(byte)((char)character + 1)] & 2U) != 0) {
    iVar4 = iVar4 + 1;
  }
  if ((state->flags & 2) == 0) {
    iVar3 = state->field_width;
    state->field_width = iVar3 + -1;
    if (iVar3 != 0) {
      do {
        iVar4 = iVar4 + 1;
        if ((state->flags & 1) != 0) {
          if (local_18 == '\x01') {
            *unaff_EDI = (byte)character;
          }
          else {
            if ((g_MultibyteLocaleActive != 0) && ((g_LeadByteTable[character & 0xff] & 1U) != 0)) {
              psVar5 = state;
              iVar3 = crt_stdio_c_scanf_getc_wrapper_FUN_00604930(state);
              psVar5 = (scanf_state_t *)(uint)CONCAT11 /* combine 2-byte values */((char)iVar3,(char)psVar5);
            }
            iVar3 = crt_locale_c_mbtowc_FUN_0060b1c0((wchar_t *)&stack0xffffffd8,&stack0xffffffdc,2)
            ;
            if (iVar3 == -1) {
              return 0;
            }
            *(short *)unaff_EDI = (short)psVar5;
            local_1c = (byte)character;
          }
          unaff_EDI = unaff_EDI + local_1c;
        }
        character = crt_stdio_c_scanf_getc_with_width_FUN_00605918(state);
        if (character == 0xffffffff) goto LAB_00604f88;
      } while ((g_CharacterClassificationTable[(byte)((char)character + 1)] & 2U) == 0);
    }
    crt_stdio_c_scanf_ungetc_wrapper_FUN_0060493c(character,state);
  }
  else {
    iVar4 = 0;
  }
LAB_00604f88:
  if (((state->flags & 1) != 0) && (0 < iVar4)) {
    if (local_18 == '\x01') {
      *unaff_EDI = 0;
    }
    else {
      unaff_EDI[0] = 0;
      unaff_EDI[1] = 0;
    }
  }
  return iVar4;
}
