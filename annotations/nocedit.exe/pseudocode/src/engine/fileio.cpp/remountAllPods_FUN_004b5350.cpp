// Name: engine_fileio.cpp_remountAllPods_FUN_004b5350
// Address: 004b5350
// Address Range: [[004b5350, 004b5391]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_remountAllPods_FUN_004b5350(void)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_remountAllPods_FUN_004b5350(void)

{
  if (g_CDemonPodPtr == (CDemonPod *)0x0) {
    return;
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Remounting all pods...");
  engine_pod_cpp_CPod_cleanup_FUN_00550c80((CPod *)g_CDemonPodPtr);
  (*g_CDemonPodPtr->vtable->load)((CPod *)g_CDemonPodPtr);
  return;
}
