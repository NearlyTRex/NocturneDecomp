// Name: shape_superopt.cpp_BonesAndPointsCheck_FUN_005d7e00
// Address: 005d7e00
// Address Range: [[005d7e00, 005d811a]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_BonesAndPointsCheck_FUN_005d7e00()
// Cross-references:
//   shape_superopt.cpp_TriListSomething_FUN_005d77a0 (005d77a0) at 005d7cf3 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_superopt_cpp_00654882
//   TerminatedCString s_Too_many_points_00654898
//   TerminatedCString s_shape_superopt_cpp_006548a9
//   TerminatedCString s_Too_many_polys_006548bf
//   double DOUBLE_006548d2 = 256
//   undefined4 DAT_00766880
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
//   undefined4 DAT_016e9964
//   undefined4 DAT_016e9965
//   undefined4 DAT_016e9966
//   undefined4 DAT_016e9967
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99c8
//   undefined4 DAT_016e99cc
//   undefined4 DAT_016e99d0
//   undefined4 DAT_016e9a08
//   undefined4 DAT_016e9a0c
//   undefined4 DAT_016e9a10
//   undefined4 DAT_016e9a48
//   undefined4 DAT_016e9a4c
//   undefined4 DAT_016e9a50
//   undefined4 DAT_016e9a88
//   undefined4 DAT_016e9a94
//   undefined4 DAT_016e9a98
//   undefined4 DAT_016e9a99
//   undefined4 DAT_016e9ae8
//   undefined4 DAT_016e9c0c
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_03f6bbf0
//   undefined4 DAT_03f6bbf1
//   undefined4 DAT_03f6bbf3
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_memset_FUN_005fde40
//   shape_design.c_calculateVertexNormals_FUN_0045be40
//   shape_superopt.cpp_FUN_005cbec0
//   shape_superopt.cpp_FUN_005cbf00

#include "nocturne.h"

void shape_superopt_cpp_BonesAndPointsCheck_FUN_005d7e00(void)

