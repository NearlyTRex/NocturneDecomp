// Name: core_ammo.cpp_CAmmoBullet_dtor_FUN_0040e420
// Address: 0040e420
// Address Range: [[0040e420, 0040e46d]]
// Convention: unknown
// Signature: CAmmoBullet * core_ammo_cpp_CAmmoBullet_dtor_FUN_0040e420(CAmmoBullet *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CAmmoBullet * core_ammo_cpp_CAmmoBullet_dtor_FUN_0040e420(CAmmoBullet *this_ptr,uint flags)

{
  CAmmoBullet *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CAmmo_BulletTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CAmmoBullet *)core_actor_cpp_CDemonActor_dtor_FUN_00408770((CDemonActor *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
