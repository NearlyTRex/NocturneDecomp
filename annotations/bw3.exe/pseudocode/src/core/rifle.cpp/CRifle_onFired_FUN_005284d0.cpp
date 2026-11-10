// Name: core_rifle.cpp_CRifle_onFired_FUN_005284d0
// Address: 005284d0
// Address Range: [[005284d0, 0052860c]]
// Convention: __cdecl
// Signature: void __cdecl core_rifle_cpp_CRifle_onFired_FUN_005284d0(CRifle *this_ptr)

#include "nocturne.h"

void __cdecl core_rifle_cpp_CRifle_onFired_FUN_005284d0(CRifle *this_ptr)

{
  CKeyFramedModel *model_ptr;
  byte bVar1;
  float afStackY_103c [1001];
  float *pfVar2;
  CMatrix3x3f CStack_7c;
  uint uStack_54;
  float afStack_50 [2];
  CVector3f CStack_48;
  CVector3f CStack_3c;
  float fStack_30;
  float afStack_2c [2];
  CVector3f CStack_24;
  float afStack_18 [3];
  float fStack_c;
  
  bVar1 = 0;
  if (*(int *)&this_ptr->field_0x568 < 1) {
    return;
  }
  CStack_48.x = 5.0;
  CStack_48.y = 6.0;
  CStack_48.z = -6.0;
  CStack_3c.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.3926991,0.3926991);
  fStack_c = CStack_3c.x;
  CStack_3c.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.3926991,0.3926991);
  CStack_3c.z = 0.0;
  fStack_c = CStack_3c.y;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(&CStack_7c,&CStack_3c);
  core_dirmat_cpp_FUN_0045b800(&CStack_7c,&CStack_48);
  pfVar2 = afStack_2c + 5;
  afStack_18[0] = (float)uStack_54;
  afStack_2c[(uint)bVar1 * -2 + 6] = afStack_50[(uint)bVar1 * -2];
  afStack_2c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 7] =
       afStack_50[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  core_actor_cpp_FUN_00408b00(this_ptr,pfVar2);
  CStack_24.x = fStack_30;
  afStack_2c[(uint)bVar1 * -2 + 3] = afStack_2c[(uint)bVar1 * -2];
  afStack_2c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4] =
       afStack_2c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  if (&CStack_48 != (CVector3f *)(afStack_2c + 2)) {
    CStack_48.x = CStack_24.x;
    CStack_48.y = CStack_24.y;
    CStack_48.z = CStack_24.z;
  }
  model_ptr = (CKeyFramedModel *)
              core_dmodel_cpp_loadModel_FUN_00462420("$@rifbullet.kfm" + 2);
  core_fire_cpp_CFireEffect_createShell_FUN_004a3e70
            (0x01C73654,(CVector3f *)&this_ptr->field_0x20,(CVector3f *)&this_ptr->field_0x30,
             &CStack_48,model_ptr);
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,"shotgun-cock.wav");
  return;
}
