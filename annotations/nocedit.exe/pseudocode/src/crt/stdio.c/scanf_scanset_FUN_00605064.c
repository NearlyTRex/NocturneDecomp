// Name: crt_stdio.c_scanf_scanset_FUN_00605064
// Address: 00605064
// Address Range: [[00605064, 00605176]]
// Convention: __cdecl
// Signature: int crt_stdio.c_scanf_scanset_FUN_00605064(scanf_state_t * state, va_list_t * args, char * * format_ptr)

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
  byte *unaff_ESI;
  int iVar5;
  byte uStack_10;
  
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
        unaff_ESI = *(byte **)pcVar2;
      }
      else {
        pcVar2 = *args;
        *args = pcVar2 + 4;
        unaff_ESI = *(byte **)pcVar2;
      }
    }
    else {
      pcVar2 = *args;
      *args = pcVar2 + 8;
      unaff_ESI = (byte *)*(undefined6 *)pcVar2;
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
      uStack_10 = (byte)character;
      *unaff_ESI = uStack_10;
      unaff_ESI = unaff_ESI + 1;
    }
  } while( true );
}
