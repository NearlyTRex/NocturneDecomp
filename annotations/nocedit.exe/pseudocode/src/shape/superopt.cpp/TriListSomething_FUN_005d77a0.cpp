// Name: shape_superopt.cpp_TriListSomething_FUN_005d77a0
// Address: 005d77a0
// Address Range: [[005d77a0, 005d7dfb]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_TriListSomething_FUN_005d77a0()
// Cross-references:
//   core_dcube.cpp_CDemonCube_buildGeometryFromPolygonData (00456ed0) at 00456ee2 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_reduce_cube_04d_txt_006547c0
//   TerminatedCString s_shape_superopt_cpp_006547d4
//   TerminatedCString s_wt_006547ea
//   TerminatedCString s_npoint_ntri_006547ed
//   TerminatedCString s_d_d_006547fe
//   TerminatedCString s_pointList_00654805
//   TerminatedCString s_g_g_g_00654813
//   TerminatedCString s_triList_0065481d
//   TerminatedCString s_shape_superopt_cpp_00654829
//   TerminatedCString s_Too_many_textures_0065483f
//   TerminatedCString s_d_d_d_00654852
//   TerminatedCString s_shape_superopt_cpp_0065485c
//   undefined4 DAT_00654872
//   undefined4 DAT_0065487a
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
//   undefined4 DAT_01626420
//   undefined4 DAT_01626424
//   undefined4 DAT_01626428
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e9914
//   undefined4 DAT_016e9915
//   undefined4 DAT_016e9916
//   undefined4 DAT_016e9917
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99c8
//   undefined4 DAT_016e99cc
//   undefined4 DAT_016e99d0
//   undefined4 DAT_016e99d4
//   undefined4 DAT_016e9a08
//   undefined4 DAT_016e9a0c
//   undefined4 DAT_016e9a10
//   undefined4 DAT_016e9a14
//   undefined4 DAT_016e9a48
//   undefined4 DAT_016e9a4c
//   undefined4 DAT_016e9a50
//   undefined4 DAT_016e9a54
//   undefined4 DAT_016e9a98
//   undefined4 DAT_016e9b38
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_03f6bbe4
//   undefined4 DAT_03f6bbe8
//   undefined4 DAT_03f6bbf0
//   undefined4 DAT_03f6bbf1
//   undefined4 DAT_03f6bbf2
//   undefined4 DAT_03f6bbf3
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_io.c_deleteFile_FUN_005ff9d0
//   crt_memory.c_copyArrayWithFunction_FUN_006020c2
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_stricmp_FUN_005fe7f0
//   shape_design.c_optimizePolygonMesh_FUN_004658e0
//   shape_design.c_removeDegeneratePolygons_FUN_00465310
//   shape_design.c_vertexReducer_FUN_00467850
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0
//   shape_superopt.cpp_BonesAndPointsCheck_FUN_005d7e00
//   shape_superopt.cpp_CObj_dtor_FUN_005d2260
//   shape_superopt.cpp_COptimize_ctor_FUN_005d6f90
//   shape_superopt.cpp_COptimize_dtor_FUN_005d6fd0
//   shape_superopt.cpp_CPoly_dtor_FUN_005cc660
//   shape_superopt.cpp_FUN_005cc620
//   shape_superopt.cpp_FUN_005cd7d0
//   shape_superopt.cpp_FUN_005d2230
//   shape_superopt.cpp_FUN_005d22d0
//   shape_superopt.cpp_FUN_005d2600
//   shape_superopt.cpp_FUN_005d70d0
//   shape_superopt.cpp_FUN_005d7120
//   shape_superopt.cpp_FUN_005d7170
//   shape_superopt.cpp_FUN_005d71c0
//   shape_superopt.cpp_ReduceDatabaseVerticesPolygonsJunctions_FUN_005d7290
//   shape_superopt.cpp_setGeometry_CopyMergeObject_FUN_005d71e0

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005d7ac1) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 shape_superopt.cpp_TriListSomething() */

