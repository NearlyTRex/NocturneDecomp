// Name: core_trash.cpp_FUN_005deb30
// Address: 005deb30
// Address Range: [[005deb30, 005deb52]]
// Convention: unknown
// Signature: undefined core_trash.cpp_FUN_005deb30()

#include "nocturne.h"

void core_trash_cpp_FUN_005deb30(void)

{
  CTrash *this_ptr;
  
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x328,"..\\core\\trash.cpp",0x43);
  if (this_ptr == (CTrash *)0x0) {
    return;
  }
  core_trash_cpp_CTrash_ctor_FUN_005deb70(this_ptr);
  return;
}
