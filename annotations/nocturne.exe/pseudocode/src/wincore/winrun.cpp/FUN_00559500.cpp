// Name: wincore_winrun.cpp_FUN_00559500
// Address: 00559500
// Address Range: [[00559500, 0055954c]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_FUN_00559500(char *message)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_FUN_00559500(char *message)

{
  _sprintf(&DAT_02de0860,"%s\n\nFile: %s\nLine: %d",message,g_CurrentFilename,g_CurrentLineNumber)
  ;
  MessageBoxA(_DAT_02de2098,&DAT_02de0860,PTR_s_Nocturne_005c1658,0x30);
                    /* WARNING: Subroutine does not return */
  ExitProcess(1);
}
