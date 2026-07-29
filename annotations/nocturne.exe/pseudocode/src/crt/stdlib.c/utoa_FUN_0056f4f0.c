// Name: crt_stdlib.c_utoa_FUN_0056f4f0
// Address: 0056f4f0
// Address Range: [[0056f4f0, 0056f543]]
// Convention: __cdecl
// Signature: char * __cdecl crt_stdlib_c_utoa_FUN_0056f4f0(uint value,char *buffer,int base)

#include "nocturne.h"

char * __cdecl utoa(uint value,char *buffer,int base)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char local_37 [39];
  
  pcVar3 = local_37;
  do {
    uVar2 = value / (uint)base;
    pcVar4 = pcVar3 + 1;
    *pcVar3 = "0123456789abcdefghijklmnopqrstuvwxyz"[value % (uint)base];
    value = uVar2;
    pcVar3 = pcVar4;
    pcVar5 = buffer;
  } while (uVar2 != 0);
  do {
    cVar1 = pcVar4[-1];
    pcVar4 = pcVar4 + -1;
    *pcVar5 = cVar1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  return buffer;
}
