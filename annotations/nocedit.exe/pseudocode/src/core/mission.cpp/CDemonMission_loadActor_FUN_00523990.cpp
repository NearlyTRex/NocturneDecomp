// Name: core_mission.cpp_CDemonMission_loadActor_FUN_00523990
// Address: 00523990
// Address Range: [[00523990, 00523aee]]
// Convention: __cdecl
// Signature: CDemonActor * core_mission.cpp_CDemonMission_loadActor_FUN_00523990(CDemonMission * this_ptr, FILE * file, CDemonActor * current_actor, char * property_description)

#include "nocturne.h"

CDemonActor * __cdecl
core_mission_cpp_CDemonMission_loadActor_FUN_00523990
          (CDemonMission *this_ptr,FILE *file,CDemonActor *current_actor,char *property_description)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  CDemonActor *unaff_ESI;
  
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
  } while ((g_CharacterClassificationTable[(byte)((char)iVar1 + 1)] & 2U) != 0);
  if (iVar1 == 0x22) {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 != 0x22) {
      crt_stdio_c_fputc_FUN_005fea10(iVar1,file);
      iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(file,"%[^\"]",&stack0xffffff1c);
      if (iVar1 == 1) {
        iVar1 = crt_string_c_stricmp_FUN_005fe7f0(&stack0xffffff20,"(none)");
        if (iVar1 == 0) {
          unaff_ESI = (CDemonActor *)0x0;
        }
        else {
          unaff_ESI = (CDemonActor *)core_mission_cpp_CDemonMission_FUN_00524030(this_ptr);
          if (unaff_ESI == (CDemonActor *)0x0) {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"WARNING.  Can't find actor '%s' in %s property %s.  (Please note this in a bug report...)");
          }
        }
        iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
        if (iVar1 == 0x22) goto LAB_00523a18;
      }
    }
  }
  else {
    crt_stdio_c_fputc_FUN_005fea10(iVar1,file);
    iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(file,"%x");
    if (iVar1 == 1) goto LAB_00523a18;
  }
  do {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 0x22d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Error reading actor pointer.\nOwner: %s\nDescription: %s\n");
LAB_00523a18:
    while (iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file), iVar1 != -1) {
      if (iVar1 == 10) {
        return unaff_ESI;
      }
    }
  } while( true );
}
