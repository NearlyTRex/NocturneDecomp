// Name: crt_unknown.c_staticInit_FUN_006047e0
// Address: 006047e0
// Address Range: [[006047e0, 00604823]]
// Convention: unknown
// Signature: undefined crt_unknown.c_staticInit_FUN_006047e0()

#include "nocturne.h"

void crt_unknown_c_staticInit_FUN_006047e0(void)

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
