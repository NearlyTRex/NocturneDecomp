// Name: core_biggs.cpp_CBiggs_ctor_FUN_00414d10
// Address: 00414d10
// Address Range: [[00414d10, 00414dcc]]
// Convention: __cdecl
// Signature: CBiggs * __cdecl core_biggs_cpp_CBiggs_ctor_FUN_00414d10(CBiggs *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBiggs * __cdecl core_biggs_cpp_CBiggs_ctor_FUN_00414d10(CBiggs *this_ptr)

{
  CMorph CVar1;
  uint uVar2;
  uint uVar3;
  CEnemy *pCVar4;
  CKeyFramedModelInstance *pCVar5;
  CMorph *pCVar6;
  char *pcVar7;
  CMorph *pCVar8;
  
  pCVar4 = core_enemy_cpp_CEnemy_ctor_FUN_00487db0((CEnemy *)this_ptr);
  pCVar5 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                     ((CKeyFramedModelInstance *)(pCVar4 + 1));
  pCVar6 = core_morph_cpp_CMorph_ctor_FUN_005b6e60((CMorph *)&pCVar5[1].field_0x8);
  *(byte **)(pCVar6 + -0x109cc) = &g_CBiggsVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)(pCVar6 + -0x109c8),(char *)0x5cbc8c);
  pcVar7 = "bigAlien";
  pCVar8 = pCVar6 + 0xc2c;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)(pCVar6 + -0x184),"question.kfm");
  uVar2 = _DAT_005f3508;
  *(uint *)(pCVar6 + -0xd84c) = 0x3f19999a;
  uVar3 = _DAT_005f350c;
  *(uint *)(pCVar6 + -0xd848) = 0x3f666666;
  *(uint *)(pCVar6 + -0xd844) = uVar2;
  *(uint *)(pCVar6 + -0xd840) = uVar3;
  do {
    CVar1 = (CMorph)*pcVar7;
    *pCVar8 = CVar1;
    if (CVar1 == (CMorph)0x0) {
      return (CBiggs *)(pCVar6 + -0x10c7c);
    }
    CVar1 = *(CMorph *)(pcVar7 + 1);
    pcVar7 = pcVar7 + 2;
    pCVar8[1] = CVar1;
    pCVar8 = pCVar8 + 2;
  } while (CVar1 != (CMorph)0x0);
  return (CBiggs *)(pCVar6 + -0x10c7c);
}
