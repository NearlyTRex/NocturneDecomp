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
  int iVar7;
  byte *puVar8;
  CFirestaff *pCVar9;
  int iVar10;
  
  pCVar6 = core_weapon_cpp_CWeapon_ctor_FUN_0057ad70((CWeapon *)this_ptr);
  iVar7 = __arrinit(pCVar6[1].base.create_event + 8,0xc,&g_CFlameTypeInfo)
  ;
  pCVar1 = (CFirestaff *)(iVar7 + -0x614);
  *(CWeapon_full_vtable **)(iVar7 + -0x4c0) = &g_CFirestaffVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)(iVar7 + -0x4bc),(char *)0x5c0af8);
  *(uint *)(iVar7 + -0x33c) = 0;
  *(uint *)(iVar7 + -0x338) = 0;
  *(uint *)(iVar7 + -0x330) = 1;
  *(uint *)(iVar7 + -0x32c) = 0x42480000;
  *(uint *)(iVar7 + -0x328) = 0;
  *(uint *)(iVar7 + -0x334) = 0xc;
  *(uint *)(iVar7 + -0xa8) = 10;
  *(uint *)(iVar7 + -0x88) = 0xf;
  *(uint *)(iVar7 + -0xa0) = 1;
  *(uint *)(iVar7 + -0x98) = 0;
  *(uint *)(iVar7 + -0x9c) = 2;
  *(uint *)(iVar7 + -0x44) = 0x8000;
  *(byte *)(iVar7 + -100) = 0x20;
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30((CDemonGlobe *)(iVar7 + -0x80),8.0)
  ;
  *(uint *)(iVar7 + -0x60) = 1;
  *(uint *)(iVar7 + -4) = 0x8000;
  *(byte *)(iVar7 + -0x24) = 0x20;
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30((CDemonGlobe *)(iVar7 + -0x40),8.0)
  ;
  *(uint *)(iVar7 + -0x20) = 1;
  *(uint *)(iVar7 + 0x1fb0) = 0;
  pCVar9 = pCVar1;
  do {
    puVar8 = &pCVar9->field_0x2a4;
    *(uint *)&pCVar9->field_0x76c = 0x3f000000;
    *(uint *)&pCVar9->field_0x770 = 0x3f800000;
    *(uint *)&pCVar9->field_0x774 = 0x3f000000;
    *(uint *)&pCVar9->field_0x7bc = 0;
    *(uint *)&pCVar9->field_0x7c0 = 0;
    fVar5 = _DAT_005c0b0d;
    pCVar9 = (CFirestaff *)puVar8;
  } while (puVar8 != (byte *)(iVar7 + 0x199c));
  iVar10 = 0;
  fVar3 = (float)_DAT_005c0b1d;
  fVar4 = (float)_DAT_005c0b05;
  pCVar9 = pCVar1;
  do {
    fVar2 = (float)iVar10 * fVar4 + fVar3;
    *(float *)&pCVar9->field_0x76c = fVar2;
    *(float *)&pCVar9->field_0x774 = fVar2;
    iVar10 = iVar10 + 1;
    *(float *)&pCVar9->field_0x770 = fVar2 * fVar5;
    pCVar9 = (CFirestaff *)&pCVar9->field_0x2a4;
  } while (iVar10 < 6);
  iVar10 = 6;
  fVar3 = (float)_DAT_005c0b1d;
  fVar4 = (float)_DAT_005c0b15;
  iVar7 = iVar7 + 0x9c4;
  do {
    fVar2 = (float)iVar10 * fVar4 + fVar3;
    *(float *)(iVar7 + 0x76c) = fVar2;
    *(float *)(iVar7 + 0x774) = fVar2;
    iVar10 = iVar10 + 1;
    *(float *)(iVar7 + 0x770) = fVar2 * fVar5;
    iVar7 = iVar7 + 0x2a4;
  } while (iVar10 < 0xc);
  return pCVar1;
}
