// Name: shape_memdbg.cpp_debugCalloc_FUN_0050f350
// Address: 0050f350
// Address Range: [[0050f350, 0050f45f]]
// Convention: __cdecl
// Signature: void * shape_memdbg.cpp_debugCalloc_FUN_0050f350(SIZE_T count, SIZE_T size, char * filename, int line_number)
// Cross-references:
//   core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_004567b0 (004567b0) at 004567c4 [UNCONDITIONAL_CALL]
//   core_dpart.cpp_CDemonPart_alloc_FUN_00482180 (00482180) at 00482261 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_allocCubeList_FUN_00494270 (00494270) at 0049428e [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b5fae [UNCONDITIONAL_CALL]
//   engine_palette.cpp_CPaletteManager_createOutputPalette_FUN_00545180 (00545180) at 005451dd [UNCONDITIONAL_CALL]
//   shape_design.c_cramTextureList_FUN_0046bb80 (0046bb80) at 0046d15c [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_allocate_FUN_00515ac0 (00515ac0) at 00515b37 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_eqLoad_FUN_0051cdf0 (0051cdf0) at 0051ce32 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_loadReplayData_FUN_0051d180 (0051d180) at 0051d1bc [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_debugCalloc_d_d_s_d_00636078
//   TerminatedCString s_Returns_NULL_00636094
//   TerminatedCString s_FAILED_006360a4
//   TerminatedCString s_Returns_08X_006360b2
//   BOOL g_RecursiveCallFlag
//   HANDLE g_FileMutex
// Function calls:
//   crt_memory.c_malloc_FUN_00601bb0
//   crt_memory.c_memset_FUN_005fde40
//   shape_memdbg.cpp_SMemHead_add_FUN_0050eef0
//   shape_memdbg.cpp_SMemHead_recordSourceFile_FUN_0050eea0
//   shape_memdbg.cpp_traceMemory_FUN_0050f150
//   wincore_winrun.cpp_createMutex_FUN_005f3fe0
//   wincore_winrun.cpp_releaseMutex_FUN_005f4050
//   wincore_winrun.cpp_waitForMutex_FUN_005f3ff0

#include "nocturne.h"

void * __cdecl
shape_memdbg_cpp_debugCalloc_FUN_0050f350(SIZE_T count,SIZE_T size,char *filename,int line_number)

{
  SMemHead *dest;
  char *pcVar1;
  SMemHead *header;
  ulong count_00;
  undefined4 in_stack_00000018;
  int in_stack_00000024;
  
  if (g_RecursiveCallFlag == 0) {
    if (g_FileMutex == (HANDLE)0x0) {
      g_FileMutex = wincore_winrun_cpp_createMutex_FUN_005f3fe0();
    }
    wincore_winrun_cpp_waitForMutex_FUN_005f3ff0(g_FileMutex);
  }
  count_00 = size * count;
  shape_memdbg_cpp_traceMemory_FUN_0050f150
            ("debugCalloc(%d, %d, %s, %d)",count,size,filename,in_stack_00000018);
  if (count_00 != 0) {
    header = (SMemHead *)
             crt_memory_c_malloc_FUN_00601bb0(count_00 + GAME_SMEMHEAD_AND_BACKGUARD_SIZE);
    if (header == (SMemHead *)0x0) {
      shape_memdbg_cpp_traceMemory_FUN_0050f150("   !!FAILED!!");
      wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
      return (void *)0x0;
    }
    header->num_bytes = count_00;
    shape_memdbg_cpp_SMemHead_recordSourceFile_FUN_0050eea0(header,filename);
    header->source_line = in_stack_00000024;
    dest = header + 1;
    header->front_guard = GAME_DEADBEEF;
    pcVar1 = dest->source_file + header->num_bytes + -0xc;
    pcVar1[0] = -0x53;
    pcVar1[1] = -0x22;
    pcVar1[2] = -0x11;
    pcVar1[3] = -0x42;
    shape_memdbg_cpp_SMemHead_add_FUN_0050eef0(header);
    crt_memory_c_memset_FUN_005fde40(dest,0,count_00);
    shape_memdbg_cpp_traceMemory_FUN_0050f150("   Returns %08X");
    wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
    return dest;
  }
  shape_memdbg_cpp_traceMemory_FUN_0050f150("   Returns NULL");
  wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
  return (void *)0x0;
}


