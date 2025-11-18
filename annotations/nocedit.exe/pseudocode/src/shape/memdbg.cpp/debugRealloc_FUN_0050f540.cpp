// Name: shape_memdbg.cpp_debugRealloc_FUN_0050f540
// Address: 0050f540
// Address Range: [[0050f540, 0050f6b0]]
// Convention: __cdecl
// Signature: void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
// Cross-references:
//   cockpit_ckptutil.c_traceConnectedEdges_FUN_00434af0 (00434af0) at 00435529 [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0054b190 (0054b190) at 0054b2c2 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0 (004191d0) at 00419242 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_savePVS_FUN_00498fb0 (00498fb0) at 00499000 [UNCONDITIONAL_CALL]
//   core_morph.cpp_CMorphModel_FUN_0052a710 (0052a710) at 0052a78c [UNCONDITIONAL_CALL]
//   core_morph.cpp_CMorphModel_addPart_FUN_0052a580 (0052a580) at 0052a625 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_LoadingScriptFile_FUN_0055a370 (0055a370) at 0055a3e4 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_ReallocSomething_FUN_00567510 (00567510) at 00567539 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_dbLoad_FUN_005603c0 (005603c0) at 005605dc [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_editorAction_FUN_00564820 (00564820) at 00564ad7 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSCamera_loadPVS_FUN_005857b0 (005857b0) at 005857eb [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutList_add_FUN_004b2d00 (004b2d00) at 004b2d2a [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutList_remove_FUN_004b2d70 (004b2d70) at 004b2e2e [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_addPodAuditRecord_FUN_004b5950 (004b5950) at 004b5982 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b93e5 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b5c80 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190 (004bd190) at 004bd53e [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_readTimestampFile_FUN_004b23a0 (004b23a0) at 004b256b [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 (0054f650) at 0054f8a7 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_getClipboardText_FUN_004a1b30 (004a1b30) at 004a1b86 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0 (004a1bc0) at 004a1c58 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_enableItem_FUN_004a5410 (004a5410) at 004a5481 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_setItemHotKey_FUN_004a5540 (004a5540) at 004a55a8 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_allocate_FUN_004a2cc0 (004a2cc0) at 004a2d40 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_setStringAt_FUN_004a3120 (004a3120) at 004a3188 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_FUN_00515ec0 (00515ec0) at 00515f37 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_FUN_0051d4a0 (0051d4a0) at 0051d4c8 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_gridLoad_FUN_0051d2d0 (0051d2d0) at 0051d2f2 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_00516620 (00516620) at 00516648 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_ReallocSomething_FUN_00518790 (00518790) at 005187eb [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_AllocateMemoryForSomething_FUN_00554a50 (00554a50) at 00554aaf [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_FUN_00556d20 (00556d20) at 00556d31 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005a6170 (005a6170) at 005a62a1 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_allocMixBuffers_FUN_005a5730 (005a5730) at 005a57c4 [UNCONDITIONAL_CALL]
//   support_codec.cpp_CLZWDictionary_init_FUN_0043ee60 (0043ee60) at 0043ee9d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_memdbg_cpp_00635e2f
//   TerminatedCString s_headFromPtr_NULL_ptr_00635e43
//   TerminatedCString s_debugRealloc_08X_d_s_d_00636117
//   TerminatedCString s_FAILED_00636136
//   TerminatedCString s_Returns_08X_00636144
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   BOOL g_RecursiveCallFlag
//   HANDLE g_FileMutex
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_realloc_FUN_00601df0
//   shape_memdbg.cpp_debugFree_FUN_0050f460
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   shape_memdbg.cpp_SMemHead_add_FUN_0050eef0
//   shape_memdbg.cpp_SMemHead_checkMemory_FUN_0050f020
//   shape_memdbg.cpp_SMemHead_recordSourceFile_FUN_0050eea0
//   shape_memdbg.cpp_SMemHead_remove_FUN_0050ef20
//   shape_memdbg.cpp_traceMemory_FUN_0050f150
//   wincore_winrun.cpp_createMutex_FUN_005f3fe0
//   wincore_winrun.cpp_releaseMutex_FUN_005f4050
//   wincore_winrun.cpp_waitForMutex_FUN_005f3ff0

