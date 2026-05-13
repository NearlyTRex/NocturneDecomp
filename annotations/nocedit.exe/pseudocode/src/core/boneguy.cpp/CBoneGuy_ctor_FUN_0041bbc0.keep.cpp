// Name: core_boneguy.cpp_CBoneGuy_ctor_FUN_0041bbc0
// Address: 0041bbc0
// MANUAL RECONSTRUCTION
// Address Range: [[0041bbc0, 0041bd88]]
// Convention: __cdecl
// Signature: CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_ctor_FUN_0041bbc0(CBoneGuy *this_ptr)

#include "nocturne.h"

CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_ctor_FUN_0041bbc0(CBoneGuy *this_ptr)

{
  float fVar4;
  CBoneGuy *pCVar4;
  CBoneGuy_ptr_48956 dest;
  int iVar4;
  char *pcVar6;
  CVector3f local_20;
  CVector3f local_14;
  float fVar2;
  float fVar3;
  
  pCVar4 = (CBoneGuy *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  dest = __arrinit(pCVar4->boxes,0x14,&g_SBoneGuyBoxTypeInfo);
  ADJ(dest)->base.base.base.vtable._ub = &g_CBoneGuyVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&ADJ(dest)->base.base.model,"boneguy.dfm");
  ADJ(dest)->base.base.collision_cylinder_height = 0.6;
  ADJ(dest)->base.base.collision_cylinder_radius = 0.9;
  ADJ(dest)->base.base.base.is_transparent = 1;
  pcVar6 = ADJ(dest)->death_event;
  ADJ(dest)->blown_up = 0;
  fVar4 = 50.0f;
  ADJ(dest)->base.base.blood_type = 2;
  fVar3 = 100.0f;
  ADJ(dest)->recombine_time = 10.0;
  ADJ(dest)->base.base.ai_detection_range_min = fVar4;
  ADJ(dest)->base.base.ai_detection_range_max = fVar3;
  strcpy(pcVar6, "boneguydie");
  ADJ(dest)->box_count = 0;
  memset(dest,0,0x5a0);
  iVar4 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,0xff);
  ADJ(dest)->search_timer = 0.0;
  ADJ(dest)->pickup_cooldown = 0.0;
  ADJ(dest)->pickup_target = (CDemonActor *)0x0;
  ADJ(dest)->base.victim_height = 6.0;
  ADJ(dest)->pickup_attempt_count = iVar4;
  local_14.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.0,255.0);
  local_14.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.0,40.0);
  local_14.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(106.0,256.0);
  core_boneguy_cpp_hsvToRgb_FUN_0041ba10((CColor3f *)&local_20,(CColor3f *)&local_14);
  fVar2 = 256.0f;
  ADJ(dest)->base.base.base.scale.x = (int)ROUND(ROUND(local_20.x * 256.0f));
  ADJ(dest)->base.base.base.scale.y = (int)ROUND(ROUND(local_20.y * fVar2));
  ADJ(dest)->base.base.base.scale.z = (int)ROUND(ROUND(fVar2 * local_20.z));
  return ADJ(dest);
}
