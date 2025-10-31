// Name: cockpit_ckptutil.c_rasterizeEdgeEndpoints_FUN_004336e0
// Address: 004336e0
// Address Range: [[004336e0, 00433817]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_rasterizeEdgeEndpoints_FUN_004336e0(void * bitmap_buffer, SEdge * edge_list, int edge_count, int buffer_width, int buffer_height)
// Globals:
//   TerminatedCString s_Edge_out_of_range_edge_d_00617dbc
//   TerminatedCString s_cockpit_ckptutil_c_00617dd7
//   TerminatedCString s_Edge_out_of_range_edge_d_00617ded
//   TerminatedCString s_cockpit_ckptutil_c_00617e08
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_rasterizeEdgeEndpoints_FUN_004336e0
          (void *bitmap_buffer,SEdge *edge_list,int edge_count,int buffer_width,int buffer_height)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int iVar2;
  int iVar3;
  int iStack_118;
  char acStack_110 [252];
  undefined4 local_14;
  
  if (bitmap_buffer != (void *)0x0) {
    iVar3 = 0;
    local_14 = 0xfb;
    if (0 < edge_count) {
      iVar2 = buffer_width * buffer_height + -1;
      do {
        iVar1 = (int)edge_list->x0 + edge_list->y0 * buffer_width;
        if ((iVar1 < 0) || (iVar2 < iVar1)) {
          iStack_118 = iVar3;
          crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffeec,"Edge out of range: edge %d");
          g_CurrentFilename = "..\\cockpit\\ckptutil.c";
          g_CurrentLineNumber = 0x553;
          core_main_c_displayErrorAndQuit_FUN_00506f10((char *)&iStack_118);
        }
        *(undefined1 *)(iVar1 + (int)bitmap_buffer) = (undefined1)local_14;
        iVar1 = (int)edge_list->x1 + buffer_width * ((short)(edge_list->y1 * 2) >> 1);
        if ((iVar1 < 0) || (iVar2 < iVar1)) {
          iStack_118 = iVar3;
          crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffeec,"Edge out of range: edge %d");
          g_CurrentFilename = "..\\cockpit\\ckptutil.c";
          g_CurrentLineNumber = 0x55c;
          iStack_118 = 0x4337e5;
          core_main_c_displayErrorAndQuit_FUN_00506f10(acStack_110);
        }
        edge_list = edge_list + 1;
        iVar3 = iVar3 + 1;
        *(undefined1 *)(iVar1 + (int)bitmap_buffer) = (undefined1)local_14;
      } while (iVar3 < edge_count);
    }
  }
  return;
}


