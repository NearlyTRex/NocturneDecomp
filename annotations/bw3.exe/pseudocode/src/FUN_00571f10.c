// Name: FUN_00571f10
// Address: 00571f10
// Address Range: [[00571f10, 00571f9d]]
// Convention: unknown
// Signature: void FUN_00571f10(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00571f10(void)

{
  FUN_00581c70("killSockets\n");
  if (_DAT_02cfd8a8 != 0) {
    FUN_00581930(_DAT_02cfd8a8);
    while (_DAT_02cfd8ac != 0) {
      FUN_00570e80(_DAT_02cfd8ac);
    }
    FUN_00581990(_DAT_02cfd8a8);
  }
  while (_DAT_02cfd8b4 != 0) {
    FUN_00581a40(0,0);
  }
  Ordinal_116();
  return;
}
