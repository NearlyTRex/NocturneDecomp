// Name: core_melee.cpp_FUN_004eada0
// Address: 004eada0
// Address Range: [[004eada0, 004eadd3] [004eade2, 004eae1b]]
// Convention: unknown
// Signature: void core_melee_cpp_FUN_004eada0(undefined4 param_1)

#include "nocturne.h"

void core_melee_cpp_FUN_004eada0(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uStack_20;
  ushort uStack_1c;
  uint uStack_1a;
  int iStack_16;
  
  uStack_1c = 0;
  uStack_20 = 0;
  while (iVar1 = _heapwalk((WatcomHeapInfo *)&uStack_20), iVar1 == 0) {
    if (iStack_16 == 0) {
      uVar2 = 0x5dca46;
    }
    else {
      uVar2 = 0x5dca41;
    }
    support_trstream_cpp_FUN_0057d870
              (param_1,"%08X %4s %d\n",uStack_20,uStack_1c,uVar2,uStack_1a);
  }
  switch(iVar1) {
  case 1:
    support_trstream_cpp_FUN_0057d870(param_1,"OK - empty heap\n");
    break;
  case 2:
    support_trstream_cpp_FUN_0057d870(param_1,"ERROR - bad start of heap\n");
    return;
  case 3:
    support_trstream_cpp_FUN_0057d870(param_1,"ERROR - bad node in heap\n");
    return;
  case 4:
    support_trstream_cpp_FUN_0057d870(param_1,"OK - end of heap\n");
    return;
  case 5:
    support_trstream_cpp_FUN_0057d870(param_1,"ERROR - bad pointer to heap\n");
    return;
  }
  return;
}
