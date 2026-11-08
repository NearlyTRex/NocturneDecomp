// Name: FUN_004e0130
// Address: 004e0130
// Address Range: [[004e0130, 004e0234]]
// Convention: unknown
// Signature: void FUN_004e0130(int param_1)

#include "nocturne.h"

void FUN_004e0130(int param_1)

{
  FUN_004a0520(param_1);
  if (0x00000007 < 4) {
    FUN_0040b5f0(param_1 + 0xc1d0,"?speed" + 1);
  }
  FUN_0040b7f0(param_1 + 0x158,"modelName");
  if ((1 < 0x00000007) && (0x00000007 < 7)) {
    FUN_0040b5f0(param_1 + 0xc1e0,"guardDistance");
  }
  if (2 < 0x00000007) {
    FUN_0040b670(param_1 + 0xc284,"livesLeft");
  }
  if (4 < 0x00000007) {
    FUN_0040b870(param_1 + 0x158,"motion state");
  }
  if (0x00000007 < 6) {
    return;
  }
  FUN_0040b960(param_1 + 0x158,"partStatus");
  FUN_0040b670(param_1 + 0xc288,"spasmCount");
  FUN_0040b670(param_1 + 0xc284,"livesLeft");
  FUN_0040b670(param_1 + 0xc274,"ariseTimer");
  return;
}
