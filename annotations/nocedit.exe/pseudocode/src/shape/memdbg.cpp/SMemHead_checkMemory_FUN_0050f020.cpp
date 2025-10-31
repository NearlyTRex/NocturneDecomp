// Name: shape_memdbg.cpp_SMemHead_checkMemory_FUN_0050f020
// Address: 0050f020
// Address Range: [[0050f020, 0050f142]]
// Convention: __cdecl
// Signature: void shape_memdbg.cpp_SMemHead_checkMemory_FUN_0050f020(SMemHead * header, char * filename, int line_number)
// Cross-references:
//   shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0 (0050efe0) at 0050eff8 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugFree_FUN_0050f460 (0050f460) at 0050f4df [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540 (0050f540) at 0050f5d2 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_memdbg_cpp_00635e5a
//   TerminatedCString s_Head_memory_corruption_d_00635e6e
//   TerminatedCString s_shape_memdbg_cpp_00635ef8
//   TerminatedCString s_Tail_memory_corruption_d_00635f0c
//   TerminatedCString s_shape_memdbg_cpp_00635f95
//   TerminatedCString s_List_memory_corruption_d_00635fa9
//   TerminatedCString s_none_00636540
//   void* PTR_s_none_00636540_0067d1fc = 00636540
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   SMemHead* g_MemoryListHead
//   void* g_DebugContext
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl
shape_memdbg_cpp_SMemHead_checkMemory_FUN_0050f020(SMemHead *header,char *filename,int line_number)

{
  int iVar1;
  int iVar2;
  SMemHead *pSVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar5 = g_DebugContext;
  pvVar4 = PTR_s_none_00636540_0067d1fc;
  if (header->front_guard != GAME_DEADBEEF) {
    g_CurrentFilename = "..\\shape\\memdbg.cpp";
    g_CurrentLineNumber = 0xaf;
    iVar1 = header->source_line;
    iVar2 = header->num_bytes;
    header->source_file[0x13] = '\0';
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Head memory corruption detected in %d-byte block (%08X), allocated %s, line %d, detected at %s line %d.\n(Last ok check was at %s line %d)",iVar2,header + 1,header->source_file,iVar1,
               filename,line_number,pvVar4,pvVar5);
  }
  if (*(int *)(header[1].source_file + header->num_bytes + -0xc) != GAME_BEEFDEAD) {
    g_CurrentFilename = "..\\shape\\memdbg.cpp";
    g_CurrentLineNumber = 0xb2;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Tail memory corruption detected in %d-byte block (%08X), allocated %s, line %d, detected at %s line %d\n(Last ok check was at %s line %d)",header->num_bytes,header + 1,header->source_file,
               header->source_line,filename,line_number,PTR_s_none_00636540_0067d1fc,g_DebugContext)
    ;
  }
  pSVar3 = g_MemoryListHead;
  if (header->prev != (SMemHead *)0x0) {
    pSVar3 = header->prev->next;
  }
  if (header == pSVar3) goto LAB_0050f0dd;
  do {
    g_CurrentFilename = "..\\shape\\memdbg.cpp";
    g_CurrentLineNumber = 0xb8;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("List memory corruption detected in %d-byte block (%08X), allocated %s, line %d, detected at %s line %d\n(Last ok check was at %s line %d)","List memory corruption detected in %d-byte block (%08X), allocated %s, line %d, detected at %s line %d\n(Last ok check was at %s line %d)",
               header->num_bytes,header + 1,header->source_file,header->source_line,filename,
               line_number,PTR_s_none_00636540_0067d1fc,g_DebugContext);
LAB_0050f0dd:
  } while ((header->next != (SMemHead *)0x0) && (header != header->next->prev));
  return;
}


