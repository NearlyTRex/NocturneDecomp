// Name: core_shotgun.cpp_CShotgun_onFired_FUN_0053f990
// Address: 0053f990
// Address Range: [[0053f990, 0053facc]]
// Convention: __cdecl
// Signature: void __cdecl core_shotgun_cpp_CShotgun_onFired_FUN_0053f990(CShotgun *this_ptr)

#include "nocturne.h"

void __cdecl core_shotgun_cpp_CShotgun_onFired_FUN_0053f990(CShotgun *this_ptr)

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
  CStack_3c.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-0.3926991,0.3926991);
  fStack_c = CStack_3c.x;
  CStack_3c.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-0.3926991,0.3926991);
  CStack_3c.z = 0.0;
  fStack_c = CStack_3c.y;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(&CStack_7c,&CStack_3c);
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530(&CStack_7c,&CStack_48,&CStack_54);
  input = &CStack_18;
  CStack_18.x = CStack_54.x;
  *(uint *)((int)&CStack_18 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_54 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_18 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_54 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0((CDemonActor *)this_ptr,input,&CStack_30);
  CStack_24.x = CStack_30.x;
  *(uint *)((int)&CStack_24 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_30 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_24 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_30 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (&CStack_48 != &CStack_24) {
    CStack_48.x = CStack_24.x;
    CStack_48.y = CStack_24.y;
    CStack_48.z = CStack_24.z;
  }
  model_ptr = core_dmodel_cpp_loadModel_FUN_0044fba0("shell.kfm");
  core_fire_cpp_CFireEffect_createShell_FUN_0049e970
            (g_CFireEffectPtr,&(this_ptr->base).base.location.position,
             &(this_ptr->base).base.orient.vec,&CStack_48,model_ptr);
  (*((this_ptr->base).base.vtable._ub)->playSound)
            ((CDemonActor *)this_ptr,"shotgun-cock.wav");
  return;
}
