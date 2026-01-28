// Name: engine_pod.cpp_findFileInPod_FUN_00551960
// Address: 00551960
// Address Range: [[00551960, 00551981]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_findFileInPod_FUN_00551960(SFoundFileInfo *info)

#include "nocturne.h"

int __cdecl engine_pod_cpp_findFileInPod_FUN_00551960(SFoundFileInfo *info)

{
  int iVar1;
  
  if (g_CDemonPodPtr == (CDemonPod *)0x0) {
    return 0;
  }
  iVar1 = (*g_CDemonPodPtr->vtable->findFile)((CPod *)g_CDemonPodPtr,info);
  return iVar1;
}
