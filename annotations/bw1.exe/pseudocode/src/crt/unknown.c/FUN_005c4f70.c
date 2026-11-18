// Name: crt_unknown.c_FUN_005c4f70
// Address: 005c4f70
// Address Range: [[005c4f70, 005c4fb3]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c4f70(void)

#include "nocturne.h"

void FUN_005c4f70(void)

{
  byte bVar1;
  
  if (g_BYTE_0062621c == 0) {
    g_BYTE_0062621d = g_BYTE_0062621c;
    bVar1 = FUN_005c4f34();
    if (DAT_006265d4 == '\0') {
      g_BYTE_0062621c = bVar1;
      g_BYTE_0062621d = bVar1;
    }
  }
  return;
}
