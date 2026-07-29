// Name: crt_string.c__mbstrnicmp_FUN_0056dcd0
// Address: 0056dcd0
// Address Range: [[0056dcd0, 0056dd5f]]
// Convention: __cdecl
// Signature: int __cdecl crt_string_c__mbstrnicmp_FUN_0056dcd0(char *str1,char *str2,SIZE_T count)

#include "nocturne.h"

int __cdecl _mbstrnicmp(char *str1,char *str2,SIZE_T count)

{
  int iVar1;
  
  while (((count != 0 &&
          (iVar1 = mbstring_termination_check(str1), iVar1 == 0)) &&
         (iVar1 = mbstring_termination_check(str2), iVar1 == 0))) {
    iVar1 = FUN_005710a0(str1,str2);
    if (iVar1 != 0) {
      return iVar1;
    }
    str1 = mbtowc_next(str1);
    count = count - 1;
    str2 = mbtowc_next(str2);
  }
  if ((count != 0) &&
     ((iVar1 = mbstring_termination_check(str1), iVar1 != 0 ||
      (iVar1 = mbstring_termination_check(str2), iVar1 != 0)))) {
    return (uint)(byte)*str1 - (uint)(byte)*str2;
  }
  return 0;
}
