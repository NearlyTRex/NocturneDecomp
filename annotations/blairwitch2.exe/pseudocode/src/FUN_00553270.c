// Name: FUN_00553270
// Address: 00553270
// Address Range: [[00553270, 005532ec]]
// Convention: unknown
// Signature: bool FUN_00553270(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00553270(void)

{
  int iVar1;
  
  iVar1 = 0;
  _DAT_02649014 = 1;
  do {
    if (_DAT_02649010 == 0) break;
    iVar1 = iVar1 + 1;
    FUN_0058fd90(0x47ae147b,0x3f847ae1);
  } while (iVar1 < 100);
  if (_DAT_02649010 == 0) {
    return true;
  }
  FUN_005549c0("Mb`?killSoundThread - failed!\n" + 4);
  return _DAT_02649010 == 0;
}
