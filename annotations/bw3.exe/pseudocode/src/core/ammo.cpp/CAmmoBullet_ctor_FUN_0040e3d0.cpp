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
  
  pCVar1 = core_ammo_cpp_CAmmo_ctor_FUN_0040de60((CAmmo *)this_ptr);
  *(byte ***)&pCVar1->field_0x154 = &g_CAmmo_BulletVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)&pCVar1->field_0x158,"?ammopouch.kfm" + 1);
  *(uint *)&pCVar1->field_0x318 = 0xb;
  *(uint *)&pCVar1->field_0x314 = 0x14;
  return (CAmmoBullet *)pCVar1;
}
