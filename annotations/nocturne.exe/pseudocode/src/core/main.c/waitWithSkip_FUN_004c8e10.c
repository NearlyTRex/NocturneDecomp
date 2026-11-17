// Name: core_main.c_waitWithSkip_FUN_004c8e10
// Address: 004c8e10
// Address Range: [[004c8e10, 004c8ea9]]
// Convention: __cdecl
// Signature: void __cdecl core_main_c_waitWithSkip_FUN_004c8e10(int duration_ms)

#include "nocturne.h"

void __cdecl core_main_c_waitWithSkip_FUN_004c8e10(int duration_ms)

{
  int iVar1;
  int iVar2;
  
  iVar1 = wincore_winrun_cpp_getTime_FUN_00558a30();
  do {
    iVar2 = iVar1;
    if (duration_ms < 1) {
      return;
    }
    while( true ) {
      wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
      iVar1 = wincore_winrun_cpp_getTime_FUN_00558a30();
      g_GlobalDeltaTimeInt = (iVar1 - iVar2) / 0x12;
      if (g_GlobalDeltaTimeInt < 0) {
        g_GlobalDeltaTimeInt = 0;
      }
      if (0x4000 < g_GlobalDeltaTimeInt) {
        g_GlobalDeltaTimeInt = 0x4000;
      }
      duration_ms = duration_ms - g_GlobalDeltaTimeInt;
      iVar2 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LSHIFT);
      if (iVar2 == 0) break;
      iVar2 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_ESCAPE);
      if (iVar2 != 0) {
        return;
      }
      iVar2 = iVar1;
      if (duration_ms < 1) {
        return;
      }
    }
  } while( true );
}
