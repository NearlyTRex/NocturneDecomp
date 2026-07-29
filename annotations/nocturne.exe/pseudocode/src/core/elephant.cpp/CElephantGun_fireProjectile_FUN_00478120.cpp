// Name: core_elephant.cpp_CElephantGun_fireProjectile_FUN_00478120
// Address: 00478120
// Address Range: [[00478120, 00478302]]
// Convention: __cdecl
// Signature: void __cdecl core_elephant_cpp_CElephantGun_fireProjectile_FUN_00478120(CElephantGun *this_ptr)

#include "nocturne.h"

void __cdecl core_elephant_cpp_CElephantGun_fireProjectile_FUN_00478120(CElephantGun *this_ptr)

{
  float fVar1;
  int iVar2;
  CVector3f *input_local_point;
  CVector3f CStack_74;
  CVector3f aCStack_68 [2];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar2 != 0) {
    return;
  }
  input_local_point =
       (CVector3f *)(*(((this_ptr->base).base.vtable._uc)->_uc).canWalk)((CCharacter *)this_ptr);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            ((CDemonActor *)this_ptr,aCStack_68,input_local_point);
  CStack_20.z = (this_ptr->base).bolt_velocity;
  CStack_20.x = 0.0;
  CStack_20.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
            ((CDemonActor *)this_ptr,&CStack_74,&CStack_20);
  fStack_38 = -CStack_74.x;
  fStack_34 = -CStack_74.y;
  fStack_30 = -CStack_74.z;
  CStack_2c.x = aCStack_68[0].x + CStack_74.x;
  CStack_2c.y = aCStack_68[0].y + CStack_74.y;
  CStack_2c.z = aCStack_68[0].z + CStack_74.z;
  if (&fStack_50 != &fStack_38) {
    fStack_50 = fStack_38;
    fStack_4c = fStack_34;
    fStack_48 = fStack_30;
  }
  fVar1 = SQRT(fStack_48 * fStack_48 + fStack_50 * fStack_50 + fStack_4c * fStack_4c);
  if (fVar1 <= 0.0) {
    fStack_4c = 0.0;
    fStack_50 = 0.0;
    fStack_48 = 0.0;
  }
  else {
    fVar1 = 1.0 / fVar1;
    fStack_50 = fStack_50 * fVar1;
    fStack_4c = fStack_4c * fVar1;
    fStack_48 = fStack_48 * fVar1;
  }
  core_fire_cpp_CFireEffect_createLaserCone_FUN_0048b3e0
            (0x01C08D04,aCStack_68,&CStack_2c,1.0,0,0xff,0,
             this_ptr->spread_angle * (float)3.1415926535000001 * (float)0.0055555555555555497);
  this_ptr->muzzle_flash_active = 1;
  this_ptr->projectile_distance =
       SQRT((CStack_2c.z - aCStack_68[0].z) * (CStack_2c.z - aCStack_68[0].z) +
            (CStack_2c.x - aCStack_68[0].x) * (CStack_2c.x - aCStack_68[0].x) +
            (CStack_2c.y - aCStack_68[0].y) * (CStack_2c.y - aCStack_68[0].y));
  return;
}
