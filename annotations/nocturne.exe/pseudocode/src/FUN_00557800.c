// Name: FUN_00557800
// Address: 00557800
// Address Range: [[00557800, 0055793b]]
// Convention: unknown
// Signature: void FUN_00557800(int param_1)

#include "nocturne.h"

void FUN_00557800(int param_1)

{
  FUN_004796c0(param_1);
  FUN_0040c880(param_1 + 0xbc8c,"?speed" + 1);
  FUN_0040ca80(param_1 + 0x150,"modelName");
  if (0x00000006 < 3) {
    FUN_0040c880(param_1 + 0xbc9c,"guardDistance");
  }
  FUN_0040cb00(param_1 + 0x150,"motion state");
  if (1 < 0x00000006) {
    FUN_0040c900(param_1 + 0xbd3c,"lightUpEyes");
  }
  if (3 < 0x00000006) {
    FUN_0040c980(param_1 + 0xbd50,"chainAnchor");
    FUN_0040c880(param_1 + 0xbd54,"chainLength");
  }
  if (4 < 0x00000006) {
    FUN_0040c900(param_1 + 0xbd24,&DAT_00597e90);
  }
  if (0x00000006 < 6) {
    return;
  }
  FUN_0040c900(param_1 + 0xbd60,"phase");
  FUN_0040c880(param_1 + 0xbd64,"phaseTimer");
  FUN_0040c980(param_1 + 0xbd58,"alpha1");
  FUN_0040c980(param_1 + 0xbd5c,"alpha2");
  return;
}
