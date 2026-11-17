// Name: core_elephant.cpp_CElephantGun_onFired_FUN_00487560
// Address: 00487560
// Address Range: [[00487560, 00487682]]
// Convention: __cdecl
// Signature: void __cdecl core_elephant_cpp_CElephantGun_onFired_FUN_00487560(CElephantGun *this_ptr)

#include "nocturne.h"

void __cdecl core_elephant_cpp_CElephantGun_onFired_FUN_00487560(CElephantGun *this_ptr)

{
  CKeyFramedModel *model_ptr;
  byte bVar1;
  uint auStackY_1044 [1003];
  CVector3f *input;
  CMatrix3x3f CStack_84;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  CVector3f CStack_44;
  CVector3f CStack_38;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  float fStack_14;
  
  bVar1 = 0;
  CStack_50.x = 5.0;
  CStack_50.y = 6.0;
  CStack_50.z = -6.0;
  CStack_44.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.3926991,0.3926991);
  fStack_14 = CStack_44.x;
  CStack_44.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.3926991,0.3926991);
  CStack_44.z = 0.0;
  fStack_14 = CStack_44.y;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(&CStack_84,&CStack_44);
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045b800(&CStack_84,&CStack_50,&CStack_5c);
  input = &CStack_20;
  CStack_20.x = CStack_5c.x;
  *(uint *)((int)&CStack_20 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_5c + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_20 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_5c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  core_actor_cpp_CDemonActor_transformVector_FUN_00408b00((CDemonActor *)this_ptr,input,&CStack_38);
  CStack_2c.x = CStack_38.x;
  *(uint *)((int)&CStack_2c + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_38 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_2c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_38 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (&CStack_50 != &CStack_2c) {
    CStack_50.x = CStack_2c.x;
    CStack_50.y = CStack_2c.y;
    CStack_50.z = CStack_2c.z;
  }
  model_ptr = core_dmodel_cpp_loadModel_FUN_00462420("shell.kfm");
  core_fire_cpp_CFireEffect_createShell_FUN_004a3e70
            (g_CFireEffect_PTR_005fc5a0,&(this_ptr->base).base.location.position,
             &(this_ptr->base).base.orient.vec,&CStack_50,model_ptr);
  (*((this_ptr->base).base.vtable._ub)->playSound)((CDemonActor *)this_ptr,"sh-cock.wav");
  return;
}
