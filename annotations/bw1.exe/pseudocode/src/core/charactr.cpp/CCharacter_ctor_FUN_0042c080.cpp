// Name: core_charactr.cpp_CCharacter_ctor_FUN_0042c080
// Address: 0042c080
// Address Range: [[0042c080, 0042c504]]
// Convention: unknown
// Signature: CCharacter * core_charactr_cpp_CCharacter_ctor_FUN_0042c080(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CCharacter * core_charactr_cpp_CCharacter_ctor_FUN_0042c080(CCharacter *this_ptr)

{
  uint uVar1;
  CDemonActor *pCVar2;
  CDeformableModelInstance *pCVar3;
  CClothList *pCVar4;
  int iVar5;
  CCharacter *pCVar6;
  byte *puVar7;
  int iVar8;
  int iVar9;
  uint local_44 [3];
  uint local_38 [3];
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20 [3];
  byte *local_14;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004085c0((CDemonActor *)this_ptr);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_00567370
                     ((CDeformableModelInstance *)(pCVar2 + 1));
  pCVar4 = core_cloth_cpp_CClothList_ctor_FUN_00441c60((CClothList *)&pCVar3[1].field_0x7a4);
  iVar5 = __arrinit(pCVar4 + 0x1c8,0xf,&g_CVectorTypeInfo);
  iVar5 = __arrinit(iVar5 + 0xb4,0xf,&g_CVectorTypeInfo);
  iVar5 = __arrinit(iVar5 + 0x210,0x32,&g_SFireTypeInfo);
  iVar5 = __arrinit(iVar5 + 0x4b0,0x32,&g_CFlameTypeInfo);
  *(byte ***)(iVar5 + -0x3488) = &g_CCharacterVTable;
  *(uint *)(iVar5 + -0x10e0) = 0;
  *(uint *)(iVar5 + -0x10bc) = 0;
  *(uint *)(iVar5 + -0x10c0) = *(uint *)(iVar5 + -0x10bc);
  *(uint *)(iVar5 + -0x10c4) = *(uint *)(iVar5 + -0x10c0);
  *(uint *)(iVar5 + -0x10a0) = 0x42c80000;
  *(uint *)(iVar5 + -0x5f0) = 0x3f800000;
  *(uint *)(iVar5 + -0x5ec) = 0x40000000;
  *(uint *)(iVar5 + -0x5e8) = 0x41a00000;
  *(uint *)(iVar5 + -0x5e4) = 0x42480000;
  *(uint *)(iVar5 + -0x5e0) = 0x40000000;
  *(uint *)(iVar5 + -0x5dc) = 0xc479c000;
  *(uint *)(iVar5 + -0x5d8) = 0;
  *(uint *)(iVar5 + -0x4bc) = 0;
  *(uint *)(iVar5 + -0x4b4) = 0x40000000;
  *(uint *)(iVar5 + -0xe88) = 0xffffffff;
  *(uint *)(iVar5 + -0xe80) = 0;
  *(uint *)(iVar5 + -0xe8c) = 0xffffffff;
  *(uint *)(iVar5 + -0x5f8) = 0;
  *(uint *)(iVar5 + -0xea0) = 0;
  *(uint *)(iVar5 + -0xed8) = 0;
  *(uint *)(iVar5 + -0xed4) = 0x40400000;
  *(uint *)(iVar5 + -0xed0) = 0x7149f2ca;
  *(uint *)(iVar5 + -0xecc) = 0xbf800000;
  *(uint *)(iVar5 + -0xe9c) = 0;
  *(uint *)(iVar5 + -0x10a4) = 0x42c80000;
  local_2c = 0;
  local_24 = 0x40000000;
  local_28 = 0;
  if ((uint *)(iVar5 + -0xe98) != &local_2c) {
    *(uint *)(iVar5 + -0xe94) = 0;
    *(uint *)(iVar5 + -0xe98) = 0;
    *(uint *)(iVar5 + -0xe90) = 0x40000000;
  }
  *(uint *)(iVar5 + -0xe68) = 0xffffffff;
  *(uint *)(iVar5 + -0xe64) = 0;
  *(uint *)(iVar5 + -0xe60) = 0;
  *(uint *)(iVar5 + -0xe5c) = 0;
  *(uint *)(iVar5 + -0xe58) = 0;
  iVar8 = iVar5 + -0xfec;
  memset((void *)(iVar5 + -0x1034),0,0xf0);
  iVar9 = iVar5 + -0x1028;
  local_14 = (byte *)(iVar5 + -0x34ec);
  pCVar6 = (CCharacter *)(iVar5 + -0x35dc);
  do {
    *(uint *)&pCVar6->field_0x25b0 = 0;
    *(uint *)&pCVar6->field_0x25a8 = 0xffffffff;
    *(uint *)&pCVar6->field_0x25ac = 0xffffffff;
    core_xform_cpp_setIdentityMatrix3x4_FUN_005b53f0(iVar9);
    puVar7 = &pCVar6->field_0x78;
    *(uint *)&pCVar6->field_0x25e8 = 0x3f800000;
    core_xform_cpp_setIdentityMatrix3x4_FUN_005b53f0(iVar8);
    iVar9 = iVar9 + 0x78;
    iVar8 = iVar8 + 0x78;
    pCVar6 = (CCharacter *)puVar7;
  } while (puVar7 != local_14);
  *(uint *)(iVar5 + -0xe74) = 0;
  *(uint *)(iVar5 + -0xe70) = 0;
  *(uint *)(iVar5 + -0xe6c) = 0;
  *(uint *)(iVar5 + -0xe7c) = 0;
  *(uint *)(iVar5 + -0xe78) = 0;
  *(uint *)(iVar5 + -0xe3c) = 0;
  *(uint *)(iVar5 + 0x840c) = 0;
  *(uint *)(iVar5 + -0xe38) = 0;
  *(uint *)(iVar5 + -0xe34) = 0;
  *(uint *)(iVar5 + -0xe30) = 0;
  *(uint *)(iVar5 + -0xe2c) = 0;
  *(uint *)(iVar5 + -0xee0) = 0;
  *(uint *)(iVar5 + -0xedc) = 0;
  *(uint *)(iVar5 + -0xe28) = 0;
  *(uint *)(iVar5 + 0x8414) = 0;
  *(uint *)(iVar5 + -0xe24) = 0x3f800000;
  *(uint *)(iVar5 + -0xe20) = 0;
  *(uint *)(iVar5 + -0xe18) = 0;
  *(uint *)(iVar5 + -0x944) = 0;
  *(uint *)(iVar5 + -0x940) = 0;
  *(uint *)(iVar5 + -0xe1c) = 1;
  *(uint *)(iVar5 + -0x109c) = 0;
  *(byte *)(iVar5 + -0x1098) = 0;
  *(uint *)(iVar5 + -0x780) = 0;
  *(uint *)(iVar5 + -0x77c) = 0;
  *(uint *)(iVar5 + -0x778) = 0;
  *(uint *)(iVar5 + -0x60c) = 0;
  *(uint *)(iVar5 + -0x5fc) = 0;
  *(uint *)(iVar5 + -0xec8) = 0;
  *(byte *)(iVar5 + -0xf44) = 0;
  if ((uint *)(iVar5 + -0xec4) != local_38) {
    *(uint *)(iVar5 + -0xec4) = 0x461c1800;
    *(uint *)(iVar5 + -0xec0) = 0;
    *(uint *)(iVar5 + -0xebc) = 0x461c1800;
  }
  if ((uint *)(iVar5 + -0xeb8) != local_20) {
    *(uint *)(iVar5 + -0xeb8) = 0x45f2d000;
    *(uint *)(iVar5 + -0xeb4) = 0;
    *(uint *)(iVar5 + -0xeb0) = 0x45f2d000;
  }
  if ((uint *)(iVar5 + -0xeac) != local_44) {
    *(uint *)(iVar5 + -0xeac) = 0x45ad7000;
    *(uint *)(iVar5 + -0xea8) = 0;
    *(uint *)(iVar5 + -0xea4) = 0x45ad7000;
  }
  *(uint *)(iVar5 + -0x10ac) = 0x40490fdb;
  *(uint *)(iVar5 + -0x10b0) = 0x40c90fdb;
  *(uint *)(iVar5 + -0x10a8) = 0x40490fdb;
  *(uint *)(iVar5 + 0x8ba8) = 0;
  *(uint *)(iVar5 + 0x8bac) = 0;
  *(uint *)(iVar5 + 0x8bb0) = 0;
  *(uint *)(iVar5 + 0x8bbc) = 0;
  *(uint *)(iVar5 + 0x8bb4) = 0;
  uVar1 = _DAT_005fd618;
  *(uint *)(iVar5 + 0x8bc0) = 0xfffffffe;
  *(uint *)(iVar5 + 0x8bb8) = uVar1;
  return (CCharacter *)(iVar5 + -0x35dc);
}
