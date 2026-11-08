// Name: FUN_00571ea0
// Address: 00571ea0
// Address Range: [[00571ea0, 00571f09]]
// Convention: unknown
// Signature: void FUN_00571ea0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00571ea0(void)

{
  byte auStack_190 [400];
  
  FUN_00581c70("initSockets\n");
  Ordinal_115(0x101,auStack_190);
  if (_DAT_02cfd8a8 == 0) {
    _DAT_02cfd8a8 = FUN_00581920();
    if (_DAT_02cfd8a8 == 0) {
      _DAT_01d71de0 = "..\\support\\trisock.cpp";
      _DAT_01d71de4 = 0x927;
      FUN_004e4330("Can't create mutex");
      return;
    }
  }
  return;
}
