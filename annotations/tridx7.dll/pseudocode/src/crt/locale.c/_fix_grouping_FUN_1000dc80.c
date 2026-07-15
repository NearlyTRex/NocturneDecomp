// Name: crt_locale.c__fix_grouping_FUN_1000dc80
// Address: 1000dc80
// Address Range: [[1000dc80, 1000dcc6]]
// Convention: __cdecl
// Signature: void __cdecl crt_locale_c__fix_grouping_FUN_1000dc80(char *grouping)

#include "nocturne.h"

void __cdecl _fix_grouping(char *grouping)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *grouping;
  do {
    if (cVar2 == '\0') {
      return;
    }
    while( true ) {
      while ((cVar2 = *grouping, '/' < cVar2 && (cVar2 < ':'))) {
        *grouping = cVar2 + -0x30;
        grouping = grouping + 1;
        if (*grouping == '\0') {
          return;
        }
      }
      pcVar3 = grouping;
      if (cVar2 != ';') break;
      do {
        pcVar1 = pcVar3 + 1;
        *pcVar3 = *pcVar1;
        pcVar3 = pcVar1;
      } while (*pcVar1 != '\0');
      if (*grouping == '\0') {
        return;
      }
    }
    grouping = grouping + 1;
    cVar2 = *grouping;
  } while( true );
}
