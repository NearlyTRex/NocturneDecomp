// Name: core_rifle.cpp_CRifle_onFired_FUN_005407e0
// Address: 005407e0
// Address Range: [[005407e0, 0054092f]]
// Convention: __cdecl
// Signature: void __cdecl core_rifle_cpp_CRifle_onFired_FUN_005407e0(CRifle *this_ptr)

#include "nocturne.h"

void __cdecl core_rifle_cpp_CRifle_onFired_FUN_005407e0(CRifle *this_ptr)

{
  CKeyFramedModel *model_ptr;
  byte bVar1;
  uint auStackY_103c [1001];
  CVector3f *input;
  CMatrix3x3f CStack_7c;
  CVector3f CStack_54;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  CVector3f CStack_24;
  CVector3f CStack_18;
  float fStack_c;
  
  bVar1 = 0;
  if ((this_ptr->base).ammo_count < 1) {
    return;
  }
  CStack_48.x = 5.0;
  CStack_48.y = 6.0;
  CStack_48.z = -6.0;
  CStack_24.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-0.3926991,0.3926991);
  fStack_c = CStack_24.x;
  CStack_24.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-0.3926991,0.3926991);
  CStack_24.z = 0.0;
  fStack_c = CStack_24.y;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(&CStack_7c,&CStack_24);
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045f690(&CStack_7c,&CStack_48,&CStack_3c);
  input = &CStack_30;
  CStack_30.x = CStack_3c.x;
  *(uint *)((int)&CStack_30 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_3c + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_30 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_3c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0((CDemonActor *)this_ptr,input,&CStack_54);
  CStack_18.x = CStack_54.x;
  *(uint *)((int)&CStack_18 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_54 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_18 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_54 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (&CStack_48 != &CStack_18) {
    CStack_48.x = CStack_18.x;
    CStack_48.y = CStack_18.y;
    CStack_48.z = CStack_18.z;
  }
  model_ptr = core_dmodel_cpp_loadModel_FUN_00468780("rifbullet.kfm");
  core_fire_cpp_CFireEffect_createShell_FUN_004b7270
            (g_CFireEffect_PTR_0061c010,&(this_ptr->base).base.location.position,
             &(this_ptr->base).base.orient.vec,&CStack_48,model_ptr);
  core_sound_cpp_CSound_playActorSound_FUN_0057d8a0
            (g_CSound_PTR_006236b8,(CDemonActor *)this_ptr,"shotgun-cock.wav @ .3",
             &(g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.location.position);
  return;
}
