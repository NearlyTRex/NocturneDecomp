// Name: crt_unknown.c_FUN_005bcca0
// Address: 005bcca0
// Address Range: [[005bcca0, 005bcce3]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005bcca0(void)

#include "nocturne.h"

void FUN_005bcca0(void)

{
  byte bVar1;
  
  if (g_BYTE_0061ee9c == 0) {
    g_BYTE_0061ee9d = g_BYTE_0061ee9c;
    bVar1 = FUN_005bcc64();
    if (DAT_0061f27c == '\0') {
      g_BYTE_0061ee9c = bVar1;
      g_BYTE_0061ee9d = bVar1;
    }
  }
  return;
}
