// Name: shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590
// Address: 004a2590
// Address Range: [[004a2590, 004a2659]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590(CEditorTools * this_ptr, char * output_buffer)
// Cross-references:
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da9f7 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db020 [UNCONDITIONAL_CALL]
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 00507918 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 00538a65 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_004a257c = 004a25cc
//   TerminatedCString s_Blocks_d_Total_1fk_Max_1_006235d2
//   TerminatedCString s_Heap_is_empty_006235f5
//   undefined4 s_eap_is_empty._006235f6
//   undefined4 s_ap_is_empty._006235f7
//   TerminatedCString s_Memory_corruption_detect_00623604
//   undefined4 s_emory_corruption_detected!_00623605
//   undefined4 s_mory_corruption_detected!_00623606
//   undefined4 s_ory_corruption_detected!_00623607
//   double g_BytesToKilobytesScale = 0.0009765625
// Function calls:
//   crt_heap.c_heapCheckWrapper_FUN_006012c0
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590
          (CEditorTools *this_ptr,char *output_buffer)

{
  char cVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint local_1e;
  int iStack_1a;
  
  iVar3 = 0;
  iVar6 = 0;
  uVar4 = 0;
  while (iVar2 = crt_heap_c_heapCheckWrapper_FUN_006012c0(&stack0xffffffd8), iVar2 == 0) {
    if (iStack_1a == 0) {
      iVar3 = iVar3 + 1;
      iVar6 = iVar6 + local_1e;
      if (uVar4 < local_1e) {
        uVar4 = local_1e;
      }
    }
  }
  switch(iVar2) {
  default:
    pcVar5 = "Memory corruption detected!";
    break;
  case 4:
    if (0 < iVar3) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (output_buffer,"Blocks: %d Total: %.1fk Max: %.1fk",iVar3,
                 (double)iVar6 * g_BytesToKilobytesScale,
                 (double)(int)uVar4 * g_BytesToKilobytesScale);
      return;
    }
  case 1:
    pcVar5 = "Heap is empty.";
  }
  do {
    cVar1 = *pcVar5;
    *output_buffer = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    output_buffer[1] = cVar1;
    output_buffer = output_buffer + 2;
  } while (cVar1 != '\0');
  return;
}


