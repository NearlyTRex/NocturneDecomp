// Name: FUN_004f94a0
// Address: 004f94a0
// Address Range: [[004f94a0, 004f9578]]
// Convention: unknown
// Signature: void FUN_004f94a0(int *param_1)

#include "nocturne.h"

void FUN_004f94a0(int *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    return;
  }
  FUN_0040d460(0x1d883a8,"bwp3_menu_scroll",0x280,0x1e0);
  FUN_0040d460(0x1d88614,PTR_s_BWP3_mainmenu_005c9283_2_006006f8,0x280,0x1e0);
  FUN_0040d460(0x1d88628,"bwp3_hand",0x200,0x200);
  param_1[0x2b4] = 0x140;
  param_1[0x2b5] = -0x140;
  param_1[0x2b6] = 0;
  iVar3 = 0x1d883bc;
  param_1[0x2b7] = 0x1e0;
  iVar2 = 0;
  param_1[0x2b8] = 0x10000;
  param_1[0x2b9] = 0;
  do {
    puVar1 = (uint *)((int)&PTR_s_blair_00000_006006fc + iVar2);
    iVar2 = iVar2 + 4;
    FUN_0040d460(iVar3,*puVar1,0x280,0xa5);
    iVar3 = iVar3 + 0x14;
  } while (iVar2 != 0x78);
  *param_1 = 1;
  return;
}
