// Name: core_set.cpp_FUN_0054cf40
// Address: 0054cf40
// Address Range: [[0054cf40, 0054cf7f]]
// Convention: unknown
// Signature: CGame * core_set_cpp_FUN_0054cf40(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CGame * core_set_cpp_FUN_0054cf40(void)

{
  CGame *pCVar1;
  CGame *pCVar2;
  
  _DAT_02026358 = 0;
  pCVar2 = g_CGamePtr;
  if (g_CGamePtr->letterbox_mode == 0) {
    pCVar1 = *(CGame **)(((CGame *)(_DAT_01d06ab4 * 4))[0x2a28].chapter_reload_filename + 8);
    pCVar2 = (CGame *)(_DAT_01d06ab4 * 4);
    if ((pCVar1 != (CGame *)0x0) &&
       (pCVar2 = pCVar1, *(int *)(pCVar1[0x2e].status_bar_names[0] + 0xe8) != 0)) {
      _DAT_02026358 = *(uint *)(pCVar1[0x2e].status_bar_names[0] + 0xf0);
    }
  }
  return pCVar2;
}
