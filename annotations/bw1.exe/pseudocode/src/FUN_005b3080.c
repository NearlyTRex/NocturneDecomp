// Name: FUN_005b3080
// Address: 005b3080
// Address Range: [[005b3080, 005b30cc]]
// Convention: unknown
// Signature: void FUN_005b3080(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b3080(uint param_1)

{
  FUN_005bfb40(&DAT_02c9a630,"%s\n\nFile: %s\nLine: %d",param_1,_DAT_01d1d400,_DAT_01d1d404);
  MessageBoxA(_DAT_02c9be68,&DAT_02c9a630,PTR_s_Nocturne_006260dc,0x30);
                    /* WARNING: Subroutine does not return */
  ExitProcess(1);
}
