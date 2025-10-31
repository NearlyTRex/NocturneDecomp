// Name: core_path.cpp_GlobalPathmapListCorruption_FUN_00548590
// Address: 00548590
// Address Range: [[00548590, 005485ec]]
// Convention: unknown
// Signature: undefined core_path.cpp_GlobalPathmapListCorruption_FUN_00548590()
// Cross-references:
//   core_set.cpp_CDemonSet_load_FUN_00569410 (00569410) at 00569d40 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_FUN_00574440 (00574440) at 005744a2 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_FUN_005744d0 (005744d0) at 00574532 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_FUN_00574560 (00574560) at 0057456d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_path_cpp_0063ea48
//   TerminatedCString s_Global_pathmap_list_corr_0063ea59
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_PathMapCount
//   CPathMap*[200] g_PathMapList
//   undefined4 DAT_030c3ac0
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_path.cpp_CPathMap_reset_FUN_00548510

#include "nocturne.h"

void core_path_cpp_GlobalPathmapListCorruption_FUN_00548590(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_PathMapCount) {
    iVar2 = 0;
    do {
      if (*(int *)((int)g_PathMapList + iVar2) == 0) {
        g_CurrentFilename = "..\\core\\path.cpp";
        g_CurrentLineNumber = 0x6a1;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Global pathmap list corruption");
      }
      puVar1 = (undefined4 *)((int)g_PathMapList + iVar2);
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
      core_path_cpp_CPathMap_reset_FUN_00548510((CPathMap *)*puVar1);
    } while (iVar3 < g_PathMapCount);
  }
  return;
}


// Assembly code:
// 00548590: PUSH EBX
//   Label: core_path.cpp_GlobalPathmapListCorruption_FUN_00548590
// 00548591: PUSH ESI
// 00548592: PUSH EDI
// 00548593: MOV EDX,dword ptr [0x030c3ab8]
//   XREF to: 030c3ab8 (READ)
// 00548599: XOR ESI,ESI
// 0054859b: TEST EDX,EDX
// 0054859d: JLE 0x005485e9
//   XREF to: 005485e9 (CONDITIONAL_JUMP)
// 0054859f: XOR EBX,EBX
// 005485a1: CMP dword ptr [EBX + 0x30c3abc],0x0
//   Label: LAB_005485a1
//   XREF to: 030c3abc (READ)
//   XREF to: 030c3ac0 (READ)
// 005485a8: JNZ 0x005485cc
//   XREF to: 005485cc (CONDITIONAL_JUMP)
// 005485aa: MOV EAX,0x63ea48
//   XREF to: 0063ea48 (PARAM)
// 005485af: MOV EDX,0x6a1
// 005485b4: PUSH 0x63ea59
//   XREF to: 0063ea59 (DATA)
// 005485b9: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 005485be: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005485c4: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005485c9: ADD ESP,0x4
// 005485cc: MOV ECX,dword ptr [EBX + 0x30c3abc]
//   Label: LAB_005485cc
//   XREF to: 030c3abc (READ)
//   XREF to: 030c3ac0 (READ)
// 005485d2: PUSH ECX
// 005485d3: ADD EBX,0x4
// 005485d6: INC ESI
// 005485d7: CALL core_path.cpp_CPathMap_reset_FUN_00548510
//   XREF to: 00548510 (UNCONDITIONAL_CALL)
// 005485dc: MOV EDI,dword ptr [0x030c3ab8]
//   XREF to: 030c3ab8 (READ)
// 005485e2: ADD ESP,0x4
// 005485e5: CMP ESI,EDI
// 005485e7: JL 0x005485a1
//   XREF to: 005485a1 (CONDITIONAL_JUMP)
// 005485e9: POP EDI
//   Label: LAB_005485e9
// 005485ea: POP ESI
// 005485eb: POP EBX
// 005485ec: RET
