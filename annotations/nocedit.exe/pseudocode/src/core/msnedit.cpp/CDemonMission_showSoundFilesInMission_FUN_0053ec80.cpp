// Name: core_msnedit.cpp_CDemonMission_showSoundFilesInMission_FUN_0053ec80
// Address: 0053ec80
// Address Range: [[0053ec80, 0053edfe]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_showSoundFilesInMission_FUN_0053ec80(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_showSoundFilesInMission_FUN_0053ec80(CDemonMission *this_ptr)

{
  CActorProperty *this_ptr_01;
  int iVar1;
  CActorPropertyList CStack_2ab0;
  CPickList local_5ac;
  char acStack_204 [300];
  char acStack_d8 [200];
  CDemonActor *this_ptr_00;
  
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
    core_actor_cpp_CActorPropertyList_init_FUN_0040e130(&CStack_2ab0);
    (*((this_ptr_00->vtable)._ub)->getPropertyList)(this_ptr_00,&CStack_2ab0);
    iVar1 = 0;
    if (0 < CStack_2ab0.count) {
      this_ptr_01 = CStack_2ab0.properties;
      do {
        if ((this_ptr_01->type == PROP_SOUND) &&
           (core_actor_cpp_CActorProperty_renderValue_FUN_0040ea50
                      (this_ptr_01,this_ptr_00,acStack_d8), acStack_d8[0] != '\0')) {
          _sprintf
                    (acStack_204,"%s\t%s %s",acStack_d8,this_ptr_00,this_ptr_01->name);
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_5ac.base,acStack_204);
        }
        iVar1 = iVar1 + 1;
        this_ptr_01 = this_ptr_01 + 1;
      } while (iVar1 < CStack_2ab0.count);
    }
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Finding sound files in script...");
  core_script_cpp_CScript_collectSoundReferences_FUN_00567bc0(g_CScriptPtr,&local_5ac.base);
  shape_edittool_cpp_CStrList_sort_FUN_004a2ec0(&local_5ac.base);
  shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
            (&local_5ac,"Sound files used",-1,0);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_5ac,0);
  return;
}
