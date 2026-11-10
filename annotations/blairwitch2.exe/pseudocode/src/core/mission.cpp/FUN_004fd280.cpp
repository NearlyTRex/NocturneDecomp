// Name: core_mission.cpp_FUN_004fd280
// Address: 004fd280
// Address Range: [[004fd280, 004fd44d]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_FUN_004fd280(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_FUN_004fd280(CDemonMission *this_ptr)

{
  int iVar1;
  char *name;
  CDemonActor *pCVar2;
  CHeroPlaceholder *this_ptr_00;
  CHeroPlaceholder *actor;
  UOrientationVector *pUVar3;
  CPickList local_3cc;
  
  shape_edittool_cpp_CPickList_ctor_FUN_00481fc0(&local_3cc);
  pCVar2 = *(CDemonActor **)(this_ptr + 0x1114);
  while( true ) {
    if (pCVar2 == (CDemonActor *)0x0) {
      if (local_3cc.base.item_count < 1) {
        shape_edittool_cpp_CEditorTools_showMessage_FUN_0047bda0
                  (g_CEditorToolsPtr,"Warning: mission has no hero placeholders, and no heros.");
      }
      else {
        iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00482250
                          (&local_3cc,"Mission has no hero placeholders.\n\nSelect a hero to convert into a hero placeholder, or\npress ESC to leave mission as is.\n\n(You will not be able to play the mission without a hero placeholder.)",-1,0);
        if (-1 < iVar1) {
          name = shape_edittool_cpp_CStrList_getStringAt_FUN_00481240(&local_3cc.base,iVar1);
          pCVar2 = core_mission_cpp_CDemonMission_findActorByName_FUN_004fc740(this_ptr,name);
          if (pCVar2 == (CDemonActor *)0x0) {
            _DAT_01d046a0 = "..\\core\\mission.cpp";
            _DAT_01d046a4 = 0x6d4;
            core_main_c_FUN_004e4500("Hell froze finding hero.");
          }
          this_ptr_00 = (CHeroPlaceholder *)debugAllocTracked1(0x2d8);
          actor = (CHeroPlaceholder *)0x0;
          if (this_ptr_00 != (CHeroPlaceholder *)0x0) {
            actor = core_hero_cpp_CHeroPlaceholder_ctor_FUN_004d0940(this_ptr_00);
          }
          *(uint *)&actor->field_0x2b4 = 0;
          *(uint *)&(actor->base).field_0x20 = *(uint *)&pCVar2->field_0x20;
          *(uint *)&(actor->base).field_0x24 = *(uint *)&pCVar2->field_0x24;
          *(uint *)&(actor->base).field_0x28 = *(uint *)&pCVar2->field_0x28;
          pUVar3 = &(actor->base).orient;
          *(uint *)&(actor->base).field_0x2c = *(uint *)&pCVar2->field_0x2c;
          if (pUVar3 != &pCVar2->orient) {
            (pUVar3->vec).x = (pCVar2->orient).vec.x;
            (actor->base).orient.vec.y = (pCVar2->orient).vec.y;
            (actor->base).orient.vec.z = (pCVar2->orient).vec.z;
          }
          core_mission_cpp_CDemonMission_generateActorName_FUN_004fcda0(this_ptr,&actor->base);
          core_mission_cpp_CDemonMission_removeActor_FUN_004fc570(this_ptr,pCVar2,1);
          core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200(this_ptr,&actor->base);
          shape_edittool_cpp_CEditorTools_showMessage_FUN_0047bda0
                    (g_CEditorToolsPtr,"Replaced hero OK.  You will need to save the mission for changes to be perminent.");
          shape_edittool_cpp_CPickList_dtor_FUN_004820b0(&local_3cc,0);
          return;
        }
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004820b0(&local_3cc,0);
      return;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c840(pCVar2,"CHero");
    if (iVar1 != 0) {
      shape_edittool_cpp_CStrList_add_FUN_00480e70(&local_3cc.base,pCVar2->actor_name);
    }
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar2,_DAT_01cedf8c);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x2b4) == 0)) break;
    pCVar2 = *(CDemonActor **)&pCVar2->field_0x14c;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004820b0(&local_3cc,0);
  return;
}
