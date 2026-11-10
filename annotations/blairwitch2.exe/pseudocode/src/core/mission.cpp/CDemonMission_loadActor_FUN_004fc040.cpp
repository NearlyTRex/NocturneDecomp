// Name: core_mission.cpp_CDemonMission_loadActor_FUN_004fc040
// Address: 004fc040
// Address Range: [[004fc040, 004fc19e]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_mission_cpp_CDemonMission_loadActor_FUN_004fc040(CDemonMission *this_ptr,_FILE *file,CDemonActor *current_actor,char *property_description )

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonActor * __cdecl core_mission_cpp_CDemonMission_loadActor_FUN_004fc040(CDemonMission *this_ptr,_FILE *file,CDemonActor *current_actor,char *property_description )

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
  } while (((&DAT_0061ed94)[(byte)((char)iVar2 + 1)] & 2) != 0);
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
          unaff_ESI = core_mission_cpp_CDemonMission_findActorByName_FUN_004fc740(this_ptr,local_dc)
          ;
          if (unaff_ESI == (CDemonActor *)0x0) {
            shape_edittool_cpp_CEditorTools_showError_FUN_0047be40
                      (g_CEditorToolsPtr,"WARNING.  Can't find actor '%s' in %s property %s.  (Please note this in a bug report...)");
          }
        }
        iVar2 = _fgetc(file);
        pCVar1 = unaff_ESI;
        if (iVar2 == 0x22) goto LAB_004fc0c8;
      }
    }
  }
  else {
    _ungetc(iVar2,file);
    iVar2 = _fscanf(file,&DAT_005de654,&local_14);
    pCVar1 = local_14;
    if (iVar2 == 1) goto LAB_004fc0c8;
  }
  do {
    _DAT_01d046a0 = "..\\core\\mission.cpp";
    _DAT_01d046a4 = 0x231;
    core_main_c_FUN_004e4500("Error reading actor pointer.\nOwner: %s\nDescription: %s\n",current_actor,property_description)
    ;
    pCVar1 = unaff_ESI;
LAB_004fc0c8:
    while (unaff_ESI = pCVar1, iVar2 = _fgetc(file), iVar2 != -1) {
      pCVar1 = unaff_ESI;
      if (iVar2 == 10) {
        return unaff_ESI;
      }
    }
  } while( true );
}
