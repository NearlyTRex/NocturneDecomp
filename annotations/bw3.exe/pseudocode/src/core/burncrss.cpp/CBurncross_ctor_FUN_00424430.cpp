// Name: core_burncrss.cpp_CBurncross_ctor_FUN_00424430
// Address: 00424430
// Address Range: [[00424430, 00424549]]
// Convention: unknown
// Signature: CBurncross * core_burncrss_cpp_CBurncross_ctor_FUN_00424430(CBurncross *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CBurncross * core_burncrss_cpp_CBurncross_ctor_FUN_00424430(CBurncross *this_ptr)

{
  CWeapon *pCVar1;
  int iVar2;
  CBurncross *pCVar3;
  byte *puVar4;
  
  pCVar1 = core_weapon_cpp_CWeapon_ctor_FUN_0057ad70((CWeapon *)this_ptr);
  iVar2 = __arrinit(pCVar1[1].base.actor_name + 0x14,8,&g_CFlameTypeInfo);
  *(CWeapon_full_vtable **)(iVar2 + -0x454) = &g_CBurncrossVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)(iVar2 + -0x450),"burncross.kfm");
  *(uint *)(iVar2 + -0x2d0) = 0;
  *(uint *)(iVar2 + -0x2cc) = 0;
  *(uint *)(iVar2 + -0x2c4) = 1;
  *(uint *)(iVar2 + -0x2c0) = 0x42480000;
  *(uint *)(iVar2 + -700) = 0;
  *(uint *)(iVar2 + -0x3c) = 10;
  *(uint *)(iVar2 + -0x1c) = 1;
  *(uint *)(iVar2 + -0x34) = 2;
  *(uint *)(iVar2 + -4) = 0;
  *(uint *)(iVar2 + -0xc) = 0;
  *(uint *)(iVar2 + -8) = 0;
  *(uint *)(iVar2 + -0x14) = 0;
  *(uint *)(iVar2 + -0x10) = 0;
  pCVar3 = (CBurncross *)(iVar2 + -0x5a8);
  do {
    puVar4 = &pCVar3->field_0x2a4;
    *(uint *)&pCVar3->field_0x700 = 0x3f000000;
    *(uint *)&pCVar3->field_0x704 = 0x3f800000;
    *(uint *)&pCVar3->field_0x708 = 0x3f000000;
    *(uint *)&pCVar3->field_0x750 = 0;
    *(uint *)&pCVar3->field_0x754 = 0;
    pCVar3 = (CBurncross *)puVar4;
  } while (puVar4 != (byte *)(iVar2 + 0xf78));
  *(uint *)(iVar2 + 0x1520) = 0;
  return (CBurncross *)(iVar2 + -0x5a8);
}
