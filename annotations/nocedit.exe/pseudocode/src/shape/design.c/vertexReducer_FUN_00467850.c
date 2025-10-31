// Name: shape_design.c_vertexReducer_FUN_00467850
// Address: 00467850
// Address Range: [[00467850, 00467e64]]
// Convention: __cdecl
// Signature: void shape_design.c_vertexReducer_FUN_00467850(float tolerance, float angle_tolerance, int display_progress)
// Cross-references:
//   core_dcube.cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0 (004570a0) at 004572b1 [UNCONDITIONAL_CALL]
//   core_dpart.cpp_CDemonPart_processAndFinalize_FUN_00482e40 (00482e40) at 00482f8a [UNCONDITIONAL_CALL]
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f6cf [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_TriListSomething_FUN_005d77a0 (005d77a0) at 005d7d07 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Enter_tolerance_1_0061ca0d
//   TerminatedCString s_Check_normals_n_0061ca25
//   TerminatedCString s_Enter_angle_tolerance_90_0061ca3b
//   TerminatedCString s_Scanning_vertices_0061ca5b
//   TerminatedCString s_shape_design_c_0061ca70
//   TerminatedCString s_ERROR_Can_t_allocate_mem_0061ca82
//   TerminatedCString s_shape_design_c_0061cab9
//   TerminatedCString s_shape_design_c_0061cacb
//   TerminatedCString s_ERROR_Can_t_allocate_mem_0061cadd
//   double g_VertexReducerDegreesToRadiansConversion = 0.0174532925200000
//   TerminatedCString s_shape_design_c_0061cb1e
//   TerminatedCString s_shape_design_c_0061cb30
//   TerminatedCString s_Original_vertices_d_New__0061cb42
//   TerminatedCString s_Hit_a_key_0061cb8e
//   undefined4 s_Hit_a_key..._0061cb8f
//   undefined4 s_Hit_a_key..._0061cb90
//   undefined4 s_it_a_key..._0061cb91
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e99b4
//   int g_VertexOptimizationPasses
// Function calls:
//   crt_ctype.c_toupper_FUN_005ff9e0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdlib.c_qsort_FUN_005fdf38
//   crt_string.c_strtod_FUN_005ff0f3
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   shape_design.c_removeDegenerateTriangles_FUN_00463a20
//   shape_design.c_removeUnusedVertices_FUN_00463830
//   shape_design.c_validatePolygonNormals_FUN_00461d80
//   shape_memdbg.cpp_debugFree_FUN_0050f460
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void __cdecl
shape_design_c_vertexReducer_FUN_00467850
          (float tolerance,float angle_tolerance,int display_progress)

{
  char cVar1;
  int iVar2;
  void *base;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  byte bVar7;
  float10 fVar8;
  double dVar9;
  char *pcVar10;
  SShapeEditorPolygon *polygon1;
  char *in_stack_fffffec4;
  uint in_stack_fffffecc;
  int local_34;
  int local_30;
  void *local_14;
  
  bVar7 = 0;
  bVar6 = false;
  if (0 < g_VertexCount) {
    if (display_progress < 1) {
      in_stack_fffffecc = 0;
    }
    else {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      iVar2 = engine_2d_c_getInputWithPrompt_FUN_004032c0
                        (&stack0xfffffecc,0x14,0,0,"Enter tolerance [.1] : ");
      if (iVar2 == 0x1b) {
        return;
      }
    }
    iVar2 = -1;
    pcVar10 = &stack0xfffffecc;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + (uint)bVar7 * -2 + 1;
    } while (cVar1 != '\0');
    if (iVar2 != -2) {
      dVar9 = crt_string_c_strtod_FUN_005ff0f3(in_stack_fffffec4);
      tolerance = (float)dVar9;
    }
    if (display_progress < 1) {
      if (0.0 <= angle_tolerance) {
        bVar6 = true;
      }
    }
    else {
      pcVar10 = "Check normals? [n] : ";
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                (&stack0xfffffecc,0x14,0,0x16,"Check normals? [n] : ");
      iVar2 = crt_ctype_c_toupper_FUN_005ff9e0(in_stack_fffffecc & 0xff);
      bVar6 = iVar2 == 0x59;
      if (bVar6) {
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  (&stack0xfffffecc,0x14,0,0x2c,"Enter angle tolerance [90.0] : ");
        angle_tolerance = 90.0;
        iVar2 = -1;
        pcVar4 = &stack0xfffffecc;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + (uint)bVar7 * -2 + 1;
        } while (cVar1 != '\0');
        if (iVar2 != -2) {
          dVar9 = crt_string_c_strtod_FUN_005ff0f3(pcVar10);
          angle_tolerance = (float)dVar9;
        }
      }
    }
    if (-1 < display_progress) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("Scanning vertices...",0,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    }
    do {
      iVar2 = g_VertexCount;
      base = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                       (g_VertexCount << 3,"..\\shape\\design.c",0x20b8);
      if (base == (void *)0x0) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_drawText_FUN_00401fd0("ERROR: Can't allocate memory for vertex reducer array.",0,0);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
        return;
      }
      for (local_34 = 0; local_34 < g_VertexCount; local_34 = local_34 + 1) {
        *(int *)((int)base + local_34 * 8) = local_34;
        *(int *)((int)base + local_34 * 8 + 4) = local_34;
      }
      crt_stdlib_c_qsort_FUN_005fdf38
                (base,g_VertexCount,8,shape_design_c_qsortByVertexX_FUN_004676f0);
      if (bVar6) {
        local_14 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                             (g_VertexCount << 2,"..\\shape\\design.c",0x20dc);
        if (local_14 == (void *)0x0) {
          shape_memdbg_cpp_debugFree_FUN_0050f460(base,"..\\shape\\design.c",0x20de);
          wincore_windll_cpp_clearScreen_FUN_005b3e70();
          engine_2d_c_drawText_FUN_00401fd0("ERROR: Can't allocate memory for vertex reducer array.",0,0);
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
          wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
          return;
        }
        for (local_34 = 0; local_34 < g_PolygonCount; local_34 = local_34 + 1) {
          for (local_30 = 0; local_30 < (int)g_ModelPolygonData[local_34].vertex_indices_count;
              local_30 = local_30 + 1) {
            *(int *)((int)local_14 + g_ModelPolygonData[local_34].vertex_indices[local_30] * 4) =
                 local_34;
          }
        }
      }
      for (local_34 = 0; local_34 < g_VertexCount + -1; local_34 = local_34 + 1) {
        if (*(int *)((int)base + local_34 * 8 + 4) == *(int *)((int)base + local_34 * 8)) {
          polygon1 = (SShapeEditorPolygon *)(g_LoadedVertices + *(int *)(local_34 * 8 + (int)base));
          local_30 = local_34;
LAB_00467ba8:
          local_30 = local_30 + 1;
          if (local_30 < g_VertexCount) {
            if (*(int *)((int)base + local_30 * 8 + 4) == *(int *)((int)base + local_30 * 8)) {
              iVar3 = *(int *)(local_30 * 8 + (int)base);
              if (((CVector3f *)&polygon1->polygon_type)->x + tolerance <
                  g_LoadedVertices[iVar3].vertex.x) goto LAB_00467b49;
              if (((ABS(((CVector3f *)&polygon1->polygon_type)->x - g_LoadedVertices[iVar3].vertex.x
                       ) < tolerance) &&
                  (ABS(*(float *)polygon1->texture_name - g_LoadedVertices[iVar3].vertex.y) <
                   tolerance)) &&
                 (ABS(*(float *)((int)polygon1->texture_name + 4) - g_LoadedVertices[iVar3].vertex.z
                     ) < tolerance)) {
                if (bVar6) {
                  fVar8 = (float10)fcos((float10)angle_tolerance *
                                        (float10)g_VertexReducerDegreesToRadiansConversion);
                  polygon1 = g_ModelPolygonData +
                             *(int *)(*(int *)(local_34 * 8 + (int)base) * 4 + (int)local_14);
                  iVar3 = shape_design_c_validatePolygonNormals_FUN_00461d80
                                    (polygon1,g_ModelPolygonData +
                                              *(int *)(*(int *)(local_30 * 8 + (int)base) * 4 +
                                                      (int)local_14),(double)fVar8);
                  if (iVar3 == 0) goto LAB_00467ba8;
                }
                *(undefined4 *)((int)base + local_30 * 8 + 4) =
                     *(undefined4 *)((int)base + local_34 * 8);
              }
            }
            goto LAB_00467ba8;
          }
        }
LAB_00467b49:
      }
      crt_stdlib_c_qsort_FUN_005fdf38
                (base,g_VertexCount,8,shape_design_c_qsortByOriginalIndex_FUN_004677c0);
      for (local_34 = 0; local_34 < g_PolygonCount; local_34 = local_34 + 1) {
        for (local_30 = 0; local_30 < (int)g_ModelPolygonData[local_34].vertex_indices_count;
            local_30 = local_30 + 1) {
          g_ModelPolygonData[local_34].vertex_indices[local_30] =
               *(uint *)((int)base + g_ModelPolygonData[local_34].vertex_indices[local_30] * 8 + 4);
        }
      }
      if (bVar6) {
        shape_memdbg_cpp_debugFree_FUN_0050f460(local_14,"..\\shape\\design.c",0x2138);
      }
      shape_memdbg_cpp_debugFree_FUN_0050f460(base,"..\\shape\\design.c",0x213c);
      shape_design_c_removeUnusedVertices_FUN_00463830();
    } while (g_VertexCount != iVar2);
    shape_design_c_removeDegenerateTriangles_FUN_00463a20();
    g_VertexOptimizationPasses = g_VertexOptimizationPasses + 1;
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffecc,"Original vertices: %d    New total: %d\n\nTotal passes: %d\n\nPolys removed: %d");
    if (0 < display_progress) {
      pcVar4 = "\n\nHit a key...";
      iVar2 = -1;
      pcVar10 = &stack0xfffffecc;
      do {
        pcVar5 = pcVar10;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar5 = pcVar10 + (uint)bVar7 * -2 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar5;
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
      engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffecc,0,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    }
    if (0 < display_progress) {
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    }
  }
  return;
}


