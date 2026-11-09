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
  char *name;
  CDemonActor *pCVar2;
  CHeroPlaceholder *this_ptr_00;
  CHeroPlaceholder *actor;
  CPickList local_3cc;
  
  shape_edittool_cpp_CPickList_ctor_FUN_0049a620(&local_3cc);
  pCVar2 = *(CDemonActor **)(this_ptr + 0x1118);
  while( true ) {
    if (pCVar2 == (CDemonActor *)0x0) {
      if ((int)local_3cc._0_4_ < 1) {
        shape_edittool_cpp_CEditorTools_showMessage_FUN_004942e0
                  (g_CEditorToolsPtr,"Warning: mission has no hero placeholders, and no heros.");
      }
      else {
        iVar1 = shape_edittool_cpp_FUN_0049a8b0(&local_3cc,"Mission has no hero placeholders.\n\nSelect a hero to convert into a hero placeholder, or\npress ESC to leave mission as is.\n\n(You will not be able to play the mission without a hero placeholder.)",-1,0)
        ;
        if (-1 < iVar1) {
          name = shape_edittool_cpp_CStrList_getStringAt_FUN_004998a0((CStrList *)&local_3cc,iVar1);
          pCVar2 = core_mission_cpp_FUN_0051b6c0(this_ptr,name);
          if (pCVar2 == (CDemonActor *)0x0) {
            _DAT_01d1d400 = "..\\core\\mission.cpp";
            _DAT_01d1d404 = 0x6e4;
            core_main_c_FUN_005030e0("Hell froze finding hero.");
          }
          this_ptr_00 = (CHeroPlaceholder *)FUN_005c0f32(0x17c);
          actor = (CHeroPlaceholder *)0x0;
          if (this_ptr_00 != (CHeroPlaceholder *)0x0) {
            actor = core_hero_cpp_CHeroPlaceholder_ctor_FUN_004ecba0(this_ptr_00);
          }
          *(uint *)&actor->field_0x158 = 0;
          *(uint *)&actor->field_0x20 = *(uint *)&pCVar2->field_0x20;
          *(uint *)&actor->field_0x24 = *(uint *)&pCVar2->field_0x24;
          *(uint *)&actor->field_0x28 = *(uint *)&pCVar2->field_0x28;
          *(uint *)&actor->field_0x2c = *(uint *)&pCVar2->field_0x2c;
          if (&actor->field_0x30 != &pCVar2->field_0x30) {
            *(uint *)&actor->field_0x30 = *(uint *)&pCVar2->field_0x30;
            *(uint *)&actor->field_0x34 = *(uint *)&pCVar2->field_0x34;
            *(uint *)&actor->field_0x38 = *(uint *)&pCVar2->field_0x38;
          }
          core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60
                    (this_ptr,(CDemonActor *)actor);
          core_mission_cpp_CDemonMission_removeActor_FUN_0051b4d0(this_ptr,pCVar2,1);
          core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160(this_ptr,(CDemonActor *)actor);
          shape_edittool_cpp_CEditorTools_showMessage_FUN_004942e0
                    (g_CEditorToolsPtr,"Replaced hero OK.  You will need to save the mission for changes to be perminent.");
          shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&local_3cc,0);
          return;
        }
      }
      shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&local_3cc,0);
      return;
    }
    iVar1 = core_actor_cpp_FUN_0040c550(pCVar2,"CHero");
    if (iVar1 != 0) {
      shape_edittool_cpp_CStrList_add_FUN_004994d0((CStrList *)&local_3cc,(char *)pCVar2);
    }
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040c600(pCVar2,_DAT_01d06b4c);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x158) == 0)) break;
    pCVar2 = *(CDemonActor **)&pCVar2->field_0x14c;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&local_3cc,0);
  return;
}
