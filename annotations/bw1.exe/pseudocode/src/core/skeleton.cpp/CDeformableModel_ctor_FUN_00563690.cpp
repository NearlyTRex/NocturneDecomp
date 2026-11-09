// Name: core_skeleton.cpp_CDeformableModel_ctor_FUN_00563690
// Address: 00563690
// Address Range: [[00563690, 005637a4]]
// Convention: unknown
// Signature: CDeformableModel * core_skeleton_cpp_CDeformableModel_ctor_FUN_00563690(CDeformableModel *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CDeformableModel * core_skeleton_cpp_CDeformableModel_ctor_FUN_00563690(CDeformableModel *this_ptr)

{
  CDeformableModel *pCVar1;
  int iVar2;
  CDeformableModel *pCVar3;
  byte *puVar4;
  
  iVar2 = __arrinit(&this_ptr->field_0x2290,100,&g_CVectorTypeInfo);
  iVar2 = __arrinit(iVar2 + 0x4bc,100,&g_CBoundingBox3DTypeInfo);
  pCVar1 = (CDeformableModel *)(iVar2 + -0x274c);
  pCVar3 = pCVar1;
  do {
    puVar4 = &pCVar3->field_0x4;
    *(uint *)&pCVar3->field_0x40 = 0;
    *(uint *)&pCVar3->field_0x54 = 0;
    *(uint *)&pCVar3->field_0x68 = 0;
    *(uint *)&pCVar3->field_0x7c = 0;
    *(uint *)&pCVar3->field_0x90 = 0;
    *(uint *)&pCVar3->field_0xa4 = 0;
    *(uint *)&pCVar3->field_0x2c = 0;
    pCVar3 = (CDeformableModel *)puVar4;
  } while (puVar4 != (byte *)(iVar2 + -0x2738));
  *(uint *)(iVar2 + -0x2694) = 0;
  *(uint *)(iVar2 + -0x2690) = 0;
  memset((void *)(iVar2 + -0x268c),0,0xb40);
  *(uint *)(iVar2 + -0x1b4c) = 0;
  memset((void *)(iVar2 + -0x1b48),0,0x1680);
  *(byte *)(iVar2 + 0xe10) = 0;
  *(uint *)(iVar2 + 0xe60) = 0;
  *(uint *)(iVar2 + -0x4c0) = 0x3f800000;
  *(uint *)pCVar1 = 0;
  *(uint *)(iVar2 + -0x4c4) = *(uint *)(iVar2 + -0x4c0);
  *(uint *)(iVar2 + -0x4c8) = *(uint *)(iVar2 + -0x4c4);
  memset((void *)(iVar2 + -0x2748),0,0x28);
  *(uint *)(iVar2 + -4) = 0;
  *(uint *)(iVar2 + -8) = *(uint *)(iVar2 + -4);
  *(uint *)(iVar2 + -0xc) = *(uint *)(iVar2 + -8);
  *(byte *)(iVar2 + 0xe64) = 0;
  return pCVar1;
}
