// Name: core_mimic.cpp_CMimic_ctor_FUN_0050f0c0
// Address: 0050f0c0
// Address Range: [[0050f0c0, 0050f1a6]]
// Convention: __cdecl
// Signature: CMimic * __cdecl core_mimic_cpp_CMimic_ctor_FUN_0050f0c0(CMimic *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CMimic * __cdecl core_mimic_cpp_CMimic_ctor_FUN_0050f0c0(CMimic *this_ptr)

{
  CMorph CVar1;
  uint uVar2;
  uint uVar3;
  CEnemy *pCVar4;
  CCloth *pCVar5;
  CMorph *pCVar6;
  char *pcVar7;
  CMorph *pCVar8;
  
  pCVar4 = core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  pCVar5 = core_cloth_cpp_CCloth_ctor_FUN_0043e5c0
                     ((CCloth *)(pCVar4[1].base.base.create_event + 0x50));
  pCVar6 = core_morph_cpp_CMorph_ctor_FUN_00522fa0((CMorph *)(pCVar5 + 0x3ab60));
  *(CEnemy_full_vtable **)(pCVar6 + -0x46d3c) = &g_CMimicVTable;
  *(uint *)(pCVar6 + -0x43ea4) = 0x3f000000;
  pcVar7 = "CGhoul";
  *(uint *)(pCVar6 + -0x43ea0) = 0x3f800000;
  uVar2 = _DAT_006039cc;
  pCVar6[-0x3ac28] = (CMorph)0x0;
  uVar3 = _DAT_006039d0;
  pCVar6[-0x3abc4] = (CMorph)0x0;
  *(uint *)(pCVar6 + -0x43e9c) = uVar2;
  *(uint *)(pCVar6 + -0x43e98) = uVar3;
  *(uint *)(pCVar6 + -0x30) = 0;
  pCVar8 = pCVar6 + -0x28;
  *(uint *)(pCVar6 + -0x2c) = 0;
  do {
    CVar1 = (CMorph)*pcVar7;
    *pCVar8 = CVar1;
    if (CVar1 == (CMorph)0x0) break;
    CVar1 = *(CMorph *)(pcVar7 + 1);
    pcVar7 = pcVar7 + 2;
    pCVar8[1] = CVar1;
    pCVar8 = pCVar8 + 2;
  } while (CVar1 != (CMorph)0x0);
  *(uint *)(pCVar6 + 0xc30) = 0;
  *(uint *)(pCVar6 + 0xc2c) = 0xbf800000;
  *(uint *)(pCVar6 + -0x46d88) = 0x10000;
  *(uint *)(pCVar6 + -0x46d84) = 0x10000;
  *(uint *)(pCVar6 + -0x46d80) = 0x10000;
  return (CMimic *)(pCVar6 + -0x46e90);
}
