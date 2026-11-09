// Name: core_searpart.cpp_factoryFuncSearchParty_FUN_005a8cc0
// Address: 005a8cc0
// Address Range: [[005a8cc0, 005a8cdb]]
// Convention: unknown
// Signature: void core_searpart_cpp_factoryFuncSearchParty_FUN_005a8cc0(void)

#include "nocturne.h"

void core_searpart_cpp_factoryFuncSearchParty_FUN_005a8cc0(void)

{
  CSearchParty *this_ptr;
  
  this_ptr = (CSearchParty *)FUN_005b8be2(0x11850);
  if (this_ptr == (CSearchParty *)0x0) {
    return;
  }
  core_searpart_cpp_CSearchParty_ctor_FUN_005a8cf0(this_ptr);
  return;
}
