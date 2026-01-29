// Name: crt_stdio.c_scanf_char_FUN_00604d54
// Address: 00604d54
// Address Range: [[00604d54, 00604e48]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_scanf_char_FUN_00604d54(scanf_state_t *state,va_list_t *args)

#include "nocturne.h"

int __cdecl scanf_char(scanf_state_t *state,va_list_t *args)

{
  byte bVar1;
  va_list_t pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *unaff_EBX;
  int iVar6;
  int iVar7;
  wchar_t local_1c [2];
  char local_18;
  byte local_17;
  
  bVar1 = state->flags;
  if ((bVar1 & 1) != 0) {
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 8) == 0) {
        pcVar2 = *args;
        *args = pcVar2 + 4;
        unaff_EBX = *(char **)pcVar2;
      }
      else {
        pcVar2 = *args;
        *args = pcVar2 + 4;
        unaff_EBX = *(char **)pcVar2;
      }
    }
    else {
      pcVar2 = *args;
      *args = pcVar2 + 8;
      unaff_EBX = (char *)*(undefined6 *)pcVar2;
    }
  }
  iVar7 = state->field_width;
  iVar6 = 0;
  if (iVar7 == -1) {
    iVar7 = 1;
  }
  while( true ) {
    if (iVar7 < 1) {
      return iVar6;
    }
    uVar4 = scanf_getc_wrapper(state);
    bVar1 = state->flags;
    if ((bVar1 & 2) != 0) break;
    iVar6 = iVar6 + 1;
    iVar7 = iVar7 + -1;
    if ((bVar1 & 1) != 0) {
      cVar3 = (char)uVar4;
      if ((bVar1 & 0x20) == 0) {
        *unaff_EBX = cVar3;
        unaff_EBX = unaff_EBX + 1;
      }
      else {
        local_18 = cVar3;
        if ((g_MultibyteLocaleActive != 0) && ((g_LeadByteTable[uVar4 & 0xff] & 1U) != 0)) {
          iVar5 = scanf_getc_wrapper(state);
          local_17 = (byte)iVar5;
        }
        iVar5 = mbtowc(local_1c,&local_18,2);
        if (iVar5 == -1) {
          return 0;
        }
        *(short *)unaff_EBX = local_1c[0];
        unaff_EBX = unaff_EBX + 2;
      }
    }
  }
  return iVar6;
}
