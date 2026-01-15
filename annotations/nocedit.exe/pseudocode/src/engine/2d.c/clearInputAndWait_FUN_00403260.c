// Name: engine_2d.c_clearInputAndWait_FUN_00403260
// Address: 00403260
// Address Range: [[00403260, 004032b7]]
// Convention: __cdecl
// Signature: void engine_2d.c_clearInputAndWait_FUN_00403260(void)

#include "nocturne.h"

void __cdecl engine_2d_c_clearInputAndWait_FUN_00403260(void)

{
  int iVar1;
  int iVar2;
  
  wincore_winrun_cpp_clearKeypresses_FUN_005f2e70();
  wincore_winrun_cpp_clearMouseClicks_FUN_005f30c0();
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 1;
    g_KeyboardState[iVar2] = '\0';
    iVar2 = iVar1;
  } while (iVar1 < 600);
  iVar2 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  while( true ) {
    iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    if (iVar2 >> 0x10 != iVar1 >> 0x10) break;
    wincore_winrun_cpp_clearKeypresses_FUN_005f2e70();
  }
  wincore_winrun_cpp_clearKeypresses_FUN_005f2e70();
  wincore_winrun_cpp_clearMouseClicks_FUN_005f30c0();
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 1;
    g_KeyboardState[iVar2] = '\0';
    iVar2 = iVar1;
  } while (iVar1 < 600);
  return;
}
