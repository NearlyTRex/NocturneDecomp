// Name: core_dracbrid.cpp_CDraculaBride_ctor_FUN_00483fc0
// Address: 00483fc0
// Address Range: [[00483fc0, 004840ae]]
// Convention: __cdecl
// Signature: CDraculaBride * core_dracbrid.cpp_CDraculaBride_ctor_FUN_00483fc0(CDraculaBride * this_ptr)

#include "nocturne.h"

CDraculaBride * __cdecl core_dracbrid_cpp_CDraculaBride_ctor_FUN_00483fc0(CDraculaBride *this_ptr)

{
  CEnemy *pCVar1;
  float fVar2;
  float fVar3;
  CDraculaBride *pCVar4;
  CDraculaBride *pCVar5;
  CDraculaBride *pCVar6;
  
  pCVar4 = (CDraculaBride *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar4->base).base.base.vtable._ub = &g_CDraculaBrideVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar4->base).base.model,"nbride2.dfm");
  pCVar1 = &pCVar4->base;
  (pCVar1->base).cloth_data[0x344] = '\0';
  (pCVar1->base).cloth_data[0x345] = '\0';
  (pCVar1->base).cloth_data[0x346] = '\0';
  (pCVar1->base).cloth_data[0x347] = '?';
  pCVar1 = &pCVar4->base;
  (pCVar1->base).cloth_data[0x348] = '\0';
  (pCVar1->base).cloth_data[0x349] = '\0';
  (pCVar1->base).cloth_data[0x34a] = -0x80;
  (pCVar1->base).cloth_data[0x34b] = '?';
  pCVar4->unk[0x2c] = '\0';
  (pCVar4->base).base.hit_points = 135.0;
  fVar2 = 50.0f;
  pCVar4->mistState = 0;
  fVar3 = 100.0f;
  pCVar4->vanishTimer = 0.0;
  *(float *)((pCVar4->base).base.cloth_data + 0x34c) = fVar2;
  *(float *)((pCVar4->base).base.cloth_data + 0x350) = fVar3;
  (pCVar4->newPos).z = 0.0;
  (pCVar4->newPos).y = (pCVar4->newPos).z;
  (pCVar4->newPos).x = (pCVar4->newPos).y;
  pCVar4->padding_0xbf64[0] = '\0';
  pCVar4->padding_0xbf64[1] = '\0';
  pCVar4->padding_0xbf64[2] = '\0';
  pCVar4->padding_0xbf64[3] = '\0';
  pCVar4->freakyVoiceNumber = 1;
  pCVar5 = pCVar4;
  do {
    pCVar6 = (CDraculaBride *)((pCVar5->base).base.base.actor_name + 4);
    pCVar5->padding_0xbf6c[0] = '\0';
    pCVar5->padding_0xbf6c[1] = '\0';
    pCVar5->padding_0xbf6c[2] = '\0';
    pCVar5->padding_0xbf6c[3] = '\0';
    pCVar5 = pCVar6;
  } while (pCVar6 != (CDraculaBride *)(pCVar4->base).base.base.create_event);
  pCVar4->partCount = 0;
  pCVar4->fadeTimer = 0.0;
  pCVar4->padding_0xbf50[4] = '\0';
  pCVar4->padding_0xbf50[5] = '\0';
  pCVar4->padding_0xbf50[6] = '\0';
  pCVar4->padding_0xbf50[7] = '\0';
  pCVar4->exploded = 0;
  return pCVar4;
}
