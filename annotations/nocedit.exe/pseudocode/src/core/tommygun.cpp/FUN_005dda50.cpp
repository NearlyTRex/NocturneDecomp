// Name: core_tommygun.cpp_FUN_005dda50
// Address: 005dda50
// Address Range: [[005dda50, 005dda72]]
// Convention: unknown
// Signature: undefined core_tommygun.cpp_FUN_005dda50()

#include "nocturne.h"

void core_tommygun_cpp_FUN_005dda50(void)

{
  CTommyGun *this_ptr;
  
  this_ptr = (CTommyGun *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x584,"..\\core\\tommygun.cpp",0x2f);
  if (this_ptr == (CTommyGun *)0x0) {
    return;
  }
  core_tommygun_cpp_CTommyGun_ctor_FUN_005dda90(this_ptr);
  return;
}
