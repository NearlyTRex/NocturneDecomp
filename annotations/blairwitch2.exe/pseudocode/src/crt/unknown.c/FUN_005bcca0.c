// Name: crt_unknown.c_FUN_005bcca0
// Address: 005bcca0
// Address Range: [[005bcca0, 005bcce3]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005bcca0(void)

#include "nocturne.h"

void FUN_005bcca0(void)

{
  char cVar1;
  
  if (DAT_0061ee9c == '\0') {
    DAT_0061ee9d = DAT_0061ee9c;
    cVar1 = FUN_005bcc64();
    if (DAT_0061f27c == '\0') {
      DAT_0061ee9c = cVar1;
      DAT_0061ee9d = cVar1;
    }
  }
  return;
}
