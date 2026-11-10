// Name: core_carved.cpp_CCarved_ctor_FUN_004286d0
// Address: 004286d0
// Address Range: [[004286d0, 004287d4]]
// Convention: unknown
// Signature: CCarved * core_carved_cpp_CCarved_ctor_FUN_004286d0(CCarved *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CCarved * core_carved_cpp_CCarved_ctor_FUN_004286d0(CCarved *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CCarved *pCVar3;
  float fVar4;
  int iVar5;
  
  pCVar3 = (CCarved *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410((CEnemy *)this_ptr);
  ((UActorVTable *)&pCVar3->field_0x154)->_ub = &g_CCarvedVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            ((CDeformableModelInstance *)&pCVar3->field_0x158,"@carvedman1.dfm" + 1);
  *(uint *)&pCVar3->field_0x2fec = 0x3f000000;
  uVar1 = _DAT_005fd470;
  *(uint *)&pCVar3->field_0x2ff0 = 0x3f800000;
  *(uint *)&pCVar3->field_0xc278 = 0;
  uVar2 = _DAT_005fd474;
  *(uint *)&pCVar3->field_0xc274 = 0;
  *(uint *)&pCVar3->field_0x2ff4 = uVar1;
  *(uint *)&pCVar3->field_0x2ff8 = uVar2;
  fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.3,1.0);
  *(float *)&pCVar3->field_0xc268 = fVar4;
  iVar5 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,0xff);
  *(uint *)&pCVar3->field_0xc270 = 0;
  *(uint *)&pCVar3->field_0xc280 = 0;
  *(uint *)&pCVar3->field_0xc2d4 = 0;
  *(uint *)&pCVar3->field_0xc284 = 0;
  *(uint *)&pCVar3->field_0xc2e4 = 0;
  *(uint *)&pCVar3->field_0xc2e8 = 0;
  *(uint *)&pCVar3->field_0xc2ec = 0;
  *(int *)&pCVar3->field_0xc264 = 0;
  *(uint *)&pCVar3->field_0x252c = 0x40490fdb;
  *(int *)&pCVar3->field_0xc26c = iVar5;
  return pCVar3;
}
