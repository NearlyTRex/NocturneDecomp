// Name: core_elephant.cpp_CElephantGun_onFired_FUN_004a78a0
// Address: 004a78a0
// Address Range: [[004a78a0, 004a79a1]]
// Convention: __cdecl
// Signature: void __cdecl core_elephant_cpp_CElephantGun_onFired_FUN_004a78a0(CElephantGun *this_ptr)

#include "nocturne.h"

void __cdecl core_elephant_cpp_CElephantGun_onFired_FUN_004a78a0(CElephantGun *this_ptr)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  CKeyFramedModel *model_ptr;
  CMatrix3x3f local_6c;
  CVector3f local_44;
  CVector3f local_38;
  CVector3f local_2c;
  CVector3f local_20;
  float local_14;
  
  local_38.x = 5.0;
  local_38.y = 6.0;
  local_38.z = -6.0;
  local_2c.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-0.3926991,0.3926991);
  local_2c.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-0.3926991,0.3926991);
  local_2c.z = 0.0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_6c,&local_2c);
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&local_6c,&local_20,&local_38);
  pCVar2 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     ((CDemonActor *)this_ptr,&local_44,pCVar1);
  if (&local_38 != pCVar2) {
    local_38.x = pCVar2->x;
    local_38.y = pCVar2->y;
    local_38.z = pCVar2->z;
  }
  model_ptr = core_dmodel_cpp_loadModel_FUN_00478c00("shell.kfm");
  core_fire_cpp_CFireEffect_createShell_FUN_004c91e0
            (g_CFireEffectPtr,&(this_ptr->base).base.location.position,
             &(this_ptr->base).base.orient.vec,&local_38,model_ptr);
  (*((this_ptr->base).base.vtable._ub)->playSound)((CDemonActor *)this_ptr,"sh-cock.wav");
  return;
}
