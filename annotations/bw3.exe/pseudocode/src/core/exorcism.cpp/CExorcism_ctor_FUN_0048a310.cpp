// Name: core_exorcism.cpp_CExorcism_ctor_FUN_0048a310
// Address: 0048a310
// Address Range: [[0048a310, 0048a41b]]
// Convention: unknown
// Signature: CExorcism * core_exorcism_cpp_CExorcism_ctor_FUN_0048a310(CExorcism *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CExorcism * core_exorcism_cpp_CExorcism_ctor_FUN_0048a310(CExorcism *this_ptr)

{
  CExorcism *pCVar1;
  
  pCVar1 = (CExorcism *)core_weapon_cpp_CWeapon_ctor_FUN_0057ad70((CWeapon *)this_ptr);
  ((UActorVTable *)&pCVar1->field_0x154)->_ub = &g_CExorcismVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)&pCVar1->field_0x158,"exo_bible.kfm");
  *(int *)&pCVar1->field_0x2d8 = 0;
  *(EFireMode *)&pCVar1->field_0x2dc = FIRE_MODE_AUTOMATIC;
  *(int *)&pCVar1->field_0x2e4 = 1;
  *(float *)&pCVar1->field_0x2e8 = 50.0;
  *(int *)&pCVar1->field_0x2ec = 0;
  *(uint *)&pCVar1->field_0x56c = 10;
  *(uint *)&pCVar1->field_0x58c = 1;
  *(uint *)&pCVar1->field_0x574 = 2;
  *(uint *)&pCVar1->field_0x594 = 0;
  *(uint *)&pCVar1->field_0x598 = 0;
  *(uint *)&pCVar1->field_0x59c = 0;
  *(uint *)&pCVar1->field_0x5a4 = 0;
  *(uint *)&pCVar1->field_0x5e8 = 0x8000;
  pCVar1->field_0x5c8 = 0x20;
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30
            ((CDemonGlobe *)&pCVar1->field_0x5ac,8.0);
  *(uint *)&pCVar1->field_0x5cc = 1;
  *(uint *)&pCVar1->field_0x628 = 0x8000;
  pCVar1->field_0x608 = 0x20;
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30
            ((CDemonGlobe *)&pCVar1->field_0x5ec,8.0);
  *(uint *)&pCVar1->field_0x60c = 1;
  *(uint *)&pCVar1->field_0x57c = 0;
  *(uint *)&pCVar1->field_0x5a8 = 0;
  return pCVar1;
}
