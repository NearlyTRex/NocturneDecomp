// Name: core_msnedit.cpp_CDemonMission_FUN_0053ec80
// Address: 0053ec80
// Address Range: [[0053ec80, 0053edfe]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053ec80(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053ec80(CDemonMission *this_ptr)

{
  CDemonActor *this_ptr_00;
  CActorProperty *this_ptr_01;
  int iVar1;
  int iStack_2aa4;
  CActorProperty aCStack_2aa0 [40];
  CPickList local_5ac;
  char acStack_1fc [300];
  char acStack_d0 [192];
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_5ac);
  if (this_ptr->actors_prepared == 0) {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Setting up actors...");
    core_mission_cpp_CDemonMission_prepareAllActors_FUN_00523cf0(this_ptr);
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Finding sound files in mission...");
  for (this_ptr_00 = this_ptr->first_actor; this_ptr_00 != (CDemonActor *)0x0;
      this_ptr_00 = this_ptr_00->next_actor) {
    core_actor_cpp_CActorPropertyList_init_FUN_0040e130((CActorPropertyList *)&stack0xffffd550);
    (*((this_ptr_00->vtable)._ub)->getPropertyList)
              (this_ptr_00,(CActorPropertyList *)&stack0xffffd550);
    iVar1 = 0;
    if (0 < iStack_2aa4) {
      this_ptr_01 = aCStack_2aa0;
      do {
        if ((this_ptr_01->type == PROP_SOUND) &&
           (core_actor_cpp_CActorProperty_renderValue_FUN_0040ea50
                      (this_ptr_01,this_ptr_00,acStack_d0), acStack_d0[0] != '\0')) {
          _sprintf(acStack_1fc,"%s\t%s %s",acStack_d0);
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    ((CStrList *)&local_5ac.base.data_array,acStack_1fc);
        }
        iVar1 = iVar1 + 1;
        this_ptr_01 = this_ptr_01 + 1;
      } while (iVar1 < iStack_2aa4);
    }
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Finding sound files in script...");
  core_script_cpp_CScript_FUN_00567bc0(g_CScriptPtr,&local_5ac.base);
  shape_edittool_cpp_CStrList_sort_FUN_004a2ec0(&local_5ac.base);
  shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
            (&local_5ac,"Sound files used",-1,0);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_5ac,0);
  return;
}
