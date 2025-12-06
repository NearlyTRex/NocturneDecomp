// Name: crt_stdio.c_scanf_char_FUN_00604d54
// Address: 00604d54
// Address Range: [[00604d54, 00604e48]]
// Convention: __cdecl
// Signature: int crt_stdio.c_scanf_char_FUN_00604d54(scanf_state_t * state, va_list_t * args)

#include "nocturne.h"

int __cdecl crt_stdio_c_scanf_char_FUN_00604d54(scanf_state_t *state,va_list_t *args)

{
  byte bVar1;
  va_list_t pcVar2;
  uint uVar3;
  int iVar4;
  ushort *unaff_EBX;
  BADSPACEBASE *in_ESP;
  int iVar5;
  int iVar6;
  ushort in_ES;
  char *mb_string;
  ushort uStack_10;
  
  bVar1 = state->flags;
  if ((bVar1 & 1) != 0) {
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 8) == 0) {
        pcVar2 = *args;
        *args = pcVar2 + 4;
        unaff_EBX = *(ushort **)pcVar2;
      }
      else {
        pcVar2 = *args;
        *args = pcVar2 + 4;
        unaff_EBX = *(ushort **)pcVar2;
      }
    }
    else {
      pcVar2 = *args;
      *args = pcVar2 + 8;
      unaff_EBX = (ushort *)*(undefined6 *)pcVar2;
    }
  }
  iVar6 = state->field_width;
  iVar5 = 0;
  uStack_10 = in_ES;
  if (iVar6 == -1) {
    iVar6 = 1;
  }
  while( true ) {
    if (iVar6 < 1) {
      return iVar5;
    }
    uVar3 = crt_stdio_c_scanf_getc_wrapper_FUN_00604930(state);
    bVar1 = state->flags;
    if ((bVar1 & 2) != 0) break;
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + -1;
    if ((bVar1 & 1) != 0) {
      if ((bVar1 & 0x20) == 0) {
        *(char *)unaff_EBX = (char)uVar3;
        unaff_EBX = (ushort *)((int)unaff_EBX + 1);
      }
      else {
        if ((g_MultibyteLocaleActive != 0) && ((g_LeadByteTable[uVar3 & 0xff] & 1U) != 0)) {
          iVar4 = crt_stdio_c_scanf_getc_wrapper_FUN_00604930(state);
          uStack_10 = CONCAT11 /* combine 2-byte values */((char)iVar4,(char)uStack_10);
        }
        mb_string = (char *)&uStack_10;
        iVar4 = crt_locale_c_mbtowc_FUN_0060b1c0((wchar_t *)&stack0xffffffec,mb_string,2);
        if (iVar4 == -1) {
          return 0;
        }
        *unaff_EBX = (short)mb_string;
        unaff_EBX = unaff_EBX + 1;
      }
    }
  }
  return iVar5;
}
