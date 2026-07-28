// Name: crt_cpp.c_pureVirtual_FUN_00566ed7
// Address: 00566ed7
// Address Range: [[00566ed7, 00566eff]]
// Convention: unknown
// Signature: void crt_cpp_c_pureVirtual_FUN_00566ed7(void)

#include "nocturne.h"

void pureVirtual(void)

{
  if (DAT_005c1f4c != 0) {
    return;
  }
  DAT_005c1f4c = 1;
  reportPureVirtualError("pure virtual function called!",1);
  return;
}
