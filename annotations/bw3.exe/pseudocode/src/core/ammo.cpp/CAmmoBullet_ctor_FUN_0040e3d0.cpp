// Name: core_ammo.cpp_CAmmoBullet_ctor_FUN_0040e3d0
// Address: 0040e3d0
// Address Range: [[0040e3d0, 0040e411]]
// Convention: unknown
// Signature: CAmmoBullet * core_ammo_cpp_CAmmoBullet_ctor_FUN_0040e3d0(CAmmoBullet *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CAmmoBullet * core_ammo_cpp_CAmmoBullet_ctor_FUN_0040e3d0(CAmmoBullet *this_ptr)

{
  CAmmo *pCVar1;
  
  pCVar1 = core_ammo_cpp_CAmmo_ctor_FUN_0040de60(&this_ptr->base);
  (pCVar1->base).vtable._ub = &g_CAmmoBulletVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            (&pCVar1->model,"?ammopouch.kfm" + 1);
  pCVar1->ammo_type = AMMO_TYPE_BULLET;
  pCVar1->ammo_count = 0x14;
  return (CAmmoBullet *)pCVar1;
}
