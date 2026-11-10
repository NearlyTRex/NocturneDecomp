// Name: core_xform.cpp_CYow_ctor_FUN_005b8160
// Address: 005b8160
// Address Range: [[005b8160, 005b81c5]]
// Convention: unknown
// Signature: CYow * core_xform_cpp_CYow_ctor_FUN_005b8160(CYow *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CYow * core_xform_cpp_CYow_ctor_FUN_005b8160(CYow *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CYow *pCVar3;
  
  pCVar3 = (CYow *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410((CEnemy *)this_ptr);
  ((UActorVTable *)&pCVar3->field_0x154)->_ub = &g_CYowVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            ((CDeformableModelInstance *)&pCVar3->field_0x158,"blackdog.dfm");
  uVar1 = _DAT_00608210;
  *(uint *)&pCVar3->field_0x2fec = 0x3f400000;
  uVar2 = _DAT_00608214;
  *(uint *)&pCVar3->field_0x2ff0 = 0x3fc00000;
  *(uint *)&pCVar3->field_0xc2b0 = 0;
  *(uint *)&pCVar3->field_0x2ff4 = uVar1;
  *(uint *)&pCVar3->field_0x2ff8 = uVar2;
  return pCVar3;
}
