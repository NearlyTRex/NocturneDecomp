// Name: APIDLLkill
// Address: 10002460
// Address Range: [[10002460, 100024a6]]
// Convention: __cdecl
// Signature: void __cdecl APIDLLkill(void)

#include "nocturne.h"

void __cdecl APIDLLkill(void)

{
                    /* 0x2460  20  APIDLLkill */
  FUN_10002370();
  if (DAT_10014188 != (int *)0x0) {
    (**(code **)(*DAT_10014188 + 8))(DAT_10014188);
    DAT_10014188 = (int *)0x0;
  }
  if (DAT_10014184 != (int *)0x0) {
    (**(code **)(*DAT_10014184 + 8))(DAT_10014184);
    DAT_10014184 = (int *)0x0;
  }
  return;
}
