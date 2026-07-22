// Name: wincore_winrun.cpp_FUN_00559500
// Address: 00559500
// Address Range: [[00559500, 0055954c]]
// Convention: unknown
// Signature: void wincore_winrun_cpp_FUN_00559500(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wincore_winrun_cpp_FUN_00559500(uint param_1)

{
  _sprintf(&DAT_02de0860,"%s\n\nFile: %s\nLine: %d",param_1,_DAT_01cc4800,_DAT_01cc4804);
  MessageBoxA(_DAT_02de2098,&DAT_02de0860,PTR_s_Nocturne_005c1658,0x30);
                    /* WARNING: Subroutine does not return */
  ExitProcess(1);
}
