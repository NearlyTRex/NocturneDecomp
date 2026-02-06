// Name: core_dracbrid.cpp_CDraculaBride_ctor_FUN_00483fc0
// Address: 00483fc0
// Address Range: [[00483fc0, 004840ae]]
// Convention: __cdecl
// Signature: CDraculaBride * __cdecl core_dracbrid_cpp_CDraculaBride_ctor_FUN_00483fc0(CDraculaBride *this_ptr)

#include "nocturne.h"

CDraculaBride * __cdecl core_dracbrid_cpp_CDraculaBride_ctor_FUN_00483fc0(CDraculaBride *this_ptr)

{
  float fVar1;
  float fVar2;
  CDraculaBride *pCVar3;
  CDraculaBride *pCVar4;
  CDraculaBride *pCVar5;
  
  pCVar3 = (CDraculaBride *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CDraculaBrideVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar3->base).base.model,"nbride2.dfm");
  (pCVar3->base).base.field54_0x2ddc = 0.5;
  (pCVar3->base).base.collision_cylinder_radius = 1.0;
  pCVar3->unk[0x2c] = '\0';
  (pCVar3->base).base.hit_points = 135.0;
  fVar1 = 50.0f;
  pCVar3->mistState = 0;
  fVar2 = 100.0f;
  pCVar3->vanishTimer = 0.0;
  (pCVar3->base).base.field56_0x2de4 = fVar1;
  (pCVar3->base).base.field57_0x2de8 = fVar2;
  (pCVar3->newPos).z = 0.0;
  (pCVar3->newPos).y = (pCVar3->newPos).z;
  (pCVar3->newPos).x = (pCVar3->newPos).y;
  pCVar3->padding_0xbf64[0] = '\0';
  pCVar3->padding_0xbf64[1] = '\0';
  pCVar3->padding_0xbf64[2] = '\0';
  pCVar3->padding_0xbf64[3] = '\0';
  pCVar3->freakyVoiceNumber = 1;
  pCVar4 = pCVar3;
  do {
    pCVar5 = (CDraculaBride *)((pCVar4->base).base.base.actor_name + 4);
    pCVar4->padding_0xbf6c[0] = '\0';
    pCVar4->padding_0xbf6c[1] = '\0';
    pCVar4->padding_0xbf6c[2] = '\0';
    pCVar4->padding_0xbf6c[3] = '\0';
    pCVar4 = pCVar5;
  } while (pCVar5 != (CDraculaBride *)(pCVar3->base).base.base.create_event);
  pCVar3->partCount = 0;
  pCVar3->fadeTimer = 0.0;
  pCVar3->padding_0xbf50[4] = '\0';
  pCVar3->padding_0xbf50[5] = '\0';
  pCVar3->padding_0xbf50[6] = '\0';
  pCVar3->padding_0xbf50[7] = '\0';
  pCVar3->exploded = 0;
  return pCVar3;
}