#include "nocturne.h"

void * __cdecl
shape_memdbg_cpp_debugRealloc_FUN_0050f540(void *ptr,int new_size,char *filename,int line_number)

{
  SMemHead *pSVar1;
  char *pcVar2;
  SMemHead *header;
  void *pvVar3;
  int in_stack_00000014;
  int in_stack_00000018;
  
  if (g_RecursiveCallFlag == 0) {
    if (g_FileMutex == (HANDLE)0x0) {
      g_FileMutex = wincore_winrun_cpp_createMutex_FUN_005f3fe0();
    }
    wincore_winrun_cpp_waitForMutex_FUN_005f3ff0(g_FileMutex);
  }
  shape_memdbg_cpp_traceMemory_FUN_0050f150
            ("debugRealloc(%08X, %d, %s, %d)",ptr,line_number,filename,line_number);
  if (ptr != (void *)0x0) {
    if (in_stack_00000014 == 0) {
      shape_memdbg_cpp_debugFree_FUN_0050f460(ptr,filename,line_number);
    }
    else {
      if (ptr == (void *)0x0) {
        g_CurrentFilename = "..\\shape\\memdbg.cpp";
        g_CurrentLineNumber = 0x99;
        core_main_c_displayErrorAndQuit_FUN_00506f10("headFromPtr - NULL ptr");
      }
      pSVar1 = (SMemHead *)((int)ptr + -0x28);
      shape_memdbg_cpp_SMemHead_checkMemory_FUN_0050f020(pSVar1,filename,line_number);
      shape_memdbg_cpp_SMemHead_remove_FUN_0050ef20(pSVar1);
      header = (SMemHead *)
               crt_memory_c_realloc_FUN_00601df0
                         (pSVar1,(ulong)(filename + GAME_SMEMHEAD_AND_BACKGUARD_SIZE));
      if (header != (SMemHead *)0x0) {
        header->num_bytes = line_number;
        shape_memdbg_cpp_SMemHead_recordSourceFile_FUN_0050eea0(header,filename);
        header->front_guard = GAME_DEADBEEF;
        pSVar1 = header + 1;
        header->source_line = line_number;
        pcVar2 = pSVar1->source_file + header->num_bytes + -0xc;
        pcVar2[0] = -0x53;
        pcVar2[1] = -0x22;
        pcVar2[2] = -0x11;
        pcVar2[3] = -0x42;
        shape_memdbg_cpp_SMemHead_add_FUN_0050eef0(header);
        shape_memdbg_cpp_traceMemory_FUN_0050f150("   Returns %08X",pSVar1);
        wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
        return pSVar1;
      }
      shape_memdbg_cpp_SMemHead_add_FUN_0050eef0(pSVar1);
      shape_memdbg_cpp_traceMemory_FUN_0050f150("   !!FAILED!!");
    }
    wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
    return (void *)0x0;
  }
  wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
  pvVar3 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(in_stack_00000018,filename,line_number);
  return pvVar3;
}