// Assembly code:
// 004336e0: PUSH EBX
//   Label: cockpit_ckptutil.c_rasterizeEdgeEndpoints_FUN_004336e0
// 004336e1: PUSH ESI
// 004336e2: PUSH EDI
// 004336e3: PUSH EBP
// 004336e4: SUB ESP,0x104
// 004336ea: CMP dword ptr [ESP + 0x118],0x0
//   XREF to: Stack[0x4] (READ)
// 004336f2: JZ 0x0043380d
//   XREF to: 0043380d (CONDITIONAL_JUMP)
// 004336f8: MOV ECX,0xfb
// 004336fd: MOV EBX,dword ptr [ESP + 0x120]
//   XREF to: Stack[0xc] (READ)
// 00433704: XOR EDI,EDI
// 00433706: MOV dword ptr [ESP + 0x100],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0043370d: TEST EBX,EBX
// 0043370f: JLE 0x0043380d
//   XREF to: 0043380d (CONDITIONAL_JUMP)
// 00433715: MOV EBP,dword ptr [ESP + 0x124]
//   XREF to: Stack[0x10] (READ)
// 0043371c: IMUL EBP,dword ptr [ESP + 0x128]
//   XREF to: Stack[0x14] (READ)
// 00433724: MOV ESI,dword ptr [ESP + 0x11c]
//   XREF to: Stack[0x8] (READ)
// 0043372b: DEC EBP
// 0043372c: MOV AX,word ptr [ESI + 0x2]
//   Label: LAB_0043372c
// 00433730: MOV EBX,dword ptr [ESP + 0x124]
//   XREF to: Stack[0x10] (READ)
// 00433737: MOVSX EDX,AX
// 0043373a: IMUL EDX,EBX
// 0043373d: MOV AX,word ptr [ESI]
// 00433740: MOVSX EBX,AX
// 00433743: ADD EBX,EDX
// 00433745: TEST EBX,EBX
// 00433747: JL 0x0043374d
//   XREF to: 0043374d (CONDITIONAL_JUMP)
// 00433749: CMP EBX,EBP
// 0043374b: JLE 0x00433780
//   XREF to: 00433780 (CONDITIONAL_JUMP)
// 0043374d: PUSH EDI
//   Label: LAB_0043374d
// 0043374e: PUSH 0x617dbc
//   XREF to: 00617dbc (DATA)
// 00433753: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x114] (DATA)
// 00433757: PUSH EAX
// 00433758: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0043375d: MOV EAX,0x617dd7
//   XREF to: 00617dd7 (DATA)
// 00433762: ADD ESP,0xc
// 00433765: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0043376a: MOV EAX,ESP
// 0043376c: MOV EDX,0x553
// 00433771: PUSH EAX
// 00433772: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00433778: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0043377d: ADD ESP,0x4
// 00433780: ADD EBX,dword ptr [ESP + 0x118]
//   Label: LAB_00433780
//   XREF to: Stack[0x4] (READ)
// 00433787: MOV AL,byte ptr [ESP + 0x100]
//   XREF to: Stack[-0x14] (READ)
// 0043378e: MOV byte ptr [EBX],AL
// 00433790: MOV AX,word ptr [ESI + 0x6]
// 00433794: ADD EAX,EAX
// 00433796: SAR AX,0x1
// 00433799: MOV EDX,dword ptr [ESP + 0x124]
//   XREF to: Stack[0x10] (READ)
// 004337a0: CWDE
// 004337a1: IMUL EDX,EAX
// 004337a4: MOV AX,word ptr [ESI + 0x4]
// 004337a8: MOVSX EBX,AX
// 004337ab: ADD EBX,EDX
// 004337ad: TEST EBX,EBX
// 004337af: JL 0x004337b5
//   XREF to: 004337b5 (CONDITIONAL_JUMP)
// 004337b1: CMP EBX,EBP
// 004337b3: JLE 0x004337e8
//   XREF to: 004337e8 (CONDITIONAL_JUMP)
// 004337b5: PUSH EDI
//   Label: LAB_004337b5
// 004337b6: PUSH 0x617ded
//   XREF to: 00617ded (DATA)
// 004337bb: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x114] (DATA)
// 004337bf: PUSH EAX
// 004337c0: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004337c5: MOV EAX,0x617e08
//   XREF to: 00617e08 (DATA)
// 004337ca: ADD ESP,0xc
// 004337cd: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 004337d2: MOV EAX,ESP
// 004337d4: MOV EDX,0x55c
// 004337d9: PUSH EAX
// 004337da: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 004337e0: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004337e5: ADD ESP,0x4
// 004337e8: MOV EAX,dword ptr [ESP + 0x118]
//   Label: LAB_004337e8
//   XREF to: Stack[0x4] (READ)
// 004337ef: MOV EDX,dword ptr [ESP + 0x120]
//   XREF to: Stack[0xc] (READ)
// 004337f6: ADD ESI,0x8
// 004337f9: ADD EBX,EAX
// 004337fb: MOV AL,byte ptr [ESP + 0x100]
//   XREF to: Stack[-0x14] (READ)
// 00433802: INC EDI
// 00433803: MOV byte ptr [EBX],AL
// 00433805: CMP EDI,EDX
// 00433807: JL 0x0043372c
//   XREF to: 0043372c (CONDITIONAL_JUMP)
// 0043380d: ADD ESP,0x104
//   Label: LAB_0043380d
// 00433813: POP EBP
// 00433814: POP EDI
// 00433815: POP ESI
// 00433816: POP EBX
// 00433817: RET
