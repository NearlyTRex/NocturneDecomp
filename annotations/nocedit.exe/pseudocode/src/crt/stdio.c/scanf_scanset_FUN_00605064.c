// Name: crt_stdio.c_scanf_scanset_FUN_00605064
// Address: 00605064
// Address Range: [[00605064, 00605176]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_scanf_scanset_FUN_00605064(scanf_state_t *state,va_list_t *args,char **format_ptr)

#include "nocturne.h"

int __cdecl scanf_scanset(scanf_state_t *state,va_list_t *args,char **format_ptr)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  byte *unaff_ESI;
  int iVar5;
  byte abStack_40 [32];
  uint local_20;
  uint local_1c;
  uint local_18;
  
  local_1c = (uint)(**format_ptr == '^');
  if (local_1c != 0) {
    *format_ptr = *format_ptr + 1;
  }
  pcVar3 = (char *)FUN_0060501c(*format_ptr,abStack_40);
  *format_ptr = pcVar3;
  bVar1 = state->flags;
  if ((bVar1 & 1) != 0) {
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 8) == 0) {
        pcVar3 = args->value[0];
        args->value[0] = pcVar3 + 4;
        unaff_ESI = *(byte **)pcVar3;
      }
      else {
        pcVar3 = args->value[0];
        args->value[0] = pcVar3 + 4;
        unaff_ESI = *(byte **)pcVar3;
      }
    }
    else {
      pcVar3 = args->value[0];
      args->value[0] = pcVar3 + 8;
      unaff_ESI = (byte *)*(undefined6 *)pcVar3;
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
    local_18 = scanf_getc_wrapper(state);
    uVar2 = local_18;
    if ((state->flags & 2) != 0) goto LAB_0060515e;
    local_20 = (uint)abStack_40[(int)local_18 >> 3];
    if ((((&DAT_00685030)[local_18 & 7] & abStack_40[(int)local_18 >> 3]) == 0) != local_1c) {
      scanf_ungetc_wrapper(local_18,state);
      goto LAB_0060515e;
    }
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + -1;
    local_18 = uVar2;
    if ((state->flags & 1) != 0) {
      *unaff_ESI = (byte)local_18;
      unaff_ESI = unaff_ESI + 1;
    }
  } while( true );
}
