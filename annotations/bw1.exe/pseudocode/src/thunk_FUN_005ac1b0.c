// Name: thunk_FUN_005ac1b0
// Address: 00401120
// Address Range: [[00401120, 00401124]]
// Convention: unknown
// Signature: void thunk_FUN_005ac1b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_005ac1b0(void)

{
  if (DAT_00629010 != 0) {
    FUN_005c09f0(DAT_00629010);
    DAT_00629010 = 0;
  }
  if (_DAT_02c99310 != 0) {
    FUN_005c09f0(_DAT_02c99310);
    DAT_0071362c = 0;
  }
  FUN_00581f20();
  if (_DAT_02c9930c != (int *)0x0) {
    (**(code **)(*_DAT_02c9930c + 8))(_DAT_02c9930c);
    _DAT_02c9930c = (int *)0x0;
  }
  if (_DAT_02c99308 != (int *)0x0) {
    (**(code **)(*_DAT_02c99308 + 8))(_DAT_02c99308);
    _DAT_02c99308 = (int *)0x0;
  }
  if (_DAT_02c99304 != (int *)0x0) {
    (**(code **)(*_DAT_02c99304 + 8))(_DAT_02c99304);
    _DAT_02c99304 = (int *)0x0;
  }
  if (_DAT_02c99300 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02c99300 + 0x4c))(_DAT_02c99300);
  (**(code **)(*_DAT_02c99300 + 8))(_DAT_02c99300);
  _DAT_02c99300 = (int *)0x0;
  return;
}
