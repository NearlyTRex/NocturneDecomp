// Name: core_construc.cpp_CConstructBone_ctor_FUN_00444550
// Address: 00444550
// Address Range: [[00444550, 004445c0]]
// Convention: unknown
// Signature: CConstructBone * core_construc_cpp_CConstructBone_ctor_FUN_00444550(CConstructBone *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CConstructBone * core_construc_cpp_CConstructBone_ctor_FUN_00444550(CConstructBone *this_ptr)

{
  CConstruct *pCVar1;
  CConstructBone *pCVar2;
  float10 fVar3;
  
  pCVar1 = core_constrct_cpp_CConstruct_ctor_FUN_00442420((CConstruct *)this_ptr);
  *(CConstruct_full_vtable **)&pCVar1->field_0x154 = &g_CConstructBoneVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            ((CDeformableModelInstance *)&pCVar1->field_0x158,"bonestruct.dfm");
  *(uint *)&pCVar1->field_0x2538 = 0x425c0000;
  *(uint *)&pCVar1->field_0xce5c = 0x41700000;
  *(uint *)&pCVar1->field_0xce60 = 0x41200000;
  *(uint *)&pCVar1->field_0xd84c = 1;
  *(uint *)&pCVar1->field_0xd85c = 3;
  fVar3 = (float10)*(float *)&pCVar1->field_0x2538;
  pCVar2 = (CConstructBone *)round();
  *(int *)&pCVar1->field_0xd17c = (int)ROUND(fVar3);
  return pCVar2;
}
