// Name: core_msnedit.cpp_FUN_00537230
// Address: 00537230
// Address Range: [[00537230, 00537321]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_00537230()

#include "nocturne.h"

void core_msnedit_cpp_FUN_00537230(void)

{
  CPodFile *pCVar1;
  BADSPACEBASE *in_ESP;
  byte *puStack_11c;
  byte auStack_118 [264];
  
  engine_dosio_c_CFileFinder_ctor_FUN_00481c30((CFileFinder *)&stack0xfffffedc);
  engine_dosio_c_CFileFinder_openSearch_FUN_00481c70
            ((CFileFinder *)&stack0xfffffee0,"world\\*.msn");
  while ((char)puStack_11c != '\0') {
    pCVar1 = engine_pod_cpp_CPod_locateFile_FUN_005512f0
                       ((CPod *)g_CDemonPodPtr,"world",(char *)&puStack_11c,(int *)0x0);
    if (pCVar1 == (CPodFile *)0x0) {
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Loading %s...");
      core_mission_cpp_CDemonMission_load_FUN_00522d90(g_CDemonMissionPtr,&stack0xfffffee0,0);
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Saving %s...");
      puStack_11c = auStack_118;
      core_mission_cpp_CDemonMission_save_FUN_00522e30(g_CDemonMissionPtr);
    }
    else {
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                (g_CEditorToolsPtr,"Not converting local file %s - it is also in a pod",&stack0xfffffedc);
    }
    engine_dosio_c_CFileFinder_findNext_FUN_00481cf0((CFileFinder *)&stack0xfffffee0);
  }
  engine_dosio_c_CFileFinder_dtor_FUN_00481c50((CFileFinder *)&puStack_11c,0);
  return;
}
