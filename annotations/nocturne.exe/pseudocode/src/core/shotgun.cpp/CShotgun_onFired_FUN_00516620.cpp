// Name: core_shotgun.cpp_CShotgun_onFired_FUN_00516620
// Address: 00516620
// Address Range: [[00516620, 0051672f]]
// Convention: __cdecl
// Signature: void __cdecl core_shotgun_cpp_CShotgun_onFired_FUN_00516620(CShotgun *this_ptr)

#include "nocturne.h"

void __cdecl core_shotgun_cpp_CShotgun_onFired_FUN_00516620(CShotgun *this_ptr)

{
  CVector3f *pCVar1;
  CKeyFramedModel *model_ptr;
  CMatrix3x3f local_64;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  float local_c;
  
  if ((this_ptr->base).ammo_count < 1) {
    return;
  }
  local_30.x = 5.0;
  local_30.y = 6.0;
  local_30.z = -6.0;
  local_24.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-0.3926991,0.3926991);
  local_c = local_24.x;
  local_24.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-0.3926991,0.3926991);
  local_24.z = 0.0;
  local_c = local_24.y;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(&local_64,&local_24);
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40(&local_64,&local_18,&local_30);
  pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                     ((CDemonActor *)this_ptr,&local_3c,pCVar1);
  if (&local_30 != pCVar1) {
    local_30.x = pCVar1->x;
    local_30.y = pCVar1->y;
    local_30.z = pCVar1->z;
  }
  model_ptr = core_dmodel_cpp_loadModel_FUN_004543b0("shell.kfm");
  core_fire_cpp_CFireEffect_createShell_FUN_0048c6b0
            (g_CFireEffect_PTR_005b80f0,&(this_ptr->base).base.location.position,
             &(this_ptr->base).base.orient.vec,&local_30,model_ptr);
  (*((this_ptr->base).base.vtable._ub)->playSound)
            ((CDemonActor *)this_ptr,"shotgun-cock.wav");
  return;
}
