// Name: support_trisock.cpp_formatIPAddress_FUN_00548bb0
// Address: 00548bb0
// Address Range: [[00548bb0, 00548be0]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_formatIPAddress_FUN_00548bb0(undefined1 *param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl support_trisock_cpp_formatIPAddress_FUN_00548bb0(byte *param_1,uint param_2)

{
  _sprintf(param_2,"%d.%d.%d.%d",*param_1,param_1[1],param_1[2],param_1[3]);
  return;
}
