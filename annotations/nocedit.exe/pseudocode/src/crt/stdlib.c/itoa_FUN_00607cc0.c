// Name: crt_stdlib.c_itoa_FUN_00607cc0
// Address: 00607cc0
// Address Range: [[00607cc0, 00607d14]]
// Convention: __cdecl
// Signature: char * crt_stdlib.c_itoa_FUN_00607cc0(int value, char * buffer, int base)

#include "nocturne.h"

char * __cdecl crt_stdlib_c_itoa_FUN_00607cc0(int value,char *buffer,int base)

{
  char cVar1;
  char *pcVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char local_37 [35];
  uint local_14;
  
  pcVar2 = local_37;
  do {
    local_14 = (uint)value / (uint)base;
    *pcVar2 = "0123456789abcdefghijklmnopqrstuvwxyz"[(uint)value % (uint)base];
    pcVar2 = pcVar2 + 1;
    value = local_14;
    pcVar3 = buffer;
  } while (local_14 != 0);
  do {
    cVar1 = pcVar2[-1];
    pcVar2 = pcVar2 + -1;
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  return buffer;
}
