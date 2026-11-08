// Name: FUN_005aed4b
// Address: 005aed4b
// Address Range: [[005aed4b, 005aedda]]
// Convention: unknown
// Signature: undefined8 FUN_005aed4b(double param_1,byte param_2)

#include "nocturne.h"

ulonglong FUN_005aed4b(double param_1,byte param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (param_2 != 0) {
    if (param_2 < 4) {
      uVar1 = param_2 | 0x2040;
      goto LAB_005aedad;
    }
    if ((param_2 == 4) && (param_1 < 0.0)) {
      return 0;
    }
  }
  uVar1 = param_2 | 0x8100;
  if ((param_2 == 6) && (param_1 < 0.0)) {
    uVar1 = 0x1106;
  }
LAB_005aedad:
  uVar2 = FUN_005aec1a(uVar1,&param_1);
  return uVar2;
}
