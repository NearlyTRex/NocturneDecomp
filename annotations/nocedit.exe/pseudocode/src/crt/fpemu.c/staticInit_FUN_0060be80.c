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
  ulonglong uVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  
  cVar3 = SBORROW /* signed borrow */1(DAT_00684acd,'\x03');
  cVar2 = (char)(DAT_00684acd - 3) < '\0';
  uVar1 = DAT_00684acd == 3;
  if (2 < DAT_00684acd) {
    uVar4 = crt_unknown_c_FUN_0060dcf6(0xc0000000,0x4150017e,0x80000000,0x4147ffff);
    uVar7 = 0x60becc;
    dVar5 = crt_math_c_dmul_FUN_0060e0b9
                      ((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x4147ffff,0xc0000000);
    uVar6 = 0x60bedd;
    dVar5 = crt_math_c_dadd_FUN_0060defc
                      (0xc0000000,0x4150017e,SUB84 /* extract 2-byte value */(dVar5,0),(int)((ulonglong)dVar5 >> 0x20));
    crt_unknown_c_FUN_0060e256
              (SUB84 /* extract 2-byte value */(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),0xe2308c3a,0x3e45798e,uVar6,uVar7);
    if (!(bool)uVar1 && cVar3 == cVar2) {
      g_UseSoftwareMath._0_1_ = (byte)g_UseSoftwareMath | 1;
    }
  }
  return;
}
