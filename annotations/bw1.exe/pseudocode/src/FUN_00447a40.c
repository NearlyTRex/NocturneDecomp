// Name: FUN_00447a40
// Address: 00447a40
// Address Range: [[00447a40, 00447ad4]]
// Convention: unknown
// Signature: void FUN_00447a40(int param_1)

#include "nocturne.h"

void FUN_00447a40(int param_1)

{
  FUN_0053a740(param_1);
  FUN_0040b1c0(param_1 + 0x728,&DAT_005d7102);
  FUN_0040b1c0(param_1 + 0x734,"direction");
  FUN_0040b440(param_1 + 0x740,"startEvent");
  FUN_0040b440(param_1 + 0x7a4,"stopEvent");
  FUN_0040b670(param_1 + 0x808,"state");
  if (0x00000002 < 2) {
    return;
  }
  FUN_0040b440(param_1 + 0x80c,"actorClass");
  return;
}
