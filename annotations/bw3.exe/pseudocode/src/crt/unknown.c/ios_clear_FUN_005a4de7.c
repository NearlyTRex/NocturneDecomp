// Name: crt_unknown.c_ios_clear_FUN_005a4de7
// Address: 005a4de7
// Address Range: [[005a4de7, 005a4e07]]
// Convention: __cdecl
// Signature: uint __cdecl crt_unknown_c_ios_clear_FUN_005a4de7(ios *this_ptr,uint state_flags)

#include "nocturne.h"

uint __cdecl ios_clear(ios *this_ptr,uint state_flags)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this_ptr + 0x10);
  *(uint *)(this_ptr + 0x10) = 0;
  FUN_005abc85(this_ptr,state_flags);
  return uVar1;
}
