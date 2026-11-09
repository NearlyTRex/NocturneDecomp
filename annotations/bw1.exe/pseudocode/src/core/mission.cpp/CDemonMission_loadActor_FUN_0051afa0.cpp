// Name: core_mission.cpp_CDemonMission_loadActor_FUN_0051afa0
// Address: 0051afa0
// Address Range: [[0051afa0, 0051b0fe]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_mission_cpp_CDemonMission_loadActor_FUN_0051afa0(CDemonMission *this_ptr,_FILE *file,CDemonActor *current_actor,char *property_description )

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonActor * __cdecl core_mission_cpp_CDemonMission_loadActor_FUN_0051afa0(CDemonMission *this_ptr,_FILE *file,CDemonActor *current_actor,char *property_description )

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
  } while (((&DAT_00626114)[(byte)((char)iVar2 + 1)] & 2) != 0);
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
          unaff_ESI = core_mission_cpp_FUN_0051b6c0(this_ptr,local_dc);
          if (unaff_ESI == (CDemonActor *)0x0) {
            shape_edittool_cpp_FUN_004943a0
                      (g_CEditorToolsPtr,"WARNING.  Can't find actor '%s' in %s property %s.  (Please note this in a bug report...)",local_dc,current_actor,
                       property_description);
          }
        }
        iVar2 = _fgetc(file);
        pCVar1 = unaff_ESI;
        if (iVar2 == 0x22) goto LAB_0051b028;
      }
    }
  }
  else {
    _ungetc(iVar2,file);
    iVar2 = _fscanf(file,&DAT_005e9697,&local_14);
    pCVar1 = local_14;
    if (iVar2 == 1) goto LAB_0051b028;
  }
  do {
    _DAT_01d1d400 = "..\\core\\mission.cpp";
    _DAT_01d1d404 = 0x234;
    core_main_c_FUN_005030e0("Error reading actor pointer.\nOwner: %s\nDescription: %s\n",current_actor,property_description)
    ;
    pCVar1 = unaff_ESI;
LAB_0051b028:
    while (unaff_ESI = pCVar1, iVar2 = _fgetc(file), iVar2 != -1) {
      pCVar1 = unaff_ESI;
      if (iVar2 == 10) {
        return unaff_ESI;
      }
    }
  } while( true );
}
