// Name: engine_fileio.cpp_remountAllPods_FUN_004b5350
// Address: 004b5350
// Address Range: [[004b5350, 004b5391]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_remountAllPods_FUN_004b5350(void)
// Globals:
//   TerminatedCString s_Remounting_all_pods_0062759a
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CDemonPod* g_CDemonPodPtr = 030e5090
//   CEditorTools g_CEditorToolsPtr
//   CDemonPod g_CDemonPodInstance
// Function calls:
//   engine_pod.cpp_CPod_cleanup_FUN_00550c80
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790

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


// Assembly code:
// 004b5350: CMP dword ptr [0x00680cdc],0x0
//   Label: engine_fileio.cpp_remountAllPods_FUN_004b5350
//   XREF to: 00680cdc (READ)
// 004b5357: JNZ 0x004b535a
//   XREF to: 004b535a (CONDITIONAL_JUMP)
// 004b5359: RET
// 004b535a: PUSH EBX
//   Label: LAB_004b535a
// 004b535b: PUSH 0x62759a
//   XREF to: 0062759a (DATA)
// 004b5360: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b5366: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004b5367: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004b536c: ADD ESP,0x8
// 004b536f: MOV EBX,dword ptr [0x00680cdc]
//   XREF to: 00680cdc (READ)
// 004b5375: PUSH EBX
//   XREF to: 030e5090 (DATA)
// 004b5376: CALL engine_pod.cpp_CPod_cleanup_FUN_00550c80
//   XREF to: 00550c80 (UNCONDITIONAL_CALL)
// 004b537b: ADD ESP,0x4
// 004b537e: MOV EAX,[0x00680cdc]
//   XREF to: 00680cdc (READ)
// 004b5383: PUSH EAX
//   XREF to: 030e5090 (DATA)
// 004b5384: MOV EDX,dword ptr [EAX + 0x194]
//   XREF to: 030e5224 (READ)
// 004b538a: CALL dword ptr [EDX + 0x4]
// 004b538d: ADD ESP,0x4
// 004b5390: POP EBX
// 004b5391: RET
