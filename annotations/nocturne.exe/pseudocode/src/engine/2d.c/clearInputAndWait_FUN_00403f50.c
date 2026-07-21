// Name: engine_2d.c_clearInputAndWait_FUN_00403f50
// Address: 00403f50
// Address Range: [[00403f50, 00403fa7]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_clearInputAndWait_FUN_00403f50(void)

#include "nocturne.h"

void __cdecl engine_2d_c_clearInputAndWait_FUN_00403f50(void)

{
  int iVar1;
  int iVar2;
  
  wincore_winrun_cpp_clearKeypresses_FUN_00558ae0();
  wincore_winrun_cpp_clearMouseClicks_FUN_00558d50();
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 1;
    (&DAT_01c02598)[iVar2] = 0;
    iVar2 = iVar1;
  } while (iVar1 < 600);
  iVar2 = wincore_winrun_cpp_getTime_FUN_00558a30();
  while( true ) {
    iVar1 = wincore_winrun_cpp_getTime_FUN_00558a30();
    if (iVar2 >> 0x10 != iVar1 >> 0x10) break;
    wincore_winrun_cpp_clearKeypresses_FUN_00558ae0();
  }
  wincore_winrun_cpp_clearKeypresses_FUN_00558ae0();
  wincore_winrun_cpp_clearMouseClicks_FUN_00558d50();
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 1;
    (&DAT_01c02598)[iVar2] = 0;
    iVar2 = iVar1;
  } while (iVar1 < 600);
  return;
}
