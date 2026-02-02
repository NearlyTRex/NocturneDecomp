// Name: core_msnedit.cpp_CDemonMission_FUN_0053ec80
// Address: 0053ec80
// Address Range: [[0053ec80, 0053edfe]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053ec80(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053ec80(CDemonMission *this_ptr)

{
  CDemonActor *this_ptr_00;
  int *piVar1;
  int iVar2;
  CDemonActor *in_stack_ffffd550;
  char *in_stack_ffffd554;
  EActorPropertyType in_stack_ffffd558;
  uint in_stack_ffffd55c;
  uint in_stack_ffffd560;
  byte local_5ac [944];
  char acStack_1fc [300];
  char acStack_d0 [192];
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)local_5ac);
  if (*(int *)(this_ptr->unk4 + 0x338) == 0) {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Setting up actors...");
    core_mission_cpp_CDemonMission_FUN_00523cf0(this_ptr);
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Finding sound files in mission...");
  for (this_ptr_00 = this_ptr->first_actor; this_ptr_00 != (CDemonActor *)0x0;
      this_ptr_00 = this_ptr_00->next_actor) {
    core_actor_cpp_FUN_0040e130();
    (*((this_ptr_00->vtable)._ub)->getPropertyList)
              (this_ptr_00,(CActorPropertyList *)&stack0xffffd550);
    iVar2 = 0;
    if (0 < (int)in_stack_ffffd55c) {
      piVar1 = (int *)&stack0xffffd560;
      do {
        if (*piVar1 == 8) {
          in_stack_ffffd554 = acStack_d0;
          in_stack_ffffd550 = this_ptr_00;
          core_actor_cpp_CActorProperty_FUN_0040ea50();
          if (acStack_d0[0] != '\0') {
            sprintf(acStack_1fc,"%s\t%s %s",acStack_d0);
            in_stack_ffffd554 = acStack_1fc;
            in_stack_ffffd550 = (CDemonActor *)(local_5ac + 8);
            shape_edittool_cpp_CStrList_add_FUN_004a2b80
                      ((CStrList *)in_stack_ffffd550,in_stack_ffffd554);
          }
        }
        iVar2 = iVar2 + 1;
        piVar1 = piVar1 + 0x3b;
      } while (iVar2 < (int)in_stack_ffffd55c);
    }
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Finding sound files in script...");
  core_script_cpp_CScript_FUN_00567bc0(g_CScriptPtr,(CStrList *)local_5ac);
  shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)local_5ac);
  shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
            ((CPickList *)local_5ac,"Sound files used",-1,0);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)local_5ac,0,(uint)in_stack_ffffd550,(uint)in_stack_ffffd554,
             in_stack_ffffd558,in_stack_ffffd55c,in_stack_ffffd560);
  return;
}
