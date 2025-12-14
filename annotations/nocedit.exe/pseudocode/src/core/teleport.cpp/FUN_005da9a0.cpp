// Name: core_teleport.cpp_FUN_005da9a0
// Address: 005da9a0
// Address Range: [[005da9a0, 005da9c5]]
// Convention: unknown
// Signature: undefined core_teleport.cpp_FUN_005da9a0()

#include "nocturne.h"

void core_teleport_cpp_FUN_005da9a0(void)

{
  CTeleport *this_ptr;
  
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x168,"..\\core\\teleport.cpp",0x8b);
  if (this_ptr == (CTeleport *)0x0) {
    return;
  }
  core_teleport_cpp_CTeleport_ctor_FUN_005da9e0(this_ptr);
  return;
}
