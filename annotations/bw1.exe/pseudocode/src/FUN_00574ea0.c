// Name: FUN_00574ea0
// Address: 00574ea0
// Address Range: [[00574ea0, 00574ed3]]
// Convention: unknown
// Signature: void FUN_00574ea0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00574ea0(void)

{
  if (0 < _DAT_02c745bc) {
    return;
  }
  _DAT_02c745bc = _DAT_02c745bc + 1;
  FUN_005750e0();
  FUN_00575670();
  FUN_00575b70();
  FUN_00575940();
  FUN_005746a0();
  _DAT_02c745bc = _DAT_02c745bc + -1;
  return;
}
