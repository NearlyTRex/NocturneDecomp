// Name: shape_design.c_configureSinglePassPolygonReduction_FUN_00465560
// Address: 00465560
// Address Range: [[00465560, 0046580e]]
// Convention: __cdecl
// Signature: void shape_design.c_configureSinglePassPolygonReduction_FUN_00465560(int ui_mode)
// Cross-references:
//   shape_design.c_polygonReducer_FUN_004654e0 (004654e0) at 00465551 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Enter_tolerance_angle_8__0061c50b
//   TerminatedCString s_Ignore_different_part_na_0061c52a
//   TerminatedCString s_Scanning_polygons_0061c54e
//   double g_SinglePassDegreesToRadiansConversion = 0.0174532925200000
//   TerminatedCString s_Original_polygons_d_New__0061c56e
//   TerminatedCString s_Hit_a_key_0061c5a7
//   undefined4 s_Hit_a_key..._0061c5a8
//   undefined4 s_Hit_a_key..._0061c5a9
//   undefined4 s_it_a_key..._0061c5aa
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e9a88
//   int g_PolygonOptimizationPasses
// Function calls:
//   crt_ctype.c_toupper_FUN_005ff9e0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_strcmp_FUN_005fef20
//   crt_string.c_strtod_FUN_005ff0f3
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   shape_design.c_findVertexMatches_FUN_00461ae0
//   shape_design.c_mergeTrianglesIntoQuad_FUN_00462190
//   shape_design.c_removeDegeneratePolygons_FUN_00465310
//   shape_design.c_removeDuplicatePolygons_FUN_004651b0
//   shape_design.c_removeUnusedVertices_FUN_00463830
//   shape_design.c_validatePolygonNormals_FUN_00461d80
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void __cdecl shape_design_c_configureSinglePassPolygonReduction_FUN_00465560(int ui_mode)

{
  char cVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  byte bVar7;
  float10 fVar8;
  double dVar9;
  byte bVar10;
  ulonglong in_stack_ffffff8c;
  int local_1c;
  int local_18;
  float local_14;
  char *pcVar6;
  
  bVar7 = 0;
  local_1c = 0;
  if (ui_mode < 1) {
    in_stack_ffffff8c = in_stack_ffffff8c & 0xffffffffffffff00;
  }
  else {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_getInputWithPrompt_FUN_004032c0
              (&stack0xffffff8c,0x14,0,0,"Enter tolerance angle [8.5] : ");
  }
  local_14 = 8.5;
  iVar3 = -1;
  pcVar6 = &stack0xffffff8c;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
    dVar9 = crt_string_c_strtod_FUN_005ff0f3((char *)in_stack_ffffff8c);
    local_14 = (float)dVar9;
  }
  bVar10 = (byte)in_stack_ffffff8c;
  if (0 < ui_mode) {
    engine_2d_c_getInputWithPrompt_FUN_004032c0
              (&stack0xffffff8c,0x14,0,0x16,"Ignore different part names? [y] : ");
    iVar3 = crt_ctype_c_toupper_FUN_005ff9e0((uint)bVar10);
    if (iVar3 == 0x4e) {
      local_1c = 1;
    }
  }
  if (-1 < ui_mode) {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Scanning polygons...",0,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  }
  fVar8 = (float10)fcos((float10)local_14 * (float10)g_SinglePassDegreesToRadiansConversion);
  shape_design_c_removeDuplicatePolygons_FUN_004651b0(local_1c);
  shape_design_c_removeDegeneratePolygons_FUN_00465310();
  for (local_18 = 0; local_18 < g_PolygonCount + -1; local_18 = local_18 + 1) {
    iVar3 = local_18 + 1;
    if ((((g_ModelPolygonData[local_18].vertex_indices_count == 3) &&
         (g_ModelPolygonData[iVar3].vertex_indices_count == 3)) &&
        (iVar2 = shape_design_c_validatePolygonNormals_FUN_00461d80
                           (g_ModelPolygonData + local_18,g_ModelPolygonData + iVar3,
                            (double)(float)fVar8), iVar2 != 0)) &&
       (((iVar2 = shape_design_c_findVertexMatches_FUN_00461ae0
                            ((int *)g_ModelPolygonData[local_18].vertex_indices,
                             (int *)g_ModelPolygonData[iVar3].vertex_indices,3,3), iVar2 != 0 &&
         (iVar2 = crt_string_c_strcmp_FUN_005fef20
                            (g_ModelPolygonData[local_18].lightmap_name,
                             g_ModelPolygonData[iVar3].lightmap_name), iVar2 == 0)) &&
        ((local_1c == 0 ||
         (g_ModelPolygonData[local_18].part_assignment == g_ModelPolygonData[iVar3].part_assignment)
         ))))) {
      shape_design_c_mergeTrianglesIntoQuad_FUN_00462190(local_18,iVar3);
    }
  }
  shape_design_c_removeDuplicatePolygons_FUN_004651b0(local_1c);
  shape_design_c_removeDegeneratePolygons_FUN_00465310();
  shape_design_c_removeUnusedVertices_FUN_00463830();
  g_PolygonOptimizationPasses = g_PolygonOptimizationPasses + 1;
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff8c,"Original polygons: %d    New total: %d\n\nTotal passes: %d");
  if (0 < ui_mode) {
    pcVar4 = "\n\nHit a key...";
    iVar3 = -1;
    pcVar6 = &stack0xffffff8c;
    do {
      pcVar5 = pcVar6;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar5 = pcVar6 + (uint)bVar7 * -2 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar5;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar1 = *pcVar4;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
  }
  if (-1 < ui_mode) {
    engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff8c,0,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  }
  if (0 < ui_mode) {
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  }
  return;
}


