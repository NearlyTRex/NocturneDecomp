// Name: shape_meshlod.cpp_CLodMesh_replayLodGeneration_FUN_005173f0
// Address: 005173f0
// Address Range: [[005173f0, 0051752b]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_replayLodGeneration_FUN_005173f0(CLodMesh * this_ptr)
// Globals:
//   TerminatedCString s_shape_meshlod_cpp_00637781
//   TerminatedCString s_rt_00637796
//   TerminatedCString s_Can_t_open_s_00637799
//   TerminatedCString s_Replaying_006377a7
//   TerminatedCString s_shape_meshlod_cpp_006377b4
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   TerminatedCString s_replay_txt_0067d4b8
//   undefined4 s_xt_0067d4c0
//   undefined4 s__0067d4c2
//   CEditorTools g_CEditorToolsPtr
//   int g_LodReplayMode
// Function calls:
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0
//   shape_meshlod.cpp_CLodMesh_collapseEdge_FUN_00517630
//   shape_meshlod.cpp_CLodMesh_eqLoad_FUN_0051cdf0
//   shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_00516d50
//   shape_meshlod.cpp_CLodMesh_loadReplayData_FUN_0051d180

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_replayLodGeneration_FUN_005173f0(CLodMesh *this_ptr)

{
  CLodEdge *pCVar1;
  FILE *file_handle;
  BADSPACEBASE *in_ESP;
  int iVar2;
  int iVar3;
  byte bVar4;
  char acStackY_1402 [1018];
  undefined2 auStackY_1008 [2026];
  char *filename;
  char *directory;
  char *mode;
  char *source_file;
  int iVar5;
  
  bVar4 = 0;
  shape_meshlod_cpp_CLodMesh_initializeLodGeneration_FUN_00516d50(this_ptr);
  iVar5 = 0x5f5;
  source_file = "..\\shape\\meshlod.cpp";
  mode = "rt";
  directory = (char *)0x0;
  filename = &stack0xffffffe0;
  *(undefined4 *)(&stack0xffffffe4 + (uint)bVar4 * -8) =
       *(undefined4 *)("replay.txt" + (uint)bVar4 * -8 + 4);
  *(undefined2 *)(&stack0xffffffe8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(undefined2 *)("replay.txt" + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  *(char *)((int)(&stack0xffffffe8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) +
           ((uint)bVar4 * -2 + 1) * 2) =
       ("replay.txt" + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8)[((uint)bVar4 * -2 + 1) * 2]
  ;
  file_handle = shape_memdbg_cpp_openFile_FUN_0050f7a0(filename,directory,mode,source_file,iVar5);
  if (file_handle == (FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s");
    return;
  }
  shape_meshlod_cpp_CLodMesh_loadReplayData_FUN_0051d180(this_ptr,file_handle);
  iVar2 = 0;
  shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
            (g_CEditorToolsPtr,"Replaying...");
  iVar5 = g_LodReplayMode;
  g_LodReplayMode = 1;
  if (0 < this_ptr->lod_level_count) {
    iVar3 = 0;
    do {
      pCVar1 = this_ptr->lod_levels_ptr;
      iVar2 = iVar2 + 1;
      shape_meshlod_cpp_CLodMesh_collapseEdge_FUN_00517630
                (this_ptr,*(int *)((int)pCVar1->adjacent_tri_indices + iVar3 + -0x28),
                 *(int *)((int)pCVar1->adjacent_tri_indices + iVar3 + -0x24),
                 *(float *)((int)pCVar1->adjacent_tri_indices + iVar3 + -0x18));
      iVar3 = iVar3 + 0xf0;
      shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                (g_CEditorToolsPtr,(float)iVar2,(float)this_ptr->lod_level_count);
      iVar5 = iVar2;
    } while (iVar2 < this_ptr->lod_level_count);
  }
  g_LodReplayMode = iVar5;
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  shape_meshlod_cpp_CLodMesh_eqLoad_FUN_0051cdf0(this_ptr,file_handle);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\shape\\meshlod.cpp",0x60b);
  return;
}


// Assembly code:
// 005173f0: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_replayLodGeneration_FUN_005173f0
// 005173f1: PUSH ESI
// 005173f2: PUSH EDI
// 005173f3: PUSH EBP
// 005173f4: SUB ESP,0x14
// 005173f7: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005173fb: PUSH EBX
// 005173fc: CALL shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_00516d50
//   XREF to: 00516d50 (UNCONDITIONAL_CALL)
// 00517401: ADD ESP,0x4
// 00517404: PUSH 0x5f5
// 00517409: PUSH 0x637781
//   XREF to: 00637781 (DATA)
// 0051740e: PUSH 0x637796
//   XREF to: 00637796 (DATA)
// 00517413: LEA EDI,[ESP + 0xc]
//   XREF to: Stack[-0x24] (DATA)
// 00517417: PUSH 0x0
// 00517419: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x24] (DATA)
// 0051741d: MOV ESI,0x67d4b8
//   XREF to: 0067d4b8 (DATA)
// 00517422: PUSH EAX
// 00517423: MOVSD ES:EDI,ESI
//   XREF to: 0067d4b8 (READ)
// 00517424: MOVSD ES:EDI,ESI
//   XREF to: 0067d4bc (READ)
// 00517425: MOVSW ES:EDI,ESI
//   XREF to: 0067d4c0 (READ)
// 00517427: MOVSB ES:EDI,ESI
//   XREF to: 0067d4c2 (READ)
// 00517428: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 0051742d: ADD ESP,0x14
// 00517430: MOV EBP,EAX
// 00517432: TEST EAX,EAX
// 00517434: JZ 0x0051750d
//   XREF to: 0051750d (CONDITIONAL_JUMP)
// 0051743a: PUSH EAX
// 0051743b: PUSH EBX
// 0051743c: CALL shape_meshlod.cpp_CLodMesh_loadReplayData_FUN_0051d180
//   XREF to: 0051d180 (UNCONDITIONAL_CALL)
// 00517441: ADD ESP,0x8
// 00517444: PUSH 0x6377a7
//   XREF to: 006377a7 (DATA)
// 00517449: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0051744f: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 00517450: XOR ESI,ESI
// 00517452: CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   XREF to: 004a0430 (UNCONDITIONAL_CALL)
// 00517457: MOV ECX,0x1
// 0051745c: MOV EAX,[0x02f33330]
//   XREF to: 02f33330 (READ)
// 00517461: ADD ESP,0x8
// 00517464: MOV EDI,dword ptr [EBX + 0x4c]
// 00517467: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0051746b: MOV dword ptr [0x02f33330],ECX
//   XREF to: 02f33330 (WRITE)
// 00517471: TEST EDI,EDI
// 00517473: JLE 0x005174d0
//   XREF to: 005174d0 (CONDITIONAL_JUMP)
// 00517475: XOR EDI,EDI
// 00517477: MOV EAX,dword ptr [EBX + 0x50]
//   Label: LAB_00517477
// 0051747a: MOV EDX,dword ptr [EDI + EAX*0x1 + 0x4]
// 0051747e: PUSH dword ptr [EDI + EAX*0x1 + 0x10]
// 00517482: PUSH EDX
// 00517483: MOV ECX,dword ptr [EDI + EAX*0x1]
// 00517486: PUSH ECX
// 00517487: PUSH EBX
// 00517488: INC ESI
// 00517489: CALL shape_meshlod.cpp_CLodMesh_collapseEdge_FUN_00517630
//   XREF to: 00517630 (UNCONDITIONAL_CALL)
// 0051748e: ADD ESP,0x10
// 00517491: FILD dword ptr [EBX + 0x4c]
// 00517494: SUB ESP,0x4
// 00517497: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 0051749b: FSTP float ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0051749e: FILD dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 005174a2: SUB ESP,0x4
// 005174a5: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 005174aa: FSTP float ptr [ESP]
//   XREF to: Stack[-0x2c] (DATA)
// 005174ad: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 005174ae: ADD EDI,0xf0
// 005174b4: CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   XREF to: 004a0530 (UNCONDITIONAL_CALL)
// 005174b9: MOV EDX,dword ptr [EBX + 0x4c]
// 005174bc: ADD ESP,0xc
// 005174bf: CMP ESI,EDX
// 005174c1: JL 0x00517477
//   XREF to: 00517477 (CONDITIONAL_JUMP)
// 005174c3: LEA EAX,[EAX]
// 005174c9: LEA EDX,[EDX]
// 005174cf: NOP
// 005174d0: MOV ECX,dword ptr [0x00678a60]
//   Label: LAB_005174d0
//   XREF to: 00678a60 (READ)
// 005174d6: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 005174da: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 005174db: MOV [0x02f33330],EAX
//   XREF to: 02f33330 (WRITE)
// 005174e0: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 005174e5: ADD ESP,0x4
// 005174e8: PUSH EBP
// 005174e9: PUSH EBX
// 005174ea: CALL shape_meshlod.cpp_CLodMesh_eqLoad_FUN_0051cdf0
//   XREF to: 0051cdf0 (UNCONDITIONAL_CALL)
// 005174ef: ADD ESP,0x8
// 005174f2: PUSH 0x60b
// 005174f7: PUSH 0x6377b4
//   XREF to: 006377b4 (DATA)
// 005174fc: PUSH EBP
// 005174fd: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00517502: ADD ESP,0xc
// 00517505: ADD ESP,0x14
// 00517508: POP EBP
// 00517509: POP EDI
// 0051750a: POP ESI
// 0051750b: POP EBX
// 0051750c: RET
// 0051750d: MOV EAX,ESP
//   Label: LAB_0051750d
// 0051750f: PUSH EAX
// 00517510: PUSH 0x637799
//   XREF to: 00637799 (DATA)
// 00517515: MOV EBP,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0051751b: PUSH EBP
//   XREF to: 02cf1cd4 (DATA)
// 0051751c: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00517521: ADD ESP,0xc
// 00517524: ADD ESP,0x14
// 00517527: POP EBP
// 00517528: POP EDI
// 00517529: POP ESI
// 0051752a: POP EBX
// 0051752b: RET
