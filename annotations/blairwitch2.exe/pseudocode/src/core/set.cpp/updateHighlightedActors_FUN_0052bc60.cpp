// Name: core_set.cpp_updateHighlightedActors_FUN_0052bc60
// Address: 0052bc60
// Address Range: [[0052bc60, 0052bc9f]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_updateHighlightedActors_FUN_0052bc60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_updateHighlightedActors_FUN_0052bc60(void)

{
  int iVar1;
  
  _DAT_0200a3a4 = 0;
  if (((g_CGamePtr->letterbox_mode == 0) &&
      (iVar1 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x255f0) != 0)) {
    _DAT_0200a3a4 = *(uint *)(iVar1 + 0x255f8);
  }
  return;
}
