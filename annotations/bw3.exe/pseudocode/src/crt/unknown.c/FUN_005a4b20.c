// Name: crt_unknown.c_FUN_005a4b20
// Address: 005a4b20
// Address Range: [[005a4b20, 005a4b44]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005a4b20(int param_1,int param_2)

#include "nocturne.h"

void FUN_005a4b20(int param_1,int param_2)

{
  void *dest;
  
  dest = FUN_005a3650(param_1 * param_2);
  if (dest != (void *)0x0) {
    memset(dest,0,param_1 * param_2);
  }
  return;
}
