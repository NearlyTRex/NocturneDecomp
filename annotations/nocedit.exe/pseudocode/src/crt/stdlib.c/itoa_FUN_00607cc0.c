// Name: crt_stdlib.c_itoa_FUN_00607cc0
// Address: 00607cc0
// Address Range: [[00607cc0, 00607d14]]
// Convention: __cdecl
// Signature: char * __cdecl crt_stdlib_c_itoa_FUN_00607cc0(int value,char *buffer,int base)

#include "nocturne.h"

char * __cdecl itoa(int value,char *buffer,int base)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  char local_37 [35];
  uint local_14;
  char cVar1;
  
  pcVar2 = local_37;
  do {
    uVar1 = (uint)value / (uint)base;
    *pcVar2 = "0123456789abcdefghijklmnopqrstuvwxyz"[(uint)value % (uint)base];
    pcVar2 = pcVar2 + 1;
    value = uVar1;
    pcVar3 = buffer;
  } while (uVar1 != 0);
  do {
    pcVar3 = pcVar3 + 1;
    cVar1 = pcVar2[-1];
    pcVar2 = pcVar2 + -1;
    *pcVar3 = cVar1;
    pcVar3 = pcVar3;
  } while (cVar1 != '\0');
  return buffer;
}
