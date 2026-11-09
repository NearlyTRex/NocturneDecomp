// Name: engine_pod.cpp_findFileInPod_FUN_0051bfa0
// Address: 0051bfa0
// Address Range: [[0051bfa0, 0051bfc1]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_findFileInPod_FUN_0051bfa0(SFoundFileInfo *info)

#include "nocturne.h"

int __cdecl engine_pod_cpp_findFileInPod_FUN_0051bfa0(SFoundFileInfo *info)

{
  int iVar1;
  
  if (g_CDemonPodPtr == (CDemonPod *)0x0) {
    return 0;
  }
  iVar1 = (**(code **)(*(int *)&g_CDemonPodPtr->field_0x194 + 8))(g_CDemonPodPtr,info);
  return iVar1;
}
