// Name: core_mission.cpp_FUN_0051c240
// Address: 0051c240
// Address Range: [[0051c240, 0051c40d]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_FUN_0051c240(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_FUN_0051c240(CDemonMission *this_ptr)

{
  int iVar1;
  CDemonActor *pCVar2;
  char *name;
  CDemonActor *pCVar3;
  CHeroPlaceholder *this_ptr_00;
  CHeroPlaceholder *actor;
  UOrientationVector *pUVar4;
  CPickList local_3cc;
  
  shape_edittool_cpp_CPickList_ctor_FUN_0049a620(&local_3cc);
  pCVar3 = this_ptr->first_actor;
  while( true ) {
    if (pCVar3 == (CDemonActor *)0x0) {
      if (local_3cc.base.item_count < 1) {
        shape_edittool_cpp_CEditorTools_showMessage_FUN_004942e0
                  (g_CEditorToolsPtr,"Warning: mission has no hero placeholders, and no heros.");
      }
      else {
        iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_0049a8b0
                          (&local_3cc,"Mission has no hero placeholders.\n\nSelect a hero to convert into a hero placeholder, or\npress ESC to leave mission as is.\n\n(You will not be able to play the mission without a hero placeholder.)",-1,0);
        if (-1 < iVar1) {
          name = shape_edittool_cpp_CStrList_getStringAt_FUN_004998a0(&local_3cc.base,iVar1);
          pCVar3 = core_mission_cpp_CDemonMission_findActorByName_FUN_0051b6c0(this_ptr,name);
          if (pCVar3 == (CDemonActor *)0x0) {
            _DAT_01d1d400 = "..\\core\\mission.cpp";
            _DAT_01d1d404 = 0x6e4;
            core_main_c_FUN_005030e0("Hell froze finding hero.");
          }
          this_ptr_00 = (CHeroPlaceholder *)operator_new(0x17c);
          actor = (CHeroPlaceholder *)0x0;
          if (this_ptr_00 != (CHeroPlaceholder *)0x0) {
            actor = core_hero_cpp_CHeroPlaceholder_ctor_FUN_004ecba0(this_ptr_00);
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
          core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(this_ptr,&actor->base);
          core_mission_cpp_CDemonMission_removeActor_FUN_0051b4d0(this_ptr,pCVar3,1);
          core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160(this_ptr,&actor->base);
          shape_edittool_cpp_CEditorTools_showMessage_FUN_004942e0
                    (g_CEditorToolsPtr,"Replaced hero OK.  You will need to save the mission for changes to be perminent.");
          shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&local_3cc,0);
          return;
        }
      }
      shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&local_3cc,0);
      return;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(pCVar3,"CHero");
    if (iVar1 != 0) {
      shape_edittool_cpp_CStrList_add_FUN_004994d0(&local_3cc.base,pCVar3->actor_name);
    }
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c600(pCVar3,_DAT_01d06b4c);
    if ((pCVar2 != (CDemonActor *)0x0) && (*(int *)pCVar2[1].actor_name == 0)) break;
    pCVar3 = pCVar3->next_actor;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&local_3cc,0);
  return;
}
