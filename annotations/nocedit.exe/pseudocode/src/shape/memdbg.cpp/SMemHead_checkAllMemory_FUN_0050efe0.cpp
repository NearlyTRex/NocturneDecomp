// Name: shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0
// Address: 0050efe0
// Address Range: [[0050efe0, 0050f01f]]
// Convention: __cdecl
// Signature: void shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0(char * filename, int context)
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db328 [UNCONDITIONAL_CALL]
//   core_main.c_finalizeGameSystems_FUN_00508570 (00508570) at 00508584 [UNCONDITIONAL_CALL]
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 005081f4 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_FUN_00523cf0 (00523cf0) at 00523d01 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30 (00522d30) at 00522d83 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0 (00522eb0) at 00523345 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_save_FUN_00522e30 (00522e30) at 00522e3c [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_writeFile_FUN_00523600 (00523600) at 00523615 [UNCONDITIONAL_CALL]
//   core_mission.cpp_FUN_005248e0 (005248e0) at 005248ea [UNCONDITIONAL_CALL]
// Globals:
//   void* PTR_s_none_00636540_0067d1fc = 00636540
//   SMemHead* g_MemoryListHead
//   void* g_DebugContext
// Function calls:
//   shape_memdbg.cpp_SMemHead_checkMemory_FUN_0050f020

#include "nocturne.h"

void __cdecl shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0(char *filename,int context)

{
  SMemHead *header;
  
  header = g_MemoryListHead;
  if (g_MemoryListHead != (SMemHead *)0x0) {
    do {
      shape_memdbg_cpp_SMemHead_checkMemory_FUN_0050f020(header,filename,context);
      header = header->next;
    } while (header != (SMemHead *)0x0);
  }
  g_DebugContext = (void *)context;
  PTR_s_none_00636540_0067d1fc = filename;
  return;
}


// Assembly code:
// 0050efe0: PUSH EBX
//   Label: shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0
// 0050efe1: PUSH ESI
// 0050efe2: PUSH EDI
// 0050efe3: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0050efe7: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0050efeb: MOV EBX,dword ptr [0x02f0d938]
//   XREF to: 02f0d938 (READ)
// 0050eff1: TEST EBX,EBX
// 0050eff3: JZ 0x0050f010
//   XREF to: 0050f010 (CONDITIONAL_JUMP)
// 0050eff5: PUSH EDI
//   Label: LAB_0050eff5
// 0050eff6: PUSH ESI
// 0050eff7: PUSH EBX
// 0050eff8: CALL shape_memdbg.cpp_SMemHead_checkMemory_FUN_0050f020
//   XREF to: 0050f020 (UNCONDITIONAL_CALL)
// 0050effd: MOV EBX,dword ptr [EBX + 0x4]
// 0050f000: ADD ESP,0xc
// 0050f003: TEST EBX,EBX
// 0050f005: JNZ 0x0050eff5
//   XREF to: 0050eff5 (CONDITIONAL_JUMP)
// 0050f007: LEA EAX,[EAX]
// 0050f00d: LEA EDX,[EDX]
// 0050f010: MOV dword ptr [0x02f0d940],EDI
//   Label: LAB_0050f010
//   XREF to: 02f0d940 (WRITE)
// 0050f016: MOV dword ptr [0x0067d1fc],ESI
//   XREF to: 0067d1fc (WRITE)
// 0050f01c: POP EDI
// 0050f01d: POP ESI
// 0050f01e: POP EBX
// 0050f01f: RET
