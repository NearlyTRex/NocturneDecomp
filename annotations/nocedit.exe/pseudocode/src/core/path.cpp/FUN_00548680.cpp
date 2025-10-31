// Name: core_path.cpp_FUN_00548680
// Address: 00548680
// Address Range: [[00548680, 00548744]]
// Convention: unknown
// Signature: undefined core_path.cpp_FUN_00548680()
// Globals:
//   TerminatedCString s_core_path_cpp_0063eaa8
//   TerminatedCString s_Global_pathmap_list_corr_0063eab9
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_PathMapCount
//   CPathMap*[200] g_PathMapList
//   undefined4 DAT_030c3ac0
//   CDemonRaytrace g_CDemonRaytraceInstance
// Function calls:
//   core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_path.cpp_FUN_00547fc0

#include "nocturne.h"

void core_path_cpp_FUN_00548680(void)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  byte bVar4;
  CVector3f *in_stack_00000004;
  int aiStackY_1010 [1016];
  CVector3i *in_stack_ffffffd8;
  int local_24;
  int local_20;
  int local_1c;
  
  bVar4 = 0;
  core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
            (&g_CDemonRaytraceInstance,in_stack_00000004,in_stack_ffffffd8);
  *(undefined4 *)((int)&stack0xffffffdc + (uint)bVar4 * -8) =
       *(undefined4 *)(&stack0xffffffec + (uint)bVar4 * -8);
  *(undefined4 *)((int)&stack0xffffffe0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(undefined4 *)(&stack0xfffffff0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  iVar3 = 0;
  if (0 < g_PathMapCount) {
    iVar2 = 0;
    do {
      if (*(int *)((int)g_PathMapList + iVar2) == 0) {
        g_CurrentFilename = "..\\core\\path.cpp";
        g_CurrentLineNumber = 0x6b5;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Global pathmap list corruption");
      }
      iVar1 = *(int *)((int)g_PathMapList + iVar2);
      if ((((*(int *)(iVar1 + 0x138c0) < 0x461c3c01) && (local_24 == *(int *)(iVar1 + 0xc))) &&
          (local_20 == *(int *)(iVar1 + 0x10))) && (local_1c == *(int *)(iVar1 + 0x14))) {
        core_path_cpp_FUN_00547fc0();
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < g_PathMapCount);
  }
  return;
}


// Assembly code:
// 00548680: PUSH EBX
//   Label: core_path.cpp_FUN_00548680
// 00548681: PUSH ESI
// 00548682: PUSH EDI
// 00548683: PUSH EBP
// 00548684: SUB ESP,0x18
// 00548687: MOV EBP,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 0054868b: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0054868f: PUSH EDX
// 00548690: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 00548695: LEA ESI,[ESP + 0x14]
//   XREF to: Stack[-0x1c] (DATA)
// 00548699: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x28] (DATA)
// 0054869d: CALL core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
//   XREF to: 00499880 (UNCONDITIONAL_CALL)
// 005486a2: LEA ESI,[ESP + 0x14]
//   XREF to: Stack[-0x1c] (DATA)
// 005486a6: ADD ESP,0x8
// 005486a9: MOVSD ES:EDI,ESI
// 005486aa: MOVSD ES:EDI,ESI
// 005486ab: MOVSD ES:EDI,ESI
// 005486ac: MOV ECX,dword ptr [0x030c3ab8]
//   XREF to: 030c3ab8 (READ)
// 005486b2: XOR ESI,ESI
// 005486b4: TEST ECX,ECX
// 005486b6: JLE 0x005486e3
//   XREF to: 005486e3 (CONDITIONAL_JUMP)
// 005486b8: XOR EBX,EBX
// 005486ba: CMP dword ptr [EBX + 0x30c3abc],0x0
//   Label: LAB_005486ba
//   XREF to: 030c3abc (READ)
//   XREF to: 030c3ac0 (READ)
// 005486c1: JZ 0x005486eb
//   XREF to: 005486eb (CONDITIONAL_JUMP)
// 005486c3: MOV EDX,dword ptr [EBX + 0x30c3abc]
//   Label: LAB_005486c3
//   XREF to: 030c3abc (READ)
//   XREF to: 030c3ac0 (READ)
// 005486c9: CMP dword ptr [EDX + 0x138c0],0x461c3c00
// 005486d3: JLE 0x00548710
//   XREF to: 00548710 (CONDITIONAL_JUMP)
// 005486d5: MOV EDI,dword ptr [0x030c3ab8]
//   Label: LAB_005486d5
//   XREF to: 030c3ab8 (READ)
// 005486db: INC ESI
// 005486dc: ADD EBX,0x4
// 005486df: CMP ESI,EDI
// 005486e1: JL 0x005486ba
//   XREF to: 005486ba (CONDITIONAL_JUMP)
// 005486e3: ADD ESP,0x18
//   Label: LAB_005486e3
// 005486e6: POP EBP
// 005486e7: POP EDI
// 005486e8: POP ESI
// 005486e9: POP EBX
// 005486ea: RET
// 005486eb: MOV EDX,0x63eaa8
//   Label: LAB_005486eb
//   XREF to: 0063eaa8 (DATA)
// 005486f0: MOV ECX,0x6b5
// 005486f5: PUSH 0x63eab9
//   XREF to: 0063eab9 (DATA)
// 005486fa: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00548700: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00548706: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054870b: ADD ESP,0x4
// 0054870e: JMP 0x005486c3
//   XREF to: 005486c3 (UNCONDITIONAL_JUMP)
// 00548710: MOV ECX,dword ptr [ESP]
//   Label: LAB_00548710
//   XREF to: Stack[-0x28] (DATA)
// 00548713: CMP ECX,dword ptr [EDX + 0xc]
// 00548716: JNZ 0x005486d5
//   XREF to: 005486d5 (CONDITIONAL_JUMP)
// 00548718: MOV EDI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 0054871c: CMP EDI,dword ptr [EDX + 0x10]
// 0054871f: JNZ 0x005486d5
//   XREF to: 005486d5 (CONDITIONAL_JUMP)
// 00548721: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 00548725: CMP ECX,dword ptr [EDX + 0x14]
// 00548728: JNZ 0x005486d5
//   XREF to: 005486d5 (CONDITIONAL_JUMP)
// 0054872a: MOV EDI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x14] (READ)
// 0054872e: PUSH EDI
// 0054872f: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x10] (READ)
// 00548733: PUSH EAX
// 00548734: PUSH EBP
// 00548735: MOV ECX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 00548739: PUSH ECX
// 0054873a: PUSH EDX
// 0054873b: CALL core_path.cpp_FUN_00547fc0
//   XREF to: 00547fc0 (UNCONDITIONAL_CALL)
// 00548740: ADD ESP,0x14
// 00548743: JMP 0x005486d5
//   XREF to: 005486d5 (UNCONDITIONAL_JUMP)
