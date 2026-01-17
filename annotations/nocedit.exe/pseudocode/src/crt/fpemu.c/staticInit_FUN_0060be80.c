// Name: crt_fpemu.c_staticInit_FUN_0060be80
// Address: 0060be80
// Address Range: [[0060be80, 0060bef9]]
// Convention: __cdecl
// Signature: void crt_fpemu.c_staticInit_FUN_0060be80(void)

#include "nocturne.h"

void __cdecl crt_fpemu_c_staticInit_FUN_0060be80(void)

{
  byte uVar1;
  char cVar2;
  char cVar3;
  double dVar4;
  
  cVar3 = SBORROW /* signed borrow */1(0,'\x03');
  cVar2 = (char)(0 - 3) < '\0';
  uVar1 = 0 == 3;
  if (2 < 0) {
    dVar4 = (double)crt_unknown_c_FUN_0060dcf6(0xc0000000,0x4150017e,0x80000000,0x4147ffff);
    dVar4 = crt_math_c_dmul_FUN_0060e0b9(dVar4,3145727.0);
    dVar4 = crt_math_c_dadd_FUN_0060defc(4195835.0,dVar4);
    crt_unknown_c_FUN_0060e256(SUB84 /* extract 2-byte value */(dVar4,0),(int)((ulonglong)dVar4 >> 0x20),0xe2308c3a,0x3e45798e)
    ;
    if (!(bool)uVar1 && cVar3 == cVar2) {
      g_UseSoftwareMath._0_1_ = (byte)g_UseSoftwareMath | 1;
    }
  }
  return;
}