// Assembly code:
// 00467850: PUSH EBX
//   Label: shape_design.c_vertexReducer_FUN_00467850
// 00467851: PUSH ESI
// 00467852: PUSH EDI
// 00467853: PUSH EBP
// 00467854: MOV EBP,ESP
// 00467856: SUB ESP,0x134
// 0046785c: MOV EAX,[0x01626408]
//   XREF to: 01626408 (READ)
// 00467861: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00467864: MOV dword ptr [EBP + -0x10],0x0
//   XREF to: Stack[-0x20] (WRITE)
// 0046786b: MOV EAX,[0x016e990c]
//   XREF to: 016e990c (READ)
// 00467870: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00467873: CMP dword ptr [0x01626408],0x1
//   XREF to: 01626408 (READ)
// 0046787a: JGE 0x00467881
//   XREF to: 00467881 (CONDITIONAL_JUMP)
// 0046787c: JMP 0x00467e5e
//   XREF to: 00467e5e (UNCONDITIONAL_JUMP)
// 00467881: CMP dword ptr [EBP + 0x1c],0x0
//   Label: LAB_00467881
//   XREF to: Stack[0xc] (READ)
// 00467885: JLE 0x004678b3
//   XREF to: 004678b3 (CONDITIONAL_JUMP)
// 00467887: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0046788c: MOV EAX,0x61ca0d
//   XREF to: 0061ca0d (DATA)
// 00467891: PUSH EAX
//   XREF to: 0061ca0d (DATA)
// 00467892: PUSH 0x0
// 00467894: PUSH 0x0
// 00467896: PUSH 0x14
// 00467898: LEA EAX,[EBP + 0xfffffedc]
//   XREF to: Stack[-0x134] (DATA)
// 0046789e: PUSH EAX
// 0046789f: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 004678a4: ADD ESP,0x14
// 004678a7: CMP EAX,0x1b
// 004678aa: JNZ 0x004678b1
//   XREF to: 004678b1 (CONDITIONAL_JUMP)
// 004678ac: JMP 0x00467e5e
//   XREF to: 00467e5e (UNCONDITIONAL_JUMP)
// 004678b1: JMP 0x004678ba
//   Label: LAB_004678b1
//   XREF to: 004678ba (UNCONDITIONAL_JUMP)
// 004678b3: MOV byte ptr [EBP + 0xfffffedc],0x0
//   Label: LAB_004678b3
//   XREF to: Stack[-0x134] (WRITE)
// 004678ba: LEA EDI,[EBP + 0xfffffedc]
//   Label: LAB_004678ba
//   XREF to: Stack[-0x134] (DATA)
// 004678c0: SUB ECX,ECX
// 004678c2: DEC ECX
// 004678c3: XOR EAX,EAX
// 004678c5: SCASB.REPNE ES:EDI
// 004678c7: NOT ECX
// 004678c9: DEC ECX
// 004678ca: TEST ECX,ECX
// 004678cc: JZ 0x004678f2
//   XREF to: 004678f2 (CONDITIONAL_JUMP)
// 004678ce: LEA EAX,[EBP + 0xfffffedc]
//   XREF to: Stack[-0x134] (DATA)
// 004678d4: PUSH EAX
// 004678d5: CALL crt_string.c_strtod_FUN_005ff0f3
//   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)
// 004678da: MOV dword ptr [EBP + 0xfffffed4],EAX
//   XREF to: Stack[-0x13c] (WRITE)
// 004678e0: MOV dword ptr [EBP + 0xfffffed8],EDX
//   XREF to: Stack[-0x138] (WRITE)
// 004678e6: FLD double ptr [EBP + 0xfffffed4]
//   XREF to: Stack[-0x13c] (READ)
// 004678ec: ADD ESP,0x4
// 004678ef: FSTP float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (WRITE)
// 004678f2: CMP dword ptr [EBP + 0x1c],0x0
//   Label: LAB_004678f2
//   XREF to: Stack[0xc] (READ)
// 004678f6: JLE 0x00467996
//   XREF to: 00467996 (CONDITIONAL_JUMP)
// 004678fc: MOV EAX,0x61ca25
//   XREF to: 0061ca25 (DATA)
// 00467901: PUSH EAX
//   XREF to: 0061ca25 (DATA)
// 00467902: PUSH 0x16
// 00467904: PUSH 0x0
// 00467906: PUSH 0x14
// 00467908: LEA EAX,[EBP + 0xfffffedc]
//   XREF to: Stack[-0x134] (DATA)
// 0046790e: PUSH EAX
// 0046790f: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 00467914: ADD ESP,0x14
// 00467917: XOR EAX,EAX
// 00467919: MOV AL,byte ptr [EBP + 0xfffffedc]
//   XREF to: Stack[-0x134] (READ)
// 0046791f: PUSH EAX
// 00467920: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 00467925: ADD ESP,0x4
// 00467928: CMP EAX,0x59
// 0046792b: JNZ 0x00467934
//   XREF to: 00467934 (CONDITIONAL_JUMP)
// 0046792d: MOV dword ptr [EBP + -0x10],0x1
//   XREF to: Stack[-0x20] (WRITE)
// 00467934: CMP dword ptr [EBP + -0x10],0x1
//   Label: LAB_00467934
//   XREF to: Stack[-0x20] (READ)
// 00467938: JNZ 0x00467994
//   XREF to: 00467994 (CONDITIONAL_JUMP)
// 0046793a: MOV ECX,0x61ca3b
//   XREF to: 0061ca3b (DATA)
// 0046793f: PUSH ECX
//   XREF to: 0061ca3b (DATA)
// 00467940: PUSH 0x2c
// 00467942: PUSH 0x0
// 00467944: PUSH 0x14
// 00467946: LEA ECX,[EBP + 0xfffffedc]
//   XREF to: Stack[-0x134] (DATA)
// 0046794c: PUSH ECX
// 0046794d: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 00467952: ADD ESP,0x14
// 00467955: MOV dword ptr [EBP + 0x18],0x42b40000
//   XREF to: Stack[0x8] (WRITE)
// 0046795c: LEA EDI,[EBP + 0xfffffedc]
//   XREF to: Stack[-0x134] (DATA)
// 00467962: SUB ECX,ECX
// 00467964: DEC ECX
// 00467965: XOR EAX,EAX
// 00467967: SCASB.REPNE ES:EDI
// 00467969: NOT ECX
// 0046796b: DEC ECX
// 0046796c: TEST ECX,ECX
// 0046796e: JZ 0x00467994
//   XREF to: 00467994 (CONDITIONAL_JUMP)
// 00467970: LEA EAX,[EBP + 0xfffffedc]
//   XREF to: Stack[-0x134] (DATA)
// 00467976: PUSH EAX
// 00467977: CALL crt_string.c_strtod_FUN_005ff0f3
//   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)
// 0046797c: MOV dword ptr [EBP + 0xfffffed4],EAX
//   XREF to: Stack[-0x13c] (WRITE)
// 00467982: MOV dword ptr [EBP + 0xfffffed8],EDX
//   XREF to: Stack[-0x138] (WRITE)
// 00467988: FLD double ptr [EBP + 0xfffffed4]
//   XREF to: Stack[-0x13c] (READ)
// 0046798e: ADD ESP,0x4
// 00467991: FSTP float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (WRITE)
// 00467994: JMP 0x004679a9
//   Label: LAB_00467994
//   XREF to: 004679a9 (UNCONDITIONAL_JUMP)
// 00467996: FLD float ptr [EBP + 0x18]
//   Label: LAB_00467996
//   XREF to: Stack[0x8] (READ)
// 00467999: FLDZ
// 0046799b: FCOMPP
// 0046799d: FNSTSW AX
// 0046799f: SAHF
// 004679a0: JA 0x004679a9
//   XREF to: 004679a9 (CONDITIONAL_JUMP)
// 004679a2: MOV dword ptr [EBP + -0x10],0x1
//   XREF to: Stack[-0x20] (WRITE)
// 004679a9: CMP dword ptr [EBP + 0x1c],0x0
//   Label: LAB_004679a9
//   XREF to: Stack[0xc] (READ)
// 004679ad: JL 0x004679cb
//   XREF to: 004679cb (CONDITIONAL_JUMP)
// 004679af: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 004679b4: PUSH 0x0
// 004679b6: PUSH 0x0
// 004679b8: MOV EAX,0x61ca5b
//   XREF to: 0061ca5b (PARAM)
// 004679bd: PUSH EAX
//   XREF to: 0061ca5b (DATA)
// 004679be: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004679c3: ADD ESP,0xc
// 004679c6: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 004679cb: MOV EAX,[0x01626408]
//   Label: LAB_004679cb
//   XREF to: 01626408 (READ)
// 004679d0: MOV dword ptr [EBP + -0x18],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004679d3: PUSH 0x20b8
// 004679d8: MOV EAX,0x61ca70
//   XREF to: 0061ca70 (DATA)
// 004679dd: PUSH EAX
//   XREF to: 0061ca70 (DATA)
// 004679de: MOV EAX,[0x01626408]
//   XREF to: 01626408 (READ)
// 004679e3: SHL EAX,0x3
// 004679e6: PUSH EAX
// 004679e7: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 004679ec: ADD ESP,0xc
// 004679ef: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004679f2: CMP dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (READ)
// 004679f6: JNZ 0x00467a1e
//   XREF to: 00467a1e (CONDITIONAL_JUMP)
// 004679f8: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 004679fd: PUSH 0x0
// 004679ff: PUSH 0x0
// 00467a01: MOV EAX,0x61ca82
//   XREF to: 0061ca82 (PARAM)
// 00467a06: PUSH EAX
//   XREF to: 0061ca82 (DATA)
// 00467a07: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00467a0c: ADD ESP,0xc
// 00467a0f: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00467a14: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00467a19: JMP 0x00467e5e
//   XREF to: 00467e5e (UNCONDITIONAL_JUMP)
// 00467a1e: MOV dword ptr [EBP + -0x24],0x0
//   Label: LAB_00467a1e
//   XREF to: Stack[-0x34] (WRITE)
// 00467a25: JMP 0x00467a2a
//   XREF to: 00467a2a (UNCONDITIONAL_JUMP)
// 00467a27: INC dword ptr [EBP + -0x24]
//   Label: LAB_00467a27
//   XREF to: Stack[-0x34] (READ_WRITE)
// 00467a2a: MOV EAX,dword ptr [EBP + -0x24]
//   Label: LAB_00467a2a
//   XREF to: Stack[-0x34] (READ)
// 00467a2d: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00467a33: JGE 0x00467a58
//   XREF to: 00467a58 (CONDITIONAL_JUMP)
// 00467a35: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 00467a38: SHL EAX,0x3
// 00467a3b: MOV EDX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00467a3e: ADD EDX,EAX
// 00467a40: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 00467a43: MOV dword ptr [EDX],EAX
// 00467a45: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 00467a48: SHL EAX,0x3
// 00467a4b: MOV EDX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00467a4e: ADD EDX,EAX
// 00467a50: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 00467a53: MOV dword ptr [EDX + 0x4],EAX
// 00467a56: JMP 0x00467a27
//   XREF to: 00467a27 (UNCONDITIONAL_JUMP)
// 00467a58: MOV EAX,0x4676f0
//   Label: LAB_00467a58
//   XREF to: 004676f0 (DATA)
// 00467a5d: PUSH EAX
//   XREF to: 004676f0 (DATA)
// 00467a5e: PUSH 0x8
// 00467a60: PUSH dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00467a66: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00467a69: PUSH EAX
// 00467a6a: CALL crt_stdlib.c_qsort_FUN_005fdf38
//   XREF to: 005fdf38 (UNCONDITIONAL_CALL)
// 00467a6f: ADD ESP,0x10
// 00467a72: CMP dword ptr [EBP + -0x10],0x0
//   XREF to: Stack[-0x20] (READ)
// 00467a76: JZ 0x00467b40
//   XREF to: 00467b40 (CONDITIONAL_JUMP)
// 00467a7c: PUSH 0x20dc
// 00467a81: MOV EAX,0x61cab9
//   XREF to: 0061cab9 (DATA)
// 00467a86: PUSH EAX
//   XREF to: 0061cab9 (DATA)
// 00467a87: MOV EAX,[0x01626408]
//   XREF to: 01626408 (READ)
// 00467a8c: SHL EAX,0x2
// 00467a8f: PUSH EAX
// 00467a90: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 00467a95: ADD ESP,0xc
// 00467a98: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00467a9b: CMP dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (READ)
// 00467a9f: JNZ 0x00467ade
//   XREF to: 00467ade (CONDITIONAL_JUMP)
// 00467aa1: PUSH 0x20de
// 00467aa6: MOV EAX,0x61cacb
//   XREF to: 0061cacb (DATA)
// 00467aab: PUSH EAX
//   XREF to: 0061cacb (DATA)
// 00467aac: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00467aaf: PUSH EAX
// 00467ab0: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 00467ab5: ADD ESP,0xc
// 00467ab8: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00467abd: PUSH 0x0
// 00467abf: PUSH 0x0
// 00467ac1: MOV EAX,0x61cadd
//   XREF to: 0061cadd (PARAM)
// 00467ac6: PUSH EAX
//   XREF to: 0061cadd (DATA)
// 00467ac7: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00467acc: ADD ESP,0xc
// 00467acf: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00467ad4: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00467ad9: JMP 0x00467e5e
//   XREF to: 00467e5e (UNCONDITIONAL_JUMP)
// 00467ade: MOV dword ptr [EBP + -0x24],0x0
//   Label: LAB_00467ade
//   XREF to: Stack[-0x34] (WRITE)
// 00467ae5: JMP 0x00467aea
//   XREF to: 00467aea (UNCONDITIONAL_JUMP)
// 00467ae7: INC dword ptr [EBP + -0x24]
//   Label: LAB_00467ae7
//   XREF to: Stack[-0x34] (READ_WRITE)
// 00467aea: MOV EAX,dword ptr [EBP + -0x24]
//   Label: LAB_00467aea
//   XREF to: Stack[-0x34] (READ)
// 00467aed: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 00467af3: JGE 0x00467b40
//   XREF to: 00467b40 (CONDITIONAL_JUMP)
// 00467af5: IMUL EAX,dword ptr [EBP + -0x24],0x184
//   XREF to: Stack[-0x34] (READ)
// 00467afc: MOV EDX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 00467b01: ADD EDX,EAX
// 00467b03: MOV dword ptr [EBP + -0x1c],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 00467b06: MOV dword ptr [EBP + -0x20],0x0
//   XREF to: Stack[-0x30] (WRITE)
// 00467b0d: JMP 0x00467b12
//   XREF to: 00467b12 (UNCONDITIONAL_JUMP)
// 00467b0f: INC dword ptr [EBP + -0x20]
//   Label: LAB_00467b0f
//   XREF to: Stack[-0x30] (READ_WRITE)
// 00467b12: MOV EAX,dword ptr [EBP + -0x20]
//   Label: LAB_00467b12
//   XREF to: Stack[-0x30] (READ)
// 00467b15: MOV EDX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00467b18: CMP EAX,dword ptr [EDX + 0xa4]
//   XREF to: 016e99b4 (DATA)
// 00467b1e: JGE 0x00467b3e
//   XREF to: 00467b3e (CONDITIONAL_JUMP)
// 00467b20: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00467b23: SHL EAX,0x2
// 00467b26: ADD EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00467b29: MOV EAX,dword ptr [EAX + 0xb8]
// 00467b2f: SHL EAX,0x2
// 00467b32: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00467b35: ADD EDX,EAX
// 00467b37: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 00467b3a: MOV dword ptr [EDX],EAX
// 00467b3c: JMP 0x00467b0f
//   XREF to: 00467b0f (UNCONDITIONAL_JUMP)
// 00467b3e: JMP 0x00467ae7
//   Label: LAB_00467b3e
//   XREF to: 00467ae7 (UNCONDITIONAL_JUMP)
// 00467b40: MOV dword ptr [EBP + -0x24],0x0
//   Label: LAB_00467b40
//   XREF to: Stack[-0x34] (WRITE)
// 00467b47: JMP 0x00467b4f
//   XREF to: 00467b4f (UNCONDITIONAL_JUMP)
// 00467b49: MOV EAX,dword ptr [EBP + -0x24]
//   Label: LAB_00467b49
//   XREF to: Stack[-0x34] (READ)
// 00467b4c: INC dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ_WRITE)
// 00467b4f: MOV EAX,[0x01626408]
//   Label: LAB_00467b4f
//   XREF to: 01626408 (READ)
// 00467b54: DEC EAX
// 00467b55: CMP EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 00467b58: JLE 0x00467cf5
//   XREF to: 00467cf5 (CONDITIONAL_JUMP)
// 00467b5e: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 00467b61: SHL EAX,0x3
// 00467b64: MOV ECX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00467b67: ADD ECX,EAX
// 00467b69: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 00467b6c: SHL EAX,0x3
// 00467b6f: MOV EDX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00467b72: ADD EDX,EAX
// 00467b74: MOV EAX,dword ptr [ECX + 0x4]
// 00467b77: CMP EAX,dword ptr [EDX]
// 00467b79: JZ 0x00467b80
//   XREF to: 00467b80 (CONDITIONAL_JUMP)
// 00467b7b: JMP 0x00467cf0
//   XREF to: 00467cf0 (UNCONDITIONAL_JUMP)
// 00467b80: MOV EAX,dword ptr [EBP + -0x24]
//   Label: LAB_00467b80
//   XREF to: Stack[-0x34] (READ)
// 00467b83: SHL EAX,0x3
// 00467b86: ADD EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00467b89: IMUL EAX,dword ptr [EAX],0x14
// 00467b8c: MOV EDX,0x162640c
//   XREF to: 0162640c (DATA)
// 00467b91: ADD EDX,EAX
// 00467b93: MOV dword ptr [EBP + 0xfffffed0],EDX
//   XREF to: Stack[-0x140] (WRITE)
// 00467b99: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 00467b9c: INC EAX
// 00467b9d: MOV dword ptr [EBP + -0x20],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00467ba0: JMP 0x00467ba8
//   XREF to: 00467ba8 (UNCONDITIONAL_JUMP)
// 00467ba2: MOV EAX,dword ptr [EBP + -0x20]
//   Label: LAB_00467ba2
//   XREF to: Stack[-0x30] (READ)
// 00467ba5: INC dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ_WRITE)
// 00467ba8: MOV EAX,dword ptr [EBP + -0x20]
//   Label: LAB_00467ba8
//   XREF to: Stack[-0x30] (READ)
// 00467bab: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00467bb1: JGE 0x00467cf0
//   XREF to: 00467cf0 (CONDITIONAL_JUMP)
// 00467bb7: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00467bba: SHL EAX,0x3
// 00467bbd: MOV ECX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00467bc0: ADD ECX,EAX
// 00467bc2: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00467bc5: SHL EAX,0x3
// 00467bc8: MOV EDX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00467bcb: ADD EDX,EAX
// 00467bcd: MOV EAX,dword ptr [ECX + 0x4]
// 00467bd0: CMP EAX,dword ptr [EDX]
// 00467bd2: JZ 0x00467bd9
//   XREF to: 00467bd9 (CONDITIONAL_JUMP)
// 00467bd4: JMP 0x00467ceb
//   XREF to: 00467ceb (UNCONDITIONAL_JUMP)
// 00467bd9: MOV EAX,dword ptr [EBP + -0x20]
//   Label: LAB_00467bd9
//   XREF to: Stack[-0x30] (READ)
// 00467bdc: SHL EAX,0x3
// 00467bdf: ADD EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00467be2: IMUL EAX,dword ptr [EAX],0x14
// 00467be5: MOV EDX,0x162640c
//   XREF to: 0162640c (DATA)
// 00467bea: ADD EDX,EAX
// 00467bec: MOV dword ptr [EBP + 0xfffffecc],EDX
//   XREF to: Stack[-0x144] (WRITE)
// 00467bf2: MOV EAX,dword ptr [EBP + 0xfffffed0]
//   XREF to: Stack[-0x140] (READ)
// 00467bf8: FLD float ptr [EAX]
//   XREF to: 0162640c (DATA)
// 00467bfa: FADD float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00467bfd: MOV EAX,dword ptr [EBP + 0xfffffecc]
//   XREF to: Stack[-0x144] (READ)
// 00467c03: FCOMP float ptr [EAX]
//   XREF to: 0162640c (DATA)
// 00467c05: FNSTSW AX
// 00467c07: SAHF
// 00467c08: JNC 0x00467c0f
//   XREF to: 00467c0f (CONDITIONAL_JUMP)
// 00467c0a: JMP 0x00467cf0
//   XREF to: 00467cf0 (UNCONDITIONAL_JUMP)
// 00467c0f: MOV EAX,dword ptr [EBP + 0xfffffed0]
//   Label: LAB_00467c0f
//   XREF to: Stack[-0x140] (READ)
// 00467c15: FLD float ptr [EAX]
//   XREF to: 0162640c (DATA)
// 00467c17: MOV EAX,dword ptr [EBP + 0xfffffecc]
//   XREF to: Stack[-0x144] (READ)
// 00467c1d: FSUB float ptr [EAX]
//   XREF to: 0162640c (DATA)
// 00467c1f: FABS
// 00467c21: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00467c24: FCOMPP
// 00467c26: FNSTSW AX
// 00467c28: SAHF
// 00467c29: JBE 0x00467c49
//   XREF to: 00467c49 (CONDITIONAL_JUMP)
// 00467c2b: MOV EAX,dword ptr [EBP + 0xfffffed0]
//   XREF to: Stack[-0x140] (READ)
// 00467c31: FLD float ptr [EAX + 0x4]
//   XREF to: 01626410 (DATA)
// 00467c34: MOV EAX,dword ptr [EBP + 0xfffffecc]
//   XREF to: Stack[-0x144] (READ)
// 00467c3a: FSUB float ptr [EAX + 0x4]
//   XREF to: 01626410 (DATA)
// 00467c3d: FABS
// 00467c3f: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00467c42: FCOMPP
// 00467c44: FNSTSW AX
// 00467c46: SAHF
// 00467c47: JA 0x00467c4b
//   XREF to: 00467c4b (CONDITIONAL_JUMP)
// 00467c49: JMP 0x00467c69
//   Label: LAB_00467c49
//   XREF to: 00467c69 (UNCONDITIONAL_JUMP)
// 00467c4b: MOV EAX,dword ptr [EBP + 0xfffffed0]
//   Label: LAB_00467c4b
//   XREF to: Stack[-0x140] (READ)
// 00467c51: FLD float ptr [EAX + 0x8]
//   XREF to: 01626414 (DATA)
// 00467c54: MOV EAX,dword ptr [EBP + 0xfffffecc]
//   XREF to: Stack[-0x144] (READ)
// 00467c5a: FSUB float ptr [EAX + 0x8]
//   XREF to: 01626414 (DATA)
// 00467c5d: FABS
// 00467c5f: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00467c62: FCOMPP
// 00467c64: FNSTSW AX
// 00467c66: SAHF
// 00467c67: JA 0x00467c6b
//   XREF to: 00467c6b (CONDITIONAL_JUMP)
// 00467c69: JMP 0x00467cce
//   Label: LAB_00467c69
//   XREF to: 00467cce (UNCONDITIONAL_JUMP)
// 00467c6b: CMP dword ptr [EBP + -0x10],0x0
//   Label: LAB_00467c6b
//   XREF to: Stack[-0x20] (READ)
// 00467c6f: JZ 0x00467ccc
//   XREF to: 00467ccc (CONDITIONAL_JUMP)
// 00467c71: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00467c74: FMUL double ptr [0x0061cb16]
//   XREF to: 0061cb16 (READ)
// 00467c7a: FCOS
// 00467c7c: SUB ESP,0x8
// 00467c7f: FSTP double ptr [ESP]
//   XREF to: Stack[-0x14c] (DATA)
// 00467c82: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00467c85: SHL EAX,0x3
// 00467c88: ADD EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00467c8b: MOV EAX,dword ptr [EAX]
// 00467c8d: SHL EAX,0x2
// 00467c90: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00467c93: IMUL EAX,dword ptr [EAX],0x184
// 00467c99: MOV EDX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 00467c9e: ADD EAX,EDX
// 00467ca0: PUSH EAX
// 00467ca1: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 00467ca4: SHL EAX,0x3
// 00467ca7: ADD EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00467caa: MOV EAX,dword ptr [EAX]
// 00467cac: SHL EAX,0x2
// 00467caf: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00467cb2: IMUL EAX,dword ptr [EAX],0x184
// 00467cb8: MOV EDX,0x16e9910
//   XREF to: 016e9910 (PARAM)
// 00467cbd: ADD EAX,EDX
// 00467cbf: PUSH EAX
// 00467cc0: CALL shape_design.c_validatePolygonNormals_FUN_00461d80
//   XREF to: 00461d80 (UNCONDITIONAL_CALL)
// 00467cc5: ADD ESP,0x10
// 00467cc8: TEST EAX,EAX
// 00467cca: JZ 0x00467cce
//   XREF to: 00467cce (CONDITIONAL_JUMP)
// 00467ccc: JMP 0x00467cd0
//   Label: LAB_00467ccc
//   XREF to: 00467cd0 (UNCONDITIONAL_JUMP)
// 00467cce: JMP 0x00467ceb
//   Label: LAB_00467cce
//   XREF to: 00467ceb (UNCONDITIONAL_JUMP)
// 00467cd0: MOV EAX,dword ptr [EBP + -0x24]
//   Label: LAB_00467cd0
//   XREF to: Stack[-0x34] (READ)
// 00467cd3: SHL EAX,0x3
// 00467cd6: MOV EDX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00467cd9: ADD EDX,EAX
// 00467cdb: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00467cde: SHL EAX,0x3
// 00467ce1: MOV ECX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00467ce4: ADD ECX,EAX
// 00467ce6: MOV EAX,dword ptr [EDX]
// 00467ce8: MOV dword ptr [ECX + 0x4],EAX
// 00467ceb: JMP 0x00467ba2
//   Label: LAB_00467ceb
//   XREF to: 00467ba2 (UNCONDITIONAL_JUMP)
// 00467cf0: JMP 0x00467b49
//   Label: LAB_00467cf0
//   XREF to: 00467b49 (UNCONDITIONAL_JUMP)
// 00467cf5: MOV EAX,0x4677c0
//   Label: LAB_00467cf5
//   XREF to: 004677c0 (DATA)
// 00467cfa: PUSH EAX
//   XREF to: 004677c0 (DATA)
// 00467cfb: PUSH 0x8
// 00467cfd: PUSH dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00467d03: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00467d06: PUSH EAX
// 00467d07: CALL crt_stdlib.c_qsort_FUN_005fdf38
//   XREF to: 005fdf38 (UNCONDITIONAL_CALL)
// 00467d0c: ADD ESP,0x10
// 00467d0f: MOV dword ptr [EBP + -0x24],0x0
//   XREF to: Stack[-0x34] (WRITE)
// 00467d16: JMP 0x00467d1b
//   XREF to: 00467d1b (UNCONDITIONAL_JUMP)
// 00467d18: INC dword ptr [EBP + -0x24]
//   Label: LAB_00467d18
//   XREF to: Stack[-0x34] (READ_WRITE)
// 00467d1b: MOV EAX,dword ptr [EBP + -0x24]
//   Label: LAB_00467d1b
//   XREF to: Stack[-0x34] (READ)
// 00467d1e: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 00467d24: JGE 0x00467d80
//   XREF to: 00467d80 (CONDITIONAL_JUMP)
// 00467d26: IMUL EAX,dword ptr [EBP + -0x24],0x184
//   XREF to: Stack[-0x34] (READ)
// 00467d2d: MOV EDX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 00467d32: ADD EDX,EAX
// 00467d34: MOV dword ptr [EBP + -0x1c],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 00467d37: MOV dword ptr [EBP + -0x20],0x0
//   XREF to: Stack[-0x30] (WRITE)
// 00467d3e: JMP 0x00467d43
//   XREF to: 00467d43 (UNCONDITIONAL_JUMP)
// 00467d40: INC dword ptr [EBP + -0x20]
//   Label: LAB_00467d40
//   XREF to: Stack[-0x30] (READ_WRITE)
// 00467d43: MOV EAX,dword ptr [EBP + -0x20]
//   Label: LAB_00467d43
//   XREF to: Stack[-0x30] (READ)
// 00467d46: MOV EDX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00467d49: CMP EAX,dword ptr [EDX + 0xa4]
//   XREF to: 016e99b4 (DATA)
// 00467d4f: JGE 0x00467d7e
//   XREF to: 00467d7e (CONDITIONAL_JUMP)
// 00467d51: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00467d54: SHL EAX,0x2
// 00467d57: ADD EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00467d5a: MOV EAX,dword ptr [EAX + 0xb8]
// 00467d60: SHL EAX,0x3
// 00467d63: MOV EDX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00467d66: ADD EDX,EAX
// 00467d68: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00467d6b: SHL EAX,0x2
// 00467d6e: MOV ECX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00467d71: ADD ECX,EAX
// 00467d73: MOV EAX,dword ptr [EDX + 0x4]
// 00467d76: MOV dword ptr [ECX + 0xb8],EAX
// 00467d7c: JMP 0x00467d40
//   XREF to: 00467d40 (UNCONDITIONAL_JUMP)
// 00467d7e: JMP 0x00467d18
//   Label: LAB_00467d7e
//   XREF to: 00467d18 (UNCONDITIONAL_JUMP)
// 00467d80: CMP dword ptr [EBP + -0x10],0x0
//   Label: LAB_00467d80
//   XREF to: Stack[-0x20] (READ)
// 00467d84: JZ 0x00467d9d
//   XREF to: 00467d9d (CONDITIONAL_JUMP)
// 00467d86: PUSH 0x2138
// 00467d8b: MOV EAX,0x61cb1e
//   XREF to: 0061cb1e (DATA)
// 00467d90: PUSH EAX
//   XREF to: 0061cb1e (DATA)
// 00467d91: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00467d94: PUSH EAX
// 00467d95: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 00467d9a: ADD ESP,0xc
// 00467d9d: PUSH 0x213c
//   Label: LAB_00467d9d
// 00467da2: MOV EAX,0x61cb30
//   XREF to: 0061cb30 (DATA)
// 00467da7: PUSH EAX
//   XREF to: 0061cb30 (DATA)
// 00467da8: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00467dab: PUSH EAX
// 00467dac: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 00467db1: ADD ESP,0xc
// 00467db4: CALL shape_design.c_removeUnusedVertices_FUN_00463830
//   XREF to: 00463830 (UNCONDITIONAL_CALL)
// 00467db9: MOV EAX,[0x01626408]
//   XREF to: 01626408 (READ)
// 00467dbe: CMP EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00467dc1: JZ 0x00467dc8
//   XREF to: 00467dc8 (CONDITIONAL_JUMP)
// 00467dc3: JMP 0x004679cb
//   XREF to: 004679cb (UNCONDITIONAL_JUMP)
// 00467dc8: CALL shape_design.c_removeDegenerateTriangles_FUN_00463a20
//   Label: LAB_00467dc8
//   XREF to: 00463a20 (UNCONDITIONAL_CALL)
// 00467dcd: INC dword ptr [0x01e528a4]
//   XREF to: 01e528a4 (READ_WRITE)
// 00467dd3: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00467dd6: SUB EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 00467ddc: PUSH EAX
// 00467ddd: PUSH dword ptr [0x01e528a4]
//   XREF to: 01e528a4 (READ)
// 00467de3: PUSH dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00467de9: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00467dec: PUSH EAX
// 00467ded: MOV EAX,0x61cb42
//   XREF to: 0061cb42 (DATA)
// 00467df2: PUSH EAX
//   XREF to: 0061cb42 (DATA)
// 00467df3: LEA EAX,[EBP + 0xfffffedc]
//   XREF to: Stack[-0x134] (DATA)
// 00467df9: PUSH EAX
// 00467dfa: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00467dff: ADD ESP,0x18
// 00467e02: CMP dword ptr [EBP + 0x1c],0x0
//   XREF to: Stack[0xc] (READ)
// 00467e06: JLE 0x00467e35
//   XREF to: 00467e35 (CONDITIONAL_JUMP)
// 00467e08: MOV ESI,0x61cb8e
//   XREF to: 0061cb8e (DATA)
// 00467e0d: LEA EDI,[EBP + 0xfffffedc]
//   XREF to: Stack[-0x134] (DATA)
// 00467e13: PUSH EDI
// 00467e14: SUB ECX,ECX
// 00467e16: DEC ECX
// 00467e17: MOV AL,0x0
// 00467e19: SCASB.REPNE ES:EDI
// 00467e1b: DEC EDI
// 00467e1c: MOV AL,byte ptr [ESI]
//   Label: LAB_00467e1c
//   XREF to: 0061cb8e (READ)
//   XREF to: 0061cb90 (READ)
// 00467e1e: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x134] (DATA)
// 00467e20: CMP AL,0x0
// 00467e22: JZ 0x00467e34
//   XREF to: 00467e34 (CONDITIONAL_JUMP)
// 00467e24: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0061cb8f (READ)
//   XREF to: 0061cb91 (READ)
// 00467e27: ADD ESI,0x2
// 00467e2a: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x133] (WRITE)
// 00467e2d: ADD EDI,0x2
// 00467e30: CMP AL,0x0
// 00467e32: JNZ 0x00467e1c
//   XREF to: 00467e1c (CONDITIONAL_JUMP)
// 00467e34: POP EDI
//   Label: LAB_00467e34
// 00467e35: CMP dword ptr [EBP + 0x1c],0x0
//   Label: LAB_00467e35
//   XREF to: Stack[0xc] (READ)
// 00467e39: JL 0x00467e53
//   XREF to: 00467e53 (CONDITIONAL_JUMP)
// 00467e3b: PUSH 0x0
// 00467e3d: PUSH 0x0
// 00467e3f: LEA EAX,[EBP + 0xfffffedc]
//   XREF to: Stack[-0x134] (DATA)
// 00467e45: PUSH EAX
// 00467e46: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00467e4b: ADD ESP,0xc
// 00467e4e: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00467e53: CMP dword ptr [EBP + 0x1c],0x0
//   Label: LAB_00467e53
//   XREF to: Stack[0xc] (READ)
// 00467e57: JLE 0x00467e5e
//   XREF to: 00467e5e (CONDITIONAL_JUMP)
// 00467e59: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00467e5e: MOV ESP,EBP
//   Label: LAB_00467e5e
// 00467e60: POP EBP
// 00467e61: POP EDI
// 00467e62: POP ESI
// 00467e63: POP EBX
// 00467e64: RET
