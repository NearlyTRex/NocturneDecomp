// Name: wincore_winrun.cpp_displayMessageBoxAndQuit_FUN_00581300
// Address: 00581300
// Address Range: [[00581300, 0058134c]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_displayMessageBoxAndQuit_FUN_00581300(char *message)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_displayMessageBoxAndQuit_FUN_00581300(char *message)

{
  _sprintf(&DAT_02d20340,"%s\n\nFile: %s\nLine: %d");
  MessageBoxA(_DAT_02d21b78,&DAT_02d20340,PTR_s_Blair_Witch_3_00607280,0x30);
                    /* WARNING: Subroutine does not return */
  ExitProcess(1);
}
