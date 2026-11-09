// Name: support_trisock.cpp_buildIPAddress_FUN_00578d60
// Address: 00578d60
// Address Range: [[00578d60, 00578dc1]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_trisock_cpp_buildIPAddress_FUN_00578d60(undefined1 *param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

uint __cdecl support_trisock_cpp_buildIPAddress_FUN_00578d60(byte *param_1,int param_2,int param_3,int param_4,int param_5)

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
