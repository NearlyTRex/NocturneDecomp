// Name: core_path.cpp_CPathMap_ctor_FUN_00546450
// Address: 00546450
// Address Range: [[00546450, 005464c9]]
// Convention: __cdecl
// Signature: CPathMap * core_path.cpp_CPathMap_ctor_FUN_00546450(CPathMap * this_ptr)
// Cross-references:
//   core_hero.cpp_FUN_004f2340 (004f2340) at 004f2354 [UNCONDITIONAL_CALL]
//   core_npc.cpp_FUN_005447e0 (005447e0) at 005447f4 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_path_cpp_0063e8a2
//   TerminatedCString s_Too_many_pathmaps_0063e8b3
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_PathMapCount
//   CPathMap*[200] g_PathMapList
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_path.cpp_CPathMap_reset_FUN_00548510

#include "nocturne.h"

CPathMap * __cdecl core_path_cpp_CPathMap_ctor_FUN_00546450(CPathMap *this_ptr)

{
  int iVar1;
  
  (this_ptr->cached_voxel_coords).z = 0x7fffffff;
  iVar1 = (this_ptr->cached_voxel_coords).z;
  (this_ptr->cached_voxel_coords).y = iVar1;
  (this_ptr->cached_voxel_coords).x = iVar1;
  core_path_cpp_CPathMap_reset_FUN_00548510(this_ptr);
  if (199 < g_PathMapCount) {
    g_CurrentFilename = "..\\core\\path.cpp";
    g_CurrentLineNumber = 0x123;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too many pathmaps!");
  }
  g_PathMapList[g_PathMapCount] = this_ptr;
  g_PathMapCount = g_PathMapCount + 1;
  return this_ptr;
}


// Assembly code:
// 00546450: PUSH EBX
//   Label: core_path.cpp_CPathMap_ctor_FUN_00546450
// 00546451: PUSH EDI
// 00546452: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00546456: MOV dword ptr [EBX + 0x138b8],0x7fffffff
// 00546460: MOV EAX,dword ptr [EBX + 0x138b8]
// 00546466: MOV dword ptr [EBX + 0x138b4],EAX
// 0054646c: PUSH EBX
// 0054646d: MOV dword ptr [EBX + 0x138b0],EAX
// 00546473: CALL core_path.cpp_CPathMap_reset_FUN_00548510
//   XREF to: 00548510 (UNCONDITIONAL_CALL)
// 00546478: MOV EDX,dword ptr [0x030c3ab8]
//   XREF to: 030c3ab8 (READ)
// 0054647e: ADD ESP,0x4
// 00546481: CMP EDX,0xc8
// 00546487: JGE 0x005464a3
//   XREF to: 005464a3 (CONDITIONAL_JUMP)
// 00546489: MOV EAX,[0x030c3ab8]
//   Label: LAB_00546489
//   XREF to: 030c3ab8 (READ)
// 0054648e: LEA EDI,[EAX + 0x1]
// 00546491: MOV dword ptr [EAX*0x4 + 0x30c3abc],EBX
//   XREF to: 030c3abc (DATA)
// 00546498: MOV dword ptr [0x030c3ab8],EDI
//   XREF to: 030c3ab8 (WRITE)
// 0054649e: MOV EAX,EBX
// 005464a0: POP EDI
// 005464a1: POP EBX
// 005464a2: RET
// 005464a3: PUSH ESI
//   Label: LAB_005464a3
// 005464a4: MOV ECX,0x63e8a2
//   XREF to: 0063e8a2 (DATA)
// 005464a9: MOV ESI,0x123
// 005464ae: PUSH 0x63e8b3
//   XREF to: 0063e8b3 (DATA)
// 005464b3: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005464b9: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 005464bf: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005464c4: ADD ESP,0x4
// 005464c7: POP ESI
// 005464c8: JMP 0x00546489
//   XREF to: 00546489 (UNCONDITIONAL_JUMP)
