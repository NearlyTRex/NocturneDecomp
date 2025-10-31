// Name: core_msnedit.cpp_FUN_00537230
// Address: 00537230
// Address Range: [[00537230, 00537321]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_00537230()
// Globals:
//   TerminatedCString s_world_msn_0063b744
//   TerminatedCString s_world_0063b750
//   TerminatedCString s_Loading_s_0063b756
//   TerminatedCString s_Saving_s_0063b764
//   TerminatedCString s_Not_converting_local_fil_0063b771
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonPod* g_CDemonPodPtr = 030e5090
//   CEditorTools g_CEditorToolsPtr
//   CDemonMission g_CDemonMissionInstance
//   CDemonPod g_CDemonPodInstance
// Function calls:
//   core_mission.cpp_CDemonMission_load_FUN_00522d90
//   core_mission.cpp_CDemonMission_save_FUN_00522e30
//   engine_dosio.c_CFileFinder_ctor_FUN_00481c30
//   engine_dosio.c_CFileFinder_dtor_FUN_00481c50
//   engine_dosio.c_CFileFinder_findNext_FUN_00481cf0
//   engine_dosio.c_CFileFinder_openSearch_FUN_00481c70
//   engine_pod.cpp_CPod_locateFile_FUN_005512f0
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0

#include "nocturne.h"

void core_msnedit_cpp_FUN_00537230(void)

{
  CPodFile *pCVar1;
  BADSPACEBASE *in_ESP;
  undefined1 *puStack_11c;
  undefined1 auStack_118 [264];
  
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


// Assembly code:
// 00537230: PUSH EBX
//   Label: core_msnedit.cpp_FUN_00537230
// 00537231: PUSH ESI
// 00537232: PUSH EDI
// 00537233: PUSH EBP
// 00537234: SUB ESP,0x114
// 0053723a: MOV EAX,ESP
// 0053723c: PUSH EAX
// 0053723d: CALL engine_dosio.c_CFileFinder_ctor_FUN_00481c30
//   XREF to: 00481c30 (UNCONDITIONAL_CALL)
// 00537242: ADD ESP,0x4
// 00537245: PUSH 0x63b744
//   XREF to: 0063b744 (DATA)
// 0053724a: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x124] (DATA)
// 0053724e: PUSH EAX
// 0053724f: CALL engine_dosio.c_CFileFinder_openSearch_FUN_00481c70
//   XREF to: 00481c70 (UNCONDITIONAL_CALL)
// 00537254: ADD ESP,0x8
// 00537257: CMP byte ptr [ESP],0x0
//   XREF to: Stack[-0x124] (DATA)
// 0053725b: JZ 0x005372ef
//   XREF to: 005372ef (CONDITIONAL_JUMP)
// 00537261: PUSH 0x0
//   Label: LAB_00537261
// 00537263: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x124] (DATA)
// 00537267: PUSH EAX
// 00537268: PUSH 0x63b750
//   XREF to: 0063b750 (DATA)
// 0053726d: MOV EDX,dword ptr [0x00680cdc]
//   XREF to: 00680cdc (READ)
// 00537273: PUSH EDX
//   XREF to: 030e5090 (DATA)
// 00537274: CALL engine_pod.cpp_CPod_locateFile_FUN_005512f0
//   XREF to: 005512f0 (UNCONDITIONAL_CALL)
// 00537279: ADD ESP,0x10
// 0053727c: TEST EAX,EAX
// 0053727e: JNZ 0x00537309
//   XREF to: 00537309 (CONDITIONAL_JUMP)
// 00537284: MOV EAX,ESP
// 00537286: PUSH EAX
// 00537287: PUSH 0x63b756
//   XREF to: 0063b756 (DATA)
// 0053728c: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
//   XREF to: 02cf1cd4 (PARAM)
// 00537292: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 00537293: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 00537298: ADD ESP,0xc
// 0053729b: PUSH 0x0
// 0053729d: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x124] (DATA)
// 005372a1: PUSH EAX
// 005372a2: MOV ESI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 005372a8: PUSH ESI
//   XREF to: 02f33740 (DATA)
// 005372a9: CALL core_mission.cpp_CDemonMission_load_FUN_00522d90
//   XREF to: 00522d90 (UNCONDITIONAL_CALL)
// 005372ae: ADD ESP,0xc
// 005372b1: MOV EAX,ESP
// 005372b3: PUSH EAX
// 005372b4: PUSH 0x63b764
//   XREF to: 0063b764 (DATA)
// 005372b9: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005372bf: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 005372c0: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 005372c5: ADD ESP,0xc
// 005372c8: MOV EAX,ESP
// 005372ca: PUSH EAX
// 005372cb: MOV EBP,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 005372d1: PUSH EBP
//   XREF to: 02f33740 (DATA)
// 005372d2: CALL core_mission.cpp_CDemonMission_save_FUN_00522e30
//   XREF to: 00522e30 (UNCONDITIONAL_CALL)
// 005372d7: ADD ESP,0x8
// 005372da: MOV EAX,ESP
//   Label: LAB_005372da
// 005372dc: PUSH EAX
// 005372dd: CALL engine_dosio.c_CFileFinder_findNext_FUN_00481cf0
//   XREF to: 00481cf0 (UNCONDITIONAL_CALL)
// 005372e2: ADD ESP,0x4
// 005372e5: CMP byte ptr [ESP],0x0
//   XREF to: Stack[-0x124] (DATA)
// 005372e9: JNZ 0x00537261
//   XREF to: 00537261 (CONDITIONAL_JUMP)
// 005372ef: PUSH 0x0
//   Label: LAB_005372ef
// 005372f1: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x124] (DATA)
// 005372f5: PUSH EAX
// 005372f6: CALL engine_dosio.c_CFileFinder_dtor_FUN_00481c50
//   XREF to: 00481c50 (UNCONDITIONAL_CALL)
// 005372fb: ADD ESP,0x8
// 005372fe: ADD ESP,0x114
// 00537304: POP EBP
// 00537305: POP EDI
// 00537306: POP ESI
// 00537307: POP EBX
// 00537308: RET
// 00537309: MOV EAX,ESP
//   Label: LAB_00537309
// 0053730b: PUSH EAX
// 0053730c: PUSH 0x63b771
//   XREF to: 0063b771 (DATA)
// 00537311: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00537317: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00537318: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 0053731d: ADD ESP,0xc
// 00537320: JMP 0x005372da
//   XREF to: 005372da (UNCONDITIONAL_JUMP)
