// Name: core_ghoul.cpp_CGhoul_ctor_FUN_004e6030
// Address: 004e6030
// Address Range: [[004e6030, 004e606b]]
// Convention: __cdecl
// Signature: CGhoul * __cdecl core_ghoul_cpp_CGhoul_ctor_FUN_004e6030(CGhoul *this_ptr)

#include "nocturne.h"

CGhoul * __cdecl core_ghoul_cpp_CGhoul_ctor_FUN_004e6030(CGhoul *this_ptr)

{
  CGhoul *pCVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  int iVar5;
  float max_value;
  
  pCVar1 = (CGhoul *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CGhoulVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar1->base).base.model,"guul.dfm");
  fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(20.0,35.0);
  max_value = 4.0;
  fVar4 = 7.197803e-39;
  dVar3 = round((double)(fVar2 * (float)65536));
  *(int *)(pCVar1->unk1 + 4) = (int)ROUND(dVar3);
  fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(fVar4,max_value);
  pCVar1->arise_timer = 0xa0000;
  pCVar1->unk2[0] = -1;
  pCVar1->unk2[1] = -1;
  pCVar1->unk2[2] = -1;
  pCVar1->unk2[3] = -1;
  fVar2 = (float)65536;
  pCVar1->unk2[4] = '\0';
  pCVar1->unk2[5] = '\0';
  pCVar1->unk2[6] = '\0';
  pCVar1->unk2[7] = '\0';
  pCVar1->spasm_count = 2;
  iVar5 = 0x4e60d7;
  dVar3 = round((double)(fVar4 * fVar2));
  *(int *)(pCVar1->unk1 + 8) = (int)ROUND(dVar3);
  iVar5 = core_actor_cpp_getRandomInt_FUN_0040cc70(1,iVar5);
  (pCVar1->base).base.collision_cylinder_height = 0.75;
  (pCVar1->base).base.collision_cylinder_radius = 1.5;
  pCVar1->unk3[0x38] = '\0';
  pCVar1->unk3[0x39] = '\0';
  pCVar1->unk3[0x3a] = '\0';
  pCVar1->unk3[0x3b] = '\0';
  pCVar1->unk3[0x3c] = '\0';
  pCVar1->unk3[0x3d] = '\0';
  pCVar1->unk3[0x3e] = '\0';
  pCVar1->unk3[0x3f] = '\0';
  pCVar1->unk3[0x40] = '\0';
  pCVar1->unk3[0x41] = '\0';
  pCVar1->unk3[0x42] = '\0';
  pCVar1->unk3[0x43] = '\0';
  pCVar1->unk3[0x44] = '\0';
  fVar2 = 50.0f;
  pCVar1->unk3[0x45] = '\0';
  pCVar1->unk3[0x46] = '\0';
  pCVar1->unk3[0x47] = '\0';
  pCVar1->unk3[0x48] = '\0';
  fVar4 = 100.0f;
  pCVar1->unk3[0x49] = '\0';
  pCVar1->unk3[0x4a] = '\0';
  pCVar1->unk3[0x4b] = '\0';
  pCVar1->lives_left = iVar5;
  (pCVar1->base).base.ai_detection_range_min = fVar2;
  (pCVar1->base).base.ai_detection_range_max = fVar4;
  return pCVar1;
}
