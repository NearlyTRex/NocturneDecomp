// Name: FUN_00438780
// Address: 00438780
// Address Range: [[00438780, 00438814]]
// Convention: unknown
// Signature: void FUN_00438780(int param_1)

#include "nocturne.h"

void FUN_00438780(int param_1)

{
  FUN_005193f0(param_1);
  FUN_0040b4b0(param_1 + 0x884,&DAT_005cdf96);
  FUN_0040b4b0(param_1 + 0x890,"direction");
  FUN_0040b730(param_1 + 0x89c,"startEvent");
  FUN_0040b730(param_1 + 0x900,"stopEvent");
  FUN_0040b960(param_1 + 0x964,"state");
  if (0x00000002 < 2) {
    return;
  }
  FUN_0040b730(param_1 + 0x968,"actorClass");
  return;
}
