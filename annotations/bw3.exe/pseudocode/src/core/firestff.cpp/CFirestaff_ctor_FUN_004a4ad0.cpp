// Name: core_firestff.cpp_CFirestaff_ctor_FUN_004a4ad0
// Address: 004a4ad0
// Address Range: [[004a4ad0, 004a4cc7]]
// Convention: unknown
// Signature: CFirestaff * core_firestff_cpp_CFirestaff_ctor_FUN_004a4ad0(CFirestaff *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CFirestaff * core_firestff_cpp_CFirestaff_ctor_FUN_004a4ad0(CFirestaff *this_ptr)

{
  CFirestaff *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CWeapon *pCVar6;
  void *pvVar7;
  CFirestaff *pCVar8;
  CFirestaff *pCVar9;
  int iVar10;
  int iVar11;
  
  pCVar6 = core_weapon_cpp_CWeapon_ctor_FUN_0057ad70(&this_ptr->base);
  pvVar7 = __arrinit
                     (pCVar6[1].base.create_event + 8,0xc,&g_CFlameTypeInfo);
  pCVar1 = (CFirestaff *)((int)pvVar7 + -0x614);
  *(CWeapon_full_vtable **)((int)pvVar7 + -0x4c0) = &g_CFirestaffVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)((int)pvVar7 + -0x4bc),(char *)0x5c0af8);
  *(uint *)((int)pvVar7 + -0x33c) = 0;
  *(uint *)((int)pvVar7 + -0x338) = 0;
  *(uint *)((int)pvVar7 + -0x330) = 1;
  *(uint *)((int)pvVar7 + -0x32c) = 0x42480000;
  *(uint *)((int)pvVar7 + -0x328) = 0;
  *(uint *)((int)pvVar7 + -0x334) = 0xc;
  *(uint *)((int)pvVar7 + -0xa8) = 10;
  *(uint *)((int)pvVar7 + -0x88) = 0xf;
  *(uint *)((int)pvVar7 + -0xa0) = 1;
  *(uint *)((int)pvVar7 + -0x98) = 0;
  *(uint *)((int)pvVar7 + -0x9c) = 2;
  *(uint *)((int)pvVar7 + -0x44) = 0x8000;
  *(byte *)((int)pvVar7 + -100) = 0x20;
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30
            ((CDemonGlobe *)((int)pvVar7 + -0x80),8.0);
  *(uint *)((int)pvVar7 + -0x60) = 1;
  *(uint *)((int)pvVar7 + -4) = 0x8000;
  *(byte *)((int)pvVar7 + -0x24) = 0x20;
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30
            ((CDemonGlobe *)((int)pvVar7 + -0x40),8.0);
  *(uint *)((int)pvVar7 + -0x20) = 1;
  *(uint *)((int)pvVar7 + 0x1fb0) = 0;
  pCVar9 = pCVar1;
  do {
    pCVar8 = (CFirestaff *)((pCVar9->base).model.model_name + 0xd4);
    pCVar9->flames[0].flame_size.x = 0.5;
    pCVar9->flames[0].flame_size.y = 1.0;
    pCVar9->flames[0].flame_size.z = 0.5;
    pCVar9->flames[0].which_flame = FLAME_TYPE_TORCH;
    pCVar9->flames[0].globe_scalar = 0.0;
    fVar5 = _DAT_005c0b0d;
    pCVar9 = pCVar8;
  } while (pCVar8 != (CFirestaff *)((int)pvVar7 + 0x199c));
  iVar10 = 0;
  fVar3 = (float)_DAT_005c0b1d;
  fVar4 = (float)_DAT_005c0b05;
  pCVar9 = pCVar1;
  do {
    fVar2 = (float)iVar10 * fVar4 + fVar3;
    pCVar9->flames[0].flame_size.x = fVar2;
    pCVar9->flames[0].flame_size.z = fVar2;
    iVar10 = iVar10 + 1;
    pCVar9->flames[0].flame_size.y = fVar2 * fVar5;
    pCVar9 = (CFirestaff *)((pCVar9->base).model.model_name + 0xd4);
  } while (iVar10 < 6);
  iVar11 = 6;
  fVar3 = (float)_DAT_005c0b1d;
  fVar4 = (float)_DAT_005c0b15;
  iVar10 = (int)pvVar7 + 0x9c4;
  do {
    fVar2 = (float)iVar11 * fVar4 + fVar3;
    *(float *)(iVar10 + 0x76c) = fVar2;
    *(float *)(iVar10 + 0x774) = fVar2;
    iVar11 = iVar11 + 1;
    *(float *)(iVar10 + 0x770) = fVar2 * fVar5;
    iVar10 = iVar10 + 0x2a4;
  } while (iVar11 < 0xc);
  return pCVar1;
}
