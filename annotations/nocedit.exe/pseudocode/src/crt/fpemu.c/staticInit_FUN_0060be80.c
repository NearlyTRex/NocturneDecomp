// Name: crt_fpemu.c_staticInit_FUN_0060be80
// Address: 0060be80
// Address Range: [[0060be80, 0060bef9]]
// Convention: __cdecl
// Signature: void __cdecl crt_fpemu_c_staticInit_FUN_0060be80(void)

#include "nocturne.h"

void __cdecl staticInit(void)

{
  uint uVar1;
  uint extraout_EDX;
  byte uVar2;
  char cVar3;
  char cVar4;
  double b;
  
  cVar4 = SBORROW1(BYTE_00684acd,'\x03');
  cVar3 = (char)(BYTE_00684acd - 3) < '\0';
  uVar2 = BYTE_00684acd == 3;
  if (2 < BYTE_00684acd) {
    uVar1 = FUN_0060dcf6();
    b = dmul((double)CONCAT44(extraout_EDX,uVar1),3145727.0);
    dadd(4195835.0,b);
    FUN_0060e256();
    if (!(bool)uVar2 && cVar4 == cVar3) {
      g_UseSoftwareMath = g_UseSoftwareMath | 1;
    }
  }
  return;
}
