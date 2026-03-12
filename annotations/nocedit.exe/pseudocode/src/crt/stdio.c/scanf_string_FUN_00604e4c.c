// Name: crt_stdio.c_scanf_string_FUN_00604e4c
// Address: 00604e4c
// Address Range: [[00604e4c, 00604faf]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_scanf_string_FUN_00604e4c(scanf_state_t *state,va_list_t *args)

#include "nocturne.h"

int __cdecl scanf_string(scanf_state_t *state,va_list_t *args)

{
  char *pcVar1;
  uint character;
  int iVar3;
  int iVar2;
  char cVar4;
  int iVar5;
  char *unaff_EDI;
  wchar_t local_20 [2];
  char local_1c;
  byte local_1b;
  byte local_18;
  byte bVar1;
  char *pcVar2;
  
  if ((state->flags & 0x20) == 0) {
    local_18 = 1;
  }
  else {
    local_18 = 2;
  }
  bVar1 = state->flags;
  if ((bVar1 & 1) != 0) {
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 8) == 0) {
        pcVar1 = args->value[0];
        args->value[0] = pcVar1 + 4;
        unaff_EDI = *(char **)pcVar1;
      }
      else {
        pcVar1 = args->value[0];
        args->value[0] = pcVar1 + 4;
        unaff_EDI = *(char **)pcVar1;
      }
    }
    else {
      pcVar2 = args->value[0];
      args->value[0] = pcVar2 + 8;
      unaff_EDI = (char *)*(undefined6 *)pcVar2;
    }
  }
  iVar5 = 0;
  while (character = scanf_getc_wrapper(state),
        (g_CharacterClassificationTable[(byte)((char)character + 1)] & 2) != 0) {
    iVar5 = iVar5 + 1;
  }
  if ((state->flags & 2) == 0) {
    iVar2 = state->field_width;
    state->field_width = iVar2 + -1;
    if (iVar2 != 0) {
      do {
        iVar5 = iVar5 + 1;
        if ((state->flags & 1) != 0) {
          cVar4 = (char)character;
          if (local_18 == 1) {
            *unaff_EDI = cVar4;
          }
          else {
            local_1c = cVar4;
            if ((g_MultibyteLocaleActive != 0) && ((g_LeadByteTable[character & 0xff] & 1U) != 0)) {
              iVar3 = scanf_getc_wrapper(state);
              local_1b = (byte)iVar3;
            }
            iVar2 = mbtowc(local_20,&local_1c,2);
            if (iVar2 == -1) {
              return 0;
            }
            *(wchar_t *)unaff_EDI = local_20[0];
          }
          unaff_EDI = (char *)((int)unaff_EDI + (uint)local_18);
        }
        character = scanf_getc_with_width(state);
        if (character == 0xffffffff) goto LAB_00604f88;
      } while ((g_CharacterClassificationTable[(byte)((char)character + 1)] & 2) == 0);
    }
    scanf_ungetc_wrapper(character,state);
  }
  else {
    iVar5 = 0;
  }
LAB_00604f88:
  if (((state->flags & 1) != 0) && (0 < iVar5)) {
    if (local_18 == 1) {
      *unaff_EDI = '\0';
    }
    else {
      *(wchar_t *)unaff_EDI = L'\0';
    }
  }
  return iVar5;
}
