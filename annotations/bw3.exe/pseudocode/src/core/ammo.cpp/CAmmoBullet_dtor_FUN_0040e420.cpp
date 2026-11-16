// Name: core_ammo.cpp_CAmmoBullet_dtor_FUN_0040e420
// Address: 0040e420
// Address Range: [[0040e420, 0040e46d]]
// Convention: __cdecl
// Signature: CAmmoBullet * __cdecl core_ammo_cpp_CAmmoBullet_dtor_FUN_0040e420(CAmmoBullet *this_ptr,uint flags)

#include "nocturne.h"

CAmmoBullet * __cdecl core_ammo_cpp_CAmmoBullet_dtor_FUN_0040e420(CAmmoBullet *this_ptr,uint flags)

{
  CDemonActor *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CAmmoBulletTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = core_actor_cpp_CDemonActor_dtor_FUN_00408770((CDemonActor *)this_ptr,1);
  if ((flags & 2) == 0) {
    return (CAmmoBullet *)ptr;
  }
  debugFreeChecked(ptr);
  return (CAmmoBullet *)ptr;
}
