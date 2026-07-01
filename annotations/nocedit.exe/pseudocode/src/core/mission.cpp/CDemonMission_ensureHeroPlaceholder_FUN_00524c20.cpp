// Name: core_mission.cpp_CDemonMission_ensureHeroPlaceholder_FUN_00524c20
// Address: 00524c20
// Address Range: [[00524c20, 00524df7]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_ensureHeroPlaceholder_FUN_00524c20(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_ensureHeroPlaceholder_FUN_00524c20(CDemonMission *this_ptr)

{
  CDemonActor *actor_ptr;
  int iVar1;
  CHeroPlaceholder *pCVar2;
  int index;
  char *name;
  CDemonActor *pCVar3;
  CHeroPlaceholder *this_ptr_00;
  CHeroPlaceholder *actor;
  UOrientationVector *pUVar4;
  CPickList local_3b4;
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_3b4);
  actor_ptr = this_ptr->first_actor;
  while( true ) {
    if (actor_ptr == (CDemonActor *)0x0) {
      if (local_3b4.base.item_count < 1) {
        shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                  (g_CEditorToolsPtr,"Warning: mission has no hero placeholders, and no heros.");
      }
      else {
        index = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          (&local_3b4,"Mission has no hero placeholders.\n\nSelect a hero to convert into a hero placeholder, or\npress ESC to leave mission as is.\n\n(You will not be able to play the mission without a hero placeholder.)",-1,0);
        if (-1 < index) {
          name = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_3b4.base,index);
          pCVar3 = core_mission_cpp_CDemonMission_findActorByName_FUN_00524030(this_ptr,name);
          if (pCVar3 == (CDemonActor *)0x0) {
            g_CurrentFilename = "..\\core\\mission.cpp";
            g_CurrentLineNumber = 1669;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze finding hero.");
          }
          this_ptr_00 = (CHeroPlaceholder *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                                  (0x15c,"..\\core\\mission.cpp",1673);
          actor = (CHeroPlaceholder *)0x0;
          if (this_ptr_00 != (CHeroPlaceholder *)0x0) {
            actor = core_hero_cpp_CHeroPlaceholder_ctor_FUN_004f3c00(this_ptr_00);
          }
          actor->index = 0;
          (actor->base).location.position.x = (pCVar3->location).position.x;
          (actor->base).location.position.y = (pCVar3->location).position.y;
          (actor->base).location.position.z = (pCVar3->location).position.z;
          pUVar4 = &(actor->base).orient;
          (actor->base).location.area_id = (pCVar3->location).area_id;
          if (pUVar4 != &pCVar3->orient) {
            (pUVar4->vec).x = (pCVar3->orient).vec.x;
            (actor->base).orient.vec.y = (pCVar3->orient).vec.y;
            (actor->base).orient.vec.z = (pCVar3->orient).vec.z;
          }
          core_mission_cpp_CDemonMission_generateActorName_FUN_00524700(this_ptr,&actor->base);
          core_mission_cpp_CDemonMission_removeActor_FUN_00523f20(this_ptr,pCVar3,1);
          core_mission_cpp_CDemonMission_addActorToList_FUN_00523b70(this_ptr,&actor->base);
          shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                    (g_CEditorToolsPtr,"Replaced hero OK.  You will need to save the mission for changes to be perminent.");
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3b4,0);
          return;
        }
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3b4,0);
      return;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CHero");
    if (iVar1 != 0) {
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3b4.base,actor_ptr->actor_name);
    }
    pCVar2 = (CHeroPlaceholder *)
             core_actor_cpp_castToClassHash_FUN_0040c790
                       (actor_ptr,g_CHeroPlaceholderClassInfo.name_hash);
    if ((pCVar2 != (CHeroPlaceholder *)0x0) && (pCVar2->index == 0)) break;
    actor_ptr = actor_ptr->next_actor;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3b4,0);
  return;
}
