// Name: crt_locale.c__CPtoLCID_FUN_10008130
// Address: 10008130
// Address Range: [[10008130, 10008167]]
// Convention: __cdecl
// Signature: int __cdecl crt_locale_c__CPtoLCID_FUN_10008130(int codepage)

#include "nocturne.h"

int __cdecl _CPtoLCID(int codepage)

{
  switch(codepage) {
  case 0x3a4:
    return 0x411;
  default:
    return 0;
  case 0x3a8:
    return 0x804;
  case 0x3b5:
    return 0x412;
  case 0x3b6:
    return 0x404;
  }
}
