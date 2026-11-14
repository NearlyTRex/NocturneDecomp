// Name: crt_unknown.c_ios_clear_FUN_005c1fd7
// Address: 005c1fd7
// Address Range: [[005c1fd7, 005c1ff7]]
// Convention: __cdecl
// Signature: uint __cdecl crt_unknown_c_ios_clear_FUN_005c1fd7(ios *this_ptr,uint state_flags)

#include "nocturne.h"

uint __cdecl ios_clear(ios *this_ptr,uint state_flags)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this_ptr + 0x10);
  *(uint *)(this_ptr + 0x10) = 0;
  FUN_005c8e45(this_ptr,state_flags);
  return uVar1;
}
