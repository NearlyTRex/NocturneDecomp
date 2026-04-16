// Name: core_mission.cpp_CDemonMission_loadActor_FUN_00523990
// Address: 00523990
// Address Range: [[00523990, 00523aee]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_mission_cpp_CDemonMission_loadActor_FUN_00523990(CDemonMission *this_ptr,_FILE *file,CDemonActor *current_actor,char *property_description )

#include "nocturne.h"

CDemonActor * __cdecl core_mission_cpp_CDemonMission_loadActor_FUN_00523990(CDemonMission *this_ptr,_FILE *file,CDemonActor *current_actor,char *property_description )

{
  int iVar2;
  int iVar1;
  CDemonActor *local_e1;
  char local_dc [200];
  CDemonActor *local_14;
  CDemonActor *pCVar1;
  
  if (current_actor == (CDemonActor *)0x0) {
    current_actor = (CDemonActor *)"(unknown)";
  }
  if (property_description == (char *)0x0) {
    property_description = "(unknown)";
  }
  do {
    iVar2 = _fgetc(file);
  } while ((g_CharacterClassificationTable[(byte)((char)iVar2 + 1)] & 2) != 0);
  if (iVar2 == 0x22) {
    iVar1 = _fgetc(file);
    if (iVar1 != 0x22) {
      _fputc(iVar1,file);
      iVar1 = _fscanf(file,"%[^\"]",local_dc);
      if (iVar1 == 1) {
        iVar1 = _stricmp(local_dc,g_DefaultMissionIdentifier);
        if (iVar1 == 0) {
          local_e1 = (CDemonActor *)0x0;
        }
        else {
          local_e1 = core_mission_cpp_CDemonMission_findActorByName_FUN_00524030(this_ptr,local_dc);
          if (local_e1 == (CDemonActor *)0x0) {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"WARNING.  Can't find actor '%s' in %s property %s.  (Please note this in a bug report...)",local_dc,current_actor,
                       property_description);
          }
        }
        iVar1 = _fgetc(file);
        pCVar1 = local_e1;
        if (iVar1 == 0x22) goto LAB_00523a18;
      }
    }
  }
  else {
    _fputc(iVar2,file);
    iVar1 = _fscanf(file,"%x",&local_14);
    pCVar1 = local_14;
    if (iVar1 == 1) goto LAB_00523a18;
  }
  do {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 0x22d;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Error reading actor pointer.\nOwner: %s\nDescription: %s\n",current_actor,property_description);
    pCVar1 = local_e1;
LAB_00523a18:
    while (local_e1 = pCVar1, iVar1 = _fgetc(file), iVar1 != -1) {
      pCVar1 = local_e1;
      if (iVar1 == 10) {
        return local_e1;
      }
    }
  } while( true );
}
