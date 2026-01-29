// Name: crt_string.c_strlen_FUN_0060f870
// Address: 0060f870
// Address Range: [[0060f870, 0060f888]]
// Convention: __cdecl
// Signature: int __cdecl crt_string_c_strlen_FUN_0060f870(char *str)

#include "nocturne.h"

int __cdecl strlen(char *str)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *str;
    str = str + 1;
  } while (cVar1 != '\0');
  return ~uVar2 - 1;
}
