// Name: crt_stdio.c_store_count_FUN_00604fb0
// Address: 00604fb0
// Address Range: [[00604fb0, 00605019]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdio_c_store_count_FUN_00604fb0(scanf_state_t *state,va_list_t *args,int chars_consumed)

#include "nocturne.h"

void __cdecl store_count(scanf_state_t *state,va_list_t *args,int chars_consumed)

{
  byte bVar1;
  char *pcVar2;
  int *piVar3;
  
  bVar1 = state->flags;
  if ((bVar1 & 1) != 0) {
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 8) == 0) {
        pcVar2 = args->value[0];
        args->value[0] = pcVar2 + 4;
        piVar3 = *(int **)pcVar2;
      }
      else {
        pcVar2 = args->value[0];
        args->value[0] = pcVar2 + 4;
        piVar3 = *(int **)pcVar2;
      }
    }
    else {
      pcVar2 = args->value[0];
      args->value[0] = pcVar2 + 8;
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
