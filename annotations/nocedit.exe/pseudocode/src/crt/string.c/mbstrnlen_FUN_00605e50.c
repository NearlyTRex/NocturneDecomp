// Name: crt_string.c_mbstrnlen_FUN_00605e50
// Address: 00605e50
// Address Range: [[00605e50, 00605e87]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_string_c_mbstrnlen_FUN_00605e50(char *str,int max_bytes)

#include "nocturne.h"

int __watcallStack crt_string_c_mbstrnlen_FUN_00605e50(char *str,int max_bytes)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  for (; (iVar1 = crt_string_c_mbstring_termination_check_FUN_0060b630(str), iVar1 == 0 &&
         (max_bytes != 0)); max_bytes = max_bytes - uVar2) {
    uVar2 = crt_locale_c_mblen_FUN_00605a40(str);
    if ((uint)max_bytes < uVar2) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    str = str + uVar2;
  }
  return iVar3;
}
