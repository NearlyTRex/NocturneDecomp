// Name: crt_unknown.c_FUN_00574030
// Address: 00574030
// Address Range: [[00574030, 005740a9]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_00574030(wchar_t *param_1,char *param_2,int param_3)

#include "nocturne.h"

int FUN_00574030(wchar_t *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 == (wchar_t *)0x0) {
    while ((iVar1 = iVar2, *param_2 != '\0' &&
           (iVar1 = mbtowc((wchar_t *)0x0,param_2,2), iVar1 != -1))) {
      param_2 = mbtowc_next(param_2);
      iVar2 = iVar2 + 1;
    }
  }
  else {
    for (; iVar1 = iVar2, param_3 != 0; param_3 = param_3 + -1) {
      if (*param_2 == '\0') {
        *param_1 = L'\0';
        return iVar2;
      }
      iVar1 = mbtowc(param_1,param_2,2);
      if (iVar1 == -1) {
        return -1;
      }
      param_2 = mbtowc_next(param_2);
      param_1 = param_1 + 1;
      iVar2 = iVar2 + 1;
    }
  }
  return iVar1;
}