// Assembly code:
// 0050f020: PUSH EBX
//   Label: shape_memdbg.cpp_SMemHead_checkMemory_FUN_0050f020
// 0050f021: PUSH ESI
// 0050f022: PUSH EDI
// 0050f023: PUSH EBP
// 0050f024: MOV EBP,ESP
// 0050f026: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0050f029: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0050f02c: MOV ESI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0050f02f: CMP dword ptr [EBX + 0x24],0xdeadbeef
// 0050f036: JNZ 0x0050f0ed
//   XREF to: 0050f0ed (CONDITIONAL_JUMP)
// 0050f03c: LEA EAX,[EBX + 0x28]
//   Label: LAB_0050f03c
// 0050f03f: MOV EDX,dword ptr [EBX + 0x8]
// 0050f042: CMP dword ptr [EDX + EAX*0x1],0xbeefdead
// 0050f049: JZ 0x0050f08a
//   XREF to: 0050f08a (CONDITIONAL_JUMP)
// 0050f04b: MOV dword ptr [0x02f0ca48],0x635ef8
//   XREF to: 02f0ca48 (WRITE)
//   XREF to: 00635ef8 (DATA)
// 0050f055: MOV EDX,dword ptr [0x02f0d940]
//   XREF to: 02f0d940 (READ)
// 0050f05b: MOV ECX,0xb2
// 0050f060: PUSH EDX
// 0050f061: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0050f067: MOV ECX,dword ptr [0x0067d1fc]
//   XREF to: 0067d1fc (READ)
// 0050f06d: PUSH ECX
//   XREF to: 00636540 (DATA)
// 0050f06e: PUSH ESI
// 0050f06f: PUSH EDI
// 0050f070: MOV EDX,dword ptr [EBX + 0x20]
// 0050f073: PUSH EDX
// 0050f074: LEA EDX,[EBX + 0xc]
// 0050f077: PUSH EDX
// 0050f078: PUSH EAX
// 0050f079: MOV ECX,dword ptr [EBX + 0x8]
// 0050f07c: PUSH ECX
// 0050f07d: PUSH 0x635f0c
//   XREF to: 00635f0c (DATA)
// 0050f082: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0050f087: ADD ESP,0x24
// 0050f08a: MOV EAX,dword ptr [EBX]
//   Label: LAB_0050f08a
// 0050f08c: TEST EAX,EAX
// 0050f08e: JNZ 0x0050f138
//   XREF to: 0050f138 (CONDITIONAL_JUMP)
// 0050f094: CMP EBX,dword ptr [0x02f0d938]
//   XREF to: 02f0d938 (READ)
// 0050f09a: JZ 0x0050f0dd
//   XREF to: 0050f0dd (CONDITIONAL_JUMP)
// 0050f09c: MOV ECX,dword ptr [0x02f0d940]
//   Label: LAB_0050f09c
//   XREF to: 02f0d940 (READ)
// 0050f0a2: MOV EAX,0x635f95
//   XREF to: 00635f95 (DATA)
// 0050f0a7: PUSH ECX
// 0050f0a8: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0050f0ad: MOV EAX,[0x0067d1fc]
//   XREF to: 0067d1fc (READ)
// 0050f0b2: PUSH EAX
//   XREF to: 00636540 (DATA)
// 0050f0b3: PUSH ESI
// 0050f0b4: MOV EDX,0xb8
// 0050f0b9: PUSH EDI
// 0050f0ba: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0050f0c0: MOV EDX,dword ptr [EBX + 0x20]
// 0050f0c3: PUSH EDX
// 0050f0c4: LEA EAX,[EBX + 0xc]
// 0050f0c7: PUSH EAX
// 0050f0c8: LEA EAX,[EBX + 0x28]
// 0050f0cb: PUSH EAX
// 0050f0cc: MOV ECX,dword ptr [EBX + 0x8]
// 0050f0cf: PUSH ECX
// 0050f0d0: PUSH 0x635fa9
//   XREF to: 00635fa9 (DATA)
// 0050f0d5: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0050f0da: ADD ESP,0x24
// 0050f0dd: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_0050f0dd
// 0050f0e0: TEST EAX,EAX
// 0050f0e2: JZ 0x0050f0e8
//   XREF to: 0050f0e8 (CONDITIONAL_JUMP)
// 0050f0e4: CMP EBX,dword ptr [EAX]
// 0050f0e6: JNZ 0x0050f09c
//   XREF to: 0050f09c (CONDITIONAL_JUMP)
// 0050f0e8: POP EBP
//   Label: LAB_0050f0e8
// 0050f0e9: POP EDI
// 0050f0ea: POP ESI
// 0050f0eb: POP EBX
// 0050f0ec: RET
// 0050f0ed: MOV EDX,dword ptr [0x02f0d940]
//   Label: LAB_0050f0ed
//   XREF to: 02f0d940 (READ)
// 0050f0f3: MOV ECX,0x635e5a
//   XREF to: 00635e5a (DATA)
// 0050f0f8: PUSH EDX
// 0050f0f9: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0050f0ff: MOV ECX,dword ptr [0x0067d1fc]
//   XREF to: 00636540 (PARAM)
//   XREF to: 0067d1fc (READ)
// 0050f105: PUSH ECX
//   XREF to: 00636540 (DATA)
// 0050f106: PUSH ESI
// 0050f107: MOV EAX,0xaf
// 0050f10c: PUSH EDI
// 0050f10d: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0050f112: MOV EAX,dword ptr [EBX + 0x20]
// 0050f115: PUSH EAX
// 0050f116: LEA EAX,[EBX + 0xc]
// 0050f119: PUSH EAX
// 0050f11a: LEA EAX,[EBX + 0x28]
// 0050f11d: PUSH EAX
// 0050f11e: MOV EDX,dword ptr [EBX + 0x8]
// 0050f121: PUSH EDX
// 0050f122: PUSH 0x635e6e
//   XREF to: 00635e6e (DATA)
// 0050f127: MOV byte ptr [EBX + 0x1f],0x0
// 0050f12b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0050f130: ADD ESP,0x24
// 0050f133: JMP 0x0050f03c
//   XREF to: 0050f03c (UNCONDITIONAL_JUMP)
// 0050f138: CMP EBX,dword ptr [EAX + 0x4]
//   Label: LAB_0050f138
// 0050f13b: JNZ 0x0050f09c
//   XREF to: 0050f09c (CONDITIONAL_JUMP)
// 0050f141: JMP 0x0050f0dd
//   XREF to: 0050f0dd (UNCONDITIONAL_JUMP)
