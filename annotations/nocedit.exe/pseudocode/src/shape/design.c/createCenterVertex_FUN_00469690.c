// Name: shape_design.c_createCenterVertex_FUN_00469690
// Address: 00469690
// Address Range: [[00469690, 00469849]]
// Convention: __cdecl
// Signature: void shape_design.c_createCenterVertex_FUN_00469690(void)
// Cross-references:
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f70e [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Enter_of_vertices_to_use_0061cf96
//   TerminatedCString s_Enter_vertex_0061cfb4
//   TerminatedCString s_New_vertex_created_d_Pre_0061cfc6
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdlib.c_atoi_FUN_005ffef0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void __cdecl shape_design_c_createCenterVertex_FUN_00469690(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  byte bVar5;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_14;
  
  bVar5 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (&stack0xffffff64,10,0,0,"Enter # of vertices to use : ");
  iVar2 = -1;
  pcVar4 = &stack0xffffff64;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  if (((iVar2 != -2) && (iVar2 = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffff64), 0 < iVar2)) &&
     (iVar2 < 9)) {
    local_28 = 0xb;
    local_24 = 0.0;
    local_20 = 0.0;
    local_1c = 0.0;
    for (local_14 = 0; local_14 < iVar2; local_14 = local_14 + 1) {
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                (&stack0xffffff64,10,0,local_28,"Enter vertex # : ");
      iVar3 = -1;
      pcVar4 = &stack0xffffff64;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
      } while (cVar1 != '\0');
      if (iVar3 == -2) {
        return;
      }
      iVar3 = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffff64);
      if (iVar3 < 0) {
        return;
      }
      if (g_VertexCount <= iVar3) {
        return;
      }
      local_24 = local_24 + g_LoadedVertices[iVar3].vertex.x;
      local_20 = local_20 + g_LoadedVertices[iVar3].vertex.y;
      local_1c = local_1c + g_LoadedVertices[iVar3].vertex.z;
      local_28 = local_28 + 0xb;
    }
    g_LoadedVertices[g_VertexCount].vertex.x = local_24 / (float)iVar2;
    g_LoadedVertices[g_VertexCount].vertex.y = local_20 / (float)iVar2;
    g_LoadedVertices[g_VertexCount].vertex.z = local_1c / (float)iVar2;
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff64,"New vertex created : %d.  Press a key...");
    engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff64,0,local_28 + 0xb);
    engine_2d_c_clearInputAndWait_FUN_00403260();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    g_VertexCount = g_VertexCount + 1;
  }
  return;
}


