// Name: core_shadow.cpp_CShadow_ctor_FUN_0053c200
// Address: 0053c200
// Address Range: [[0053c200, 0053c307]]
// Convention: unknown
// Signature: CShadow * core_shadow_cpp_CShadow_ctor_FUN_0053c200(CShadow *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CShadow * core_shadow_cpp_CShadow_ctor_FUN_0053c200(CShadow *this_ptr)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  CShadow *pCVar4;
  
  pCVar4 = (CShadow *)core_enemy_cpp_CEnemy_ctor_FUN_00487db0((CEnemy *)this_ptr);
  ((UActorVTable *)&pCVar4->field_0x2b0)->_ub = &g_CShadowVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar4->field_0x2b4,"shadowbeast.dfm");
  *(uint *)&pCVar4->field_0x3430 = 0x3f800000;
  *(uint *)&pCVar4->field_0x3434 = 0x40000000;
  *(uint *)&pCVar4->field_0x10af8 = 0;
  *(uint *)&pCVar4->field_0x10b18 = 1;
  *(uint *)&pCVar4->field_0x10b2c = 0;
  *(uint *)&pCVar4->field_0x10b30 = 0x40a00000;
  *(uint *)&pCVar4->field_0x10b34 = 0;
  *(uint *)&pCVar4->field_0x10b38 = 0;
  *(uint *)&pCVar4->field_0x10b40 = 0;
  *(uint *)&pCVar4->field_0x10b74 = 0x3f800000;
  *(uint *)&pCVar4->field_0x10b3c = 0;
  *(uint *)&pCVar4->field_0x10b64 = 0;
  *(uint *)&pCVar4->field_0x10b5c = 0;
  *(uint *)&pCVar4->field_0x10b60 = 0;
  uVar1 = _DAT_005fb400;
  *(uint *)&pCVar4->field_0x10b6c = 0;
  uVar2 = _DAT_005fb404;
  *(uint *)&pCVar4->field_0x10b68 = 0x41200000;
  uVar3 = 0x41200000;
  *(uint *)&pCVar4->field_0x10b78 = 0;
  *(uint *)&pCVar4->field_0x10b7c = 0;
  *(uint *)&pCVar4->field_0x3438 = uVar1;
  *(uint *)&pCVar4->field_0x343c = uVar2;
  *(uint *)&pCVar4->field_0x10b44 = uVar3;
  return pCVar4;
}