// Assembly code:
// 0050f540: PUSH EBX
//   Label: shape_memdbg.cpp_debugRealloc_FUN_0050f540
// 0050f541: PUSH ESI
// 0050f542: PUSH EDI
// 0050f543: PUSH EBP
// 0050f544: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0050f548: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0050f54c: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0050f550: CMP dword ptr [0x02f0ca50],0x0
//   XREF to: 02f0ca50 (READ)
// 0050f557: JNZ 0x0050f57b
//   XREF to: 0050f57b (CONDITIONAL_JUMP)
// 0050f559: CMP dword ptr [0x02f0d93c],0x0
//   XREF to: 02f0d93c (READ)
// 0050f560: JNZ 0x0050f56c
//   XREF to: 0050f56c (CONDITIONAL_JUMP)
// 0050f562: CALL wincore_winrun.cpp_createMutex_FUN_005f3fe0
//   XREF to: 005f3fe0 (UNCONDITIONAL_CALL)
// 0050f567: MOV [0x02f0d93c],EAX
//   XREF to: 02f0d93c (WRITE)
// 0050f56c: MOV EBX,dword ptr [0x02f0d93c]
//   Label: LAB_0050f56c
//   XREF to: 02f0d93c (READ)
// 0050f572: PUSH EBX
// 0050f573: CALL wincore_winrun.cpp_waitForMutex_FUN_005f3ff0
//   XREF to: 005f3ff0 (UNCONDITIONAL_CALL)
// 0050f578: ADD ESP,0x4
// 0050f57b: PUSH EBP
//   Label: LAB_0050f57b
// 0050f57c: PUSH EDI
// 0050f57d: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0050f581: PUSH EAX
// 0050f582: PUSH ESI
// 0050f583: PUSH 0x636117
//   XREF to: 00636117 (DATA)
// 0050f588: CALL shape_memdbg.cpp_traceMemory_FUN_0050f150
//   XREF to: 0050f150 (UNCONDITIONAL_CALL)
// 0050f58d: ADD ESP,0x14
// 0050f590: TEST ESI,ESI
// 0050f592: JZ 0x0050f626
//   XREF to: 0050f626 (CONDITIONAL_JUMP)
// 0050f598: CMP dword ptr [ESP + 0x18],0x0
//   XREF to: Stack[0x8] (READ)
// 0050f59d: JZ 0x0050f649
//   XREF to: 0050f649 (CONDITIONAL_JUMP)
// 0050f5a3: MOV EBX,ESI
// 0050f5a5: TEST ESI,ESI
// 0050f5a7: JNZ 0x0050f5cc
//   XREF to: 0050f5cc (CONDITIONAL_JUMP)
// 0050f5a9: MOV ECX,0x635e2f
//   XREF to: 00635e2f (PARAM)
// 0050f5ae: MOV ESI,0x99
// 0050f5b3: PUSH 0x635e43
//   XREF to: 00635e43 (DATA)
// 0050f5b8: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0050f5be: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0050f5c4: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0050f5c9: ADD ESP,0x4
// 0050f5cc: PUSH EBP
//   Label: LAB_0050f5cc
// 0050f5cd: PUSH EDI
// 0050f5ce: LEA ESI,[EBX + -0x28]
// 0050f5d1: PUSH ESI
// 0050f5d2: CALL shape_memdbg.cpp_SMemHead_checkMemory_FUN_0050f020
//   XREF to: 0050f020 (UNCONDITIONAL_CALL)
// 0050f5d7: ADD ESP,0xc
// 0050f5da: PUSH ESI
// 0050f5db: CALL shape_memdbg.cpp_SMemHead_remove_FUN_0050ef20
//   XREF to: 0050ef20 (UNCONDITIONAL_CALL)
// 0050f5e0: ADD ESP,0x4
// 0050f5e3: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0050f5e7: ADD EAX,0x2c
// 0050f5ea: PUSH EAX
// 0050f5eb: PUSH ESI
// 0050f5ec: CALL crt_memory.c_realloc_FUN_00601df0
//   XREF to: 00601df0 (UNCONDITIONAL_CALL)
// 0050f5f1: MOV EBX,EAX
// 0050f5f3: ADD ESP,0x8
// 0050f5f6: TEST EAX,EAX
// 0050f5f8: JNZ 0x0050f65c
//   XREF to: 0050f65c (CONDITIONAL_JUMP)
// 0050f5fa: PUSH ESI
// 0050f5fb: CALL shape_memdbg.cpp_SMemHead_add_FUN_0050eef0
//   XREF to: 0050eef0 (UNCONDITIONAL_CALL)
// 0050f600: ADD ESP,0x4
// 0050f603: PUSH 0x636136
//   XREF to: 00636136 (DATA)
// 0050f608: CALL shape_memdbg.cpp_traceMemory_FUN_0050f150
//   XREF to: 0050f150 (UNCONDITIONAL_CALL)
// 0050f60d: ADD ESP,0x4
// 0050f610: MOV EBP,dword ptr [0x02f0d93c]
//   XREF to: 02f0d93c (READ)
// 0050f616: PUSH EBP
// 0050f617: CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050
//   Label: LAB_0050f617
//   XREF to: 005f4050 (UNCONDITIONAL_CALL)
// 0050f61c: ADD ESP,0x4
// 0050f61f: XOR EAX,EAX
// 0050f621: POP EBP
// 0050f622: POP EDI
// 0050f623: POP ESI
// 0050f624: POP EBX
// 0050f625: RET
// 0050f626: MOV EDX,dword ptr [0x02f0d93c]
//   Label: LAB_0050f626
//   XREF to: 02f0d93c (READ)
// 0050f62c: PUSH EDX
// 0050f62d: CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050
//   XREF to: 005f4050 (UNCONDITIONAL_CALL)
// 0050f632: ADD ESP,0x4
// 0050f635: PUSH EBP
// 0050f636: PUSH EDI
// 0050f637: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0050f63b: PUSH ECX
// 0050f63c: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 0050f641: ADD ESP,0xc
// 0050f644: POP EBP
// 0050f645: POP EDI
// 0050f646: POP ESI
// 0050f647: POP EBX
// 0050f648: RET
// 0050f649: PUSH EBP
//   Label: LAB_0050f649
// 0050f64a: PUSH EDI
// 0050f64b: PUSH ESI
// 0050f64c: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 0050f651: ADD ESP,0xc
// 0050f654: MOV EAX,[0x02f0d93c]
//   XREF to: 02f0d93c (READ)
// 0050f659: PUSH EAX
// 0050f65a: JMP 0x0050f617
//   XREF to: 0050f617 (UNCONDITIONAL_JUMP)
// 0050f65c: PUSH EDI
//   Label: LAB_0050f65c
// 0050f65d: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0050f661: PUSH EBX
// 0050f662: MOV dword ptr [EBX + 0x8],EAX
// 0050f665: CALL shape_memdbg.cpp_SMemHead_recordSourceFile_FUN_0050eea0
//   XREF to: 0050eea0 (UNCONDITIONAL_CALL)
// 0050f66a: ADD ESP,0x8
// 0050f66d: MOV dword ptr [EBX + 0x24],0xdeadbeef
// 0050f674: LEA ESI,[EBX + 0x28]
// 0050f677: MOV EAX,dword ptr [EBX + 0x8]
// 0050f67a: MOV dword ptr [EBX + 0x20],EBP
// 0050f67d: PUSH EBX
// 0050f67e: MOV dword ptr [ESI + EAX*0x1],0xbeefdead
// 0050f685: CALL shape_memdbg.cpp_SMemHead_add_FUN_0050eef0
//   XREF to: 0050eef0 (UNCONDITIONAL_CALL)
// 0050f68a: ADD ESP,0x4
// 0050f68d: PUSH ESI
// 0050f68e: PUSH 0x636144
//   XREF to: 00636144 (DATA)
// 0050f693: CALL shape_memdbg.cpp_traceMemory_FUN_0050f150
//   XREF to: 0050f150 (UNCONDITIONAL_CALL)
// 0050f698: ADD ESP,0x8
// 0050f69b: MOV EDI,dword ptr [0x02f0d93c]
//   XREF to: 02f0d93c (READ)
// 0050f6a1: PUSH EDI
// 0050f6a2: CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050
//   XREF to: 005f4050 (UNCONDITIONAL_CALL)
// 0050f6a7: ADD ESP,0x4
// 0050f6aa: MOV EAX,ESI
// 0050f6ac: POP EBP
// 0050f6ad: POP EDI
// 0050f6ae: POP ESI
// 0050f6af: POP EBX
// 0050f6b0: RET