// Assembly code:
// 00469690: PUSH EBX
//   Label: shape_design.c_createCenterVertex_FUN_00469690
// 00469691: PUSH ESI
// 00469692: PUSH EDI
// 00469693: PUSH EBP
// 00469694: MOV EBP,ESP
// 00469696: SUB ESP,0x8c
// 0046969c: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 004696a1: MOV ECX,0x61cf96
//   XREF to: 0061cf96 (DATA)
// 004696a6: PUSH ECX
//   XREF to: 0061cf96 (DATA)
// 004696a7: PUSH 0x0
// 004696a9: PUSH 0x0
// 004696ab: PUSH 0xa
// 004696ad: LEA ECX,[EBP + 0xffffff74]
//   XREF to: Stack[-0x9c] (DATA)
// 004696b3: PUSH ECX
// 004696b4: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 004696b9: ADD ESP,0x14
// 004696bc: LEA EDI,[EBP + 0xffffff74]
//   XREF to: Stack[-0x9c] (DATA)
// 004696c2: SUB ECX,ECX
// 004696c4: DEC ECX
// 004696c5: XOR EAX,EAX
// 004696c7: SCASB.REPNE ES:EDI
// 004696c9: NOT ECX
// 004696cb: DEC ECX
// 004696cc: TEST ECX,ECX
// 004696ce: JNZ 0x004696d5
//   XREF to: 004696d5 (CONDITIONAL_JUMP)
// 004696d0: JMP 0x00469843
//   XREF to: 00469843 (UNCONDITIONAL_JUMP)
// 004696d5: LEA EAX,[EBP + 0xffffff74]
//   Label: LAB_004696d5
//   XREF to: Stack[-0x9c] (DATA)
// 004696db: PUSH EAX
// 004696dc: CALL crt_stdlib.c_atoi_FUN_005ffef0
//   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
// 004696e1: ADD ESP,0x4
// 004696e4: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004696e7: CMP dword ptr [EBP + -0x8],0x1
//   XREF to: Stack[-0x18] (READ)
// 004696eb: JL 0x004696f3
//   XREF to: 004696f3 (CONDITIONAL_JUMP)
// 004696ed: CMP dword ptr [EBP + -0x8],0x8
//   XREF to: Stack[-0x18] (READ)
// 004696f1: JLE 0x004696f8
//   XREF to: 004696f8 (CONDITIONAL_JUMP)
// 004696f3: JMP 0x00469843
//   Label: LAB_004696f3
//   XREF to: 00469843 (UNCONDITIONAL_JUMP)
// 004696f8: MOV dword ptr [EBP + -0x18],0xb
//   Label: LAB_004696f8
//   XREF to: Stack[-0x28] (WRITE)
// 004696ff: MOV dword ptr [EBP + -0x14],0x0
//   XREF to: Stack[-0x24] (WRITE)
// 00469706: MOV dword ptr [EBP + -0x10],0x0
//   XREF to: Stack[-0x20] (WRITE)
// 0046970d: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 00469714: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0046971b: JMP 0x00469723
//   XREF to: 00469723 (UNCONDITIONAL_JUMP)
// 0046971d: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0046971d
//   XREF to: Stack[-0x14] (READ)
// 00469720: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 00469723: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_00469723
//   XREF to: Stack[-0x14] (READ)
// 00469726: CMP EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00469729: JGE 0x004697c6
//   XREF to: 004697c6 (CONDITIONAL_JUMP)
// 0046972f: MOV ECX,0x61cfb4
//   XREF to: 0061cfb4 (DATA)
// 00469734: PUSH ECX
//   XREF to: 0061cfb4 (DATA)
// 00469735: MOV ECX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00469738: PUSH ECX
// 00469739: PUSH 0x0
// 0046973b: PUSH 0xa
// 0046973d: LEA ECX,[EBP + 0xffffff74]
//   XREF to: Stack[-0x9c] (DATA)
// 00469743: PUSH ECX
// 00469744: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 00469749: ADD ESP,0x14
// 0046974c: LEA EDI,[EBP + 0xffffff74]
//   XREF to: Stack[-0x9c] (DATA)
// 00469752: SUB ECX,ECX
// 00469754: DEC ECX
// 00469755: XOR EAX,EAX
// 00469757: SCASB.REPNE ES:EDI
// 00469759: NOT ECX
// 0046975b: DEC ECX
// 0046975c: TEST ECX,ECX
// 0046975e: JNZ 0x00469765
//   XREF to: 00469765 (CONDITIONAL_JUMP)
// 00469760: JMP 0x00469843
//   XREF to: 00469843 (UNCONDITIONAL_JUMP)
// 00469765: LEA EAX,[EBP + 0xffffff74]
//   Label: LAB_00469765
//   XREF to: Stack[-0x9c] (DATA)
// 0046976b: PUSH EAX
// 0046976c: CALL crt_stdlib.c_atoi_FUN_005ffef0
//   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
// 00469771: ADD ESP,0x4
// 00469774: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00469777: CMP dword ptr [EBP + -0x1c],0x0
//   XREF to: Stack[-0x2c] (READ)
// 0046977b: JL 0x00469788
//   XREF to: 00469788 (CONDITIONAL_JUMP)
// 0046977d: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00469780: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00469786: JL 0x0046978d
//   XREF to: 0046978d (CONDITIONAL_JUMP)
// 00469788: JMP 0x00469843
//   Label: LAB_00469788
//   XREF to: 00469843 (UNCONDITIONAL_JUMP)
// 0046978d: IMUL EAX,dword ptr [EBP + -0x1c],0x14
//   Label: LAB_0046978d
//   XREF to: Stack[-0x2c] (READ)
// 00469791: FLD float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00469794: FADD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0046979a: FSTP float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 0046979d: IMUL EAX,dword ptr [EBP + -0x1c],0x14
//   XREF to: Stack[-0x2c] (READ)
// 004697a1: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 004697a4: FADD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 004697aa: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 004697ad: IMUL EAX,dword ptr [EBP + -0x1c],0x14
//   XREF to: Stack[-0x2c] (READ)
// 004697b1: FLD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004697b4: FADD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 004697ba: FSTP float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 004697bd: ADD dword ptr [EBP + -0x18],0xb
//   XREF to: Stack[-0x28] (READ_WRITE)
// 004697c1: JMP 0x0046971d
//   XREF to: 0046971d (UNCONDITIONAL_JUMP)
// 004697c6: FILD dword ptr [EBP + -0x8]
//   Label: LAB_004697c6
//   XREF to: Stack[-0x18] (READ)
// 004697c9: FDIVR float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 004697cc: IMUL EAX,dword ptr [0x01626408],0x14
//   XREF to: 01626408 (READ)
// 004697d3: FSTP float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 004697d9: FILD dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004697dc: FDIVR float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 004697df: IMUL EAX,dword ptr [0x01626408],0x14
//   XREF to: 01626408 (READ)
// 004697e6: FSTP float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 004697ec: FILD dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004697ef: FDIVR float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004697f2: IMUL EAX,dword ptr [0x01626408],0x14
//   XREF to: 01626408 (READ)
// 004697f9: FSTP float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 004697ff: ADD dword ptr [EBP + -0x18],0xb
//   XREF to: Stack[-0x28] (READ_WRITE)
// 00469803: PUSH dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00469809: MOV EAX,0x61cfc6
//   XREF to: 0061cfc6 (DATA)
// 0046980e: PUSH EAX
//   XREF to: 0061cfc6 (DATA)
// 0046980f: LEA EAX,[EBP + 0xffffff74]
//   XREF to: Stack[-0x9c] (DATA)
// 00469815: PUSH EAX
// 00469816: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0046981b: ADD ESP,0xc
// 0046981e: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00469821: PUSH EAX
// 00469822: PUSH 0x0
// 00469824: LEA EAX,[EBP + 0xffffff74]
//   XREF to: Stack[-0x9c] (DATA)
// 0046982a: PUSH EAX
// 0046982b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00469830: ADD ESP,0xc
// 00469833: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00469838: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 0046983d: INC dword ptr [0x01626408]
//   XREF to: 01626408 (READ_WRITE)
// 00469843: MOV ESP,EBP
//   Label: LAB_00469843
// 00469845: POP EBP
// 00469846: POP EDI
// 00469847: POP ESI
// 00469848: POP EBX
// 00469849: RET
