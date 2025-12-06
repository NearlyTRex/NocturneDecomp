// Name: crt_unknown.c_staticInit_FUN_0060be80
// Address: 0060be80
// Address Range: [[0060be80, 0060bef9]]
// Convention: unknown
// Signature: undefined crt_unknown.c_staticInit_FUN_0060be80()

#include "nocturne.h"

void crt_unknown_c_staticInit_FUN_0060be80
               (uint param_1,uint param_2,uint unaff_EBX)

{
  byte uVar1;
  char cVar2;
  char cVar3;
  ulonglong uVar4;
  uint unaff_retaddr;
  
  cVar3 = SBORROW /* signed borrow */1(DAT_00684acd,'\x03');
  cVar2 = (char)(DAT_00684acd - 3) < '\0';
  uVar1 = DAT_00684acd == 3;
  if (2 < DAT_00684acd) {
    uVar4 = crt_unknown_c_FUN_0060dcf6(0xc0000000,0x4150017e,0x80000000,0x4147ffff);
    uVar4 = crt_unknown_c_FUN_0060e0b9
                      ((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x4147ffff,0xc0000000);
    uVar4 = crt_unknown_c_FUN_0060defc
                      (unaff_EBX,unaff_retaddr,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
    crt_unknown_c_FUN_0060e256((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0xe2308c3a,0x3e45798e);
    if (!(bool)uVar1 && cVar3 == cVar2) {
      g_UseSoftwareMath = g_UseSoftwareMath | 1;
    }
  }
  return;
}
