// Name: crt_unknown.c_FUN_005a3e21
// Address: 005a3e21
// Address Range: [[005a3e21, 005a3e49]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005a3e21(void)

#include "nocturne.h"

void FUN_005a3e21(void)

{
  if (g_PureVirtualCallFlag != 0) {
    return;
  }
  g_PureVirtualCallFlag = 1;
  FUN_005a6144("pure virtual function called!",1);
  return;
}
