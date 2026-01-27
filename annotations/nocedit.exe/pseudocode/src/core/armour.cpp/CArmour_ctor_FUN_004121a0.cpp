// Name: core_armour.cpp_CArmour_ctor_FUN_004121a0
// Address: 004121a0
// Address Range: [[004121a0, 00412232]]
// Convention: __cdecl
// Signature: CArmour * core_armour.cpp_CArmour_ctor_FUN_004121a0(CArmour * this_ptr)

#include "nocturne.h"

CArmour * __cdecl core_armour_cpp_CArmour_ctor_FUN_004121a0(CArmour *this_ptr)

{
  char cVar1;
  CEnemy *pCVar2;
  float fVar3;
  float fVar4;
  CArmour *pCVar5;
  char *pcVar6;
  char *pcVar7;
  
  pCVar5 = (CArmour *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  pcVar6 = "none";
  (pCVar5->base).base.base.vtable._ub = &g_CArmourVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar5->base).base.model,"armour.dfm");
  fVar4 = 100.0f;
  fVar3 = 50.0f;
  pCVar2 = &pCVar5->base;
  (pCVar2->base).cloth_data[0x344] = -0x66;
  (pCVar2->base).cloth_data[0x345] = -0x67;
  (pCVar2->base).cloth_data[0x346] = '\x19';
  (pCVar2->base).cloth_data[0x347] = '?';
  pCVar2 = &pCVar5->base;
  (pCVar2->base).cloth_data[0x348] = '\0';
  (pCVar2->base).cloth_data[0x349] = '\0';
  (pCVar2->base).cloth_data[0x34a] = '\0';
  (pCVar2->base).cloth_data[0x34b] = '@';
  pcVar7 = pCVar5->unk + 8;
  *(float *)((pCVar5->base).base.cloth_data + 0x34c) = fVar3;
  *(float *)((pCVar5->base).base.cloth_data + 0x350) = fVar4;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  pCVar2 = &pCVar5->base;
  (pCVar2->base).unk2[0x70] = '\x02';
  (pCVar2->base).unk2[0x71] = '\0';
  (pCVar2->base).unk2[0x72] = '\0';
  (pCVar2->base).unk2[0x73] = '\0';
  return pCVar5;
}
