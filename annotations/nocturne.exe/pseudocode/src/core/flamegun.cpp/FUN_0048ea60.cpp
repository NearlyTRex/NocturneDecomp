// Name: core_flamegun.cpp_FUN_0048ea60
// Address: 0048ea60
// Address Range: [[0048ea60, 0048eb21]]
// Convention: unknown
// Signature: undefined4 core_flamegun_cpp_FUN_0048ea60(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_flamegun_cpp_FUN_0048ea60(CDemonActor *param_1)

{
  float fVar1;
  CVector3f *input_local_point;
  CDemonActor *pCVar2;
  CVector3f CStack_14;
  
  if ((int)param_1[4].location.position.x < 1) {
    return 0;
  }
  input_local_point = (CVector3f *)(*((param_1->vtable)._ub)->initializeInEditor)(param_1);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,&CStack_14,input_local_point);
  core_fire_cpp_CFireEffect_createGunFlames_FUN_0048c3c0
            (0x01C08D04,&CStack_14,&param_1->orient,3,1);
  if (param_1[4].orient.vec.z == 0.0) {
    fVar1 = 1.0 / 4.0f;
    param_1[4].location.position.x = (float)((int)param_1[4].location.position.x + -1);
    param_1[4].orient_matrix.m[0].x = fVar1;
  }
  pCVar2 = (*((param_1->vtable)._ub)->getCarrier)(param_1);
  if (pCVar2 == *(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
    xxx_unk_c_FUN_004940d0(INT_005b9284);
  }
  param_1[4].orient.vec.x = 1.4013e-45;
  return 1;
}
