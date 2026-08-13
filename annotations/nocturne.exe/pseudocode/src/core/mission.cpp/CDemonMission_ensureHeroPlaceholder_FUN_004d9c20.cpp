// Name: core_mission.cpp_CDemonMission_ensureHeroPlaceholder_FUN_004d9c20
// Address: 004d9c20
// Address Range: [[004d9c20, 004d9deb]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_ensureHeroPlaceholder_FUN_004d9c20(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_ensureHeroPlaceholder_FUN_004d9c20(CDemonMission *this_ptr)

{
  int iVar1;
  CDemonActor *pCVar2;
  char *name;
  CDemonActor *pCVar3;
  CHeroPlaceholder *this_ptr_00;
  CHeroPlaceholder *actor;
  UOrientationVector *pUVar4;
  uint in_stack_fffffe84;
  
  shape_edittool_cpp_CPickList_ctor_FUN_00474c90((CPickList *)&stack0xfffffe84);
  pCVar3 = this_ptr->first_actor;
  while( true ) {
    if (pCVar3 == (CDemonActor *)0x0) {
      if ((int)in_stack_fffffe84 < 1) {
        shape_edittool_cpp_CEditorTools_showMessage_FUN_0046fe60
                  (g_CEditorTools_PTR_005b6d50,"Warning: mission has no hero placeholders, and no heros.");
      }
      else {
        iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                          ((CPickList *)&stack0xfffffe84,"Mission has no hero placeholders.\n\nSelect a hero to convert into a hero placeholder, or\npress ESC to leave mission as is.\n\n(You will not be able to play the mission without a hero placeholder.)",-1,
                           in_stack_fffffe84);
        if (-1 < iVar1) {
          name = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080
                           ((CStrList *)&stack0xfffffe84,iVar1);
          pCVar3 = core_mission_cpp_CDemonMission_findActorByName_FUN_004d90a0(this_ptr,name);
          if (pCVar3 == (CDemonActor *)0x0) {
            g_CurrentFilename = "..\\core\\mission.cpp";
            g_CurrentLineNumber = 1671;
            core_main_c_displayErrorAndQuit_FUN_004c8440("Hell froze finding hero.");
          }
          this_ptr_00 = operator_new(0x154);
          actor = (CHeroPlaceholder *)0x0;
          if (this_ptr_00 != (CHeroPlaceholder *)0x0) {
            actor = core_hero_cpp_CHeroPlaceholder_ctor_FUN_004b5f90(this_ptr_00);
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
          core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(this_ptr,&actor->base);
          core_mission_cpp_CDemonMission_removeActor_FUN_004d8f90(this_ptr,pCVar3,1);
          core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60(this_ptr,&actor->base);
          shape_edittool_cpp_CEditorTools_showMessage_FUN_0046fe60
                    (g_CEditorTools_PTR_005b6d50,"Replaced hero OK.  You will need to save the mission for changes to be perminent.");
          shape_edittool_cpp_CPickList_dtor_FUN_00474cf0((CPickList *)&stack0xfffffe84,0);
          return;
        }
      }
      shape_edittool_cpp_CPickList_dtor_FUN_00474cf0((CPickList *)&stack0xfffffe84,0);
      return;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(pCVar3,"CHero");
    if (iVar1 != 0) {
      shape_edittool_cpp_CStrList_add_FUN_00473cb0((CStrList *)&stack0xfffffe84,pCVar3->actor_name);
    }
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                       (pCVar3,g_CHeroPlaceholderActorType_01cae128.name_hash);
    if ((pCVar2 != (CDemonActor *)0x0) && (*(int *)pCVar2[1].actor_name == 0)) break;
    pCVar3 = pCVar3->next_actor;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_00474cf0((CPickList *)&stack0xfffffe84,0);
  return;
}
