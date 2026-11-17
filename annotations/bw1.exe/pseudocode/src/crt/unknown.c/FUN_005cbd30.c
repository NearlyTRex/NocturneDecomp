// Name: crt_unknown.c_FUN_005cbd30
// Address: 005cbd30
// Address Range: [[005cbd30, 005cbda9]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005cbd30(void)

#include "nocturne.h"

void FUN_005cbd30(void)

{
  byte uVar1;
  char cVar2;
  char cVar3;
  
  cVar3 = SBORROW1(g_BYTE_0062621d,'\x03');
  cVar2 = (char)(g_BYTE_0062621d - 3) < '\0';
  uVar1 = g_BYTE_0062621d == 3;
  if (2 < g_BYTE_0062621d) {
    FUN_005cd4be(0x80000000,0x4147ffff,0xc0000000,0x4150017e);
    ldexp();
    FUN_005cd6c4();
    FUN_005cda1e();
    if (!(bool)uVar1 && cVar3 == cVar2) {
      g_BYTE_006267b8 = g_BYTE_006267b8 | 1;
    }
  }
  return;
}
