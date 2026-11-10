// Name: core_mission.cpp_CDemonMission_loadActor_FUN_004f6770
// Address: 004f6770
// Address Range: [[004f6770, 004f68ce]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_mission_cpp_CDemonMission_loadActor_FUN_004f6770(CDemonMission *this_ptr,_FILE *file,CDemonActor *current_actor,char *property_description )

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonActor * __cdecl core_mission_cpp_CDemonMission_loadActor_FUN_004f6770(CDemonMission *this_ptr,_FILE *file,CDemonActor *current_actor,char *property_description )

{
  CDemonActor *pCVar1;
  int iVar2;
  CDemonActor *unaff_ESI;
  char local_dc [200];
  CDemonActor *local_14;
  
  if (current_actor == (CDemonActor *)0x0) {
    current_actor = (CDemonActor *)"(unknown)";
  }
  if (property_description == (char *)0x0) {
    property_description = "(unknown)";
  }
  do {
    iVar2 = _fgetc(file);
  } while (((&DAT_006074b8)[(byte)((char)iVar2 + 1)] & 2) != 0);
  if (iVar2 == 0x22) {
    iVar2 = _fgetc(file);
    if (iVar2 != 0x22) {
      _ungetc(iVar2,file);
      iVar2 = _fscanf(file,"%[^\"]",local_dc);
      if (iVar2 == 1) {
        iVar2 = _stricmp(local_dc,"(none)");
        if (iVar2 == 0) {
          unaff_ESI = (CDemonActor *)0x0;
        }
        else {
          unaff_ESI = core_mission_cpp_CDemonMission_findActorByName_FUN_004f6e90(this_ptr,local_dc)
          ;
          if (unaff_ESI == (CDemonActor *)0x0) {
            shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
                      (g_CEditorToolsPtr,"WARNING.  Can't find actor '%s' in %s property %s.  (Please note this in a bug report...)");
          }
        }
        iVar2 = _fgetc(file);
        pCVar1 = unaff_ESI;
        if (iVar2 == 0x22) goto LAB_004f67f8;
      }
    }
  }
  else {
    _ungetc(iVar2,file);
    iVar2 = _fscanf(file,&DAT_005c8999,&local_14);
    pCVar1 = local_14;
    if (iVar2 == 1) goto LAB_004f67f8;
  }
  do {
    _DAT_01d71de0 = "..\\core\\mission.cpp";
    _DAT_01d71de4 = 0x234;
    core_main_c_FUN_004e4330("Error reading actor pointer.\nOwner: %s\nDescription: %s\n",current_actor,property_description)
    ;
    pCVar1 = unaff_ESI;
LAB_004f67f8:
    while (unaff_ESI = pCVar1, iVar2 = _fgetc(file), iVar2 != -1) {
      pCVar1 = unaff_ESI;
      if (iVar2 == 10) {
        return unaff_ESI;
      }
    }
  } while( true );
}
