// Name: core_glass.cpp_CGlass_hasCollision_FUN_004ea190
// Address: 004ea190
// Address Range: [[004ea190, 004ea1b8]]
// Convention: __cdecl
// Signature: int __cdecl core_glass_cpp_CGlass_hasCollision_FUN_004ea190(CGlass *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

int __cdecl core_glass_cpp_CGlass_hasCollision_FUN_004ea190(CGlass *this_ptr,SCollisionInfo *collision_info)

{
  if ((this_ptr->shattered != 0) && (this_ptr->mirror_flag == 0)) {
    (this_ptr->base).collision_disabled = 1;
    return 0;
  }
  return 1;
}