void shape_superopt_cpp_TriListSomething_FUN_005d77a0(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FILE *file;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  int iVar7;
  char *pcVar8;
  FILE *unaff_EDI;
  char *pcVar9;
  byte bVar10;
  float10 fVar11;
  FILE *unaff_retaddr;
  FILE *in_stack_00000004;
  int in_stack_0000000c;
  undefined1 *apuStackY_112c [1006];
  undefined1 *local_140;
  undefined1 *puStack_13c;
  char cVar15;
  char cVar16;
  char cVar18;
  char cVar20;
  char local_10c [4];
  char local_108 [4];
  char acStack_104 [4];
  char local_100 [4];
  char acStack_fc [4];
  char acStack_f8 [4];
  char acStack_f4 [4];
  int iStack_f0;
  char acStack_ec [40];
  char acStack_c4 [72];
  undefined1 auStack_7c [72];
  int local_34;
  int local_2c;
  undefined1 local_24 [12];
  undefined8 local_18;
  char *str2;
  undefined7 uVar12;
  undefined6 uVar13;
  undefined5 uVar14;
  undefined3 uVar17;
  undefined2 uVar19;
  
  bVar10 = 0;
  shape_design_c_removeDegeneratePolygons_FUN_00465310();
  if ((g_PolygonCount < 1) || (g_VertexCount < 1)) {
    return;
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_fc,"reduce\\cube%04d.txt",DAT_03f6bbe4);
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (acStack_f8,(char *)0x0,"wt","..\\shape\\superopt.cpp",0x252f);
  if (0 < g_PolygonCount) {
    iVar4 = 0;
    do {
      iVar4 = iVar4 + 0x184;
    } while (iVar4 < g_PolygonCount * 0x184);
  }
  if (file != (FILE *)0x0) {
    crt_stdio_c_fprintf_FUN_005fe6d0(file,"// npoint, ntri\n");
    crt_stdio_c_fprintf_FUN_005fe6d0(unaff_EDI,"%d %d\n",g_VertexCount);
  }
  shape_superopt_cpp_FUN_005d2230();
  shape_superopt_cpp_FUN_005d22d0();
  if (unaff_retaddr != (FILE *)0x0) {
    crt_stdio_c_fprintf_FUN_005fe6d0(unaff_retaddr,"// pointList\n");
  }
  iVar4 = 0;
  if (0 < g_VertexCount) {
    iVar6 = 0;
    iVar7 = 0;
    do {
      *(double *)(iVar7 + local_34) = (double)*(float *)((int)&g_LoadedVertices[0].vertex.x + iVar6)
      ;
      *(double *)(iVar7 + 8 + local_34) =
           (double)*(float *)((int)&g_LoadedVertices[0].vertex.y + iVar6);
      *(double *)(iVar7 + 0x10 + local_34) =
           (double)*(float *)((int)&g_LoadedVertices[0].vertex.z + iVar6);
      if (in_stack_00000004 != (FILE *)0x0) {
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (in_stack_00000004,"%g %g %g\n","%g %g %g\n",
                   (double)*(float *)((int)&g_LoadedVertices[0].vertex.x + iVar6),
                   (double)*(float *)((int)&g_LoadedVertices[0].vertex.y + iVar6),
                   (double)*(float *)((int)&g_LoadedVertices[0].vertex.z + iVar6));
      }
      iVar7 = iVar7 + 0x38;
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + 0x14;
    } while (iVar4 < g_VertexCount);
  }
  if (in_stack_00000004 != (FILE *)0x0) {
    crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000004,"// triList\n");
  }
  str2 = (char *)0x0;
  if (0 < g_PolygonCount) {
    iVar4 = 0x16e9914;
    do {
      shape_superopt_cpp_FUN_005cc620();
      uVar2 = *(undefined4 *)((int)g_ModelPolygonData[0].vertex_indices + iVar4);
      _puStack_13c = (double)*(float *)((int)g_ModelPolygonData[0].vertex_indices + iVar4 + 0x40) *
                     _DAT_0065487a;
      iVar6 = 0;
      if (0 < DAT_03f6bbe8) {
        pcVar8 = &DAT_03f6bbf0;
        do {
          iVar7 = crt_string_c_stricmp_FUN_005fe7f0(pcVar8,str2);
          if (iVar7 == 0) goto LAB_005d7a1a;
          iVar6 = iVar6 + 1;
          pcVar8 = pcVar8 + 0x50;
        } while (iVar6 < DAT_03f6bbe8);
      }
      iVar6 = -1;
LAB_005d7a1a:
      if (iVar6 < 0) {
        if (0x31 < DAT_03f6bbe8) {
          g_CurrentFilename = "..\\shape\\superopt.cpp";
          g_CurrentLineNumber = 0x255b;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Too many textures!");
        }
        iVar6 = DAT_03f6bbe8;
        pcVar9 = &DAT_03f6bbf0 + DAT_03f6bbe8 * 0x50;
        pcVar8 = str2;
        do {
          cVar1 = *pcVar8;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
        DAT_03f6bbe8 = DAT_03f6bbe8 + 1;
      }
      in_stack_00000004 = (FILE *)&DAT_00000002;
      iVar7 = iVar4 + 8;
      iStack_f0 = iVar6;
      if (2 < *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar4 + -0x14)) {
        do {
          uVar3 = *(undefined4 *)((int)g_ModelPolygonData[0].vertex_indices + iVar7 + -4);
          local_140 = *(undefined1 **)((int)g_ModelPolygonData[0].vertex_indices + iVar7);
          shape_superopt_cpp_FUN_005cd7d0();
          puVar5 = (undefined4 *)(local_2c + in_stack_0000000c);
          local_18 = (double)CONCAT44(puVar5,(int)local_18);
          *puVar5 = uVar2;
          puVar5[1] = uVar3;
          puVar5[(uint)bVar10 * -2 + 2] =
               *(undefined4 *)((int)&local_140 + (uint)bVar10 * 0xfffffff8);
          (puVar5 + (uint)bVar10 * -2 + 2)[(uint)bVar10 * -2 + 1] =
               (&puStack_13c)[(uint)bVar10 * -2 + (uint)bVar10 * -2];
          crt_memory_c_copyArrayWithFunction_FUN_006020c2
                    (puVar5 + 4,&stack0xfffffec8,3,0x10,shape_superopt_cpp_FUN_005d8330);
          *(char (*) [4])((int)local_18 + 0x40) = local_10c;
          *(char (*) [4])((int)local_18 + 0x44) = local_108;
          *(char (*) [4])((int)local_18 + 0x48) = acStack_104;
          *(char (*) [4])((int)local_18 + 0x4c) = local_100;
          *(char (*) [4])((int)local_18 + 0x50) = acStack_fc;
          *(char (*) [4])((int)local_18 + 0x54) = acStack_f8;
          *(char (*) [4])((int)local_18 + 0x58) = acStack_f4;
          *(int *)((int)local_18 + 0x5c) = iStack_f0;
          *(undefined4 *)((int)local_18 + 0x60) = acStack_ec._0_4_;
          in_stack_00000004 = (FILE *)((int)&in_stack_00000004->_ptr + 1);
          iVar7 = iVar7 + 4;
        } while ((int)in_stack_00000004 <
                 *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar4 + -0x14));
      }
      shape_superopt_cpp_CPoly_dtor_FUN_005cc660((CPoly *)&stack0xfffffeb4);
      iVar4 = iVar4 + 0x184;
      str2 = str2 + 1;
    } while ((int)str2 < g_PolygonCount);
  }
  if (in_stack_00000004 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_00000004,"..\\shape\\superopt.cpp",0x2571);
  }
  shape_superopt_cpp_COptimize_ctor_FUN_005d6f90((COptimize *)auStack_7c);
  fVar11 = (float10)fcos((float10)_DAT_00654872);
  local_18 = (double)((float10)1 - fVar11);
  shape_superopt_cpp_FUN_005d70d0();
  shape_superopt_cpp_FUN_005d7120();
  local_140 = (undefined1 *)0x3f847ae1;
  shape_superopt_cpp_FUN_005d7170();
  stack0xfffffec8 = (undefined4)((ulonglong)_puStack_13c >> 0x20);
  puStack_13c = (undefined1 *)0x4;
  local_140 = auStack_7c + 0x10;
  shape_superopt_cpp_FUN_005d71c0();
  stack0xfffffec8 = 1;
  puStack_13c = local_24;
  local_140 = auStack_7c + 0x14;
  shape_superopt_cpp_setGeometry_CopyMergeObject_FUN_005d71e0();
  stack0xfffffec8 = 0x5d7ce0;
  iVar4 = shape_superopt_cpp_ReduceDatabaseVerticesPolygonsJunctions_FUN_005d7290();
  if (iVar4 == 0) {
    puStack_13c._0_1_ = -0x19;
    puStack_13c._1_1_ = '}';
    puStack_13c._2_1_ = ']';
    puStack_13c._3_1_ = '\0';
    cVar15 = '\0';
    cVar16 = '\0';
    cVar18 = -0x80;
    cVar20 = '?';
    shape_design_c_optimizePolygonMesh_FUN_004658e0(1.0,0,-1);
    DAT_03f6bbe4 = DAT_03f6bbe4 + 1;
  }
  else {
    shape_superopt_cpp_BonesAndPointsCheck_FUN_005d7e00();
    local_140 = (undefined1 *)0x5d7d0c;
    shape_design_c_vertexReducer_FUN_00467850(0.01,-1.0,-1);
    crt_io_c_deleteFile_FUN_005ff9d0(acStack_c4);
  }
  shape_superopt_cpp_FUN_005d2600();
  shape_superopt_cpp_COptimize_dtor_FUN_005d6fd0((COptimize *)(auStack_7c + 0x24));
  shape_superopt_cpp_CObj_dtor_FUN_005d2260((CObj *)&stack0xfffffff0);
  return;
}


