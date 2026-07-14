// Name: FUN_1000bb30
// Address: 1000bb30
// Address Range: [[1000bb30, 1000bbb2]]
// Convention: unknown
// Signature: undefined4 FUN_1000bb30(int param_1)

#include "nocturne.h"

uint FUN_1000bb30(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  uint uVar3;
  
  __lock(1);
  if (param_1 == 0) {
    puVar1 = &DAT_100178f8;
    uVar3 = 2;
    pcVar2 = DAT_100178f8;
  }
  else {
    puVar1 = &DAT_100178fc;
    uVar3 = 0x15;
    pcVar2 = DAT_100178fc;
  }
  if (pcVar2 == (code *)0x0) {
    FUN_10005a10(1);
    return 0;
  }
  if (pcVar2 != (code *)0x1) {
    *puVar1 = 0;
    FUN_10005a10(1);
    (*pcVar2)(uVar3);
    return 1;
  }
  FUN_10005a10(1);
  return 1;
}
