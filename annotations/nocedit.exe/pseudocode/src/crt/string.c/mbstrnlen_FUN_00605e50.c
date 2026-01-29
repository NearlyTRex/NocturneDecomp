// Name: crt_string.c_mbstrnlen_FUN_00605e50
// Address: 00605e50
// Address Range: [[00605e50, 00605e87]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_string_c_mbstrnlen_FUN_00605e50(char *str,int max_bytes)

#include "nocturne.h"

int __watcallStack mbstrnlen(char *str,int max_bytes)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  for (; (iVar1 = mbstring_termination_check(str), iVar1 == 0 &&
         (max_bytes != 0)); max_bytes = max_bytes - uVar2) {
    uVar2 = mblen(str);
    if ((uint)max_bytes < uVar2) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    str = str + uVar2;
  }
  return iVar3;
}