// Assembly code:
// 005d77a0: PUSH EBX
//   Label: shape_superopt.cpp_TriListSomething_FUN_005d77a0
// 005d77a1: PUSH ESI
// 005d77a2: PUSH EDI
// 005d77a3: PUSH EBP
// 005d77a4: MOV EBP,ESP
// 005d77a6: SUB ESP,0x158
// 005d77ac: AND ESP,0xfffffff8
// 005d77af: CALL shape_design.c_removeDegeneratePolygons_FUN_00465310
//   XREF to: 00465310 (UNCONDITIONAL_CALL)
// 005d77b4: CMP dword ptr [0x016e990c],0x1
//   XREF to: 016e990c (READ)
// 005d77bb: JL 0x005d77c6
//   XREF to: 005d77c6 (CONDITIONAL_JUMP)
// 005d77bd: CMP dword ptr [0x01626408],0x1
//   XREF to: 01626408 (READ)
// 005d77c4: JGE 0x005d77cd
//   XREF to: 005d77cd (CONDITIONAL_JUMP)
// 005d77c6: MOV ESP,EBP
//   Label: LAB_005d77c6
// 005d77c8: POP EBP
// 005d77c9: POP EDI
// 005d77ca: POP ESI
// 005d77cb: POP EBX
// 005d77cc: RET
// 005d77cd: MOV EBX,dword ptr [0x03f6bbe4]
//   Label: LAB_005d77cd
//   XREF to: 03f6bbe4 (READ)
// 005d77d3: PUSH EBX
// 005d77d4: PUSH 0x6547c0
//   XREF to: 006547c0 (DATA)
// 005d77d9: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0x100] (DATA)
// 005d77dd: PUSH EAX
// 005d77de: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005d77e3: ADD ESP,0xc
// 005d77e6: PUSH 0x252f
// 005d77eb: PUSH 0x6547d4
//   XREF to: 006547d4 (DATA)
// 005d77f0: PUSH 0x6547ea
//   XREF to: 006547ea (DATA)
// 005d77f5: PUSH 0x0
// 005d77f7: LEA EAX,[ESP + 0x78]
//   XREF to: Stack[-0x100] (DATA)
// 005d77fb: PUSH EAX
// 005d77fc: XOR EDI,EDI
// 005d77fe: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 005d7803: ADD ESP,0x14
// 005d7806: MOV ESI,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 005d780c: MOV dword ptr [ESP + 0x14c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005d7813: TEST ESI,ESI
// 005d7815: JLE 0x005d7840
//   XREF to: 005d7840 (CONDITIONAL_JUMP)
// 005d7817: LEA EBX,[ESI*0x4 + 0x0]
// 005d781e: SUB EBX,ESI
// 005d7820: SHL EBX,0x5
// 005d7823: ADD EBX,ESI
// 005d7825: XOR EAX,EAX
// 005d7827: SHL EBX,0x2
// 005d782a: MOV EDX,dword ptr [EAX + 0x16e99b4]
//   Label: LAB_005d782a
//   XREF to: 016e99b4 (READ)
//   XREF to: 016e9b38 (READ)
// 005d7830: SUB EDX,0x2
// 005d7833: ADD EAX,0x184
// 005d7838: ADD EDI,EDX
// 005d783a: CMP EAX,EBX
// 005d783c: JL 0x005d782a
//   XREF to: 005d782a (CONDITIONAL_JUMP)
// 005d783e: MOV EAX,EAX
// 005d7840: MOV EAX,dword ptr [ESP + 0x14c]
//   Label: LAB_005d7840
//   XREF to: Stack[-0x1c] (READ)
// 005d7847: TEST EAX,EAX
// 005d7849: JZ 0x005d7876
//   XREF to: 005d7876 (CONDITIONAL_JUMP)
// 005d784b: PUSH 0x6547ed
//   XREF to: 006547ed (DATA)
// 005d7850: PUSH EAX
// 005d7851: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005d7856: ADD ESP,0x8
// 005d7859: PUSH EDI
// 005d785a: MOV ECX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 005d7860: PUSH ECX
// 005d7861: PUSH 0x6547fe
//   XREF to: 006547fe (DATA)
// 005d7866: MOV EBX,dword ptr [ESP + 0x158]
//   XREF to: Stack[-0x1c] (READ)
// 005d786d: PUSH EBX
// 005d786e: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005d7873: ADD ESP,0x10
// 005d7876: PUSH 0x0
//   Label: LAB_005d7876
// 005d7878: PUSH 0x0
// 005d787a: LEA EAX,[ESP + 0x118]
//   XREF to: Stack[-0x58] (DATA)
// 005d7881: PUSH EAX
// 005d7882: CALL shape_superopt.cpp_FUN_005d2230
//   XREF to: 005d2230 (UNCONDITIONAL_CALL)
// 005d7887: ADD ESP,0xc
// 005d788a: MOV ESI,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 005d7890: PUSH ESI
// 005d7891: PUSH EDI
// 005d7892: LEA EAX,[ESP + 0x118]
//   XREF to: Stack[-0x58] (DATA)
// 005d7899: PUSH EAX
// 005d789a: CALL shape_superopt.cpp_FUN_005d22d0
//   XREF to: 005d22d0 (UNCONDITIONAL_CALL)
// 005d789f: ADD ESP,0xc
// 005d78a2: MOV EDI,dword ptr [ESP + 0x14c]
//   XREF to: Stack[-0x1c] (READ)
// 005d78a9: TEST EDI,EDI
// 005d78ab: JZ 0x005d78bb
//   XREF to: 005d78bb (CONDITIONAL_JUMP)
// 005d78ad: PUSH 0x654805
//   XREF to: 00654805 (DATA)
// 005d78b2: PUSH EDI
// 005d78b3: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005d78b8: ADD ESP,0x8
// 005d78bb: MOV EDX,dword ptr [0x01626408]
//   Label: LAB_005d78bb
//   XREF to: 01626408 (READ)
// 005d78c1: XOR EDI,EDI
// 005d78c3: TEST EDX,EDX
// 005d78c5: JLE 0x005d794f
//   XREF to: 005d794f (CONDITIONAL_JUMP)
// 005d78cb: XOR EBX,EBX
// 005d78cd: XOR ESI,ESI
// 005d78cf: MOV EAX,dword ptr [ESP + 0x114]
//   Label: LAB_005d78cf
//   XREF to: Stack[-0x54] (READ)
// 005d78d6: FLD float ptr [EBX + 0x162640c]
//   XREF to: 0162640c (READ)
//   XREF to: 01626420 (READ)
// 005d78dc: MOV ECX,dword ptr [ESP + 0x14c]
//   XREF to: Stack[-0x1c] (READ)
// 005d78e3: FSTP double ptr [ESI + EAX*0x1]
// 005d78e6: MOV EAX,dword ptr [ESP + 0x114]
//   XREF to: Stack[-0x54] (READ)
// 005d78ed: FLD float ptr [EBX + 0x1626410]
//   XREF to: 01626410 (READ)
//   XREF to: 01626424 (READ)
// 005d78f3: FSTP double ptr [ESI + EAX*0x1 + 0x8]
// 005d78f7: MOV EAX,dword ptr [ESP + 0x114]
//   XREF to: Stack[-0x54] (READ)
// 005d78fe: FLD float ptr [EBX + 0x1626414]
//   XREF to: 01626414 (READ)
//   XREF to: 01626428 (READ)
// 005d7904: FSTP double ptr [ESI + EAX*0x1 + 0x10]
// 005d7908: TEST ECX,ECX
// 005d790a: JZ 0x005d793e
//   XREF to: 005d793e (CONDITIONAL_JUMP)
// 005d790c: SUB ESP,0x8
// 005d790f: FLD float ptr [EBX + 0x1626414]
//   XREF to: 01626414 (READ)
//   XREF to: 01626428 (READ)
// 005d7915: FSTP double ptr [ESP]
//   XREF to: Stack[-0x170] (DATA)
// 005d7918: SUB ESP,0x8
// 005d791b: FLD float ptr [EBX + 0x1626410]
//   XREF to: 01626410 (READ)
//   XREF to: 01626424 (READ)
// 005d7921: FSTP double ptr [ESP]
//   XREF to: Stack[-0x178] (DATA)
// 005d7924: SUB ESP,0x8
// 005d7927: FLD float ptr [EBX + 0x162640c]
//   XREF to: 0162640c (READ)
// 005d792d: FSTP double ptr [ESP]
//   XREF to: Stack[-0x180] (DATA)
// 005d7930: PUSH 0x654813
//   XREF to: 00654813 (DATA)
// 005d7935: PUSH ECX
// 005d7936: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005d793b: ADD ESP,0x20
// 005d793e: MOV ECX,dword ptr [0x01626408]
//   Label: LAB_005d793e
//   XREF to: 01626408 (READ)
// 005d7944: ADD ESI,0x38
// 005d7947: INC EDI
// 005d7948: ADD EBX,0x14
// 005d794b: CMP EDI,ECX
// 005d794d: JL 0x005d78cf
//   XREF to: 005d78cf (CONDITIONAL_JUMP)
// 005d794f: MOV EBX,dword ptr [ESP + 0x14c]
//   Label: LAB_005d794f
//   XREF to: Stack[-0x1c] (READ)
// 005d7956: TEST EBX,EBX
// 005d7958: JZ 0x005d7968
//   XREF to: 005d7968 (CONDITIONAL_JUMP)
// 005d795a: PUSH 0x65481d
//   XREF to: 0065481d (DATA)
// 005d795f: PUSH EBX
// 005d7960: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005d7965: ADD ESP,0x8
// 005d7968: XOR EDI,EDI
//   Label: LAB_005d7968
// 005d796a: MOV EDX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 005d7970: MOV dword ptr [ESP + 0x138],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 005d7977: MOV dword ptr [ESP + 0x148],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 005d797e: TEST EDX,EDX
// 005d7980: JLE 0x005d7c12
//   XREF to: 005d7c12 (CONDITIONAL_JUMP)
// 005d7986: MOV EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 005d798b: ADD EAX,0x4
// 005d798e: MOV dword ptr [ESP + 0x140],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 005d7995: MOV dword ptr [ESP + 0x13c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
//   XREF to: 016e9914 (DATA)
// 005d799c: PUSH 0x0
//   Label: LAB_005d799c
// 005d799e: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x168] (DATA)
// 005d79a2: PUSH EAX
// 005d79a3: CALL shape_superopt.cpp_FUN_005cc620
//   XREF to: 005cc620 (UNCONDITIONAL_CALL)
// 005d79a8: LEA EAX,[ESP + 0x118]
//   XREF to: Stack[-0x58] (DATA)
// 005d79af: ADD ESP,0x8
// 005d79b2: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x168] (DATA)
// 005d79b5: MOV EAX,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x28] (READ)
// 005d79bc: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 005d79c2: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x164] (WRITE)
// 005d79c6: MOV EAX,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x28] (READ)
// 005d79cd: FLD double ptr [0x0065487a]
//   XREF to: 0065487a (READ)
// 005d79d3: FLD float ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 005d79d9: FMUL ST1
// 005d79db: FLD float ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 005d79e1: FMULP ST2
// 005d79e3: XOR EBX,EBX
// 005d79e5: MOV EDI,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x2c] (READ)
// 005d79ec: MOV EAX,[0x03f6bbe8]
//   XREF to: 03f6bbe8 (READ)
// 005d79f1: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x158] (WRITE)
// 005d79f5: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x150] (WRITE)
// 005d79f9: TEST EAX,EAX
// 005d79fb: JLE 0x005d7d69
//   XREF to: 005d7d69 (CONDITIONAL_JUMP)
// 005d7a01: MOV ESI,0x3f6bbf0
//   XREF to: 03f6bbf0 (DATA)
// 005d7a06: PUSH EDI
//   Label: LAB_005d7a06
//   XREF to: 016e9914 (DATA)
// 005d7a07: PUSH ESI
//   XREF to: 03f6bbf0 (DATA)
//   XREF to: 03f6bc40 (DATA)
// 005d7a08: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005d7a0d: ADD ESP,0x8
// 005d7a10: TEST EAX,EAX
// 005d7a12: JNZ 0x005d7d57
//   XREF to: 005d7d57 (CONDITIONAL_JUMP)
// 005d7a18: MOV EAX,EBX
// 005d7a1a: MOV EDX,EAX
//   Label: LAB_005d7a1a
// 005d7a1c: TEST EAX,EAX
// 005d7a1e: JL 0x005d7d73
//   XREF to: 005d7d73 (CONDITIONAL_JUMP)
// 005d7a24: MOV EAX,0x2
//   Label: LAB_005d7a24
// 005d7a29: MOV dword ptr [ESP + 0x5c],EDX
//   XREF to: Stack[-0x10c] (WRITE)
// 005d7a2d: MOV dword ptr [ESP + 0x150],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005d7a34: MOV EAX,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x28] (READ)
// 005d7a3b: MOV EDX,dword ptr [ESP + 0x148]
//   XREF to: Stack[-0x20] (READ)
// 005d7a42: MOV dword ptr [ESP + 0x144],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005d7a49: LEA EBX,[EAX + 0x8]
// 005d7a4c: IMUL EAX,EDX,0x68
// 005d7a4f: MOV dword ptr [ESP + 0x154],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005d7a56: MOV EAX,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x28] (READ)
// 005d7a5d: CMP dword ptr [EAX + 0x16e99b4],0x2
//   XREF to: 016e99b4 (DATA)
// 005d7a64: JLE 0x005d7bbe
//   XREF to: 005d7bbe (CONDITIONAL_JUMP)
// 005d7a6a: FLD double ptr [0x0065487a]
//   Label: LAB_005d7a6a
//   XREF to: 0065487a (READ)
// 005d7a70: FLD float ptr [EBX + 0x16e9a04]
//   XREF to: 016e9a0c (DATA)
//   XREF to: 016e9a10 (DATA)
// 005d7a76: FMUL ST1
// 005d7a78: FLD float ptr [EBX + 0x16e9a44]
//   XREF to: 016e9a4c (DATA)
//   XREF to: 016e9a50 (DATA)
// 005d7a7e: FMUL ST2
// 005d7a80: FLD float ptr [EBX + 0x16e9a08]
//   XREF to: 016e9a10 (DATA)
//   XREF to: 016e9a14 (DATA)
// 005d7a86: FMUL ST3
// 005d7a88: FLD float ptr [EBX + 0x16e9a48]
//   XREF to: 016e9a50 (DATA)
//   XREF to: 016e9a54 (DATA)
// 005d7a8e: FMULP ST4
// 005d7a90: MOV EAX,dword ptr [EBX + 0x16e99c4]
//   XREF to: 016e99cc (DATA)
//   XREF to: 016e99d0 (DATA)
// 005d7a96: MOV ESI,dword ptr [ESP + 0x14c]
//   XREF to: Stack[-0x1c] (READ)
// 005d7a9d: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x160] (WRITE)
// 005d7aa1: FXCH ST2
// 005d7aa3: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x148] (WRITE)
// 005d7aa7: FSTP double ptr [ESP + 0x28]
//   XREF to: Stack[-0x140] (WRITE)
// 005d7aab: FSTP double ptr [ESP + 0x30]
//   XREF to: Stack[-0x138] (WRITE)
// 005d7aaf: MOV EAX,dword ptr [EBX + 0x16e99c8]
//   XREF to: 016e99d0 (DATA)
//   XREF to: 016e99d4 (DATA)
// 005d7ab5: FSTP double ptr [ESP + 0x38]
//   XREF to: Stack[-0x130] (WRITE)
// 005d7ab9: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x15c] (WRITE)
// 005d7abd: TEST ESI,ESI
// 005d7abf: JZ 0x005d7ada
//   XREF to: 005d7ada (CONDITIONAL_JUMP)
// 005d7ac1: PUSH EAX
// 005d7ac2: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x160] (READ)
// 005d7ac6: PUSH EAX
// 005d7ac7: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x164] (READ)
// 005d7acb: PUSH EDX
// 005d7acc: PUSH 0x654852
//   XREF to: 00654852 (DATA)
// 005d7ad1: PUSH ESI
// 005d7ad2: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005d7ad7: ADD ESP,0x14
// 005d7ada: MOV EAX,ESP
//   Label: LAB_005d7ada
// 005d7adc: PUSH EAX
// 005d7add: CALL shape_superopt.cpp_FUN_005cd7d0
//   XREF to: 005cd7d0 (UNCONDITIONAL_CALL)
// 005d7ae2: ADD ESP,0x4
// 005d7ae5: MOV EAX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0x4c] (READ)
// 005d7aec: MOV ESI,dword ptr [ESP + 0x154]
//   XREF to: Stack[-0x14] (READ)
// 005d7af3: PUSH 0x5d8330
//   XREF to: 005d8330 (DATA)
// 005d7af8: ADD EAX,ESI
// 005d7afa: PUSH 0x10
// 005d7afc: MOV dword ptr [ESP + 0x13c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005d7b03: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x164] (DATA)
// 005d7b07: MOV EDX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x34] (READ)
// 005d7b0e: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x168] (READ)
// 005d7b12: PUSH 0x3
// 005d7b14: MOV dword ptr [EDX],EAX
// 005d7b16: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x158] (DATA)
// 005d7b1a: MOV EDI,EDX
// 005d7b1c: PUSH EAX
// 005d7b1d: LEA EAX,[EDX + 0x10]
// 005d7b20: LEA EDI,[EDI + 0x4]
// 005d7b23: PUSH EAX
// 005d7b24: MOVSD ES:EDI,ESI
// 005d7b25: MOVSD ES:EDI,ESI
// 005d7b26: MOVSD ES:EDI,ESI
// 005d7b27: CALL crt_memory.c_copyArrayWithFunction_FUN_006020c2
//   XREF to: 006020c2 (UNCONDITIONAL_CALL)
// 005d7b2c: ADD ESP,0x14
// 005d7b2f: MOV EDX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x34] (READ)
// 005d7b36: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x128] (READ)
// 005d7b3a: MOV dword ptr [EDX + 0x40],EAX
// 005d7b3d: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x124] (READ)
// 005d7b41: MOV dword ptr [EDX + 0x44],EAX
// 005d7b44: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x120] (READ)
// 005d7b48: MOV dword ptr [EDX + 0x48],EAX
// 005d7b4b: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x11c] (READ)
// 005d7b4f: MOV dword ptr [EDX + 0x4c],EAX
// 005d7b52: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x118] (READ)
// 005d7b56: MOV dword ptr [EDX + 0x50],EAX
// 005d7b59: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x114] (READ)
// 005d7b5d: MOV dword ptr [EDX + 0x54],EAX
// 005d7b60: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x110] (READ)
// 005d7b64: MOV dword ptr [EDX + 0x58],EAX
// 005d7b67: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x10c] (READ)
// 005d7b6b: MOV dword ptr [EDX + 0x5c],EAX
// 005d7b6e: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x108] (READ)
// 005d7b72: MOV EDI,dword ptr [ESP + 0x154]
//   XREF to: Stack[-0x14] (READ)
// 005d7b79: MOV dword ptr [EDX + 0x60],EAX
// 005d7b7c: MOV EAX,dword ptr [ESP + 0x148]
//   XREF to: Stack[-0x20] (READ)
// 005d7b83: MOV EDX,dword ptr [ESP + 0x150]
//   XREF to: Stack[-0x18] (READ)
// 005d7b8a: INC EAX
// 005d7b8b: INC EDX
// 005d7b8c: MOV dword ptr [ESP + 0x148],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005d7b93: MOV dword ptr [ESP + 0x150],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 005d7b9a: MOV EAX,EDX
// 005d7b9c: MOV EDX,dword ptr [ESP + 0x144]
//   XREF to: Stack[-0x24] (READ)
// 005d7ba3: ADD EBX,0x4
// 005d7ba6: ADD EDI,0x68
// 005d7ba9: MOV ECX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 005d7baf: MOV dword ptr [ESP + 0x154],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 005d7bb6: CMP EAX,ECX
// 005d7bb8: JL 0x005d7a6a
//   XREF to: 005d7a6a (CONDITIONAL_JUMP)
// 005d7bbe: PUSH 0x0
//   Label: LAB_005d7bbe
// 005d7bc0: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x168] (DATA)
// 005d7bc4: PUSH EAX
// 005d7bc5: CALL shape_superopt.cpp_CPoly_dtor_FUN_005cc660
//   XREF to: 005cc660 (UNCONDITIONAL_CALL)
// 005d7bca: ADD ESP,0x8
// 005d7bcd: MOV ESI,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 005d7bd3: MOV EDX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x2c] (READ)
// 005d7bda: MOV ECX,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x28] (READ)
// 005d7be1: MOV EBX,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x30] (READ)
// 005d7be8: ADD EDX,0x184
//   XREF to: 016e9a98 (PARAM)
// 005d7bee: ADD ECX,0x184
// 005d7bf4: INC EBX
// 005d7bf5: MOV dword ptr [ESP + 0x13c],EDX
//   XREF to: Stack[-0x2c] (WRITE)
//   XREF to: 016e9a98 (DATA)
// 005d7bfc: MOV dword ptr [ESP + 0x140],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 005d7c03: MOV dword ptr [ESP + 0x138],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 005d7c0a: CMP EBX,ESI
// 005d7c0c: JL 0x005d799c
//   XREF to: 005d799c (CONDITIONAL_JUMP)
// 005d7c12: MOV EDI,dword ptr [ESP + 0x14c]
//   Label: LAB_005d7c12
//   XREF to: Stack[-0x1c] (READ)
// 005d7c19: TEST EDI,EDI
// 005d7c1b: JZ 0x005d7c30
//   XREF to: 005d7c30 (CONDITIONAL_JUMP)
// 005d7c1d: PUSH 0x2571
// 005d7c22: PUSH 0x65485c
//   XREF to: 0065485c (DATA)
// 005d7c27: PUSH EDI
// 005d7c28: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 005d7c2d: ADD ESP,0xc
// 005d7c30: LEA EAX,[ESP + 0xcc]
//   Label: LAB_005d7c30
//   XREF to: Stack[-0x9c] (DATA)
// 005d7c37: PUSH EAX
// 005d7c38: CALL shape_superopt.cpp_COptimize_ctor_FUN_005d6f90
//   XREF to: 005d6f90 (UNCONDITIONAL_CALL)
// 005d7c3d: FLD double ptr [0x00654872]
//   XREF to: 00654872 (READ)
// 005d7c43: FCOS
// 005d7c45: ADD ESP,0x4
// 005d7c48: PUSH 0x3f847ae1
// 005d7c4d: PUSH 0x47ae147b
// 005d7c52: FLD1
// 005d7c54: LEA EAX,[ESP + 0xd4]
//   XREF to: Stack[-0x9c] (DATA)
// 005d7c5b: FSUBRP
// 005d7c5d: PUSH EAX
// 005d7c5e: FSTP double ptr [ESP + 0x138]
//   XREF to: Stack[-0x3c] (WRITE)
// 005d7c65: CALL shape_superopt.cpp_FUN_005d70d0
//   XREF to: 005d70d0 (UNCONDITIONAL_CALL)
// 005d7c6a: ADD ESP,0xc
// 005d7c6d: MOV EDX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0x38] (READ)
// 005d7c74: PUSH EDX
// 005d7c75: MOV ECX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0x3c] (READ)
// 005d7c7c: PUSH ECX
// 005d7c7d: LEA EAX,[ESP + 0xd4]
//   XREF to: Stack[-0x9c] (DATA)
// 005d7c84: PUSH EAX
// 005d7c85: CALL shape_superopt.cpp_FUN_005d7120
//   XREF to: 005d7120 (UNCONDITIONAL_CALL)
// 005d7c8a: ADD ESP,0xc
// 005d7c8d: PUSH 0x3f847ae1
// 005d7c92: PUSH 0x47ae147b
// 005d7c97: LEA EAX,[ESP + 0xd4]
//   XREF to: Stack[-0x9c] (DATA)
// 005d7c9e: PUSH EAX
// 005d7c9f: CALL shape_superopt.cpp_FUN_005d7170
//   XREF to: 005d7170 (UNCONDITIONAL_CALL)
// 005d7ca4: ADD ESP,0xc
// 005d7ca7: PUSH 0x4
// 005d7ca9: LEA EAX,[ESP + 0xd0]
//   XREF to: Stack[-0x9c] (DATA)
// 005d7cb0: PUSH EAX
// 005d7cb1: CALL shape_superopt.cpp_FUN_005d71c0
//   XREF to: 005d71c0 (UNCONDITIONAL_CALL)
// 005d7cb6: ADD ESP,0x8
// 005d7cb9: PUSH 0x1
// 005d7cbb: LEA EAX,[ESP + 0x114]
//   XREF to: Stack[-0x58] (DATA)
// 005d7cc2: PUSH EAX
// 005d7cc3: LEA EAX,[ESP + 0xd4]
//   XREF to: Stack[-0x9c] (DATA)
// 005d7cca: PUSH EAX
// 005d7ccb: CALL shape_superopt.cpp_setGeometry_CopyMergeObject_FUN_005d71e0
//   XREF to: 005d71e0 (UNCONDITIONAL_CALL)
// 005d7cd0: ADD ESP,0xc
// 005d7cd3: LEA EAX,[ESP + 0xcc]
//   XREF to: Stack[-0x9c] (DATA)
// 005d7cda: PUSH EAX
// 005d7cdb: CALL shape_superopt.cpp_ReduceDatabaseVerticesPolygonsJunctions_FUN_005d7290
//   XREF to: 005d7290 (UNCONDITIONAL_CALL)
// 005d7ce0: ADD ESP,0x4
// 005d7ce3: TEST EAX,EAX
// 005d7ce5: JZ 0x005d7dda
//   XREF to: 005d7dda (CONDITIONAL_JUMP)
// 005d7ceb: LEA EAX,[ESP + 0xcc]
//   XREF to: Stack[-0x9c] (DATA)
// 005d7cf2: PUSH EAX
// 005d7cf3: CALL shape_superopt.cpp_BonesAndPointsCheck_FUN_005d7e00
//   XREF to: 005d7e00 (UNCONDITIONAL_CALL)
// 005d7cf8: ADD ESP,0x4
// 005d7cfb: PUSH -0x1
// 005d7cfd: PUSH 0xbf800000
// 005d7d02: PUSH 0x3c23d70a
// 005d7d07: CALL shape_design.c_vertexReducer_FUN_00467850
//   XREF to: 00467850 (UNCONDITIONAL_CALL)
// 005d7d0c: ADD ESP,0xc
// 005d7d0f: LEA EAX,[ESP + 0x68]
//   XREF to: Stack[-0x100] (DATA)
// 005d7d13: PUSH EAX
// 005d7d14: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 005d7d19: ADD ESP,0x4
// 005d7d1c: LEA EAX,[ESP + 0x110]
//   Label: LAB_005d7d1c
//   XREF to: Stack[-0x58] (DATA)
// 005d7d23: PUSH EAX
// 005d7d24: CALL shape_superopt.cpp_FUN_005d2600
//   XREF to: 005d2600 (UNCONDITIONAL_CALL)
// 005d7d29: ADD ESP,0x4
// 005d7d2c: PUSH 0x0
// 005d7d2e: LEA EAX,[ESP + 0xd0]
//   XREF to: Stack[-0x9c] (DATA)
// 005d7d35: PUSH EAX
// 005d7d36: CALL shape_superopt.cpp_COptimize_dtor_FUN_005d6fd0
//   XREF to: 005d6fd0 (UNCONDITIONAL_CALL)
// 005d7d3b: ADD ESP,0x8
// 005d7d3e: PUSH 0x0
// 005d7d40: LEA EAX,[ESP + 0x114]
//   XREF to: Stack[-0x58] (DATA)
// 005d7d47: PUSH EAX
// 005d7d48: CALL shape_superopt.cpp_CObj_dtor_FUN_005d2260
//   XREF to: 005d2260 (UNCONDITIONAL_CALL)
// 005d7d4d: ADD ESP,0x8
// 005d7d50: MOV ESP,EBP
// 005d7d52: POP EBP
// 005d7d53: POP EDI
// 005d7d54: POP ESI
// 005d7d55: POP EBX
// 005d7d56: RET
// 005d7d57: MOV EDX,dword ptr [0x03f6bbe8]
//   Label: LAB_005d7d57
//   XREF to: 03f6bbe8 (READ)
// 005d7d5d: INC EBX
// 005d7d5e: ADD ESI,0x50
// 005d7d61: CMP EBX,EDX
// 005d7d63: JL 0x005d7a06
//   XREF to: 005d7a06 (CONDITIONAL_JUMP)
// 005d7d69: MOV EAX,0xffffffff
//   Label: LAB_005d7d69
// 005d7d6e: JMP 0x005d7a1a
//   XREF to: 005d7a1a (UNCONDITIONAL_JUMP)
// 005d7d73: CMP dword ptr [0x03f6bbe8],0x32
//   Label: LAB_005d7d73
//   XREF to: 03f6bbe8 (READ)
// 005d7d7a: JL 0x005d7d9f
//   XREF to: 005d7d9f (CONDITIONAL_JUMP)
// 005d7d7c: MOV EBX,0x654829
//   XREF to: 00654829 (PARAM)
// 005d7d81: MOV ESI,0x255b
// 005d7d86: PUSH 0x65483f
//   XREF to: 0065483f (DATA)
// 005d7d8b: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 005d7d91: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 005d7d97: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005d7d9c: ADD ESP,0x4
// 005d7d9f: MOV EDX,dword ptr [0x03f6bbe8]
//   Label: LAB_005d7d9f
//   XREF to: 03f6bbe8 (READ)
// 005d7da5: IMUL EDI,EDX,0x50
// 005d7da8: MOV ESI,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x2c] (READ)
// 005d7daf: ADD EDI,0x3f6bbf0
//   XREF to: 03f6bbf0 (DATA)
// 005d7db5: PUSH EDI
// 005d7db6: MOV AL,byte ptr [ESI]
//   Label: LAB_005d7db6
//   XREF to: 016e9914 (READ)
//   XREF to: 016e9916 (READ)
// 005d7db8: MOV byte ptr [EDI],AL
//   XREF to: 03f6bbf0 (DATA)
//   XREF to: 03f6bbf2 (DATA)
// 005d7dba: CMP AL,0x0
// 005d7dbc: JZ 0x005d7dce
//   XREF to: 005d7dce (CONDITIONAL_JUMP)
// 005d7dbe: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 016e9915 (READ)
//   XREF to: 016e9917 (READ)
// 005d7dc1: ADD ESI,0x2
// 005d7dc4: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 03f6bbf1 (DATA)
//   XREF to: 03f6bbf3 (DATA)
// 005d7dc7: ADD EDI,0x2
// 005d7dca: CMP AL,0x0
// 005d7dcc: JNZ 0x005d7db6
//   XREF to: 005d7db6 (CONDITIONAL_JUMP)
// 005d7dce: POP EDI
//   Label: LAB_005d7dce
// 005d7dcf: INC dword ptr [0x03f6bbe8]
//   XREF to: 03f6bbe8 (READ_WRITE)
// 005d7dd5: JMP 0x005d7a24
//   XREF to: 005d7a24 (UNCONDITIONAL_JUMP)
// 005d7dda: PUSH -0x1
//   Label: LAB_005d7dda
// 005d7ddc: PUSH EAX
// 005d7ddd: PUSH 0x3f800000
// 005d7de2: CALL shape_design.c_optimizePolygonMesh_FUN_004658e0
//   XREF to: 004658e0 (UNCONDITIONAL_CALL)
// 005d7de7: MOV EBX,dword ptr [0x03f6bbe4]
//   XREF to: 03f6bbe4 (READ)
// 005d7ded: INC EBX
// 005d7dee: ADD ESP,0xc
// 005d7df1: MOV dword ptr [0x03f6bbe4],EBX
//   XREF to: 03f6bbe4 (WRITE)
// 005d7df7: JMP 0x005d7d1c
//   XREF to: 005d7d1c (UNCONDITIONAL_JUMP)
