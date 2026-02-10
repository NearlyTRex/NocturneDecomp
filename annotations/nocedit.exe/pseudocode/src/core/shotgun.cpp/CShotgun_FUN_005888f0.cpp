// Name: core_shotgun.cpp_CShotgun_FUN_005888f0
// Address: 005888f0
// Address Range: [[005888f0, 00588ad2]]
// Convention: __cdecl
// Signature: void __cdecl core_shotgun_cpp_CShotgun_FUN_005888f0(CShotgun *this_ptr)

#include "nocturne.h"

void __cdecl core_shotgun_cpp_CShotgun_FUN_005888f0(CShotgun *this_ptr)

{
  float fVar1;
  int iVar2;
  CVector3f *input_local_point;
  CVector3f CStack_70;
  CVector3f aCStack_64 [2];
  float fStack_4c;
  float fStack_48;
  float local_44;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  CVector3f CStack_1c;
  
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar2 != 0) {
    return;
  }
  input_local_point =
       (CVector3f *)(*(((this_ptr->base).base.vtable._uc)->_uc).canWalk)((CCharacter *)this_ptr);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,aCStack_64,input_local_point);
  CStack_1c.z = (this_ptr->base).bolt_velocity;
  CStack_1c.x = 0.0;
  CStack_1c.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            ((CDemonActor *)this_ptr,&CStack_70,&CStack_1c);
  fStack_34 = -CStack_70.x;
  fStack_30 = -CStack_70.y;
  fStack_2c = -CStack_70.z;
  fStack_28 = aCStack_64[0].x + CStack_70.x;
  fStack_24 = aCStack_64[0].y + CStack_70.y;
  fStack_20 = aCStack_64[0].z + CStack_70.z;
  if (&fStack_4c != &fStack_34) {
    fStack_4c = fStack_34;
    fStack_48 = fStack_30;
    local_44 = fStack_2c;
  }
  fVar1 = SQRT(local_44 * local_44 + fStack_4c * fStack_4c + fStack_48 * fStack_48);
  if (fVar1 <= 0.0) {
    fStack_48 = 0.0;
    fStack_4c = 0.0;
    local_44 = 0.0;
  }
  else {
    fVar1 = 1.0 / fVar1;
    fStack_4c = fStack_4c * fVar1;
    fStack_48 = fStack_48 * fVar1;
    local_44 = local_44 * fVar1;
  }
  core_fire_cpp_CFireEffect_FUN_004c7f20(g_CFireEffectPtr);
  this_ptr->unk[4] = '\x01';
  this_ptr->unk[5] = '\0';
  this_ptr->unk[6] = '\0';
  this_ptr->unk[7] = '\0';
  *(float *)(this_ptr->unk + 8) =
       SQRT((fStack_20 - aCStack_64[0].z) * (fStack_20 - aCStack_64[0].z) +
            (fStack_28 - aCStack_64[0].x) * (fStack_28 - aCStack_64[0].x) +
            (fStack_24 - aCStack_64[0].y) * (fStack_24 - aCStack_64[0].y));
  return;
}
