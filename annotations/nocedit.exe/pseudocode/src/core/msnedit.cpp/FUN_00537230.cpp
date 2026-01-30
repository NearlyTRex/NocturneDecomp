// Name: core_msnedit.cpp_FUN_00537230
// Address: 00537230
// Address Range: [[00537230, 00537321]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_FUN_00537230(void)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_FUN_00537230(void)

{
  CPodFile *pCVar1;
  CFileFinder local_124;
  
  engine_dosio_c_CFileFinder_ctor_FUN_00481c30(&local_124);
  engine_dosio_c_CFileFinder_openSearch_FUN_00481c70(&local_124,"world\\*.msn");
  while (local_124.filename[0] != '\0') {
    pCVar1 = engine_pod_cpp_CPod_locateFile_FUN_005512f0
                       ((CPod *)g_CDemonPodPtr,"world",local_124.filename,(int *)0x0);
    if (pCVar1 == (CPodFile *)0x0) {
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Loading %s...");
      core_mission_cpp_CDemonMission_load_FUN_00522d90(g_CDemonMissionPtr,local_124.filename,0);
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Saving %s...");
      core_mission_cpp_CDemonMission_save_FUN_00522e30(g_CDemonMissionPtr);
    }
    else {
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                (g_CEditorToolsPtr,"Not converting local file %s - it is also in a pod",&local_124);
    }
    engine_dosio_c_CFileFinder_findNext_FUN_00481cf0(&local_124);
  }
  engine_dosio_c_CFileFinder_dtor_FUN_00481c50(&local_124,0);
  return;
}
