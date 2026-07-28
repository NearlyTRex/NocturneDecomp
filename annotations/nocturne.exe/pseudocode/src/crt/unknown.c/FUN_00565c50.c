// Name: crt_unknown.c_FUN_00565c50
// Address: 00565c50
// Address Range: [[00565c50, 00565c74]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00565c50(int param_1,int param_2)

#include "nocturne.h"

void FUN_00565c50(int param_1,int param_2)

{
  void *dest;
  
  dest = malloc(param_1 * param_2);
  if (dest != (void *)0x0) {
    memset(dest,0,param_1 * param_2);
  }
  return;
}
