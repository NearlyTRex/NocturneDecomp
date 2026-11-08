// Name: FUN_00581300
// Address: 00581300
// Address Range: [[00581300, 0058134c]]
// Convention: unknown
// Signature: void FUN_00581300(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00581300(uint param_1)

{
  FUN_005a28c0(&DAT_02d20340,"%s\n\nFile: %s\nLine: %d",param_1,_DAT_01d71de0,_DAT_01d71de4);
  MessageBoxA(_DAT_02d21b78,&DAT_02d20340,PTR_s_Blair_Witch_3_00607280,0x30);
                    /* WARNING: Subroutine does not return */
  ExitProcess(1);
}
