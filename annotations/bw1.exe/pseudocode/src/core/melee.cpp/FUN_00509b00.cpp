// Name: core_melee.cpp_FUN_00509b00
// Address: 00509b00
// Address Range: [[00509b00, 00509b33] [00509b42, 00509b7b]]
// Convention: unknown
// Signature: void core_melee_cpp_FUN_00509b00(undefined4 param_1)

#include "nocturne.h"

void core_melee_cpp_FUN_00509b00(uint param_1)

{
  int iVar1;
  char *pcVar2;
  uint uStack_20;
  ushort uStack_1c;
  uint uStack_1a;
  int iStack_16;
  
  uStack_1c = 0;
  uStack_20 = 0;
  while (iVar1 = _heapwalk(&uStack_20), iVar1 == 0) {
    if (iStack_16 == 0) {
      pcVar2 = "FREE";
    }
    else {
      pcVar2 = "USED";
    }
    support_trstream_cpp_FUN_005a14c0
              (param_1,"%08X %4s %d\n",uStack_20,uStack_1c,pcVar2,uStack_1a);
  }
  switch(iVar1) {
  case 1:
    support_trstream_cpp_FUN_005a14c0(param_1,"OK - empty heap\n");
    break;
  case 2:
    support_trstream_cpp_FUN_005a14c0(param_1,"ERROR - bad start of heap\n");
    return;
  case 3:
    support_trstream_cpp_FUN_005a14c0(param_1,"ERROR - bad node in heap\n");
    return;
  case 4:
    support_trstream_cpp_FUN_005a14c0(param_1,"OK - end of heap\n");
    return;
  case 5:
    support_trstream_cpp_FUN_005a14c0(param_1,"ERROR - bad pointer to heap\n");
    return;
  }
  return;
}
