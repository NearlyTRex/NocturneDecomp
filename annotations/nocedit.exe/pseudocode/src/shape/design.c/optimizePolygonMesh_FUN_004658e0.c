// Name: shape_design.c_optimizePolygonMesh_FUN_004658e0
// Address: 004658e0
// Address Range: [[004658e0, 00465b3d]]
// Convention: __cdecl
// Signature: void shape_design.c_optimizePolygonMesh_FUN_004658e0(float angle_tolerance, int strict_mode, int display_progress)
// Cross-references:
//   core_dpart.cpp_CDemonPart_processAndFinalize_FUN_00482e40 (00482e40) at 00482e6b [UNCONDITIONAL_CALL]
//   shape_design.c_configureFullPassPolygonReduction_FUN_00465810 (00465810) at 004658cd [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_TriListSomething_FUN_005d77a0 (005d77a0) at 005d7de2 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Scanning_polygons_0061c5f9
//   double g_DegToRadConversion = 0.0174532925200000
//   TerminatedCString s_Original_polygons_d_New__0061c616
//   TerminatedCString s_Hit_a_key_0061c64f
//   undefined4 s_Hit_a_key..._0061c650
//   undefined4 s_Hit_a_key..._0061c651
//   undefined4 s_it_a_key..._0061c652
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e9a88
//   int g_PolygonOptimizationPasses
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_strcmp_FUN_005fef20
//   engine_2d.c_drawText_FUN_00401fd0
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

void __cdecl
shape_design_c_optimizePolygonMesh_FUN_004658e0
          (float angle_tolerance,int strict_mode,int display_progress)

