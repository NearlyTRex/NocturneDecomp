// Name: core_mission.cpp_FUN_00524c20
// Address: 00524c20
// Address Range: [[00524c20, 00524df7]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_FUN_00524c20(void)

#include "nocturne.h"

void __cdecl core_mission_cpp_FUN_00524c20(void)

{
  CDemonActor *actor_ptr;
  int iVar1;
  CDemonActor *pCVar2;
  char *pcVar3;
  CHeroPlaceholder *this_ptr;
  CHeroPlaceholder *pCVar4;
  COrientation *pCVar5;
  uint unaff_ESI;
  CDemonMission *in_stack_00000004;
  uint in_stack_fffffc4c;
  uint in_stack_fffffc50;
  char **in_stack_fffffc54;
  CStrList_vtable *in_stack_fffffc58;
  uint in_stack_fffffc5c;
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffc4c);
  actor_ptr = in_stack_00000004->first_actor;
  while( true ) {
    if (actor_ptr == (CDemonActor *)0x0) {
      if ((int)in_stack_fffffc4c < 1) {
        shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                  (g_CEditorToolsPtr,"Warning: mission has no hero placeholders, and no heros.");
      }
      else {
        iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          ((CPickList *)&stack0xfffffc4c,"Mission has no hero placeholders.\n\nSelect a hero to convert into a hero placeholder, or\npress ESC to leave mission as is.\n\n(You will not be able to play the mission without a hero placeholder.)",-1,0);
        if (-1 < iVar1) {
          shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0xfffffc4c,iVar1);
          pcVar3 = core_mission_cpp_CDemonMission_FUN_00524030(in_stack_00000004);
          if (pcVar3 == (char *)0x0) {
            g_CurrentFilename = "..\\core\\mission.cpp";
            g_CurrentLineNumber = 0x685;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze finding hero.");
          }
          this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0
                               (0x15c,"..\\core\\mission.cpp",0x689);
          pCVar4 = (CHeroPlaceholder *)0x0;
          if (this_ptr != (CHeroPlaceholder *)0x0) {
            pCVar4 = core_hero_cpp_CHeroPlaceholder_ctor_FUN_004f3c00(this_ptr);
          }
          pCVar4->index = 0;
          (pCVar4->base).location.position.x = *(float *)(pcVar3 + 0x20);
          (pCVar4->base).location.position.y = *(float *)(pcVar3 + 0x24);
          (pCVar4->base).location.position.z = *(float *)(pcVar3 + 0x28);
          pCVar5 = &(pCVar4->base).orient;
          (pCVar4->base).location.area_id = *(int *)(pcVar3 + 0x2c);
          if (pCVar5 != (COrientation *)(pcVar3 + 0x30)) {
            pCVar5->pitch = *(float *)(pcVar3 + 0x30);
            (pCVar4->base).orient.bank = *(float *)(pcVar3 + 0x34);
            (pCVar4->base).orient.heading = *(float *)(pcVar3 + 0x38);
          }
          core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(in_stack_00000004);
          core_mission_cpp_CDemonMission_FUN_00523f20(in_stack_00000004);
          core_mission_cpp_CDemonMission_FUN_00523b70(in_stack_00000004);
          shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                    (g_CEditorToolsPtr,"Replaced hero OK.  You will need to save the mission for changes to be perminent.");
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    ((CPickList *)&stack0xfffffc4c,0,unaff_ESI,in_stack_fffffc4c,in_stack_fffffc50,
                     (uint)in_stack_fffffc54,(uint)in_stack_fffffc58);
          return;
        }
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffffc4c,0,in_stack_fffffc4c,in_stack_fffffc50,
                 (uint)in_stack_fffffc54,(uint)in_stack_fffffc58,in_stack_fffffc5c);
      return;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CHero");
    if (iVar1 != 0) {
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffffc4c,actor_ptr->actor_name);
    }
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (actor_ptr,g_CHeroPlaceholderClassInfo.name_hash);
    if ((pCVar2 != (CDemonActor *)0x0) && (*(int *)pCVar2[1].actor_name == 0)) break;
    actor_ptr = actor_ptr->next_actor;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffc4c,0,in_stack_fffffc4c,in_stack_fffffc50,
             (uint)in_stack_fffffc54,(uint)in_stack_fffffc58,in_stack_fffffc5c);
  return;
}
