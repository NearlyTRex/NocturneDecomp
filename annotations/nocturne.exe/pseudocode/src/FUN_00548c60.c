// Name: FUN_00548c60
// Address: 00548c60
// Address Range: [[00548c60, 00548cc1]]
// Convention: unknown
// Signature: undefined4 FUN_00548c60(undefined1 *param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

uint FUN_00548c60(byte *param_1,int param_2,int param_3,int param_4,int param_5)

{
  if (((((-1 < param_2) && (param_2 < 0x100)) && (-1 < param_3)) &&
      ((param_3 < 0x100 && (-1 < param_4)))) &&
     ((param_4 < 0x100 && ((-1 < param_5 && (param_5 < 0x100)))))) {
    param_1[1] = (char)param_3;
    param_1[2] = (char)param_4;
    param_1[3] = (char)param_5;
    *param_1 = (byte)param_2;
    return 1;
  }
  return 0;
}
