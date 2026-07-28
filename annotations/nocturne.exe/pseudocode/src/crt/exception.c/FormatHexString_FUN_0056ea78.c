// Name: crt_exception.c_FormatHexString_FUN_0056ea78
// Address: 0056ea78
// Address Range: [[0056ea78, 0056ead3]]
// Convention: __cdecl
// Signature: void __cdecl crt_exception_c_FormatHexString_FUN_0056ea78(char *dest,char *format,DWORD value)

#include "nocturne.h"

void __cdecl FormatHexString(char *dest,char *format,DWORD value)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = (char *)0x0;
  cVar1 = *dest;
  while (cVar1 != '\0') {
    pcVar3 = dest + 1;
    dest = dest + 1;
    cVar1 = *pcVar3;
  }
  pcVar3 = dest + 9;
  while( true ) {
    cVar1 = *format;
    *dest = cVar1;
    if (cVar1 == '\0') break;
    if ((cVar1 == '0') && (format[1] == 'x')) {
      pcVar2 = pcVar3;
    }
    pcVar3 = pcVar3 + 1;
    dest = dest + 1;
    format = format + 1;
  }
  if (pcVar2 != (char *)0x0) {
    for (; value != 0; value = value >> 4) {
      *pcVar2 = "0123456789abcdef"[value & 0xf];
      pcVar2 = pcVar2 + -1;
    }
  }
  return;
}
