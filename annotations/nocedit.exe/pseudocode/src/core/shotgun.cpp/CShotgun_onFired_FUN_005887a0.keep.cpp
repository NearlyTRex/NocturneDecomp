// Name: core_shotgun.cpp_CShotgun_onFired_FUN_005887a0
// Address: 005887a0
// MANUAL RECONSTRUCTION
// Address Range: [[005887a0, 005888af]]
// Convention: __cdecl
// Signature: void __cdecl core_shotgun_cpp_CShotgun_onFired_FUN_005887a0(CShotgun *this_ptr)

#include "nocturne.h"

void __cdecl core_shotgun_cpp_CShotgun_onFired_FUN_005887a0(CShotgun *this_ptr)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  CKeyFramedModel *model_ptr;
  CMatrix3x3f local_64;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;


  if ((this_ptr->base).ammo_count < 1) {
    return;
  }
  local_30.x = 5.0;
  local_30.y = 6.0;
  local_30.z = -6.0;
  local_24.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-0.3926991,0.3926991);
  local_24.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-0.3926991,0.3926991);
  local_24.z = 0.0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_64,&local_24);
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&local_64,&local_18,&local_30);
  pCVar2 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     ((CDemonActor *)this_ptr,&local_3c,pCVar1);
  if (&local_30 != pCVar2) {
    local_30 = *pCVar2;
  }
  model_ptr = core_dmodel_cpp_loadModel_FUN_00478c00("shell.kfm");
  core_fire_cpp_CFireEffect_createShell_FUN_004c91e0
            (g_CFireEffectPtr,&(this_ptr->base).base.location.position,
             &(this_ptr->base).base.orient.vec,&local_30,model_ptr);
  (*((this_ptr->base).base.vtable._ub)->playSound)
            ((CDemonActor *)this_ptr,"shotgun-cock.wav");
  return;
}
