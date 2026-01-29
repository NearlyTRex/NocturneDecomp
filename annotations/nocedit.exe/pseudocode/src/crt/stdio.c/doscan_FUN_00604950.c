// Name: crt_stdio.c_doscan_FUN_00604950
// Address: 00604950
// Address Range: [[00604950, 00604c1a]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_doscan_FUN_00604950(scanf_state_t *state,char **format_ptr,va_list_t *args)

#include "nocturne.h"

int __cdecl doscan(scanf_state_t *state,char **format_ptr,va_list_t *args)

{
  char **format_ptr_00;
  byte bVar1;
  int iVar2;
  uint character;
  uint uVar3;
  int iVar4;
  int chars_consumed;
  va_list_t local_14;
  
  local_14 = *args;
  iVar4 = 0;
  chars_consumed = 0;
  state->flags = state->flags & 0xfd;
  do {
    format_ptr_00 = (char **)((int)format_ptr + 1);
    uVar3 = (uint)*(byte *)format_ptr;
    if (uVar3 == 0) goto LAB_00604c00;
    if ((g_CharacterClassificationTable[(byte)(*(byte *)format_ptr + 1)] & 2U) != 0) {
      format_ptr = format_ptr_00;
      iVar2 = skip_whitespace(state);
      chars_consumed = chars_consumed + iVar2;
      goto LAB_00604bc4;
    }
    if (uVar3 == 0x25) {
      format_ptr = format_ptr_00;
      format_ptr = (char **)parse_format_spec((char *)format_ptr_00,state);
      bVar1 = *(byte *)format_ptr;
      if (bVar1 != 0) {
        format_ptr = (char **)((int)format_ptr + 1);
      }
      if (bVar1 < 100) {
        if (bVar1 < 0x47) {
          if (bVar1 < 0x43) {
            if (bVar1 == 0x25) {
              iVar2 = scanf_getc_wrapper(state);
              if (iVar2 == 0x25) goto LAB_00604bc3;
              if ((state->flags & 2) == 0) {
                scanf_ungetc_wrapper(iVar2,state);
              }
              goto LAB_00604c00;
            }
          }
          else {
            if (bVar1 < 0x44) {
              state->flags = state->flags | 0x20;
LAB_00604b72:
              iVar2 = scanf_char(state,&local_14);
              goto LAB_00604b7e;
            }
            if (bVar1 == 0x45) goto LAB_00604b3f;
          }
        }
        else {
          if (bVar1 < 0x48) {
LAB_00604b3f:
            iVar2 = scanf_float(state,&local_14);
            goto LAB_00604b7e;
          }
          if (bVar1 < 0x58) {
            if (bVar1 == 0x53) {
              state->flags = state->flags | 0x20;
LAB_00604b4e:
              iVar2 = scanf_string(state,&local_14);
              goto LAB_00604b7e;
            }
          }
          else {
            if (bVar1 < 0x59) goto LAB_00604b2b;
            if (0x5a < bVar1) {
              if (bVar1 < 0x5c) {
                iVar2 = scanf_scanset(state,&local_14,(char **)&format_ptr)
                ;
                goto LAB_00604b7e;
              }
              if (bVar1 == 99) goto LAB_00604b72;
            }
          }
        }
      }
      else if (bVar1 < 0x65) {
        iVar2 = scanf_integer(state,&local_14,10,1);
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
            iVar2 = scanf_integer(state,&local_14,0,1);
            goto LAB_00604b7e;
          }
          if (bVar1 == 0x6e) {
            store_count(state,&local_14,chars_consumed);
          }
        }
      }
      else {
        if (bVar1 < 0x70) {
          iVar2 = scanf_integer(state,&local_14,8,1);
          goto LAB_00604b7e;
        }
        if (bVar1 < 0x73) {
          if (bVar1 == 0x70) {
LAB_00604b2b:
            iVar2 = scanf_integer(state,&local_14,0x10,1);
            goto LAB_00604b7e;
          }
        }
        else {
          if (bVar1 < 0x74) goto LAB_00604b4e;
          if (0x74 < bVar1) {
            if (bVar1 < 0x76) {
              iVar2 = scanf_integer(state,&local_14,10,0);
              goto LAB_00604b7e;
            }
            if (bVar1 == 0x78) goto LAB_00604b2b;
          }
        }
      }
    }
    else {
      format_ptr = format_ptr_00;
      character = scanf_getc_wrapper(state);
      if (character != uVar3) {
        if ((state->flags & 2) == 0) {
          scanf_ungetc_wrapper(character,state);
        }
        goto LAB_00604c00;
      }
LAB_00604bc3:
      chars_consumed = chars_consumed + 1;
    }
LAB_00604bc4:
  } while ((state->flags & 2) == 0);
  if (*(char *)format_ptr == '%') {
    format_ptr = (char **)((int)format_ptr + 1);
    format_ptr = (char **)parse_format_spec((char *)format_ptr,state);
    if (*(char *)format_ptr == 'n') {
      store_count(state,&local_14,chars_consumed);
    }
  }
LAB_00604c00:
  if ((iVar4 == 0) && ((state->flags & 2) != 0)) {
    iVar4 = -1;
  }
  return iVar4;
}
