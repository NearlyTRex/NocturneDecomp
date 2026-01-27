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
  
  cVar3 = SBORROW1(BYTE_00684acd,'\x03');
  cVar2 = (char)(BYTE_00684acd - 3) < '\0';
  uVar1 = BYTE_00684acd == 3;
  if (2 < BYTE_00684acd) {
    dVar4 = (double)crt_unknown_c_FUN_0060dcf6(0xc0000000,0x4150017e,0x80000000,0x4147ffff);
    dVar4 = crt_math_c_dmul_FUN_0060e0b9(dVar4,3145727.0);
    dVar4 = crt_math_c_dadd_FUN_0060defc(4195835.0,dVar4);
    crt_unknown_c_FUN_0060e256(SUB84(dVar4,0),(int)((ulonglong)dVar4 >> 0x20),0xe2308c3a,0x3e45798e)
    ;
    if (!(bool)uVar1 && cVar3 == cVar2) {
      g_UseSoftwareMath = g_UseSoftwareMath | 1;
    }
  }
  return;
}
