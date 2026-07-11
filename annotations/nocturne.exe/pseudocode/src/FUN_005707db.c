// Name: FUN_005707db
// Address: 005707db
// Address Range: [[005707db, 0057086a]]
// Convention: unknown
// Signature: undefined8 FUN_005707db(double param_1,byte param_2)

#include "nocturne.h"

ulonglong FUN_005707db(double param_1,byte param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (param_2 != 0) {
    if (param_2 < 4) {
      uVar1 = param_2 | 0x2040;
      goto LAB_0057083d;
    }
    if ((param_2 == 4) && (param_1 < 0.0)) {
      return 0;
    }
  }
  uVar1 = param_2 | 0x8100;
  if ((param_2 == 6) && (param_1 < 0.0)) {
    uVar1 = 0x1106;
  }
LAB_0057083d:
  uVar2 = FUN_005706aa(uVar1,&param_1);
  return uVar2;
}
