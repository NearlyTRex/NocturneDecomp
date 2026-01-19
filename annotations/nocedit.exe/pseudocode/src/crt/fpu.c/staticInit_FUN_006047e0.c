// Name: crt_fpu.c_staticInit_FUN_006047e0
// Address: 006047e0
// Address Range: [[006047e0, 00604823]]
// Convention: __cdecl
// Signature: void crt_fpu.c_staticInit_FUN_006047e0(void)

#include "nocturne.h"

void __cdecl crt_fpu_c_staticInit_FUN_006047e0(void)

{
  char cVar1;
  
  if (DAT_00684acc == '\0') {
    DAT_00684acd = DAT_00684acc;
    cVar1 = crt_unknown_c_FUN_006047a4();
    if (DAT_0068500c == '\0') {
      DAT_00684acc = cVar1;
      DAT_00684acd = cVar1;
    }
  }
  return;
}
