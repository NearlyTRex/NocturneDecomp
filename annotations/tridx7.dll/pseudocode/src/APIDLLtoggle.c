// Name: APIDLLtoggle
// Address: 100024b0
// Address Range: [[100024b0, 100024f5]]
// Convention: __cdecl
// Signature: void __cdecl APIDLLtoggle(void)

#include "nocturne.h"

void __cdecl APIDLLtoggle(void)

{
                    /* 0x24b0  34  APIDLLtoggle */
  if ((DAT_1001418c != (int *)0x0) && (DAT_100141f8 == 0)) {
    if (*g_ExternalRendererBridge.frame_buffer_ptr != (void *)0x0) {
      (**(code **)(*DAT_1001418c + 0x2c))(DAT_1001418c,0,1);
      return;
    }
    (**(code **)(*DAT_1001418c + 0x2c))(DAT_1001418c,0,0);
  }
  return;
}
