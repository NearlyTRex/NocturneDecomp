// Name: crt_fpu.c_staticInit_FUN_006047e0
// Address: 006047e0
// Address Range: [[006047e0, 00604823]]
// Convention: __cdecl
// Signature: void __cdecl crt_fpu_c_staticInit_FUN_006047e0(void)

#include "nocturne.h"

void __cdecl staticInit(void)

{
  byte bVar1;
  
  if (BYTE_00684acc == 0) {
    BYTE_00684acd = BYTE_00684acc;
    bVar1 = FUN_006047a4();
    if (BYTE_0068500c == 0) {
      BYTE_00684acc = bVar1;
      BYTE_00684acd = bVar1;
    }
  }
  return;
}
