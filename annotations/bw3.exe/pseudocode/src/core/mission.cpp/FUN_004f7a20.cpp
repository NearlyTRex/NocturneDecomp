// Name: core_mission.cpp_FUN_004f7a20
// Address: 004f7a20
// Address Range: [[004f7a20, 004f7bed]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_FUN_004f7a20(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_FUN_004f7a20(CDemonMission *this_ptr)

{
  int iVar1;
  char *name;
  CDemonActor *pCVar2;
  CHeroPlaceholder *this_ptr_00;
  CHeroPlaceholder *actor;
  CPickList local_3cc;
  
  shape_edittool_cpp_CPickList_ctor_FUN_004831c0(&local_3cc);
  pCVar2 = *(CDemonActor **)(this_ptr + 0x143c);
  while( true ) {
    if (pCVar2 == (CDemonActor *)0x0) {
      if ((int)local_3cc._0_4_ < 1) {
        shape_edittool_cpp_CEditorTools_showMessage_FUN_0047ce80
                  (g_CEditorToolsPtr,"Warning: mission has no hero placeholders, and no heros.");
      }
      else {
        iVar1 = shape_edittool_cpp_FUN_00483450(&local_3cc,"Mission has no hero placeholders.\n\nSelect a hero to convert into a hero placeholder, or\npress ESC to leave mission as is.\n\n(You will not be able to play the mission without a hero placeholder.)",-1,0)
        ;
        if (-1 < iVar1) {
          name = shape_edittool_cpp_CStrList_getStringAt_FUN_00482440((CStrList *)&local_3cc,iVar1);
          pCVar2 = core_mission_cpp_FUN_004f6e90(this_ptr,name);
          if (pCVar2 == (CDemonActor *)0x0) {
            _DAT_01d71de0 = "..\\core\\mission.cpp";
            _DAT_01d71de4 = 0x6e6;
            core_main_c_FUN_004e4330("Hell froze finding hero.");
          }
          this_ptr_00 = (CHeroPlaceholder *)FUN_005a3cb2(0x17c);
          actor = (CHeroPlaceholder *)0x0;
          if (this_ptr_00 != (CHeroPlaceholder *)0x0) {
            actor = core_hero_cpp_CHeroPlaceholder_ctor_FUN_004d4ae0(this_ptr_00);
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
          core_mission_cpp_CDemonMission_generateActorName_FUN_004f7530
                    (this_ptr,(CDemonActor *)actor);
          core_mission_cpp_CDemonMission_removeActor_FUN_004f6ca0(this_ptr,pCVar2,1);
          core_mission_cpp_FUN_004f6930(this_ptr,(CDemonActor *)actor);
          shape_edittool_cpp_CEditorTools_showMessage_FUN_0047ce80
                    (g_CEditorToolsPtr,"Replaced hero OK.  You will need to save the mission for changes to be perminent.");
          shape_edittool_cpp_CPickList_dtor_FUN_004832b0(&local_3cc,0);
          return;
        }
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004832b0(&local_3cc,0);
      return;
    }
    iVar1 = core_actor_cpp_FUN_0040c790(pCVar2,"CHero");
    if (iVar1 != 0) {
      shape_edittool_cpp_CStrList_add_FUN_00482070((CStrList *)&local_3cc,(char *)pCVar2);
    }
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840(pCVar2,_DAT_01d5baac);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x158) == 0)) break;
    pCVar2 = *(CDemonActor **)&pCVar2->field_0x14c;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004832b0(&local_3cc,0);
  return;
}
