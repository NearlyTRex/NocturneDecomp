// Name: engine_pod.cpp_findFileInPod_FUN_0053d520
// Address: 0053d520
// Address Range: [[0053d520, 0053d541]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_findFileInPod_FUN_0053d520(SFoundFileInfo *info)

#include "nocturne.h"

int __cdecl engine_pod_cpp_findFileInPod_FUN_0053d520(SFoundFileInfo *info)

{
  int iVar1;
  
  if (g_CDemonPodPtr == (CDemonPod *)0x0) {
    return 0;
  }
  iVar1 = (**(code **)(*(int *)&g_CDemonPodPtr->field_0x194 + 8))(g_CDemonPodPtr,info);
  return iVar1;
}