{
  double *pdVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  char *pcVar15;
  float10 fVar16;
  int in_stack_0000000c;
  uint local_34;
  uint local_2c;
  uint local_28;
  uint *local_24;
  
  g_PolygonCount = 0;
  g_VertexCount = 0;
  crt_memory_c_memset_FUN_005fde40(g_ModelPolygonData,0,0x766880);
  crt_memory_c_memset_FUN_005fde40(g_LoadedVertices,0,400000);
  local_2c = 0;
  if (*(int *)(in_stack_0000000c + 0x38) != 0) {
    do {
      local_24 = (uint *)shape_superopt_cpp_FUN_005cbec0();
      iVar7 = shape_superopt_cpp_FUN_005cbf00();
      local_28 = 0;
      if (local_34 != 0) {
LAB_005d7e9e:
        uVar3 = local_24[1];
        uVar4 = *local_24;
        if (20000 < g_VertexCount + uVar4) {
          g_CurrentFilename = "..\\shape\\superopt.cpp";
          g_CurrentLineNumber = 0x25b3;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Too many points!");
        }
        uVar9 = 0;
        if (uVar4 != 0) {
          iVar10 = g_VertexCount * 0x14;
          uVar12 = uVar3;
          do {
            uVar9 = uVar9 + 1;
            *(float *)((int)&g_LoadedVertices[0].vertex.x + iVar10) =
                 (float)*(double *)(uVar12 + 0x10);
            *(float *)((int)&g_LoadedVertices[0].vertex.y + iVar10) =
                 (float)*(double *)(uVar12 + 0x18);
            *(float *)((int)&g_LoadedVertices[0].vertex.z + iVar10) =
                 (float)*(double *)(uVar12 + 0x20);
            iVar10 = iVar10 + 0x14;
            uVar12 = uVar12 + 0x60;
          } while (uVar9 < uVar4);
        }
        uVar12 = *(int *)(in_stack_0000000c + 0x34) - 1;
        uVar9 = 1;
        do {
          uVar13 = uVar12;
          if (uVar4 <= uVar12) {
            uVar13 = uVar4 - 1;
          }
          if (19999 < g_PolygonCount) {
            g_CurrentFilename = "..\\shape\\superopt.cpp";
            g_CurrentLineNumber = 0x25c1;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Too many polys!");
          }
          iVar10 = g_PolygonCount;
          g_ModelPolygonData[g_PolygonCount].polygon_type = 1;
          g_ModelPolygonData[iVar10].part_assignment = 0;
          pcVar15 = g_ModelPolygonData[iVar10].texture_name;
          pcVar14 = &DAT_03f6bbf0 + iVar7 * 0x50;
          do {
            cVar2 = *pcVar14;
            *pcVar15 = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar14[1];
            pcVar14 = pcVar14 + 2;
            pcVar15[1] = cVar2;
            pcVar15 = pcVar15 + 2;
          } while (cVar2 != '\0');
          pcVar15 = g_ModelPolygonData[g_PolygonCount].lightmap_name;
          pcVar14 = &DAT_03f6bbf0 + iVar7 * 0x50;
          do {
            cVar2 = *pcVar14;
            *pcVar15 = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar14[1];
            pcVar14 = pcVar14 + 2;
            pcVar15[1] = cVar2;
            pcVar15 = pcVar15 + 2;
          } while (cVar2 != '\0');
          iVar6 = g_PolygonCount;
          iVar8 = g_PolygonCount * 0x184;
          g_ModelPolygonData[g_PolygonCount].vertex_indices[0] = g_VertexCount;
          fVar16 = (float10)DOUBLE_006548d2;
          g_ModelPolygonData[iVar6].uv_u[0] = (float)((float10)*(double *)(uVar3 + 0x40) * fVar16);
          iVar5 = g_VertexCount;
          iVar11 = uVar9 * 0x60 + uVar3;
          iVar10 = uVar9 + g_VertexCount;
          uVar9 = 1;
          g_ModelPolygonData[iVar6].uv_v[0] = (float)((float10)*(double *)(uVar3 + 0x48) * fVar16);
          if (iVar10 <= (int)(iVar5 + uVar13)) {
            fVar16 = (float10)DOUBLE_006548d2;
            do {
              *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar8 + 4) = iVar10;
              *(float *)((int)g_ModelPolygonData[0].uv_u + iVar8 + 4) =
                   (float)((float10)*(double *)(iVar11 + 0x40) * fVar16);
              pdVar1 = (double *)(iVar11 + 0x48);
              uVar9 = uVar9 + 1;
              iVar11 = iVar11 + 0x60;
              iVar10 = iVar10 + 1;
              *(float *)((int)g_ModelPolygonData[0].uv_v + iVar8 + 4) =
                   (float)((float10)*pdVar1 * fVar16);
              iVar8 = iVar8 + 4;
            } while (iVar10 <= (int)(iVar5 + uVar13));
          }
          g_ModelPolygonData[iVar6].vertex_indices_count = uVar9;
          g_PolygonCount = g_PolygonCount + 1;
          if (uVar4 - 1 <= uVar13) goto LAB_005d80e9;
          uVar12 = uVar13 + *(int *)(in_stack_0000000c + 0x34) + -2;
          uVar9 = uVar13;
        } while( true );
      }
LAB_005d80b9:
      local_2c = local_2c + 1;
    } while (local_2c < *(uint *)(in_stack_0000000c + 0x38));
  }
  shape_design_c_calculateVertexNormals_FUN_0045be40();
  return;
LAB_005d80e9:
  local_24 = local_24 + 2;
  g_VertexCount = g_VertexCount + uVar4;
  local_28 = local_28 + 1;
  if (local_34 <= local_28) goto LAB_005d80b9;
  goto LAB_005d7e9e;
}


