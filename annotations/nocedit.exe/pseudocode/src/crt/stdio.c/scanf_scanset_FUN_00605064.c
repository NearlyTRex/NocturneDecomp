// Name: crt_stdio.c_scanf_scanset_FUN_00605064
// Address: 00605064
// Address Range: [[00605064, 00605176]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_scanf_scanset_FUN_00605064(scanf_state_t *state,va_list_t *args,char **format_ptr)

#include "nocturne.h"

int __cdecl scanf_scanset(scanf_state_t *state,va_list_t *args,char **format_ptr)

{
  char *pcVar1;
  char *pcVar3;
  uint character;
  int iVar4;
  byte *unaff_ESI;
  int iVar5;
  bool bVar2;
  byte abStack_40 [32];
  uint local_20;
  uint local_1c;
  uint local_18;
  uint uVar2;
  byte bVar1;
  
  bVar2 = **format_ptr == '^';
  if (bVar2) {
    *format_ptr = *format_ptr + 1;
  }
  pcVar3 = (char *)FUN_0060501c(*format_ptr,abStack_40);
  *format_ptr = pcVar3;
  bVar1 = state->flags;
  if ((bVar1 & 1) != 0) {
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 8) == 0) {
        pcVar1 = args->value[0];
        args->value[0] = pcVar1 + 4;
        unaff_ESI = *(byte **)pcVar1;
      }
      else {
        pcVar1 = args->value[0];
        args->value[0] = pcVar1 + 4;
        unaff_ESI = *(byte **)pcVar1;
      }
    }
    else {
      pcVar1 = args->value[0];
      args->value[0] = pcVar1 + 8;
      unaff_ESI = (byte *)*(undefined6 *)pcVar1;
    }
  }
  iVar5 = state->field_width;
  iVar4 = 0;
  while( true ) {
    if ((iVar5 == 0) ||
       (character = scanf_getc_wrapper(state), (state->flags & 2) != 0))
    goto LAB_0060515e;
    if ((((&DAT_00685030)[character & 7] & abStack_40[(int)character >> 3]) == 0) != bVar2) break;
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + -1;
    if ((state->flags & 1) != 0) {
      local_18._0_1_ = (byte)character;
      *unaff_ESI = (byte)local_18;
      unaff_ESI = unaff_ESI + 1;
    }
  }
  scanf_ungetc_wrapper(character,state);
LAB_0060515e:
  if (((state->flags & 1) != 0) && (0 < iVar4)) {
    *unaff_ESI = 0;
  }
  return iVar4;
}
