// Name: core_disease.cpp_CDisease_ctor_FUN_0045bf80
// Address: 0045bf80
// Address Range: [[0045bf80, 0045c03d]]
// Convention: unknown
// Signature: CDisease * core_disease_cpp_CDisease_ctor_FUN_0045bf80(CDisease *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CDisease * core_disease_cpp_CDisease_ctor_FUN_0045bf80(CDisease *this_ptr)

{
  CDisease *pCVar1;
  
  pCVar1 = (CDisease *)core_weapon_cpp_CWeapon_ctor_FUN_0057ad70((CWeapon *)this_ptr);
  *(byte **)&pCVar1->field_0x154 = &g_CDiseaseVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)&pCVar1->field_0x158,"diseasebag.kfm");
  *(uint *)&pCVar1->field_0x2d8 = 0;
  *(uint *)&pCVar1->field_0x2dc = 0;
  *(uint *)&pCVar1->field_0x2e0 = 3;
  *(uint *)&pCVar1->field_0x2e4 = 1;
  *(uint *)&pCVar1->field_0x2e8 = 0x42c80000;
  *(uint *)&pCVar1->field_0x2ec = 0;
  *(uint *)&pCVar1->field_0x56c = 10;
  *(uint *)&pCVar1->field_0x58c = 0x14;
  *(uint *)&pCVar1->field_0x574 = 4;
  *(uint *)&pCVar1->field_0x5a0 = 0;
  *(uint *)&pCVar1->field_0x59c = *(uint *)&pCVar1->field_0x5a0;
  *(uint *)&pCVar1->field_0x598 = *(uint *)&pCVar1->field_0x59c;
  *(uint *)&pCVar1->field_0x590 = 1;
  *(uint *)&pCVar1->field_0x578 = 2;
  *(uint *)&pCVar1->field_0x57c = 0;
  return pCVar1;
}
