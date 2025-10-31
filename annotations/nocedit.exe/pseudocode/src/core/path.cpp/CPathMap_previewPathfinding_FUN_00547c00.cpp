// Name: core_path.cpp_CPathMap_previewPathfinding_FUN_00547c00
// Address: 00547c00
// Address Range: [[00547c00, 00547cf0]]
// Convention: __cdecl
// Signature: void core_path.cpp_CPathMap_previewPathfinding_FUN_00547c00(CPathMap * this_ptr)
// Globals:
//   TerminatedCString s_s_0063ea24
//   int g_WindowWidth = 0x140
//   char*[9] g_DirectionCharacters
//   int g_PathfindingCurrentX
//   int g_PathfindingCurrentZ
//   int g_PathfindingDestX
//   int g_PathfindingDestZ
//   char[101][100] g_PathfindingVisited
//   undefined4 DAT_030d2859
//   undefined4 DAT_030d28bc
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_drawText_FUN_00401fd0

#include "nocturne.h"

void __cdecl core_path_cpp_CPathMap_previewPathfinding_FUN_00547c00(CPathMap *this_ptr)

{
  int x_pos;
  int iVar1;
  BADSPACEBASE *in_ESP;
  int iVar2;
  int iVar3;
  int iVar4;
  char acStack_118 [252];
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  
  iVar2 = 0;
  local_18 = 0;
  local_14 = 0x441;
  do {
    iVar3 = 0;
    iVar1 = 0;
    local_1c = local_14;
    iVar4 = local_18;
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&stack0xfffffee4,"%s",
                 g_DirectionCharacters[(byte)g_PathfindingVisited[0][iVar4]]);
      if ((iVar1 == g_PathfindingCurrentX) && (iVar2 == g_PathfindingCurrentZ)) {
        acStack_118[0] = 's';
      }
      if ((iVar1 == g_PathfindingDestX) && (iVar2 == g_PathfindingDestZ)) {
        acStack_118[0] = 'd';
      }
      x_pos = g_WindowWidth / 2 + iVar3;
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0xe;
      engine_2d_c_drawText_FUN_00401fd0(acStack_118,x_pos,local_18);
    } while (iVar1 < 100);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 100);
  return;
}


// Assembly code:
// 00547c00: PUSH EBX
//   Label: core_path.cpp_CPathMap_previewPathfinding_FUN_00547c00
// 00547c01: PUSH ESI
// 00547c02: PUSH EDI
// 00547c03: PUSH EBP
// 00547c04: SUB ESP,0x10c
// 00547c0a: XOR EBP,EBP
// 00547c0c: MOV ECX,0x441
// 00547c11: MOV dword ptr [ESP + 0x104],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 00547c18: MOV dword ptr [ESP + 0x108],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00547c1f: MOV EAX,dword ptr [ESP + 0x108]
//   Label: LAB_00547c1f
//   XREF to: Stack[-0x14] (READ)
// 00547c26: MOV EDI,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x18] (READ)
// 00547c2d: XOR ESI,ESI
// 00547c2f: XOR EBX,EBX
// 00547c31: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00547c38: XOR EAX,EAX
//   Label: LAB_00547c38
// 00547c3a: MOV AL,byte ptr [EDI + 0x30d2858]
//   XREF to: 030d2858 (DATA)
//   XREF to: 030d2859 (DATA)
//   XREF to: 030d28bc (DATA)
// 00547c40: MOV EDX,dword ptr [EAX*0x4 + 0x680c50]
//   XREF to: 00680c50 (DATA)
// 00547c47: PUSH EDX
// 00547c48: PUSH 0x63ea24
//   XREF to: 0063ea24 (DATA)
// 00547c4d: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x11c] (DATA)
// 00547c51: PUSH EAX
// 00547c52: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00547c57: MOV ECX,dword ptr [0x030c3ddc]
//   XREF to: 030c3ddc (READ)
// 00547c5d: ADD ESP,0xc
// 00547c60: CMP EBX,ECX
// 00547c62: JNZ 0x00547c70
//   XREF to: 00547c70 (CONDITIONAL_JUMP)
// 00547c64: CMP EBP,dword ptr [0x030c3de0]
//   XREF to: 030c3de0 (READ)
// 00547c6a: JNZ 0x00547c70
//   XREF to: 00547c70 (CONDITIONAL_JUMP)
// 00547c6c: MOV byte ptr [ESP],0x73
//   XREF to: Stack[-0x11c] (DATA)
// 00547c70: CMP EBX,dword ptr [0x030c3de4]
//   Label: LAB_00547c70
//   XREF to: 030c3de4 (READ)
// 00547c76: JNZ 0x00547c84
//   XREF to: 00547c84 (CONDITIONAL_JUMP)
// 00547c78: CMP EBP,dword ptr [0x030c3de8]
//   XREF to: 030c3de8 (READ)
// 00547c7e: JNZ 0x00547c84
//   XREF to: 00547c84 (CONDITIONAL_JUMP)
// 00547c80: MOV byte ptr [ESP],0x64
//   XREF to: Stack[-0x11c] (DATA)
// 00547c84: MOV EAX,dword ptr [ESP + 0x100]
//   Label: LAB_00547c84
//   XREF to: Stack[-0x1c] (READ)
// 00547c8b: PUSH EAX
// 00547c8c: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00547c91: MOV EDX,EAX
// 00547c93: SAR EDX,0x1f
// 00547c96: SUB EAX,EDX
// 00547c98: SAR EAX,0x1
// 00547c9a: ADD EAX,ESI
// 00547c9c: PUSH EAX
// 00547c9d: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x11c] (DATA)
// 00547ca1: INC EDI
// 00547ca2: PUSH EAX
// 00547ca3: INC EBX
// 00547ca4: ADD ESI,0xe
// 00547ca7: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00547cac: ADD ESP,0xc
// 00547caf: CMP EBX,0x64
// 00547cb2: JL 0x00547c38
//   XREF to: 00547c38 (CONDITIONAL_JUMP)
// 00547cb4: MOV ECX,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x14] (READ)
// 00547cbb: MOV EDX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x18] (READ)
// 00547cc2: INC EBP
// 00547cc3: SUB ECX,0xb
// 00547cc6: ADD EDX,0x64
// 00547cc9: MOV dword ptr [ESP + 0x108],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00547cd0: MOV dword ptr [ESP + 0x104],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00547cd7: CMP EBP,0x64
// 00547cda: JL 0x00547c1f
//   XREF to: 00547c1f (CONDITIONAL_JUMP)
// 00547ce0: ADD ESP,0x10c
// 00547ce6: POP EBP
// 00547ce7: POP EDI
// 00547ce8: POP ESI
// 00547ce9: POP EBX
// 00547cea: LEA EAX,[EAX]
// 00547cf0: RET
