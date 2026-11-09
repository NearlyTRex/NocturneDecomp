// Name: engine_pod.cpp_findFileInPod_FUN_004f9250
// Address: 004f9250
// Address Range: [[004f9250, 004f9271]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_findFileInPod_FUN_004f9250(SFoundFileInfo *info)

#include "nocturne.h"

int __cdecl engine_pod_cpp_findFileInPod_FUN_004f9250(SFoundFileInfo *info)

{
  int iVar1;
  
  if (g_CDemonPodPtr == (CDemonPod *)0x0) {
    return 0;
  }
  iVar1 = (*((g_CDemonPodPtr->base).vtable)->findFile)(&g_CDemonPodPtr->base,info);
  return iVar1;
}
