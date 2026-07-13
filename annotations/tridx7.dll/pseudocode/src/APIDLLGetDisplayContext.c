// Name: APIDLLGetDisplayContext
// Address: 10004d30
// Address Range: [[10004d30, 10004d9d]]
// Convention: unknown
// Signature: void APIDLLGetDisplayContext(undefined4 *param_1)

#include "nocturne.h"

void APIDLLGetDisplayContext(uint *param_1)

{
  int iVar1;
  uint local_4;
  
                    /* 0x4d30  1  APIDLLGetDisplayContext */
  local_4 = 0;
  if (DAT_10014180 != (int *)0x0) {
    if (DAT_100141f4 != 0) {
      (**(code **)(*DAT_10014180 + 0x80))(DAT_10014180,0);
      DAT_100141f4 = 0;
      DAT_10014230 = 1;
    }
    iVar1 = (**(code **)(*DAT_10014180 + 0x44))(DAT_10014180,&local_4);
    if (iVar1 != 0) {
      local_4 = 0;
    }
  }
  *param_1 = local_4;
  return;
}