// Assembly code:
// 0050f350: PUSH EBX
//   Label: shape_memdbg.cpp_debugCalloc_FUN_0050f350
// 0050f351: PUSH ESI
// 0050f352: PUSH EDI
// 0050f353: PUSH EBP
// 0050f354: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0050f358: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0050f35c: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0050f360: CMP dword ptr [0x02f0ca50],0x0
//   XREF to: 02f0ca50 (READ)
// 0050f367: JNZ 0x0050f38b
//   XREF to: 0050f38b (CONDITIONAL_JUMP)
// 0050f369: CMP dword ptr [0x02f0d93c],0x0
//   XREF to: 02f0d93c (READ)
// 0050f370: JNZ 0x0050f37c
//   XREF to: 0050f37c (CONDITIONAL_JUMP)
// 0050f372: CALL wincore_winrun.cpp_createMutex_FUN_005f3fe0
//   XREF to: 005f3fe0 (UNCONDITIONAL_CALL)
// 0050f377: MOV [0x02f0d93c],EAX
//   XREF to: 02f0d93c (WRITE)
// 0050f37c: MOV EBP,dword ptr [0x02f0d93c]
//   Label: LAB_0050f37c
//   XREF to: 02f0d93c (READ)
// 0050f382: PUSH EBP
// 0050f383: CALL wincore_winrun.cpp_waitForMutex_FUN_005f3ff0
//   XREF to: 005f3ff0 (UNCONDITIONAL_CALL)
// 0050f388: ADD ESP,0x4
// 0050f38b: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_0050f38b
//   XREF to: Stack[0x10] (READ)
// 0050f38f: PUSH EAX
// 0050f390: PUSH EDI
// 0050f391: PUSH ESI
// 0050f392: IMUL ESI,EBX
// 0050f395: PUSH EBX
// 0050f396: PUSH 0x636078
//   XREF to: 00636078 (DATA)
// 0050f39b: CALL shape_memdbg.cpp_traceMemory_FUN_0050f150
//   XREF to: 0050f150 (UNCONDITIONAL_CALL)
// 0050f3a0: ADD ESP,0x14
// 0050f3a3: TEST ESI,ESI
// 0050f3a5: JZ 0x0050f3dc
//   XREF to: 0050f3dc (CONDITIONAL_JUMP)
// 0050f3a7: LEA EAX,[ESI + 0x2c]
// 0050f3aa: PUSH EAX
// 0050f3ab: CALL crt_memory.c_malloc_FUN_00601bb0
//   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
// 0050f3b0: MOV EBX,EAX
// 0050f3b2: ADD ESP,0x4
// 0050f3b5: TEST EAX,EAX
// 0050f3b7: JNZ 0x0050f3ff
//   XREF to: 0050f3ff (CONDITIONAL_JUMP)
// 0050f3b9: PUSH 0x6360a4
//   XREF to: 006360a4 (DATA)
// 0050f3be: CALL shape_memdbg.cpp_traceMemory_FUN_0050f150
//   XREF to: 0050f150 (UNCONDITIONAL_CALL)
// 0050f3c3: ADD ESP,0x4
// 0050f3c6: MOV ECX,dword ptr [0x02f0d93c]
//   XREF to: 02f0d93c (READ)
// 0050f3cc: PUSH ECX
// 0050f3cd: CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050
//   XREF to: 005f4050 (UNCONDITIONAL_CALL)
// 0050f3d2: ADD ESP,0x4
// 0050f3d5: MOV EAX,EBX
// 0050f3d7: POP EBP
// 0050f3d8: POP EDI
// 0050f3d9: POP ESI
// 0050f3da: POP EBX
// 0050f3db: RET
// 0050f3dc: PUSH 0x636094
//   Label: LAB_0050f3dc
//   XREF to: 00636094 (DATA)
// 0050f3e1: CALL shape_memdbg.cpp_traceMemory_FUN_0050f150
//   XREF to: 0050f150 (UNCONDITIONAL_CALL)
// 0050f3e6: ADD ESP,0x4
// 0050f3e9: MOV EBX,dword ptr [0x02f0d93c]
//   XREF to: 02f0d93c (READ)
// 0050f3ef: PUSH EBX
// 0050f3f0: CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050
//   XREF to: 005f4050 (UNCONDITIONAL_CALL)
// 0050f3f5: ADD ESP,0x4
// 0050f3f8: XOR EAX,EAX
// 0050f3fa: POP EBP
// 0050f3fb: POP EDI
// 0050f3fc: POP ESI
// 0050f3fd: POP EBX
// 0050f3fe: RET
// 0050f3ff: PUSH EDI
//   Label: LAB_0050f3ff
// 0050f400: PUSH EAX
// 0050f401: MOV dword ptr [EAX + 0x8],ESI
// 0050f404: CALL shape_memdbg.cpp_SMemHead_recordSourceFile_FUN_0050eea0
//   XREF to: 0050eea0 (UNCONDITIONAL_CALL)
// 0050f409: ADD ESP,0x8
// 0050f40c: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0050f410: MOV dword ptr [EBX + 0x20],EAX
// 0050f413: LEA EDI,[EBX + 0x28]
// 0050f416: MOV EAX,dword ptr [EBX + 0x8]
// 0050f419: MOV dword ptr [EBX + 0x24],0xdeadbeef
// 0050f420: PUSH EBX
// 0050f421: MOV dword ptr [EDI + EAX*0x1],0xbeefdead
// 0050f428: CALL shape_memdbg.cpp_SMemHead_add_FUN_0050eef0
//   XREF to: 0050eef0 (UNCONDITIONAL_CALL)
// 0050f42d: ADD ESP,0x4
// 0050f430: PUSH ESI
// 0050f431: PUSH 0x0
// 0050f433: PUSH EDI
// 0050f434: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0050f439: ADD ESP,0xc
// 0050f43c: PUSH EDI
// 0050f43d: PUSH 0x6360b2
//   XREF to: 006360b2 (DATA)
// 0050f442: CALL shape_memdbg.cpp_traceMemory_FUN_0050f150
//   XREF to: 0050f150 (UNCONDITIONAL_CALL)
// 0050f447: ADD ESP,0x8
// 0050f44a: MOV EDX,dword ptr [0x02f0d93c]
//   XREF to: 02f0d93c (READ)
// 0050f450: PUSH EDX
// 0050f451: CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050
//   XREF to: 005f4050 (UNCONDITIONAL_CALL)
// 0050f456: ADD ESP,0x4
// 0050f459: MOV EAX,EDI
// 0050f45b: POP EBP
// 0050f45c: POP EDI
// 0050f45d: POP ESI
// 0050f45e: POP EBX
// 0050f45f: RET
