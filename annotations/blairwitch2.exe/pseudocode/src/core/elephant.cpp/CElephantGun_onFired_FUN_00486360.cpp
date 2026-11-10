// Name: core_elephant.cpp_CElephantGun_onFired_FUN_00486360
// Address: 00486360
// Address Range: [[00486360, 00486482]]
// Convention: __cdecl
// Signature: void __cdecl core_elephant_cpp_CElephantGun_onFired_FUN_00486360(CElephantGun *this_ptr)

#include "nocturne.h"

void __cdecl core_elephant_cpp_CElephantGun_onFired_FUN_00486360(CElephantGun *this_ptr)

{
  CKeyFramedModel *model_ptr;
  byte bVar1;
  float afStackY_1044 [1003];
  float *pfVar2;
  CMatrix3x3f CStack_84;
  uint uStack_5c;
  float afStack_58 [2];
  CVector3f CStack_50;
  CVector3f CStack_44;
  float fStack_38;
  float afStack_34 [2];
  CVector3f CStack_2c;
  float afStack_20 [3];
  float fStack_14;
  
  bVar1 = 0;
  CStack_50.x = 5.0;
  CStack_50.y = 6.0;
  CStack_50.z = -6.0;
  CStack_44.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-0.3926991,0.3926991);
  fStack_14 = CStack_44.x;
  CStack_44.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-0.3926991,0.3926991);
  CStack_44.z = 0.0;
  fStack_14 = CStack_44.y;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(&CStack_84,&CStack_44);
  core_dirmat_cpp_FUN_00449530(&CStack_84,&CStack_50);
  pfVar2 = afStack_34 + 5;
  afStack_20[0] = (float)uStack_5c;
  afStack_34[(uint)bVar1 * -2 + 6] = afStack_58[(uint)bVar1 * -2];
  afStack_34[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 7] =
       afStack_58[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  core_actor_cpp_FUN_00408cf0(this_ptr,pfVar2);
  CStack_2c.x = fStack_38;
  afStack_34[(uint)bVar1 * -2 + 3] = afStack_34[(uint)bVar1 * -2];
  afStack_34[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4] =
       afStack_34[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  if (&CStack_50 != (CVector3f *)(afStack_34 + 2)) {
    CStack_50.x = CStack_2c.x;
    CStack_50.y = CStack_2c.y;
    CStack_50.z = CStack_2c.z;
  }
  model_ptr = (CKeyFramedModel *)core_dmodel_cpp_loadModel_FUN_0044fba0("shell.kfm");
  core_fire_cpp_CFireEffect_createShell_FUN_0049e970
            (0x01C3DEB4,(CVector3f *)&(this_ptr->base).base.field_0x20,
             &(this_ptr->base).base.orient.vec,&CStack_50,model_ptr);
  (*((this_ptr->base).base.vtable._ub)->playSound)((CDemonActor *)this_ptr,"sh-cock.wav");
  return;
}
