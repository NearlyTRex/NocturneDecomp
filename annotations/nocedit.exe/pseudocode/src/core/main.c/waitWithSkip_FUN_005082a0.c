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
  
  iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  do {
    iVar2 = iVar1;
    if (duration_ms < 1) {
      return;
    }
    while( true ) {
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
      g_GlobalDeltaTimeInt = (iVar1 - iVar2) / 0x12;
      if (g_GlobalDeltaTimeInt < 0) {
        g_GlobalDeltaTimeInt = 0;
      }
      if (0x4000 < g_GlobalDeltaTimeInt) {
        g_GlobalDeltaTimeInt = 0x4000;
      }
      duration_ms = duration_ms - g_GlobalDeltaTimeInt;
      iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
      if (iVar2 == 0) break;
      iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,1);
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
