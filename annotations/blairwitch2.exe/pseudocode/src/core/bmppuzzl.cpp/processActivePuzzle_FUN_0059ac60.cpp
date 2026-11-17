// Name: core_bmppuzzl.cpp_processActivePuzzle_FUN_0059ac60
// Address: 0059ac60
// Address Range: [[0059ac60, 0059ad14]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_processActivePuzzle_FUN_0059ac60(void)

#include "nocturne.h"

void __cdecl core_bmppuzzl_cpp_processActivePuzzle_FUN_0059ac60(void)

{
  uint uVar1;
  int iVar2;
  
  if (g_INT_026677e0 != 0) {
    iVar2 = 0;
    while (((int *)g_INT_026677e0 != (int *)0x0 &&
           ((uVar1 = 1 << ((byte)iVar2 & 0x1f),
            (g_BIT_INTEGER32_01c2a384.dword & uVar1) == (g_INT_026677e8 & uVar1) ||
            (g_INT_026677e8 = (int)g_BIT_INTEGER32_01c2a384,
            (**(code **)(*(int *)g_INT_026677e0 + 0x24))
                      (g_INT_026677e0,g_INT_01c2a37c,g_INT_01c2a380,iVar2,
                       (uVar1 & g_BIT_INTEGER32_01c2a384.dword) != 0), g_INT_026677e0 != 0))))) {
      iVar2 = iVar2 + 1;
      if (2 < iVar2) {
        (**(code **)(*(int *)g_INT_026677e0 + 0x20))(g_INT_026677e0,g_CGamePtr->delta_time_float);
        return;
      }
    }
  }
  return;
}
