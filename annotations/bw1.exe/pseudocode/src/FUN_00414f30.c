// Name: FUN_00414f30
// Address: 00414f30
// Address Range: [[00414f30, 00414fb3]]
// Convention: unknown
// Signature: void FUN_00414f30(int param_1)

#include "nocturne.h"

void FUN_00414f30(int param_1)

{
  FUN_004a0520(param_1);
  FUN_0040b5f0(param_1 + 0xc1d0,"speed");
  FUN_0040b7f0(param_1 + 0x158,"modelName");
  FUN_0040b870(param_1 + 0x158,"motion state");
  FUN_0040b670(param_1 + 0xc3e4,"morphing");
  FUN_0040b5f0(param_1 + 0xc3e8,"morphTimer");
  FUN_0040b440(param_1 + 0xd018,"morphEvent");
  return;
}
