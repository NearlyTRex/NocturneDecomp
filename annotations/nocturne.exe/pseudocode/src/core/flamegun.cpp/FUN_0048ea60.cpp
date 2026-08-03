// Name: core_flamegun.cpp_FUN_0048ea60
// Address: 0048ea60
// Address Range: [[0048ea60, 0048eb21]]
// Convention: unknown
// Signature: undefined4 core_flamegun_cpp_FUN_0048ea60(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_flamegun_cpp_FUN_0048ea60(CCharacter *param_1)

{
  float *pfVar1;
  float fVar2;
  CVector3f *input_local_point;
  CDemonActor *pCVar3;
  CVector3f CStack_14;
  
  if ((int)(param_1->model).transformed_vertices[0x4f].y < 1) {
    return 0;
  }
  input_local_point = (CVector3f *)(*(((param_1->base).vtable._uc)->_uc).canWalk)(param_1);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            (&param_1->base,&CStack_14,input_local_point);
  core_fire_cpp_CFireEffect_createGunFlames_FUN_0048c3c0
            (g_CFireEffect_PTR_005b80f0,&CStack_14,&(param_1->base).orient.vec,3,1);
  if ((param_1->model).transformed_vertices[0x51].y == 0.0) {
    fVar2 = 1.0 / 4.0f;
    pfVar1 = &(param_1->model).transformed_vertices[0x4f].y;
    *pfVar1 = (float)((int)*pfVar1 + -1);
    (param_1->model).transformed_vertices[0x51].z = fVar2;
  }
  pCVar3 = (*((param_1->base).vtable._ub)->getCarrier)(&param_1->base);
  if (pCVar3 == *(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
    xxx_unk_c_FUN_004940d0(PTR_DAT_005b9284);
  }
  (param_1->model).transformed_vertices[0x50].z = 1.4013e-45;
  return 1;
}
