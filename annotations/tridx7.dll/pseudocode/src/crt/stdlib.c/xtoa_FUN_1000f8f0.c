// Name: crt_stdlib.c_xtoa_FUN_1000f8f0
// Address: 1000f8f0
// Address Range: [[1000f8f0, 1000f94f]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdlib_c_xtoa_FUN_1000f8f0(ulong val,char *buf,uint radix,int neg)

#include "nocturne.h"

void __cdecl xtoa(ulong val,char *buf,uint radix,int neg)

{
  ulonglong uVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  
  pcVar2 = buf;
  if (neg != 0) {
    *buf = '-';
    buf = buf + 1;
    val = -val;
    pcVar2 = buf;
  }
  do {
    pcVar4 = pcVar2;
    uVar1 = (ulonglong)val;
    val = val / radix;
    cVar3 = (char)(uVar1 % (ulonglong)radix);
    if ((uint)(uVar1 % (ulonglong)radix) < 10) {
      cVar3 = cVar3 + '0';
    }
    else {
      cVar3 = cVar3 + 'W';
    }
    *pcVar4 = cVar3;
    pcVar2 = pcVar4 + 1;
  } while (val != 0);
  pcVar4[1] = '\0';
  do {
    cVar3 = *pcVar4;
    *pcVar4 = *buf;
    pcVar4 = pcVar4 + -1;
    *buf = cVar3;
    buf = buf + 1;
  } while (buf < pcVar4);
  return;
}
