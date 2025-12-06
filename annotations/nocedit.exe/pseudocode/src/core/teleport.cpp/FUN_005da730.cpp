// Name: core_teleport.cpp_FUN_005da730
// Address: 005da730
// Address Range: [[005da730, 005da752]]
// Convention: unknown
// Signature: undefined core_teleport.cpp_FUN_005da730()

#include "nocturne.h"

void core_teleport_cpp_FUN_005da730(void)

{
  CTeleportDest *this_ptr;
  
  this_ptr = (CTeleportDest *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x158,"..\\core\\teleport.cpp",0x2a);
  if (this_ptr == (CTeleportDest *)0x0) {
    return;
  }
  core_teleport_cpp_CTeleportDest_ctor_FUN_005da770(this_ptr);
  return;
}
