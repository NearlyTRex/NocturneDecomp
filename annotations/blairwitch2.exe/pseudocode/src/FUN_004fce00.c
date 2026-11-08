// Name: FUN_004fce00
// Address: 004fce00
// Address Range: [[004fce00, 004fcf07]]
// Convention: unknown
// Signature: undefined4 FUN_004fce00(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004fce00(int param_1)

{
  uint uVar1;
  char *pcVar2;
  
  if (_DAT_01cedee0 < 1) {
    pcVar2 = "Can't run mission - no heros";
  }
  else {
    if (*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) != 0) {
      FUN_004fc350(param_1);
      *(uint *)(param_1 + 0x1128) = 0xffffffff;
      uVar1 = 0x01C38BC0;
      *(uint *)(param_1 + 0x1124) = 0;
      *(uint *)(param_1 + 0x1120) = *(uint *)(param_1 + 0x1124);
      *(uint *)(param_1 + 0x111c) = *(uint *)(param_1 + 0x1120);
      FUN_00489380(uVar1);
      *(uint *)(0x01CB6900 + 0x244) = 0;
      FUN_004fc6b0(param_1,*(uint *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2c));
      uVar1 = FUN_0050fe80("Loading script",0);
      FUN_004e1600(0x01D03000,uVar1);
      FUN_004fbc90(param_1);
      FUN_00522080(0x01E65CD0);
      FUN_00522200(0x01E65CD0);
      FUN_00539840(0x01E661B8);
      return 1;
    }
    pcVar2 = "Can't run mission - no local hero";
  }
  FUN_0047be40(0x01C25594,pcVar2);
  return 0;
}