{
  char cVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  byte bVar7;
  float10 fVar8;
  int local_20;
  int local_1c;
  char *pcVar6;
  
  bVar7 = 0;
  if (-1 < display_progress) {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Scanning polygons...",0,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  }
  fVar8 = (float10)fcos((float10)angle_tolerance * (float10)g_DegToRadConversion);
  shape_design_c_removeDuplicatePolygons_FUN_004651b0(strict_mode);
  shape_design_c_removeDegeneratePolygons_FUN_00465310();
  do {
    iVar3 = g_PolygonCount;
    for (local_20 = 0; local_20 < g_PolygonCount + -1; local_20 = local_20 + 1) {
      local_1c = local_20;
      if (g_ModelPolygonData[local_20].vertex_indices_count == 3) {
        while ((local_1c = local_1c + 1, local_1c < g_PolygonCount &&
               (g_ModelPolygonData[local_20].vertex_indices_count == 3))) {
          if (((g_ModelPolygonData[local_1c].vertex_indices_count == 3) &&
              (((iVar2 = shape_design_c_validatePolygonNormals_FUN_00461d80
                                   (g_ModelPolygonData + local_20,g_ModelPolygonData + local_1c,
                                    (double)(float)fVar8), iVar2 != 0 &&
                (iVar2 = shape_design_c_findVertexMatches_FUN_00461ae0
                                   ((int *)g_ModelPolygonData[local_20].vertex_indices,
                                    (int *)g_ModelPolygonData[local_1c].vertex_indices,3,3),
                iVar2 != 0)) &&
               (iVar2 = crt_string_c_strcmp_FUN_005fef20
                                  (g_ModelPolygonData[local_20].lightmap_name,
                                   g_ModelPolygonData[local_1c].lightmap_name), iVar2 == 0)))) &&
             ((strict_mode == 0 ||
              (g_ModelPolygonData[local_20].part_assignment ==
               g_ModelPolygonData[local_1c].part_assignment)))) {
            shape_design_c_mergeTrianglesIntoQuad_FUN_00462190(local_20,local_1c);
          }
        }
      }
    }
  } while (g_PolygonCount != iVar3);
  shape_design_c_removeDuplicatePolygons_FUN_004651b0(strict_mode);
  shape_design_c_removeDegeneratePolygons_FUN_00465310();
  shape_design_c_removeUnusedVertices_FUN_00463830();
  g_PolygonOptimizationPasses = g_PolygonOptimizationPasses + 1;
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff90,"Original polygons: %d    New total: %d\n\nTotal passes: %d");
  if (0 < display_progress) {
    pcVar4 = "\n\nHit a key...";
    iVar3 = -1;
    pcVar6 = &stack0xffffff90;
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
  if (-1 < display_progress) {
    engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff90,0,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  }
  if (0 < display_progress) {
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  }
  return;
}


// Assembly code:
// 004658e0: PUSH EBX
//   Label: shape_design.c_optimizePolygonMesh_FUN_004658e0
// 004658e1: PUSH ESI
// 004658e2: PUSH EDI
// 004658e3: PUSH EBP
// 004658e4: MOV EBP,ESP
// 004658e6: SUB ESP,0x60
// 004658ec: MOV EAX,[0x016e990c]
//   XREF to: 016e990c (READ)
// 004658f1: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004658f4: CMP dword ptr [EBP + 0x1c],0x0
//   XREF to: Stack[0xc] (READ)
// 004658f8: JL 0x00465916
//   XREF to: 00465916 (CONDITIONAL_JUMP)
// 004658fa: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 004658ff: PUSH 0x0
// 00465901: PUSH 0x0
// 00465903: MOV EAX,0x61c5f9
//   XREF to: 0061c5f9 (PARAM)
// 00465908: PUSH EAX
//   XREF to: 0061c5f9 (DATA)
// 00465909: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046590e: ADD ESP,0xc
// 00465911: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00465916: FLD float ptr [EBP + 0x14]
//   Label: LAB_00465916
//   XREF to: Stack[0x4] (READ)
// 00465919: FMUL double ptr [0x0061c60e]
//   XREF to: 0061c60e (READ)
// 0046591f: FCOS
// 00465921: FSTP float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (WRITE)
// 00465924: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00465927: PUSH EAX
// 00465928: CALL shape_design.c_removeDuplicatePolygons_FUN_004651b0
//   XREF to: 004651b0 (UNCONDITIONAL_CALL)
// 0046592d: ADD ESP,0x4
// 00465930: CALL shape_design.c_removeDegeneratePolygons_FUN_00465310
//   XREF to: 00465310 (UNCONDITIONAL_CALL)
// 00465935: MOV EAX,[0x016e990c]
//   Label: LAB_00465935
//   XREF to: 016e990c (READ)
// 0046593a: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0046593d: MOV dword ptr [EBP + -0x10],0x0
//   XREF to: Stack[-0x20] (WRITE)
// 00465944: JMP 0x0046594c
//   XREF to: 0046594c (UNCONDITIONAL_JUMP)
// 00465946: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_00465946
//   XREF to: Stack[-0x20] (READ)
// 00465949: INC dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ_WRITE)
// 0046594c: MOV EAX,[0x016e990c]
//   Label: LAB_0046594c
//   XREF to: 016e990c (READ)
// 00465951: DEC EAX
// 00465952: CMP EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00465955: JLE 0x00465a94
//   XREF to: 00465a94 (CONDITIONAL_JUMP)
// 0046595b: IMUL EAX,dword ptr [EBP + -0x10],0x184
//   XREF to: Stack[-0x20] (READ)
// 00465962: CMP dword ptr [EAX + 0x16e99b4],0x3
//   XREF to: 016e99b4 (DATA)
// 00465969: JZ 0x00465970
//   XREF to: 00465970 (CONDITIONAL_JUMP)
// 0046596b: JMP 0x00465a8f
//   XREF to: 00465a8f (UNCONDITIONAL_JUMP)
// 00465970: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_00465970
//   XREF to: Stack[-0x20] (READ)
// 00465973: INC EAX
// 00465974: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00465977: JMP 0x0046597f
//   XREF to: 0046597f (UNCONDITIONAL_JUMP)
// 00465979: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00465979
//   XREF to: Stack[-0x1c] (READ)
// 0046597c: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0046597f: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0046597f
//   XREF to: Stack[-0x1c] (READ)
// 00465982: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 00465988: JGE 0x00465a8f
//   XREF to: 00465a8f (CONDITIONAL_JUMP)
// 0046598e: IMUL EAX,dword ptr [EBP + -0x10],0x184
//   XREF to: Stack[-0x20] (READ)
// 00465995: CMP dword ptr [EAX + 0x16e99b4],0x3
//   XREF to: 016e99b4 (DATA)
// 0046599c: JZ 0x004659a3
//   XREF to: 004659a3 (CONDITIONAL_JUMP)
// 0046599e: JMP 0x00465a8f
//   XREF to: 00465a8f (UNCONDITIONAL_JUMP)
// 004659a3: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   Label: LAB_004659a3
//   XREF to: Stack[-0x1c] (READ)
// 004659aa: CMP dword ptr [EAX + 0x16e99b4],0x3
//   XREF to: 016e99b4 (DATA)
// 004659b1: JNZ 0x00465a8a
//   XREF to: 00465a8a (CONDITIONAL_JUMP)
// 004659b7: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004659ba: SUB ESP,0x8
// 004659bd: FSTP double ptr [ESP]
//   XREF to: Stack[-0x78] (DATA)
// 004659c0: IMUL EDX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 004659c7: MOV EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 004659cc: ADD EAX,EDX
// 004659ce: PUSH EAX
// 004659cf: IMUL EDX,dword ptr [EBP + -0x10],0x184
//   XREF to: Stack[-0x20] (READ)
// 004659d6: MOV EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 004659db: ADD EAX,EDX
// 004659dd: PUSH EAX
// 004659de: CALL shape_design.c_validatePolygonNormals_FUN_00461d80
//   XREF to: 00461d80 (UNCONDITIONAL_CALL)
// 004659e3: ADD ESP,0x10
// 004659e6: TEST EAX,EAX
// 004659e8: JZ 0x00465a22
//   XREF to: 00465a22 (CONDITIONAL_JUMP)
// 004659ea: PUSH 0x3
// 004659ec: PUSH 0x3
// 004659ee: IMUL EDX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 004659f5: MOV EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 004659fa: ADD EAX,EDX
// 004659fc: ADD EAX,0xb8
// 00465a01: PUSH EAX
// 00465a02: IMUL EDX,dword ptr [EBP + -0x10],0x184
//   XREF to: Stack[-0x20] (READ)
// 00465a09: MOV EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 00465a0e: ADD EAX,EDX
// 00465a10: ADD EAX,0xb8
// 00465a15: PUSH EAX
// 00465a16: CALL shape_design.c_findVertexMatches_FUN_00461ae0
//   XREF to: 00461ae0 (UNCONDITIONAL_CALL)
// 00465a1b: ADD ESP,0x10
// 00465a1e: TEST EAX,EAX
// 00465a20: JNZ 0x00465a24
//   XREF to: 00465a24 (CONDITIONAL_JUMP)
// 00465a22: JMP 0x00465a54
//   Label: LAB_00465a22
//   XREF to: 00465a54 (UNCONDITIONAL_JUMP)
// 00465a24: IMUL EDX,dword ptr [EBP + -0xc],0x184
//   Label: LAB_00465a24
//   XREF to: Stack[-0x1c] (READ)
// 00465a2b: MOV EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 00465a30: ADD EAX,EDX
// 00465a32: ADD EAX,0x54
// 00465a35: PUSH EAX
// 00465a36: IMUL EDX,dword ptr [EBP + -0x10],0x184
//   XREF to: Stack[-0x20] (READ)
// 00465a3d: MOV EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 00465a42: ADD EAX,EDX
// 00465a44: ADD EAX,0x54
// 00465a47: PUSH EAX
// 00465a48: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 00465a4d: ADD ESP,0x8
// 00465a50: TEST EAX,EAX
// 00465a52: JZ 0x00465a56
//   XREF to: 00465a56 (CONDITIONAL_JUMP)
// 00465a54: JMP 0x00465a8a
//   Label: LAB_00465a54
//   XREF to: 00465a8a (UNCONDITIONAL_JUMP)
// 00465a56: CMP dword ptr [EBP + 0x18],0x0
//   Label: LAB_00465a56
//   XREF to: Stack[0x8] (READ)
// 00465a5a: JZ 0x00465a7a
//   XREF to: 00465a7a (CONDITIONAL_JUMP)
// 00465a5c: IMUL EAX,dword ptr [EBP + -0x10],0x184
//   XREF to: Stack[-0x20] (READ)
// 00465a63: IMUL EDX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 00465a6a: MOV EAX,dword ptr [EAX + 0x16e9a88]
//   XREF to: 016e9a88 (DATA)
// 00465a70: CMP EAX,dword ptr [EDX + 0x16e9a88]
//   XREF to: 016e9a88 (DATA)
// 00465a76: JZ 0x00465a7a
//   XREF to: 00465a7a (CONDITIONAL_JUMP)
// 00465a78: JMP 0x00465a8a
//   XREF to: 00465a8a (UNCONDITIONAL_JUMP)
// 00465a7a: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00465a7a
//   XREF to: Stack[-0x1c] (READ)
// 00465a7d: PUSH EAX
// 00465a7e: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00465a81: PUSH EAX
// 00465a82: CALL shape_design.c_mergeTrianglesIntoQuad_FUN_00462190
//   XREF to: 00462190 (UNCONDITIONAL_CALL)
// 00465a87: ADD ESP,0x8
// 00465a8a: JMP 0x00465979
//   Label: LAB_00465a8a
//   XREF to: 00465979 (UNCONDITIONAL_JUMP)
// 00465a8f: JMP 0x00465946
//   Label: LAB_00465a8f
//   XREF to: 00465946 (UNCONDITIONAL_JUMP)
// 00465a94: MOV EAX,[0x016e990c]
//   Label: LAB_00465a94
//   XREF to: 016e990c (READ)
// 00465a99: CMP EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00465a9c: JZ 0x00465aa3
//   XREF to: 00465aa3 (CONDITIONAL_JUMP)
// 00465a9e: JMP 0x00465935
//   XREF to: 00465935 (UNCONDITIONAL_JUMP)
// 00465aa3: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_00465aa3
//   XREF to: Stack[0x8] (READ)
// 00465aa6: PUSH EAX
// 00465aa7: CALL shape_design.c_removeDuplicatePolygons_FUN_004651b0
//   XREF to: 004651b0 (UNCONDITIONAL_CALL)
// 00465aac: ADD ESP,0x4
// 00465aaf: CALL shape_design.c_removeDegeneratePolygons_FUN_00465310
//   XREF to: 00465310 (UNCONDITIONAL_CALL)
// 00465ab4: CALL shape_design.c_removeUnusedVertices_FUN_00463830
//   XREF to: 00463830 (UNCONDITIONAL_CALL)
// 00465ab9: INC dword ptr [0x01e528a8]
//   XREF to: 01e528a8 (READ_WRITE)
// 00465abf: PUSH dword ptr [0x01e528a8]
//   XREF to: 01e528a8 (READ)
// 00465ac5: PUSH dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 00465acb: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00465ace: PUSH EAX
// 00465acf: MOV EAX,0x61c616
//   XREF to: 0061c616 (DATA)
// 00465ad4: PUSH EAX
//   XREF to: 0061c616 (DATA)
// 00465ad5: LEA EAX,[EBP + -0x60]
//   XREF to: Stack[-0x70] (DATA)
// 00465ad8: PUSH EAX
// 00465ad9: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00465ade: ADD ESP,0x14
// 00465ae1: CMP dword ptr [EBP + 0x1c],0x0
//   XREF to: Stack[0xc] (READ)
// 00465ae5: JLE 0x00465b11
//   XREF to: 00465b11 (CONDITIONAL_JUMP)
// 00465ae7: MOV ESI,0x61c64f
//   XREF to: 0061c64f (DATA)
// 00465aec: LEA EDI,[EBP + -0x60]
//   XREF to: Stack[-0x70] (DATA)
// 00465aef: PUSH EDI
// 00465af0: SUB ECX,ECX
// 00465af2: DEC ECX
// 00465af3: MOV AL,0x0
// 00465af5: SCASB.REPNE ES:EDI
// 00465af7: DEC EDI
// 00465af8: MOV AL,byte ptr [ESI]
//   Label: LAB_00465af8
//   XREF to: 0061c64f (READ)
//   XREF to: 0061c651 (READ)
// 00465afa: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x70] (DATA)
// 00465afc: CMP AL,0x0
// 00465afe: JZ 0x00465b10
//   XREF to: 00465b10 (CONDITIONAL_JUMP)
// 00465b00: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0061c650 (READ)
//   XREF to: 0061c652 (READ)
// 00465b03: ADD ESI,0x2
// 00465b06: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x6f] (WRITE)
// 00465b09: ADD EDI,0x2
// 00465b0c: CMP AL,0x0
// 00465b0e: JNZ 0x00465af8
//   XREF to: 00465af8 (CONDITIONAL_JUMP)
// 00465b10: POP EDI
//   Label: LAB_00465b10
// 00465b11: CMP dword ptr [EBP + 0x1c],0x0
//   Label: LAB_00465b11
//   XREF to: Stack[0xc] (READ)
// 00465b15: JL 0x00465b2c
//   XREF to: 00465b2c (CONDITIONAL_JUMP)
// 00465b17: PUSH 0x0
// 00465b19: PUSH 0x0
// 00465b1b: LEA EAX,[EBP + -0x60]
//   XREF to: Stack[-0x70] (DATA)
// 00465b1e: PUSH EAX
// 00465b1f: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00465b24: ADD ESP,0xc
// 00465b27: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00465b2c: CMP dword ptr [EBP + 0x1c],0x0
//   Label: LAB_00465b2c
//   XREF to: Stack[0xc] (READ)
// 00465b30: JLE 0x00465b37
//   XREF to: 00465b37 (CONDITIONAL_JUMP)
// 00465b32: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00465b37: MOV ESP,EBP
//   Label: LAB_00465b37
// 00465b39: POP EBP
// 00465b3a: POP EDI
// 00465b3b: POP ESI
// 00465b3c: POP EBX
// 00465b3d: RET