// Assembly code:
// 004a2590: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590
// 004a2591: PUSH ESI
// 004a2592: PUSH EDI
// 004a2593: PUSH EBP
// 004a2594: MOV EBP,ESP
// 004a2596: SUB ESP,0x14
// 004a2599: AND ESP,0xfffffff8
// 004a259c: XOR EDX,EDX
// 004a259e: XOR EBX,EBX
// 004a25a0: XOR EDI,EDI
// 004a25a2: XOR ESI,ESI
// 004a25a4: MOV word ptr [ESP + 0x4],DX
//   XREF to: Stack[-0x24] (WRITE)
// 004a25a9: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x28] (DATA)
// 004a25ac: MOV EAX,ESP
//   Label: LAB_004a25ac
// 004a25ae: PUSH EAX
// 004a25af: CALL crt_heap.c_heapCheckWrapper_FUN_006012c0
//   XREF to: 006012c0 (UNCONDITIONAL_CALL)
// 004a25b4: ADD ESP,0x4
// 004a25b7: TEST EAX,EAX
// 004a25b9: JZ 0x004a25f5
//   XREF to: 004a25f5 (CONDITIONAL_JUMP)
// 004a25bb: DEC EAX
// 004a25bc: CMP EAX,0x4
// 004a25bf: JA 0x004a2650
//   XREF to: 004a2650 (CONDITIONAL_JUMP)
// 004a25c5: JMP dword ptr [EAX*0x4 + 0x4a257c]
//   Label: switchD
//   XREF to: 004a25cc (COMPUTED_JUMP)
//   XREF to: 004a260b (COMPUTED_JUMP)
//   XREF to: 004a2650 (COMPUTED_JUMP)
//   XREF to: 004a257c (DATA)
// 004a25cc: MOV ESI,0x6235f5
//   Label: caseD_1
//   XREF to: 006235f5 (DATA)
// 004a25d1: MOV EDI,dword ptr [EBP + 0x18]
//   Label: LAB_004a25d1
//   XREF to: Stack[0x8] (READ)
// 004a25d4: PUSH EDI
// 004a25d5: MOV AL,byte ptr [ESI]
//   Label: LAB_004a25d5
//   XREF to: 006235f5 (READ)
//   XREF to: 006235f7 (READ)
//   XREF to: 00623604 (READ)
//   XREF to: 00623606 (READ)
// 004a25d7: MOV byte ptr [EDI],AL
// 004a25d9: CMP AL,0x0
// 004a25db: JZ 0x004a25ed
//   XREF to: 004a25ed (CONDITIONAL_JUMP)
// 004a25dd: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006235f6 (READ)
//   XREF to: 00623605 (READ)
//   XREF to: 00623607 (READ)
// 004a25e0: ADD ESI,0x2
// 004a25e3: MOV byte ptr [EDI + 0x1],AL
// 004a25e6: ADD EDI,0x2
// 004a25e9: CMP AL,0x0
// 004a25eb: JNZ 0x004a25d5
//   XREF to: 004a25d5 (CONDITIONAL_JUMP)
// 004a25ed: POP EDI
//   Label: LAB_004a25ed
// 004a25ee: MOV ESP,EBP
// 004a25f0: POP EBP
// 004a25f1: POP EDI
// 004a25f2: POP ESI
// 004a25f3: POP EBX
// 004a25f4: RET
// 004a25f5: CMP dword ptr [ESP + 0xa],0x0
//   Label: LAB_004a25f5
//   XREF to: Stack[-0x1e] (READ)
// 004a25fa: JNZ 0x004a25ac
//   XREF to: 004a25ac (CONDITIONAL_JUMP)
// 004a25fc: MOV EAX,dword ptr [ESP + 0x6]
//   XREF to: Stack[-0x22] (READ)
// 004a2600: INC EBX
// 004a2601: ADD EDI,EAX
// 004a2603: CMP ESI,EAX
// 004a2605: JNC 0x004a25ac
//   XREF to: 004a25ac (CONDITIONAL_JUMP)
// 004a2607: MOV ESI,EAX
// 004a2609: JMP 0x004a25ac
//   XREF to: 004a25ac (UNCONDITIONAL_JUMP)
// 004a260b: TEST EBX,EBX
//   Label: caseD_4
// 004a260d: JLE 0x004a25cc
//   XREF to: 004a25cc (CONDITIONAL_JUMP)
// 004a260f: MOV dword ptr [ESP + 0x10],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 004a2613: FILD dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 004a2617: SUB ESP,0x8
// 004a261a: MOV dword ptr [ESP + 0x18],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 004a261e: FLD double ptr [0x00623626]
//   XREF to: 00623626 (READ)
// 004a2624: FXCH
// 004a2626: FMUL ST1
// 004a2628: FILD dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 004a262c: FMULP ST2
// 004a262e: FSTP double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 004a2631: SUB ESP,0x8
// 004a2634: FSTP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 004a2637: PUSH EBX
// 004a2638: PUSH 0x6235d2
//   XREF to: 006235d2 (DATA)
// 004a263d: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004a2640: PUSH ECX
// 004a2641: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004a2646: ADD ESP,0x1c
// 004a2649: MOV ESP,EBP
// 004a264b: POP EBP
// 004a264c: POP EDI
// 004a264d: POP ESI
// 004a264e: POP EBX
// 004a264f: RET
// 004a2650: MOV ESI,0x623604
//   Label: caseD_5
//   XREF to: 00623604 (DATA)
// 004a2655: JMP 0x004a25d1
//   XREF to: 004a25d1 (UNCONDITIONAL_JUMP)
