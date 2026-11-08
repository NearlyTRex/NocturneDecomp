// Name: FUN_00502200
// Address: 00502200
// Address Range: [[00502200, 00502273]]
// Convention: unknown
// Signature: void FUN_00502200(int param_1)

#include "nocturne.h"

void FUN_00502200(int param_1)

{
  FUN_004ce590(param_1);
  FUN_0040b730(param_1 + 0x27900,"humanToDemonCond");
  FUN_0040b730(param_1 + 0x27964,"demonToHumanCond");
  FUN_0040b960(param_1 + 0x278f4,"inHumanForm");
  FUN_0040b960(param_1 + 0x278f8,"morphing");
  FUN_0040b8e0(param_1 + 0x278fc,"morphTimer");
  return;
}