// Assembly code:
// 005d7e00: PUSH EBX
//   Label: shape_superopt.cpp_BonesAndPointsCheck_FUN_005d7e00
// 005d7e01: PUSH ESI
// 005d7e02: PUSH EDI
// 005d7e03: PUSH EBP
// 005d7e04: SUB ESP,0x2c
// 005d7e07: PUSH 0x766880
//   XREF to: 00766880 (DATA)
// 005d7e0c: XOR EDX,EDX
// 005d7e0e: PUSH EDX
// 005d7e0f: PUSH 0x16e9910
//   XREF to: 016e9910 (DATA)
// 005d7e14: MOV dword ptr [0x016e990c],EDX
//   XREF to: 016e990c (WRITE)
// 005d7e1a: MOV dword ptr [0x01626408],EDX
//   XREF to: 01626408 (WRITE)
// 005d7e20: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005d7e25: ADD ESP,0xc
// 005d7e28: PUSH 0x61a80
// 005d7e2d: PUSH 0x0
// 005d7e2f: PUSH 0x162640c
//   XREF to: 0162640c (DATA)
// 005d7e34: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005d7e39: ADD ESP,0xc
// 005d7e3c: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 005d7e40: XOR EBX,EBX
// 005d7e42: MOV ESI,dword ptr [EAX + 0x38]
// 005d7e45: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x34] (WRITE)
// 005d7e49: TEST ESI,ESI
// 005d7e4b: JBE 0x005d80dc
//   XREF to: 005d80dc (CONDITIONAL_JUMP)
// 005d7e51: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x38] (WRITE)
// 005d7e55: MOV EAX,dword ptr [ESP + 0x40]
//   Label: LAB_005d7e55
//   XREF to: Stack[0x4] (READ)
// 005d7e59: MOV ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x38] (READ)
// 005d7e5d: MOV EAX,dword ptr [EAX + 0x3c]
// 005d7e60: ADD EAX,ESI
// 005d7e62: MOV EBX,dword ptr [EAX]
// 005d7e64: MOV EAX,ESP
// 005d7e66: PUSH EAX
// 005d7e67: PUSH EBX
// 005d7e68: CALL shape_superopt.cpp_FUN_005cbec0
//   XREF to: 005cbec0 (UNCONDITIONAL_CALL)
// 005d7e6d: ADD ESP,0x8
// 005d7e70: PUSH EBX
// 005d7e71: MOV ESI,EAX
// 005d7e73: CALL shape_superopt.cpp_FUN_005cbf00
//   XREF to: 005cbf00 (UNCONDITIONAL_CALL)
// 005d7e78: IMUL EAX,EAX,0x50
// 005d7e7b: XOR EDI,EDI
// 005d7e7d: ADD ESP,0x4
// 005d7e80: MOV EDX,0x3f6bbf0
//   XREF to: 03f6bbf0 (DATA)
// 005d7e85: MOV EBP,dword ptr [ESP]
//   XREF to: Stack[-0x3c] (DATA)
// 005d7e88: ADD EDX,EAX
// 005d7e8a: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 005d7e8e: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 005d7e92: TEST EBP,EBP
// 005d7e94: JBE 0x005d80b9
//   XREF to: 005d80b9 (CONDITIONAL_JUMP)
// 005d7e9a: MOV dword ptr [ESP + 0x10],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 005d7e9e: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_005d7e9e
//   XREF to: Stack[-0x2c] (READ)
// 005d7ea2: MOV EAX,dword ptr [EAX + 0x4]
// 005d7ea5: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005d7ea9: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x2c] (READ)
// 005d7ead: MOV EAX,dword ptr [EAX]
// 005d7eaf: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005d7eb3: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x1c] (READ)
// 005d7eb7: MOV EAX,[0x01626408]
//   XREF to: 01626408 (READ)
// 005d7ebc: ADD EAX,EDI
// 005d7ebe: CMP EAX,0x4e20
// 005d7ec3: JBE 0x005d7ee7
//   XREF to: 005d7ee7 (CONDITIONAL_JUMP)
// 005d7ec5: MOV EBP,0x654882
//   XREF to: 00654882 (DATA)
// 005d7eca: MOV EAX,0x25b3
// 005d7ecf: PUSH 0x654898
//   XREF to: 00654898 (DATA)
// 005d7ed4: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 005d7eda: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005d7edf: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005d7ee4: ADD ESP,0x4
// 005d7ee7: MOV EDX,dword ptr [ESP + 0x20]
//   Label: LAB_005d7ee7
//   XREF to: Stack[-0x1c] (READ)
// 005d7eeb: XOR ECX,ECX
// 005d7eed: TEST EDX,EDX
// 005d7eef: JBE 0x005d7f28
//   XREF to: 005d7f28 (CONDITIONAL_JUMP)
// 005d7ef1: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 005d7ef5: MOV EDI,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 005d7efb: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x1c] (READ)
// 005d7eff: IMUL EAX,EDI,0x14
// 005d7f02: FLD double ptr [EDX + 0x10]
//   Label: LAB_005d7f02
// 005d7f05: ADD EDX,0x60
// 005d7f08: INC ECX
// 005d7f09: FSTP float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (WRITE)
//   XREF to: 01626420 (WRITE)
// 005d7f0f: ADD EAX,0x14
// 005d7f12: FLD double ptr [EDX + -0x48]
// 005d7f15: FSTP float ptr [EAX + 0x16263fc]
//   XREF to: 01626410 (WRITE)
//   XREF to: 01626424 (WRITE)
// 005d7f1b: FLD double ptr [EDX + -0x40]
// 005d7f1e: FSTP float ptr [EAX + 0x1626400]
//   XREF to: 01626414 (WRITE)
//   XREF to: 01626428 (WRITE)
// 005d7f24: CMP ECX,EBX
// 005d7f26: JC 0x005d7f02
//   XREF to: 005d7f02 (CONDITIONAL_JUMP)
// 005d7f28: MOV EAX,dword ptr [ESP + 0x40]
//   Label: LAB_005d7f28
//   XREF to: Stack[0x4] (READ)
// 005d7f2c: MOV ESI,0x1
// 005d7f31: MOV EBP,dword ptr [EAX + 0x34]
// 005d7f34: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x1c] (READ)
// 005d7f38: MOV dword ptr [ESP + 0x24],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 005d7f3c: SUB EAX,ESI
// 005d7f3e: DEC EBP
// 005d7f3f: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005d7f43: CMP EBP,dword ptr [ESP + 0x20]
//   Label: LAB_005d7f43
//   XREF to: Stack[-0x1c] (READ)
// 005d7f47: JC 0x005d7f4d
//   XREF to: 005d7f4d (CONDITIONAL_JUMP)
// 005d7f49: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x20] (READ)
// 005d7f4d: CMP dword ptr [0x016e990c],0x4e20
//   Label: LAB_005d7f4d
//   XREF to: 016e990c (READ)
// 005d7f57: JL 0x005d7f7c
//   XREF to: 005d7f7c (CONDITIONAL_JUMP)
// 005d7f59: MOV ECX,0x6548a9
//   XREF to: 006548a9 (PARAM)
// 005d7f5e: MOV EBX,0x25c1
// 005d7f63: PUSH 0x6548bf
//   XREF to: 006548bf (DATA)
// 005d7f68: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005d7f6e: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 005d7f74: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005d7f79: ADD ESP,0x4
// 005d7f7c: IMUL EAX,dword ptr [0x016e990c],0x184
//   Label: LAB_005d7f7c
//   XREF to: 016e990c (READ)
// 005d7f86: MOV EDI,0x1
// 005d7f8b: XOR EDX,EDX
// 005d7f8d: MOV dword ptr [EAX + 0x16e9910],EDI
//   XREF to: 016e9910 (WRITE)
//   XREF to: 016e9a94 (WRITE)
// 005d7f93: MOV dword ptr [EAX + 0x16e9a88],EDX
//   XREF to: 016e9a88 (WRITE)
//   XREF to: 016e9c0c (WRITE)
// 005d7f99: ADD EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 005d7f9e: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x24] (READ)
// 005d7fa2: LEA EDI,[EAX + 0x4]
//   XREF to: 016e9914 (DATA)
// 005d7fa5: PUSH EDI
//   XREF to: 016e9914 (DATA)
//   XREF to: 016e9a98 (DATA)
// 005d7fa6: MOV AL,byte ptr [ESI]
//   Label: LAB_005d7fa6
//   XREF to: 03f6bbf0 (DATA)
//   XREF to: 03f6bbf2 (DATA)
// 005d7fa8: MOV byte ptr [EDI],AL
//   XREF to: 016e9914 (WRITE)
//   XREF to: 016e9916 (WRITE)
//   XREF to: 016e9a98 (WRITE)
// 005d7faa: CMP AL,0x0
// 005d7fac: JZ 0x005d7fbe
//   XREF to: 005d7fbe (CONDITIONAL_JUMP)
// 005d7fae: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 03f6bbf1 (DATA)
//   XREF to: 03f6bbf3 (DATA)
// 005d7fb1: ADD ESI,0x2
// 005d7fb4: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 016e9915 (WRITE)
//   XREF to: 016e9917 (WRITE)
//   XREF to: 016e9a99 (WRITE)
// 005d7fb7: ADD EDI,0x2
// 005d7fba: CMP AL,0x0
// 005d7fbc: JNZ 0x005d7fa6
//   XREF to: 005d7fa6 (CONDITIONAL_JUMP)
// 005d7fbe: POP EDI
//   Label: LAB_005d7fbe
// 005d7fbf: IMUL EAX,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 005d7fc9: ADD EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 005d7fce: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x24] (READ)
// 005d7fd2: LEA EDI,[EAX + 0x54]
//   XREF to: 016e9964 (DATA)
// 005d7fd5: PUSH EDI
//   XREF to: 016e9964 (DATA)
//   XREF to: 016e9ae8 (DATA)
// 005d7fd6: MOV AL,byte ptr [ESI]
//   Label: LAB_005d7fd6
//   XREF to: 03f6bbf0 (DATA)
//   XREF to: 03f6bbf2 (DATA)
// 005d7fd8: MOV byte ptr [EDI],AL
//   XREF to: 016e9964 (WRITE)
//   XREF to: 016e9966 (WRITE)
// 005d7fda: CMP AL,0x0
// 005d7fdc: JZ 0x005d7fee
//   XREF to: 005d7fee (CONDITIONAL_JUMP)
// 005d7fde: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 03f6bbf1 (DATA)
//   XREF to: 03f6bbf3 (DATA)
// 005d7fe1: ADD ESI,0x2
// 005d7fe4: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 016e9965 (WRITE)
//   XREF to: 016e9967 (WRITE)
// 005d7fe7: ADD EDI,0x2
// 005d7fea: CMP AL,0x0
// 005d7fec: JNZ 0x005d7fd6
//   XREF to: 005d7fd6 (CONDITIONAL_JUMP)
// 005d7fee: POP EDI
//   Label: LAB_005d7fee
// 005d7fef: IMUL EAX,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 005d7ff9: MOV EDX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 005d7fff: MOV dword ptr [EAX + 0x16e99c8],EDX
//   XREF to: 016e99c8 (WRITE)
// 005d8005: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 005d8009: FLD double ptr [0x006548d2]
//   XREF to: 006548d2 (READ)
// 005d800f: FLD double ptr [EDX + 0x40]
// 005d8012: FMUL ST1
// 005d8014: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x18] (READ)
// 005d8018: FSTP float ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (WRITE)
// 005d801e: FLD double ptr [EDX + 0x48]
// 005d8021: IMUL EDX,ESI,0x60
// 005d8024: FMULP
// 005d8026: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 005d802a: MOV ECX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 005d8030: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005d8034: ADD EAX,0x4
// 005d8037: ADD EDX,EDI
// 005d8039: LEA EDI,[ESI + ECX*0x1]
// 005d803c: MOV EBX,0x1
// 005d8041: MOV ESI,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 005d8047: FSTP float ptr [EAX + 0x16e9a44]
//   XREF to: 016e9a48 (WRITE)
// 005d804d: ADD ESI,EBP
// 005d804f: MOV ECX,EDI
// 005d8051: CMP EDI,ESI
// 005d8053: JG 0x005d8085
//   XREF to: 005d8085 (CONDITIONAL_JUMP)
// 005d8055: FLD double ptr [0x006548d2]
//   XREF to: 006548d2 (READ)
// 005d805b: MOV dword ptr [EAX + 0x16e99c8],ECX
//   Label: LAB_005d805b
//   XREF to: 016e99cc (WRITE)
//   XREF to: 016e99d0 (WRITE)
// 005d8061: FLD double ptr [EDX + 0x40]
// 005d8064: FMUL ST1
// 005d8066: FSTP float ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a0c (WRITE)
//   XREF to: 016e9a10 (WRITE)
// 005d806c: FLD double ptr [EDX + 0x48]
// 005d806f: FMUL ST1
// 005d8071: ADD EAX,0x4
// 005d8074: INC EBX
// 005d8075: ADD EDX,0x60
// 005d8078: INC ECX
// 005d8079: FSTP float ptr [EAX + 0x16e9a44]
//   XREF to: 016e9a4c (WRITE)
//   XREF to: 016e9a50 (WRITE)
// 005d807f: CMP ECX,ESI
// 005d8081: JLE 0x005d805b
//   XREF to: 005d805b (CONDITIONAL_JUMP)
// 005d8083: FSTP ST0
// 005d8085: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_005d8085
//   XREF to: Stack[-0x28] (READ)
// 005d8089: MOV dword ptr [EAX + 0x16e99b4],EBX
//   XREF to: 016e99b4 (DATA)
// 005d808f: MOV EBX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 005d8095: INC EBX
// 005d8096: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x20] (READ)
// 005d809a: MOV dword ptr [0x016e990c],EBX
//   XREF to: 016e990c (WRITE)
// 005d80a0: CMP EBP,ESI
// 005d80a2: JNC 0x005d80e9
//   XREF to: 005d80e9 (CONDITIONAL_JUMP)
// 005d80a4: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 005d80a8: MOV EAX,dword ptr [EAX + 0x34]
// 005d80ab: SUB EAX,0x2
// 005d80ae: MOV dword ptr [ESP + 0x24],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 005d80b2: ADD EBP,EAX
// 005d80b4: JMP 0x005d7f43
//   XREF to: 005d7f43 (UNCONDITIONAL_JUMP)
// 005d80b9: MOV EDI,dword ptr [ESP + 0x4]
//   Label: LAB_005d80b9
//   XREF to: Stack[-0x38] (READ)
// 005d80bd: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x34] (READ)
// 005d80c1: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 005d80c5: ADD EDI,0x4
// 005d80c8: INC EBP
// 005d80c9: MOV ECX,dword ptr [EDX + 0x38]
// 005d80cc: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x38] (WRITE)
// 005d80d0: MOV dword ptr [ESP + 0x8],EBP
//   XREF to: Stack[-0x34] (WRITE)
// 005d80d4: CMP EBP,ECX
// 005d80d6: JC 0x005d7e55
//   XREF to: 005d7e55 (CONDITIONAL_JUMP)
// 005d80dc: CALL shape_design.c_calculateVertexNormals_FUN_0045be40
//   Label: LAB_005d80dc
//   XREF to: 0045be40 (UNCONDITIONAL_CALL)
// 005d80e1: ADD ESP,0x2c
// 005d80e4: POP EBP
// 005d80e5: POP EDI
// 005d80e6: POP ESI
// 005d80e7: POP EBX
// 005d80e8: RET
// 005d80e9: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_005d80e9
//   XREF to: Stack[-0x1c] (READ)
// 005d80ed: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x2c] (READ)
// 005d80f1: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x30] (READ)
// 005d80f5: MOV ESI,dword ptr [ESP]
//   XREF to: Stack[-0x3c] (DATA)
// 005d80f8: MOV EDX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 005d80fe: ADD ECX,0x8
// 005d8101: ADD EDX,EAX
// 005d8103: INC EBX
// 005d8104: MOV dword ptr [0x01626408],EDX
//   XREF to: 01626408 (WRITE)
// 005d810a: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 005d810e: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 005d8112: CMP EBX,ESI
// 005d8114: JNC 0x005d80b9
//   XREF to: 005d80b9 (CONDITIONAL_JUMP)
// 005d8116: JMP 0x005d7e9e
//   XREF to: 005d7e9e (UNCONDITIONAL_JUMP)
