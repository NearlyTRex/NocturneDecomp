// Name: core_mimic.cpp_CMimic_ctor_FUN_004f0310
// Address: 004f0310
// Address Range: [[004f0310, 004f03f6]]
// Convention: __cdecl
// Signature: CMimic * __cdecl core_mimic_cpp_CMimic_ctor_FUN_004f0310(CMimic *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CMimic * __cdecl core_mimic_cpp_CMimic_ctor_FUN_004f0310(CMimic *this_ptr)

{
  CMorph CVar1;
  uint uVar2;
  uint uVar3;
  CEnemy *pCVar4;
  int iVar5;
  CMorph *pCVar6;
  CMorph *pCVar7;
  CMorph *pCVar8;
  
  pCVar4 = core_enemy_cpp_CEnemy_ctor_FUN_00487db0((CEnemy *)this_ptr);
  iVar5 = core_necklace_cpp_FUN_005adda0(&pCVar4[1].field_0xc8);
  pCVar6 = core_morph_cpp_CMorph_ctor_FUN_005b6e60((CMorph *)(iVar5 + 0x3ab60));
  *(byte **)(pCVar6 + -0x4b470) = &g_CMimicVTable;
  *(uint *)(pCVar6 + -0x482f0) = 0x3f000000;
  pCVar7 = (CMorph *)0x5dd748;
  *(uint *)(pCVar6 + -0x482ec) = 0x3f800000;
  uVar2 = _DAT_005f9e7c;
  pCVar6[-0x3ac28] = (CMorph)0x0;
  uVar3 = _DAT_005f9e80;
  pCVar6[-0x3abc4] = (CMorph)0x0;
  *(uint *)(pCVar6 + -0x482e8) = uVar2;
  *(uint *)(pCVar6 + -0x482e4) = uVar3;
  *(uint *)(pCVar6 + -0x30) = 0;
  pCVar8 = pCVar6 + -0x28;
  *(uint *)(pCVar6 + -0x2c) = 0;
  do {
    CVar1 = *pCVar7;
    *pCVar8 = CVar1;
    if (CVar1 == (CMorph)0x0) break;
    CVar1 = pCVar7[1];
    pCVar7 = pCVar7 + 2;
    pCVar8[1] = CVar1;
    pCVar8 = pCVar8 + 2;
  } while (CVar1 != (CMorph)0x0);
  *(uint *)(pCVar6 + 0xc30) = 0;
  *(uint *)(pCVar6 + 0xc2c) = 0xbf800000;
  *(uint *)(pCVar6 + -0x4b618) = 0x10000;
  *(uint *)(pCVar6 + -0x4b614) = 0x10000;
  *(uint *)(pCVar6 + -0x4b610) = 0x10000;
  return (CMimic *)(pCVar6 + -0x4b720);
}
