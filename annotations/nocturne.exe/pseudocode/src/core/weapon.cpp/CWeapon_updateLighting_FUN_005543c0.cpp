// Name: core_weapon.cpp_CWeapon_updateLighting_FUN_005543c0
// Address: 005543c0
// Address Range: [[005543c0, 00554550]]
// Convention: unknown
// Signature: void core_weapon_cpp_CWeapon_updateLighting_FUN_005543c0(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_weapon_cpp_CWeapon_updateLighting_FUN_005543c0(CCharacter *param_1)

{
  float fVar1;
  CVector3f *input_local_point;
  CDemonActor *pCVar2;
  float unaff_ESI;
  uint in_stack_ffffffcc;
  CVector3f CStack_28;
  byte auStack_1c [8];
  float fStack_14;
  
  input_local_point = (CVector3f *)(*(((param_1->base).vtable._uc)->_uc).canWalk)(param_1);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            (&param_1->base,(CVector3f *)auStack_1c,input_local_point);
  _DAT_01c762f4 = 1;
  _DAT_01c762fc = 1;
  if (&stack0x00000000 != (byte *)0x1c74760) {
    _DAT_01c74744 = (float)auStack_1c._0_4_;
    _DAT_01c74748 = (float)auStack_1c._4_4_;
    _DAT_01c7474c = fStack_14;
  }
  CStack_28.y = (param_1->base).orient.vec.y;
  CStack_28.z = (param_1->base).orient.vec.z;
  CStack_28.x = (param_1->base).orient.vec.x + 0.3490658f;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
            ((CMatrix3x3f *)&DAT_01c74750,&CStack_28);
  _DAT_01c74740 = 0x42000000;
  _DAT_01c74778 = 0x42000000;
  _DAT_01c76310 = 1;
  pCVar2 = (*((param_1->base).vtable._ub)->getCarrier)(&param_1->base);
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040d890(pCVar2,in_stack_ffffffcc);
  if ((pCVar2 != (CDemonActor *)0x0) &&
     (fVar1 = pCVar2[0x17e].orient_matrix.m[0].y, fVar1 < 15.0f)) {
    unaff_ESI = fVar1 * 0.06666667f;
  }
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_00452080
            ((CDemonLight *)&DAT_01c74640,unaff_ESI);
  if (*(int *)(0x01C775EC + 0x244) == 0) {
    return;
  }
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0044cd90
            ((CDemonGlobe *)0x2ddf9ac,(CVector3f *)(auStack_1c + 4));
  _DAT_02ddf9e8 = 0x8000;
  DAT_02ddf9c8 = 0x20;
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0((CDemonGlobe *)0x2ddf9ac,3.0);
  _DAT_02ddf9cc = 0;
  core_set_cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0(0x01E57284,(CDemonGlobe *)0x2ddf9ac);
  return;
}
