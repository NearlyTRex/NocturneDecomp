// Name: crt_unknown.c_FUN_00570630
// Address: 00570630
// Address Range: [[00570630, 005706a9]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00570630(void)

#include "nocturne.h"

void FUN_00570630(void)

{
  byte uVar1;
  char cVar2;
  char cVar3;
  
  cVar3 = SBORROW1(g_BYTE_005c1795,'\x03');
  cVar2 = (char)(g_BYTE_005c1795 - 3) < '\0';
  uVar1 = g_BYTE_005c1795 == 3;
  if (2 < g_BYTE_005c1795) {
    crt_fstream_cpp_FUN_00572446(0x80000000,0x4147ffff,0xc0000000,0x4150017e);
    crt_fstream_cpp_FUN_00572809();
    crt_fstream_cpp_FUN_0057264c();
    crt_fstream_cpp_FUN_005729a6();
    if (!(bool)uVar1 && cVar3 == cVar2) {
      g_UseSoftwareMath = g_UseSoftwareMath | 1;
    }
  }
  return;
}
