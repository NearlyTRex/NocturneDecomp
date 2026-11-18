// Name: crt_unknown.c_FUN_005aeba0
// Address: 005aeba0
// Address Range: [[005aeba0, 005aec19]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005aeba0(void)

#include "nocturne.h"

void FUN_005aeba0(void)

{
  byte uVar1;
  char cVar2;
  char cVar3;
  
  cVar3 = SBORROW1(g_BYTE_006075c1,'\x03');
  cVar2 = (char)(g_BYTE_006075c1 - 3) < '\0';
  uVar1 = g_BYTE_006075c1 == 3;
  if (2 < g_BYTE_006075c1) {
    FUN_005b024e(0x80000000,0x4147ffff,0xc0000000,0x4150017e);
    ldexp();
    FUN_005b0454();
    FUN_005b07ae();
    if (!(bool)uVar1 && cVar3 == cVar2) {
      g_UseSoftwareMath = g_UseSoftwareMath | 1;
    }
  }
  return;
}
