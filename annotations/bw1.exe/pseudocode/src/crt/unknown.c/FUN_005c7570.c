// Name: crt_unknown.c_FUN_005c7570
// Address: 005c7570
// Address Range: [[005c7570, 005c7615]]
// Convention: unknown
// Signature: undefined8 crt_unknown_c_FUN_005c7570(double param_1,double param_2,byte param_3)

#include "nocturne.h"

ulonglong FUN_005c7570(double param_1,double param_2,byte param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      if (0.0 < param_2) {
        return 0;
      }
      if (0.0 <= param_2) {
        uVar1 = 0x4047;
      }
      else {
        uVar1 = 0x8047;
      }
    }
    else {
      uVar1 = 0x2047;
    }
  }
  else {
    if (param_2 <= 0.0) {
      return 0;
    }
    if (param_1 <= 0.0) {
      uVar1 = 0x1107;
    }
    else {
      uVar1 = 0x8107;
    }
  }
  uVar2 = unkafter_zombie_cpp_FUN_005cbddd(uVar1,&param_1,&param_2);
  return uVar2;
}
