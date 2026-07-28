// Name: core_trash.cpp_FUN_00546c60
// Address: 00546c60
// Address Range: [[00546c60, 00546c7b]]
// Convention: unknown
// Signature: void core_trash_cpp_FUN_00546c60(void)

#include "nocturne.h"

void core_trash_cpp_FUN_00546c60(void)

{
  CTrash *this_ptr;
  
  this_ptr = (CTrash *)FUN_0056497c(800);
  if (this_ptr == (CTrash *)0x0) {
    return;
  }
  core_trash_cpp_CTrash_ctor_FUN_00546c90(this_ptr);
  return;
}
