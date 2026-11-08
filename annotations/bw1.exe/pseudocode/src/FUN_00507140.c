// Name: FUN_00507140
// Address: 00507140
// Address Range: [[00507140, 005071b3]]
// Convention: unknown
// Signature: void FUN_00507140(int param_1)

#include "nocturne.h"

void FUN_00507140(int param_1)

{
  FUN_0040c040(param_1);
  FUN_0040b440(param_1 + 0x158,"courseName");
  FUN_0040b5f0(param_1 + 0x178,"totalTime");
  FUN_0040b5f0(param_1 + 0x17c,"param");
  FUN_0040b670(param_1 + 0x180,"phase");
  FUN_0040b670(param_1 + 0x1a0,&DAT_005e76c9);
  return;
}