// Assembly code:
// 00465560: PUSH EBX
//   Label: shape_design.c_configureSinglePassPolygonReduction_FUN_00465560
// 00465561: PUSH ESI
// 00465562: PUSH EDI
// 00465563: PUSH EBP
// 00465564: MOV EBP,ESP
// 00465566: SUB ESP,0x6c
// 0046556c: MOV EAX,[0x016e990c]
//   XREF to: 016e990c (READ)
// 00465571: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00465574: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 0046557b: CMP dword ptr [EBP + 0x14],0x0
//   XREF to: Stack[0x4] (READ)
// 0046557f: JLE 0x004655a0
//   XREF to: 004655a0 (CONDITIONAL_JUMP)
// 00465581: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00465586: MOV EAX,0x61c50b
//   XREF to: 0061c50b (DATA)
// 0046558b: PUSH EAX
//   XREF to: 0061c50b (DATA)
// 0046558c: PUSH 0x0
// 0046558e: PUSH 0x0
// 00465590: PUSH 0x14
// 00465592: LEA EAX,[EBP + -0x64]
//   XREF to: Stack[-0x74] (DATA)
// 00465595: PUSH EAX
// 00465596: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 0046559b: ADD ESP,0x14
// 0046559e: JMP 0x004655a4
//   XREF to: 004655a4 (UNCONDITIONAL_JUMP)
// 004655a0: MOV byte ptr [EBP + -0x64],0x0
//   Label: LAB_004655a0
//   XREF to: Stack[-0x74] (WRITE)
// 004655a4: MOV dword ptr [EBP + -0x4],0x41080000
//   Label: LAB_004655a4
//   XREF to: Stack[-0x14] (WRITE)
// 004655ab: LEA EDI,[EBP + -0x64]
//   XREF to: Stack[-0x74] (DATA)
// 004655ae: SUB ECX,ECX
// 004655b0: DEC ECX
// 004655b1: XOR EAX,EAX
// 004655b3: SCASB.REPNE ES:EDI
// 004655b5: NOT ECX
// 004655b7: DEC ECX
// 004655b8: TEST ECX,ECX
// 004655ba: JZ 0x004655d4
//   XREF to: 004655d4 (CONDITIONAL_JUMP)
// 004655bc: LEA EAX,[EBP + -0x64]
//   XREF to: Stack[-0x74] (DATA)
// 004655bf: PUSH EAX
// 004655c0: CALL crt_string.c_strtod_FUN_005ff0f3
//   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)
// 004655c5: MOV dword ptr [EBP + -0x6c],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 004655c8: MOV dword ptr [EBP + -0x68],EDX
//   XREF to: Stack[-0x78] (WRITE)
// 004655cb: FLD double ptr [EBP + -0x6c]
//   XREF to: Stack[-0x7c] (READ)
// 004655ce: ADD ESP,0x4
// 004655d1: FSTP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 004655d4: CMP dword ptr [EBP + 0x14],0x0
//   Label: LAB_004655d4
//   XREF to: Stack[0x4] (READ)
// 004655d8: JLE 0x0046560c
//   XREF to: 0046560c (CONDITIONAL_JUMP)
// 004655da: MOV EAX,0x61c52a
//   XREF to: 0061c52a (DATA)
// 004655df: PUSH EAX
//   XREF to: 0061c52a (DATA)
// 004655e0: PUSH 0x16
// 004655e2: PUSH 0x0
// 004655e4: PUSH 0x14
// 004655e6: LEA EAX,[EBP + -0x64]
//   XREF to: Stack[-0x74] (DATA)
// 004655e9: PUSH EAX
// 004655ea: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 004655ef: ADD ESP,0x14
// 004655f2: XOR EAX,EAX
// 004655f4: MOV AL,byte ptr [EBP + -0x64]
//   XREF to: Stack[-0x74] (READ)
// 004655f7: PUSH EAX
// 004655f8: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004655fd: ADD ESP,0x4
// 00465600: CMP EAX,0x4e
// 00465603: JNZ 0x0046560c
//   XREF to: 0046560c (CONDITIONAL_JUMP)
// 00465605: MOV dword ptr [EBP + -0xc],0x1
//   XREF to: Stack[-0x1c] (WRITE)
// 0046560c: CMP dword ptr [EBP + 0x14],0x0
//   Label: LAB_0046560c
//   XREF to: Stack[0x4] (READ)
// 00465610: JL 0x0046562e
//   XREF to: 0046562e (CONDITIONAL_JUMP)
// 00465612: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00465617: PUSH 0x0
// 00465619: PUSH 0x0
// 0046561b: MOV EAX,0x61c54e
//   XREF to: 0061c54e (PARAM)
// 00465620: PUSH EAX
//   XREF to: 0061c54e (DATA)
// 00465621: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00465626: ADD ESP,0xc
// 00465629: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0046562e: FLD float ptr [EBP + -0x4]
//   Label: LAB_0046562e
//   XREF to: Stack[-0x14] (READ)
// 00465631: FMUL double ptr [0x0061c566]
//   XREF to: 0061c566 (READ)
// 00465637: FCOS
// 00465639: FSTP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 0046563c: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046563f: PUSH EAX
// 00465640: CALL shape_design.c_removeDuplicatePolygons_FUN_004651b0
//   XREF to: 004651b0 (UNCONDITIONAL_CALL)
// 00465645: ADD ESP,0x4
// 00465648: CALL shape_design.c_removeDegeneratePolygons_FUN_00465310
//   XREF to: 00465310 (UNCONDITIONAL_CALL)
// 0046564d: MOV dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (WRITE)
// 00465654: JMP 0x0046565c
//   XREF to: 0046565c (UNCONDITIONAL_JUMP)
// 00465656: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_00465656
//   XREF to: Stack[-0x18] (READ)
// 00465659: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 0046565c: MOV EAX,[0x016e990c]
//   Label: LAB_0046565c
//   XREF to: 016e990c (READ)
// 00465661: DEC EAX
// 00465662: CMP EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00465665: JLE 0x00465774
//   XREF to: 00465774 (CONDITIONAL_JUMP)
// 0046566b: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0046566e: INC EAX
// 0046566f: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00465672: IMUL EAX,dword ptr [EBP + -0x8],0x184
//   XREF to: Stack[-0x18] (READ)
// 00465679: CMP dword ptr [EAX + 0x16e99b4],0x3
//   XREF to: 016e99b4 (DATA)
// 00465680: JZ 0x00465687
//   XREF to: 00465687 (CONDITIONAL_JUMP)
// 00465682: JMP 0x0046576f
//   XREF to: 0046576f (UNCONDITIONAL_JUMP)
// 00465687: IMUL EAX,dword ptr [EBP + -0x14],0x184
//   Label: LAB_00465687
//   XREF to: Stack[-0x24] (READ)
// 0046568e: CMP dword ptr [EAX + 0x16e99b4],0x3
//   XREF to: 016e99b4 (DATA)
// 00465695: JZ 0x0046569c
//   XREF to: 0046569c (CONDITIONAL_JUMP)
// 00465697: JMP 0x0046576f
//   XREF to: 0046576f (UNCONDITIONAL_JUMP)
// 0046569c: FLD float ptr [EBP + -0x4]
//   Label: LAB_0046569c
//   XREF to: Stack[-0x14] (READ)
// 0046569f: SUB ESP,0x8
// 004656a2: FSTP double ptr [ESP]
//   XREF to: Stack[-0x84] (DATA)
// 004656a5: IMUL EDX,dword ptr [EBP + -0x14],0x184
//   XREF to: Stack[-0x24] (READ)
// 004656ac: MOV EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 004656b1: ADD EAX,EDX
// 004656b3: PUSH EAX
// 004656b4: IMUL EDX,dword ptr [EBP + -0x8],0x184
//   XREF to: Stack[-0x18] (READ)
// 004656bb: MOV EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 004656c0: ADD EAX,EDX
// 004656c2: PUSH EAX
// 004656c3: CALL shape_design.c_validatePolygonNormals_FUN_00461d80
//   XREF to: 00461d80 (UNCONDITIONAL_CALL)
// 004656c8: ADD ESP,0x10
// 004656cb: TEST EAX,EAX
// 004656cd: JZ 0x00465707
//   XREF to: 00465707 (CONDITIONAL_JUMP)
// 004656cf: PUSH 0x3
// 004656d1: PUSH 0x3
// 004656d3: IMUL EDX,dword ptr [EBP + -0x14],0x184
//   XREF to: Stack[-0x24] (READ)
// 004656da: MOV EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 004656df: ADD EAX,EDX
// 004656e1: ADD EAX,0xb8
// 004656e6: PUSH EAX
// 004656e7: IMUL EDX,dword ptr [EBP + -0x8],0x184
//   XREF to: Stack[-0x18] (READ)
// 004656ee: MOV EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 004656f3: ADD EAX,EDX
// 004656f5: ADD EAX,0xb8
// 004656fa: PUSH EAX
// 004656fb: CALL shape_design.c_findVertexMatches_FUN_00461ae0
//   XREF to: 00461ae0 (UNCONDITIONAL_CALL)
// 00465700: ADD ESP,0x10
// 00465703: TEST EAX,EAX
// 00465705: JNZ 0x00465709
//   XREF to: 00465709 (CONDITIONAL_JUMP)
// 00465707: JMP 0x00465739
//   Label: LAB_00465707
//   XREF to: 00465739 (UNCONDITIONAL_JUMP)
// 00465709: IMUL EDX,dword ptr [EBP + -0x14],0x184
//   Label: LAB_00465709
//   XREF to: Stack[-0x24] (READ)
// 00465710: MOV EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 00465715: ADD EAX,EDX
// 00465717: ADD EAX,0x54
// 0046571a: PUSH EAX
// 0046571b: IMUL EDX,dword ptr [EBP + -0x8],0x184
//   XREF to: Stack[-0x18] (READ)
// 00465722: MOV EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 00465727: ADD EAX,EDX
// 00465729: ADD EAX,0x54
// 0046572c: PUSH EAX
// 0046572d: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 00465732: ADD ESP,0x8
// 00465735: TEST EAX,EAX
// 00465737: JZ 0x0046573b
//   XREF to: 0046573b (CONDITIONAL_JUMP)
// 00465739: JMP 0x0046576f
//   Label: LAB_00465739
//   XREF to: 0046576f (UNCONDITIONAL_JUMP)
// 0046573b: CMP dword ptr [EBP + -0xc],0x0
//   Label: LAB_0046573b
//   XREF to: Stack[-0x1c] (READ)
// 0046573f: JZ 0x0046575f
//   XREF to: 0046575f (CONDITIONAL_JUMP)
// 00465741: IMUL EAX,dword ptr [EBP + -0x8],0x184
//   XREF to: Stack[-0x18] (READ)
// 00465748: IMUL EDX,dword ptr [EBP + -0x14],0x184
//   XREF to: Stack[-0x24] (READ)
// 0046574f: MOV EAX,dword ptr [EAX + 0x16e9a88]
//   XREF to: 016e9a88 (DATA)
// 00465755: CMP EAX,dword ptr [EDX + 0x16e9a88]
//   XREF to: 016e9a88 (DATA)
// 0046575b: JZ 0x0046575f
//   XREF to: 0046575f (CONDITIONAL_JUMP)
// 0046575d: JMP 0x0046576f
//   XREF to: 0046576f (UNCONDITIONAL_JUMP)
// 0046575f: MOV EAX,dword ptr [EBP + -0x14]
//   Label: LAB_0046575f
//   XREF to: Stack[-0x24] (READ)
// 00465762: PUSH EAX
// 00465763: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00465766: PUSH EAX
// 00465767: CALL shape_design.c_mergeTrianglesIntoQuad_FUN_00462190
//   XREF to: 00462190 (UNCONDITIONAL_CALL)
// 0046576c: ADD ESP,0x8
// 0046576f: JMP 0x00465656
//   Label: LAB_0046576f
//   XREF to: 00465656 (UNCONDITIONAL_JUMP)
// 00465774: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00465774
//   XREF to: Stack[-0x1c] (READ)
// 00465777: PUSH EAX
// 00465778: CALL shape_design.c_removeDuplicatePolygons_FUN_004651b0
//   XREF to: 004651b0 (UNCONDITIONAL_CALL)
// 0046577d: ADD ESP,0x4
// 00465780: CALL shape_design.c_removeDegeneratePolygons_FUN_00465310
//   XREF to: 00465310 (UNCONDITIONAL_CALL)
// 00465785: CALL shape_design.c_removeUnusedVertices_FUN_00463830
//   XREF to: 00463830 (UNCONDITIONAL_CALL)
// 0046578a: INC dword ptr [0x01e528a8]
//   XREF to: 01e528a8 (READ_WRITE)
// 00465790: PUSH dword ptr [0x01e528a8]
//   XREF to: 01e528a8 (READ)
// 00465796: PUSH dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 0046579c: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046579f: PUSH EAX
// 004657a0: MOV EAX,0x61c56e
//   XREF to: 0061c56e (DATA)
// 004657a5: PUSH EAX
//   XREF to: 0061c56e (DATA)
// 004657a6: LEA EAX,[EBP + -0x64]
//   XREF to: Stack[-0x74] (DATA)
// 004657a9: PUSH EAX
// 004657aa: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004657af: ADD ESP,0x14
// 004657b2: CMP dword ptr [EBP + 0x14],0x0
//   XREF to: Stack[0x4] (READ)
// 004657b6: JLE 0x004657e2
//   XREF to: 004657e2 (CONDITIONAL_JUMP)
// 004657b8: MOV ESI,0x61c5a7
//   XREF to: 0061c5a7 (DATA)
// 004657bd: LEA EDI,[EBP + -0x64]
//   XREF to: Stack[-0x74] (DATA)
// 004657c0: PUSH EDI
// 004657c1: SUB ECX,ECX
// 004657c3: DEC ECX
// 004657c4: MOV AL,0x0
// 004657c6: SCASB.REPNE ES:EDI
// 004657c8: DEC EDI
// 004657c9: MOV AL,byte ptr [ESI]
//   Label: LAB_004657c9
//   XREF to: 0061c5a7 (READ)
//   XREF to: 0061c5a9 (READ)
// 004657cb: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x74] (DATA)
// 004657cd: CMP AL,0x0
// 004657cf: JZ 0x004657e1
//   XREF to: 004657e1 (CONDITIONAL_JUMP)
// 004657d1: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0061c5a8 (READ)
//   XREF to: 0061c5aa (READ)
// 004657d4: ADD ESI,0x2
// 004657d7: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x73] (WRITE)
// 004657da: ADD EDI,0x2
// 004657dd: CMP AL,0x0
// 004657df: JNZ 0x004657c9
//   XREF to: 004657c9 (CONDITIONAL_JUMP)
// 004657e1: POP EDI
//   Label: LAB_004657e1
// 004657e2: CMP dword ptr [EBP + 0x14],0x0
//   Label: LAB_004657e2
//   XREF to: Stack[0x4] (READ)
// 004657e6: JL 0x004657fd
//   XREF to: 004657fd (CONDITIONAL_JUMP)
// 004657e8: PUSH 0x0
// 004657ea: PUSH 0x0
// 004657ec: LEA EAX,[EBP + -0x64]
//   XREF to: Stack[-0x74] (DATA)
// 004657ef: PUSH EAX
// 004657f0: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004657f5: ADD ESP,0xc
// 004657f8: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 004657fd: CMP dword ptr [EBP + 0x14],0x0
//   Label: LAB_004657fd
//   XREF to: Stack[0x4] (READ)
// 00465801: JLE 0x00465808
//   XREF to: 00465808 (CONDITIONAL_JUMP)
// 00465803: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00465808: MOV ESP,EBP
//   Label: LAB_00465808
// 0046580a: POP EBP
// 0046580b: POP EDI
// 0046580c: POP ESI
// 0046580d: POP EBX
// 0046580e: RET
