// Name: crt_fpemu.c_staticInit_FUN_0060be80
// Address: 0060be80
// Address Range: [[0060be80, 0060bef9]]
// Convention: __cdecl
// Signature: void __cdecl crt_fpemu_c_staticInit_FUN_0060be80(void)

#include "nocturne.h"

void __cdecl staticInit(void)

{
  byte uVar1;
  char cVar2;
  char cVar3;
  double dVar4;
  
  cVar3 = SBORROW1(BYTE_00684acd,'\x03');
  cVar2 = (char)(BYTE_00684acd - 3) < '\0';
  uVar1 = BYTE_00684acd == 3;
  if (2 < BYTE_00684acd) {
    dVar4 = (double)FUN_0060dcf6();
    dVar4 = dmul(dVar4,3145727.0);
    dadd(4195835.0,dVar4);
    FUN_0060e256();
    if (!(bool)uVar1 && cVar3 == cVar2) {
      g_UseSoftwareMath = g_UseSoftwareMath | 1;
    }
  }
  return;
}
