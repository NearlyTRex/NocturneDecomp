// Name: FUN_00558e10
// Address: 00558e10
// Address Range: [[00558e10, 00558e8c]]
// Convention: unknown
// Signature: bool FUN_00558e10(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00558e10(void)

{
  int iVar1;
  
  iVar1 = 0;
  _DAT_02cf3414 = 1;
  do {
    if (_DAT_02cf3410 == 0) break;
    iVar1 = iVar1 + 1;
    FUN_00581a40(0x47ae147b,0x3f847ae1);
  } while (iVar1 < 100);
  if (_DAT_02cf3410 == 0) {
    return true;
  }
  FUN_0055a560("Mb`?killSoundThread - failed!\n" + 4);
  return _DAT_02cf3410 == 0;
}
