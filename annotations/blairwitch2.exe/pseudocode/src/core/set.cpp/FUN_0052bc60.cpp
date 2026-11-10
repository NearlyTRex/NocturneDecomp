// Name: core_set.cpp_FUN_0052bc60
// Address: 0052bc60
// Address Range: [[0052bc60, 0052bc9f]]
// Convention: unknown
// Signature: CGame * core_set_cpp_FUN_0052bc60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CGame * core_set_cpp_FUN_0052bc60(void)

{
  CGame *pCVar1;
  CGame *pCVar2;
  
  _DAT_0200a3a4 = 0;
  pCVar2 = g_CGamePtr;
  if (g_CGamePtr->letterbox_mode == 0) {
    pCVar1 = (CGame *)((CGame *)(_DAT_01cedef4 * 4))[0x299b].delta_time_float;
    pCVar2 = (CGame *)(_DAT_01cedef4 * 4);
    if ((pCVar1 != (CGame *)0x0) &&
       (pCVar2 = pCVar1, *(int *)(pCVar1[0x35].status_bar_names[4] + 0xa0) != 0)) {
      _DAT_0200a3a4 = *(uint *)(pCVar1[0x35].status_bar_names[4] + 0xa8);
    }
  }
  return pCVar2;
}
