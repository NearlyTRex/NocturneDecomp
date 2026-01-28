// Name: crt_cpp.c_handlePureVirtualCall_FUN_006015f1
// Address: 006015f1
// Address Range: [[006015f1, 00601619]]
// Convention: unknown
// Signature: void crt_cpp_c_handlePureVirtualCall_FUN_006015f1(void)

#include "nocturne.h"

void crt_cpp_c_handlePureVirtualCall_FUN_006015f1(void)

{
  if (g_PureVirtualCallFlag != 0) {
    return;
  }
  g_PureVirtualCallFlag = 1;
  crt_cpp_c_reportPureVirtualError_FUN_00605b23("pure virtual function called!",1);
  return;
}
