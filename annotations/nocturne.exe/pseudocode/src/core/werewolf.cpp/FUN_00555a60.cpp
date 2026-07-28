// Name: core_werewolf.cpp_FUN_00555a60
// Address: 00555a60
// Address Range: [[00555a60, 00555a7b]]
// Convention: unknown
// Signature: void core_werewolf_cpp_FUN_00555a60(void)

#include "nocturne.h"

void core_werewolf_cpp_FUN_00555a60(void)

{
  CWerewolf *this_ptr;
  
  this_ptr = (CWerewolf *)FUN_0056497c(0xbd6c);
  if (this_ptr == (CWerewolf *)0x0) {
    return;
  }
  core_werewolf_cpp_CWerewolf_ctor_FUN_00555a90(this_ptr);
  return;
}
