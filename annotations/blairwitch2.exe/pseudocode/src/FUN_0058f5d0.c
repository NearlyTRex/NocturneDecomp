// Name: FUN_0058f5d0
// Address: 0058f5d0
// Address Range: [[0058f5d0, 0058f61c]]
// Convention: unknown
// Signature: void FUN_0058f5d0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058f5d0(uint param_1)

{
  FUN_005b7790(&DAT_02662df0,"%s\n\nFile: %s\nLine: %d",param_1,_DAT_01d046a0,_DAT_01d046a4);
  MessageBoxA(_DAT_02664628,&DAT_02662df0,PTR_s_Coffin_Rock_0061e984,0x30);
                    /* WARNING: Subroutine does not return */
  ExitProcess(1);
}
