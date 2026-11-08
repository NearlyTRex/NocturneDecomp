// Name: FUN_005211b0
// Address: 005211b0
// Address Range: [[005211b0, 00521223]]
// Convention: unknown
// Signature: void FUN_005211b0(int param_1)

#include "nocturne.h"

void FUN_005211b0(int param_1)

{
  FUN_004eab00(param_1);
  FUN_0040b440(param_1 + 0x2235c,"humanToDemonCond");
  FUN_0040b440(param_1 + 0x223c0,"demonToHumanCond");
  FUN_0040b670(param_1 + 0x22350,"inHumanForm");
  FUN_0040b670(param_1 + 0x22354,"morphing");
  FUN_0040b5f0(param_1 + 0x22358,"morphTimer");
  return;
}
