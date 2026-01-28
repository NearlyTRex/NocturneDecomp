// Name: crt_string.c_mbstrnicmp_FUN_00608e50
// Address: 00608e50
// Address Range: [[00608e50, 00608edf]]
// Convention: __cdecl
// Signature: int __cdecl crt_string_c_mbstrnicmp_FUN_00608e50(char *str1,char *str2,SIZE_T count)

#include "nocturne.h"

int __cdecl crt_string_c_mbstrnicmp_FUN_00608e50(char *str1,char *str2,SIZE_T count)

{
  int iVar1;
  
  while (((count != 0 &&
          (iVar1 = crt_string_c_mbstring_termination_check_FUN_0060b630(str1), iVar1 == 0)) &&
         (iVar1 = crt_string_c_mbstring_termination_check_FUN_0060b630(str2), iVar1 == 0))) {
    iVar1 = crt_string_c_compare_mb_chars_ci_FUN_0060c790(str1,str2);
    if (iVar1 != 0) {
      return iVar1;
    }
    str1 = crt_string_c_mbtowc_next_FUN_00605a70(str1);
    count = count - 1;
    str2 = crt_string_c_mbtowc_next_FUN_00605a70(str2);
  }
  if ((count != 0) &&
     ((iVar1 = crt_string_c_mbstring_termination_check_FUN_0060b630(str1), iVar1 != 0 ||
      (iVar1 = crt_string_c_mbstring_termination_check_FUN_0060b630(str2), iVar1 != 0)))) {
    return (uint)(byte)*str1 - (uint)(byte)*str2;
  }
  return 0;
}
