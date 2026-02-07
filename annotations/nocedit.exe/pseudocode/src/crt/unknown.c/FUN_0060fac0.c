// Name: crt_unknown.c_FUN_0060fac0
// Address: 0060fac0
// Address Range: [[0060fac0, 0060fb39]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_0060fac0(void)

#include "nocturne.h"

int FUN_0060fac0(void)

{
  int iVar1;
  int iVar2;
  wchar_t *in_stack_00000004;
  char *in_stack_00000008;
  int in_stack_0000000c;
  
  iVar2 = 0;
  if (in_stack_00000004 == (wchar_t *)0x0) {
    while ((iVar1 = iVar2, *in_stack_00000008 != '\0' &&
           (iVar1 = mbtowc((wchar_t *)0x0,in_stack_00000008,2),
           iVar1 != -1))) {
      in_stack_00000008 = mbtowc_next(in_stack_00000008);
      iVar2 = iVar2 + 1;
    }
  }
  else {
    for (; iVar1 = iVar2, in_stack_0000000c != 0; in_stack_0000000c = in_stack_0000000c + -1) {
      if (*in_stack_00000008 == '\0') {
        *in_stack_00000004 = L'\0';
        return iVar2;
      }
      iVar1 = mbtowc(in_stack_00000004,in_stack_00000008,2);
      if (iVar1 == -1) {
        return -1;
      }
      in_stack_00000008 = mbtowc_next(in_stack_00000008);
      in_stack_00000004 = in_stack_00000004 + 1;
      iVar2 = iVar2 + 1;
    }
  }
  return iVar1;
}
