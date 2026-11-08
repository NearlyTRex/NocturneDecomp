// Name: FUN_00575ca0
// Address: 00575ca0
// Address Range: [[00575ca0, 00575d1c]]
// Convention: unknown
// Signature: bool FUN_00575ca0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00575ca0(void)

{
  int iVar1;
  
  iVar1 = 0;
  _DAT_02c807e4 = 1;
  do {
    if (_DAT_02c807e0 == 0) break;
    iVar1 = iVar1 + 1;
    FUN_005b3860(0x47ae147b,0x3f847ae1);
  } while (iVar1 < 100);
  if (_DAT_02c807e0 == 0) {
    return true;
  }
  FUN_005773f0("Mb`?killSoundThread - failed!\n" + 4);
  return _DAT_02c807e0 == 0;
}
