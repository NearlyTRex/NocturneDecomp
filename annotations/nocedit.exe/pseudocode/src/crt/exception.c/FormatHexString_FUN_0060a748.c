// Name: crt_exception.c_FormatHexString_FUN_0060a748
// Address: 0060a748
// Address Range: [[0060a748, 0060a7a3]]
// Convention: __cdecl
// Signature: void crt_exception.c_FormatHexString_FUN_0060a748(char * dest, char * format, DWORD value)

#include "nocturne.h"

void __cdecl crt_exception_c_FormatHexString_FUN_0060a748(char *dest,char *format,DWORD value)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = (char *)0x0;
  cVar1 = *dest;
  while (cVar1 != '\0') {
    pcVar4 = dest + 1;
    dest = dest + 1;
    cVar1 = *pcVar4;
  }
  pcVar4 = dest + 9;
  while( true ) {
    cVar1 = *format;
    *dest = cVar1;
    if (cVar1 == '\0') break;
    if ((cVar1 == '0') && (format[1] == 'x')) {
      pcVar3 = pcVar4;
    }
    pcVar4 = pcVar4 + 1;
    dest = dest + 1;
    format = format + 1;
  }
  if ((pcVar3 != (char *)0x0) && (value != 0)) {
    do {
      uVar2 = value & 0xf;
      value = value >> 4;
      *pcVar3 = g_HexLookupTable[uVar2];
      pcVar3 = pcVar3 + -1;
    } while (value != 0);
  }
  return;
}
