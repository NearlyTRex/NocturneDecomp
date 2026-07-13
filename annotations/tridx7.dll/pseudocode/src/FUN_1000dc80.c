// Name: FUN_1000dc80
// Address: 1000dc80
// Address Range: [[1000dc80, 1000dcc6]]
// Convention: unknown
// Signature: void FUN_1000dc80(char *param_1)

#include "nocturne.h"

void FUN_1000dc80(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *param_1;
  do {
    if (cVar2 == '\0') {
      return;
    }
    while( true ) {
      while ((cVar2 = *param_1, '/' < cVar2 && (cVar2 < ':'))) {
        *param_1 = cVar2 + -0x30;
        param_1 = param_1 + 1;
        if (*param_1 == '\0') {
          return;
        }
      }
      pcVar3 = param_1;
      if (cVar2 != ';') break;
      do {
        pcVar1 = pcVar3 + 1;
        *pcVar3 = *pcVar1;
        pcVar3 = pcVar1;
      } while (*pcVar1 != '\0');
      if (*param_1 == '\0') {
        return;
      }
    }
    param_1 = param_1 + 1;
    cVar2 = *param_1;
  } while( true );
}
