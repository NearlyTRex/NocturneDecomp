// Name: core_elephant.cpp_CElephantGun_fireProjectile_FUN_004a79f0
// Address: 004a79f0
// Address Range: [[004a79f0, 004a7bd2]]
// Convention: __cdecl
// Signature: void __cdecl core_elephant_cpp_CElephantGun_fireProjectile_FUN_004a79f0(CElephantGun *this_ptr)

#include "nocturne.h"

void __cdecl core_elephant_cpp_CElephantGun_fireProjectile_FUN_004a79f0(CElephantGun *this_ptr)

{
  float fVar1;
  int iVar2;
  CVector3f *input_local_point;
  CVector3f CStack_6c;
  CVector3f aCStack_60 [2];
  float fStack_48;
  CVector3f local_44;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  CVector3f CStack_18;
  
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar2 != 0) {
    return;
  }
  input_local_point =
       (*(((this_ptr->base).base.vtable._uw)->_uw).getMuzzlePoint)(&this_ptr->base,&local_44);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,aCStack_60,input_local_point);
  CStack_18.z = (this_ptr->base).bolt_velocity;
  CStack_18.x = 0.0;
  CStack_18.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            ((CDemonActor *)this_ptr,&CStack_6c,&CStack_18);
  fStack_30 = -CStack_6c.x;
  fStack_2c = -CStack_6c.y;
  fStack_28 = -CStack_6c.z;
  fStack_24 = aCStack_60[0].x + CStack_6c.x;
  fStack_20 = aCStack_60[0].y + CStack_6c.y;
  fStack_1c = aCStack_60[0].z + CStack_6c.z;
  if (&fStack_48 != &fStack_30) {
    fStack_48 = fStack_30;
    local_44.x = fStack_2c;
    local_44.y = fStack_28;
  }
  fVar1 = SQRT(local_44.y * local_44.y + fStack_48 * fStack_48 + local_44.x * local_44.x);
  if (fVar1 <= 0.0) {
    local_44.x = 0.0;
    fStack_48 = 0.0;
    local_44.y = 0.0;
  }
  else {
    fVar1 = 1.0 / fVar1;
    fStack_48 = fStack_48 * fVar1;
    local_44.x = local_44.x * fVar1;
    local_44.y = local_44.y * fVar1;
  }
  core_fire_cpp_CFireEffect_FUN_004c7f20(g_CFireEffectPtr);
  this_ptr->field2_0x57c = 1;
  this_ptr->field3_0x580 =
       (int)SQRT((fStack_1c - aCStack_60[0].z) * (fStack_1c - aCStack_60[0].z) +
                 (fStack_24 - aCStack_60[0].x) * (fStack_24 - aCStack_60[0].x) +
                 (fStack_20 - aCStack_60[0].y) * (fStack_20 - aCStack_60[0].y));
  return;
}
