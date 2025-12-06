// Name: crt_unknown.c_FUN_0060ced8
// Address: 0060ced8
// Address Range: [[0060ced8, 0060cefb]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060ced8()

#include "nocturne.h"

SIGNAL_HANDLER
crt_unknown_c_FUN_0060ced8
          (uint param_1,uint param_2,uint unaff_EBX,uint param_4,int param_5
          )

{
  ThreadData *pTVar1;
  
  if ((param_5 != 7) && (param_5 != 4)) {
    pTVar1 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)(unaff_EBX);
    return (SIGNAL_HANDLER)pTVar1->signal_handlers[param_5].flags;
  }
  return g_GlobalSignalHandlers[param_5 * 2 + 1];
}
