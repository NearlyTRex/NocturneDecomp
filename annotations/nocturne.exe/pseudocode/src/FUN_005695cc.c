// Name: FUN_005695cc
// Address: 005695cc
// Address Range: [[005695cc, 0056963b]]
// Convention: unknown
// Signature: char * FUN_005695cc(char *param_1,int param_2)

#include "nocturne.h"

char * FUN_005695cc(char *param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  
  *(ushort *)(param_2 + 0x1e) = 0;
  cVar2 = *param_1;
  if (cVar2 != '-') goto LAB_005695e8;
  *(byte *)(param_2 + 0x1e) = *(byte *)(param_2 + 0x1e) | 8;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            param_1 = param_1 + 1;
            cVar2 = *param_1;
            if (cVar2 != '-') break;
            *(byte *)(param_2 + 0x1e) = *(byte *)(param_2 + 0x1e) | 8;
          }
LAB_005695e8:
          if (cVar2 != '#') break;
          *(byte *)(param_2 + 0x1e) = *(byte *)(param_2 + 0x1e) | 1;
        }
        if (cVar2 != '+') break;
        bVar1 = *(byte *)(param_2 + 0x1e);
        *(byte *)(param_2 + 0x1e) = bVar1 | 4;
        *(byte *)(param_2 + 0x1e) = bVar1 & 0xfd | 4;
      }
      if (cVar2 != ' ') break;
      if ((*(byte *)(param_2 + 0x1e) & 4) == 0) {
        *(byte *)(param_2 + 0x1e) = *(byte *)(param_2 + 0x1e) | 2;
      }
    }
    if (cVar2 != '0') break;
    *(byte *)(param_2 + 0x16) = 0x30;
  }
  return param_1;
}
