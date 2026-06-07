// Name: core_msnedit.cpp_CDemonMission_validateNewActorName_FUN_0053d220
// Address: 0053d220
// MANUAL RECONSTRUCTION
// Address Range: [[0053d220, 0053d398]]
// Convention: __cdecl
// Signature: int __cdecl core_msnedit_cpp_CDemonMission_validateNewActorName_FUN_0053d220(CDemonMission *this_ptr,char *orig_name,char *new_name)

#include "nocturne.h"

int __cdecl core_msnedit_cpp_CDemonMission_validateNewActorName_FUN_0053d220(CDemonMission *this_ptr,char *orig_name,char *new_name)

{
  int iVar1;
  CDemonActor *pCVar2;
  char *pcVar3;

  pcVar3 = strchr(new_name,' ');
  if (pcVar3 == (char *)0x0) {
    pcVar3 = strchr(new_name,'\t');
    if (pcVar3 == (char *)0x0) {
      pcVar3 = strchr(new_name,'\r');
      if (pcVar3 == (char *)0x0) {
        pcVar3 = strchr(new_name,'\n');
        if (pcVar3 == (char *)0x0) {
          pcVar3 = strchr(new_name,'\"');
          if (pcVar3 == (char *)0x0) {
            pcVar3 = strchr(new_name,'\'');
            if (pcVar3 == (char *)0x0) {
              pcVar3 = strchr(new_name,'{');
              if (pcVar3 == (char *)0x0) {
                pcVar3 = strchr(new_name,'}');
                if (pcVar3 == (char *)0x0) {
                  iVar1 = _stricmp(orig_name,new_name);
                  if ((iVar1 != 0) &&
                     (pCVar2 = core_mission_cpp_CDemonMission_findActorByName_FUN_00524030
                                         (this_ptr,new_name), pCVar2 != (CDemonActor *)0x0)) {
                    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                              (g_CEditorToolsPtr,"Already an actor named %s in this mission!",new_name);
                    return 0;
                  }
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Actor name contains invalid characters.");
  return 0;
}
