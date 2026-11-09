// Name: core_biggs.cpp_CBiggs_ctor_FUN_004149f0
// Address: 004149f0
// Address Range: [[004149f0, 00414aac]]
// Convention: __cdecl
// Signature: CBiggs * __cdecl core_biggs_cpp_CBiggs_ctor_FUN_004149f0(CBiggs *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBiggs * __cdecl core_biggs_cpp_CBiggs_ctor_FUN_004149f0(CBiggs *this_ptr)

{
  CMorph CVar1;
  uint uVar2;
  uint uVar3;
  CEnemy *pCVar4;
  CKeyFramedModelInstance *pCVar5;
  CMorph *pCVar6;
  char *pcVar7;
  CMorph *pCVar8;
  
  pCVar4 = core_enemy_cpp_CEnemy_ctor_FUN_004a0410((CEnemy *)this_ptr);
  pCVar5 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860
                     ((CKeyFramedModelInstance *)(pCVar4 + 1));
  pCVar6 = core_morph_cpp_CMorph_ctor_FUN_00522fa0((CMorph *)&pCVar5[1].field_0x8);
  *(byte ***)(pCVar6 + -0xc298) = &g_CBiggsVTable;
  core_skeleton_cpp_FUN_00569f50(pCVar6 + -0xc294,0x5d3c07);
  pcVar7 = "bigAlien";
  pCVar8 = pCVar6 + 0xc2c;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)(pCVar6 + -0x184),"question.kfm");
  uVar2 = _DAT_005fc5b8;
  *(uint *)(pCVar6 + -0x9400) = 0x3f19999a;
  uVar3 = _DAT_005fc5bc;
  *(uint *)(pCVar6 + -0x93fc) = 0x3f666666;
  *(uint *)(pCVar6 + -0x93f8) = uVar2;
  *(uint *)(pCVar6 + -0x93f4) = uVar3;
  do {
    CVar1 = (CMorph)*pcVar7;
    *pCVar8 = CVar1;
    if (CVar1 == (CMorph)0x0) {
      return (CBiggs *)(pCVar6 + -0xc3ec);
    }
    CVar1 = *(CMorph *)(pcVar7 + 1);
    pcVar7 = pcVar7 + 2;
    pCVar8[1] = CVar1;
    pCVar8 = pCVar8 + 2;
  } while (CVar1 != (CMorph)0x0);
  return (CBiggs *)(pCVar6 + -0xc3ec);
}
