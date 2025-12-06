// Name: crt_stdio.c_parse_format_spec_FUN_00604c1c
// Address: 00604c1c
// Address Range: [[00604c1c, 00604d15]]
// Convention: __cdecl
// Signature: char * crt_stdio.c_parse_format_spec_FUN_00604c1c(char * format_ptr, scanf_state_t * state)

#include "nocturne.h"

char * __cdecl crt_stdio_c_parse_format_spec_FUN_00604c1c(char *format_ptr,scanf_state_t *state)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = state->flags;
  state->field_width = -1;
  state->flags = bVar1 | 1;
  state->flags = bVar1 & 3 | 1;
  if (*format_ptr == '*') {
    format_ptr = format_ptr + 1;
    state->flags = state->flags & 0xfe;
  }
  bVar1 = *format_ptr;
  if ((g_CharacterClassificationTable[(byte)(bVar1 + 1)] & 0x20U) != 0) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 * 10 + (bVar1 - 0x30);
      bVar1 = ((byte *)format_ptr)[1];
      format_ptr = (char *)((byte *)format_ptr + 1);
    } while ((g_CharacterClassificationTable[(byte)(bVar1 + 1)] & 0x20U) != 0);
    state->field_width = iVar2;
  }
  if (*format_ptr == 0x4e) {
    state->flags = state->flags | 8;
    format_ptr = (char *)((byte *)format_ptr + 1);
  }
  else if (*format_ptr == 0x46) {
    state->flags = state->flags | 4;
    format_ptr = (char *)((byte *)format_ptr + 1);
  }
  bVar1 = *format_ptr;
  if (bVar1 < 0x68) {
    if (0x48 < bVar1) {
      if (bVar1 < 0x4a) {
        if ((((byte *)format_ptr)[1] == 0x36) && (((byte *)format_ptr)[2] == 0x34)) {
          format_ptr = (char *)((byte *)format_ptr + 3);
          state->flags = state->flags | 0x40;
        }
      }
      else if (bVar1 == 0x4c) {
        state->flags = state->flags | 0x40;
        format_ptr = (char *)((byte *)format_ptr + 1);
      }
    }
  }
  else if (bVar1 < 0x69) {
    state->flags = state->flags | 0x10;
    format_ptr = (char *)((byte *)format_ptr + 1);
  }
  else if ((0x6b < bVar1) && ((bVar1 < 0x6d || (bVar1 == 0x77)))) {
    state->flags = state->flags | 0x20;
    format_ptr = (char *)((byte *)format_ptr + 1);
  }
  return (char *)(byte *)format_ptr;
}
