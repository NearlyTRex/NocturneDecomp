// Name: core_main.c_waitWithSkip_FUN_005082a0
// Address: 005082a0
// Address Range: [[005082a0, 00508339]]
// Convention: __cdecl
// Signature: void core_main.c_waitWithSkip_FUN_005082a0(int duration_ms)

#include "nocturne.h"

void __cdecl core_main_c_waitWithSkip_FUN_005082a0(int duration_ms)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  if (0 < duration_ms) {
    do {
      while( true ) {
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        iVar2 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
        g_GlobalDeltaTimeInt = (iVar2 - iVar1) / 0x12;
        if (g_GlobalDeltaTimeInt < 0) {
          g_GlobalDeltaTimeInt = 0;
        }
        if (0x4000 < g_GlobalDeltaTimeInt) {
          g_GlobalDeltaTimeInt = 0x4000;
        }
        duration_ms = duration_ms - g_GlobalDeltaTimeInt;
        iVar3 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
        iVar1 = iVar2;
        if (iVar3 == 0) break;
        iVar2 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,1);
        if (iVar2 != 0) {
          return;
        }
        if (duration_ms < 1) {
          return;
        }
      }
    } while (0 < duration_ms);
  }
  return;
}
