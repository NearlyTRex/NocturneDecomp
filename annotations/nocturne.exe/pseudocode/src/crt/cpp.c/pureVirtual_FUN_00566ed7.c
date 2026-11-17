// Name: crt_cpp.c_pureVirtual_FUN_00566ed7
// Address: 00566ed7
// Address Range: [[00566ed7, 00566eff]]
// Convention: unknown
// Signature: void crt_cpp_c_pureVirtual_FUN_00566ed7(void)

#include "nocturne.h"

void pureVirtual(void)

{
  if (g_PureVirtualCallFlag != 0) {
    return;
  }
  g_PureVirtualCallFlag = 1;
  reportPureVirtualError("pure virtual function called!",1);
  return;
}
