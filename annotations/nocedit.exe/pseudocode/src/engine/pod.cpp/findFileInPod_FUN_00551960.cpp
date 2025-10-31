// Name: engine_pod.cpp_findFileInPod_FUN_00551960
// Address: 00551960
// Address Range: [[00551960, 00551981]]
// Convention: __cdecl
// Signature: int engine_pod.cpp_findFileInPod_FUN_00551960(SFoundFileInfo * info)
// Cross-references:
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 00507b60 [DATA]
// Globals:
//   CDemonPod* g_CDemonPodPtr = 030e5090
//   CDemonPod g_CDemonPodInstance
//   undefined4 DAT_030e5224

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


// Assembly code:
// 00551960: MOV EDX,dword ptr [0x00680cdc]
//   Label: engine_pod.cpp_findFileInPod_FUN_00551960
//   XREF to: 00680cdc (READ)
// 00551966: TEST EDX,EDX
// 00551968: JNZ 0x0055196d
//   XREF to: 0055196d (CONDITIONAL_JUMP)
// 0055196a: XOR EAX,EAX
// 0055196c: RET
// 0055196d: MOV ECX,dword ptr [ESP + 0x4]
//   Label: LAB_0055196d
//   XREF to: Stack[0x4] (READ)
// 00551971: PUSH ECX
// 00551972: MOV EAX,EDX
// 00551974: MOV EDX,dword ptr [EDX + 0x194]
//   XREF to: 030e5224 (READ)
// 0055197a: PUSH EAX
//   XREF to: 030e5090 (DATA)
// 0055197b: CALL dword ptr [EDX + 0x8]
// 0055197e: ADD ESP,0x8
// 00551981: RET
