// Name: core_msnedit.cpp_CDemonMission_showDifficultyStats_FUN_0053d3b0
// Address: 0053d3b0
// MANUAL RECONSTRUCTION
// Address Range: [[0053d3b0, 0053d7a3]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_showDifficultyStats_FUN_0053d3b0(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_msnedit_cpp_CDemonMission_showDifficultyStats_FUN_0053d3b0(CDemonMission *this_ptr)

{
  char *str1;
  CEnemy *pCVar2;
  int iVar3;
  int iVar1;
  CAmmo *pCVar3;
  CHealthItem *pCVar4;
  CPickList local_10c4;
  CPickList local_d1c;
  CPickList local_974;
  CPickList local_5cc;
  char local_224 [500];
  double local_30;
  int local_28;
  float local_24;
  float local_20;
  int local_1c;
  char *local_18;
  float local_14;
  int total_ammo;
  CDemonActor *actor_ptr;
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_d1c);
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_974);
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_10c4);
  actor_ptr = this_ptr->first_actor;
  local_20 = 0.0;
  local_24 = 0.0;
  total_ammo = 0;
  for (; actor_ptr != (CDemonActor *)0x0; actor_ptr = actor_ptr->next_actor) {
    pCVar2 = (CEnemy *)
             core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CEnemyClassInfo.name_hash);
    if (pCVar2 != (CEnemy *)0x0) {
      local_14 = 1.0;
      if ((pCVar2->base).base.create_event[0] != '\0') {
        str1 = (pCVar2->base).base.create_event;
        iVar3 = _stricmp(str1,"none");
        if ((iVar3 != 0) &&
           (iVar1 = _stricmp(str1,"true"), iVar1 != 0)) {
          local_14 = (pCVar2->base).base.create_prob;
        }
      }
      _sprintf
                (local_224,"%s\t%g hp\tx\t%i%%\t=\t%g hp",(pCVar2->base).base.actor_name,(double)(pCVar2->base).hit_points,
                 (int)ROUND(ROUND(local_14 * 100.0f)),
                 (double)((pCVar2->base).hit_points * local_14));
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_d1c.base,local_224);
      local_20 = (pCVar2->base).hit_points * local_14 + local_20;
    }
    pCVar3 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c790
                                (actor_ptr,g_CAmmoClassInfo.name_hash);
    if (pCVar3 != (CAmmo *)0x0) {
      _sprintf(local_224,"%s\t%s\t%s\t%d",pCVar3->base.actor_name,pCVar3->weapon_class_name,"",pCVar3->ammo_count);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_974.base,local_224);
      total_ammo = total_ammo + pCVar3->ammo_count;
    }
    pCVar4 = (CHealthItem *)
             core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CHealthItemClassInfo.name_hash)
    ;
    if (pCVar4 != (CHealthItem *)0x0) {
      _sprintf
                (local_224,"%s\t%g hp\tx\t%d uses\t=\t%g hp",pCVar4->base.actor_name,(double)pCVar4->hp_restored,
                 pCVar4->use_count,(double)((float)pCVar4->use_count * pCVar4->hp_restored));
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_10c4.base,local_224);
      local_24 = (float)pCVar4->use_count * pCVar4->hp_restored + local_24;
    }
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_5cc);
  local_30 = (double)local_20;
  _sprintf(local_224,"Total enemy HP\t%g",local_30);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_5cc.base,local_224);
  _sprintf(local_224,"Total\t\t\t\t\t%g hp",local_30);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_d1c.base,local_224);
  _sprintf(local_224,"Total ammo\t%d",total_ammo);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_5cc.base,local_224);
  _sprintf(local_224,"Total\t\t\t%d",total_ammo);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_974.base,local_224);
  local_30 = (double)local_24;
  _sprintf(local_224,"Total health items\t%g",local_30);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_5cc.base,local_224);
  _sprintf(local_224,"Total\t\t\t\t\t%g hp",local_30);
  iVar1 = 0;
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_10c4.base,local_224);
  while( true ) {
    iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_5cc,"Mission difficulty stats.  Select an item for details",iVar1,0);
    if (iVar1 < 0) break;
    if (iVar1 == 0) {
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                (&local_d1c,"Enemy detail",-1,0);
    }
    if (iVar1 == 1) {
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                (&local_974,"Ammo detail",-1,0);
    }
    if (iVar1 == 2) {
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                (&local_10c4,"Health detail",-1,0);
    }
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_5cc,0);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_10c4,0);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_974,0);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_d1c,0);
  return;
}
