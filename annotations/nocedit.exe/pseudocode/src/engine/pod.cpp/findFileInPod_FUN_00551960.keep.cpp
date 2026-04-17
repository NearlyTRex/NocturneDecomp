// Name: engine_pod.cpp_findFileInPod_FUN_00551960
// Address: 00551960
// MANUAL RECONSTRUCTION
// Address Range: [[00551960, 00551981]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_findFileInPod_FUN_00551960(SFoundFileInfo *info)

#include "nocturne.h"
#include "debug_log.h"

int __cdecl engine_pod_cpp_findFileInPod_FUN_00551960(SFoundFileInfo *info)

{
  int iVar1;

  if (g_CDemonPodPtr == (CDemonPod *)0x0) {
    return 0;
  }
  DLOG("findFileInPod: '%s' (pod_file_count=%d)", info->found_path, g_CDemonPodPtr->pod_file_count);
  iVar1 = (*g_CDemonPodPtr->vtable->findFile)((CPod *)g_CDemonPodPtr,info);
  DLOG("findFileInPod: result=%d", iVar1);
  return iVar1;
}
