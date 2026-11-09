// Name: core_partibox.cpp_CParticleBox_ctor_FUN_005ac7a0
// Address: 005ac7a0
// Address Range: [[005ac7a0, 005ac7e1]]
// Convention: unknown
// Signature: CParticleBox * core_partibox_cpp_CParticleBox_ctor_FUN_005ac7a0(CParticleBox *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CParticleBox * core_partibox_cpp_CParticleBox_ctor_FUN_005ac7a0(CParticleBox *this_ptr)

{
  CParticleBox *pCVar1;
  
  pCVar1 = (CParticleBox *)core_boxactor_cpp_CBoxActor_ctor_FUN_0041bd30((CBoxActor *)this_ptr);
  *(byte **)&pCVar1->field_0x2b0 = &g_CParticleBoxVTable;
  *(uint *)&pCVar1->field_0xfc = 1;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)&pCVar1->field_0x2b4,(char *)0x5f0e98);
  *(uint *)&pCVar1->field_0x754 = 0;
  return pCVar1;
}
