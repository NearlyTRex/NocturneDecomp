// Name: core_set.cpp_updateHighlightedActors_FUN_0054cf40
// Address: 0054cf40
// Address Range: [[0054cf40, 0054cf7f]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_updateHighlightedActors_FUN_0054cf40(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_updateHighlightedActors_FUN_0054cf40(void)

{
  int iVar1;
  
  _DAT_02026358 = 0;
  if (((g_CGamePtr->letterbox_mode == 0) &&
      (iVar1 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x1ff60) != 0)) {
    _DAT_02026358 = *(uint *)(iVar1 + 0x1ff68);
  }
  return;
}
