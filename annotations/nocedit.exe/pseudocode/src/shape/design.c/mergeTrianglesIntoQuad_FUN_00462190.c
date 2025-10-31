// Name: shape_design.c_mergeTrianglesIntoQuad_FUN_00462190
// Address: 00462190
// Address Range: [[00462190, 00462b67]]
// Convention: __cdecl
// Signature: uint shape_design.c_mergeTrianglesIntoQuad_FUN_00462190(int first_polygon_index, int second_polygon_index)
// Cross-references:
//   shape_design.c_configureSinglePassPolygonReduction_FUN_00465560 (00465560) at 00465767 [UNCONDITIONAL_CALL]
//   shape_design.c_optimizePolygonMesh_FUN_004658e0 (004658e0) at 00465a82 [UNCONDITIONAL_CALL]
// Globals:
//   double g_MinPolygonAreaThreshold = 359.5
//   double g_FirstAngleThreshold = 170
//   double g_AngleForCosineCalc = 0.523598775600000
//   double DOUBLE_0061bfe6 = 170
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e9914
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99b8
//   undefined4 DAT_016e99bc
//   undefined4 DAT_016e99c0
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
// Function calls:
//   shape_design.c_calculatePolygonAngularArea_FUN_00461ee0
//   shape_design.c_calculatePolygonNormal_FUN_0045caa0
//   shape_design.c_calculateVertexAngle_FUN_00462050
//   shape_design.c_swapDWords_FUN_00462130
//   shape_design.c_swapFloats_FUN_00462160
//   shape_design.c_validatePolygonNormals_FUN_00461d80

#include "nocturne.h"

uint __cdecl
shape_design_c_mergeTrianglesIntoQuad_FUN_00462190(int first_polygon_index,int second_polygon_index)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  BADSPACEBASE *in_ESP;
  SShapeEditorPolygon *pSVar5;
  SShapeEditorPolygon *pSVar6;
  byte bVar7;
  float10 fVar8;
  double dVar9;
  int in_stack_fffffe24;
  int in_stack_fffffe34;
  float local_140;
  float local_13c;
  float local_138;
  uint local_130 [51];
  float local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  float local_54;
  float local_50 [4];
  float local_40;
  uint local_3c [4];
  uint local_2c;
  uint local_28 [6];
  
  bVar7 = 0;
  local_28[2] = 0;
  for (local_28[3] = 0; (int)local_28[3] < 3; local_28[3] = local_28[3] + 1) {
    for (local_28[4] = 0; (int)local_28[4] < 3; local_28[4] = local_28[4] + 1) {
      if (g_ModelPolygonData[first_polygon_index].vertex_indices[local_28[3]] ==
          g_ModelPolygonData[second_polygon_index].vertex_indices[local_28[4]]) {
        local_28[local_28[2]] = g_ModelPolygonData[first_polygon_index].vertex_indices[local_28[3]];
        uVar4 = local_28[2];
        local_28[2] = local_28[2] + 1;
        if (2 < (int)local_28[2]) {
          return uVar4;
        }
      }
    }
  }
  for (local_28[3] = 0; (int)local_28[3] < 3; local_28[3] = local_28[3] + 1) {
    local_3c[local_28[3]] = g_ModelPolygonData[first_polygon_index].vertex_indices[local_28[3]];
    (&local_64)[local_28[3]] =
         (float)g_ModelPolygonData[first_polygon_index].vertex_indices[local_28[3] + 0x10];
    local_50[local_28[3]] = g_ModelPolygonData[first_polygon_index].uv_coordinates[local_28[3]];
  }
  for (local_28[3] = 0; (int)local_28[3] < 3; local_28[3] = local_28[3] + 1) {
    local_28[4] = g_ModelPolygonData[second_polygon_index].vertex_indices[local_28[3]];
    if ((local_28[4] != local_28[0]) && (local_28[4] != local_28[1])) {
      local_3c[3] = local_28[4];
      local_58 = g_ModelPolygonData[second_polygon_index].vertex_indices[local_28[3] + 0x10];
      local_50[3] = g_ModelPolygonData[second_polygon_index].uv_coordinates[local_28[3]];
    }
  }
  local_28[3] = 0;
  do {
    if (3 < (int)local_28[3]) {
LAB_004623f2:
      for (local_28[3] = 0; (int)local_28[3] < 4; local_28[3] = local_28[3] + 1) {
        local_130[local_28[3]] = local_3c[local_28[3]];
      }
      dVar9 = shape_design_c_calculatePolygonAngularArea_FUN_00461ee0
                        ((SShapeEditorPolygon *)&stack0xfffffe18);
      uVar4 = CONCAT22((short)((ulonglong)dVar9 >> 0x10),
                       (ushort)(dVar9 < g_MinPolygonAreaThreshold) << 8 |
                       (ushort)(NAN(dVar9) || NAN(g_MinPolygonAreaThreshold)) << 10 |
                       (ushort)(dVar9 == g_MinPolygonAreaThreshold) << 0xe);
      if (dVar9 >= g_MinPolygonAreaThreshold) {
        shape_design_c_calculatePolygonNormal_FUN_0045caa0(g_ModelPolygonData + first_polygon_index)
        ;
        g_ModelPolygonData[first_polygon_index].vertex_indices_count = 4;
        for (local_28[3] = 0;
            (int)local_28[3] < (int)g_ModelPolygonData[first_polygon_index].vertex_indices_count;
            local_28[3] = local_28[3] + 1) {
          g_ModelPolygonData[first_polygon_index].vertex_indices[local_28[3]] =
               local_3c[local_28[3]];
          g_ModelPolygonData[first_polygon_index].vertex_indices[local_28[3] + 0x10] =
               (uint)(&local_64)[local_28[3]];
          g_ModelPolygonData[first_polygon_index].uv_coordinates[local_28[3]] =
               local_50[local_28[3]];
        }
        shape_design_c_calculatePolygonNormal_FUN_0045caa0((SShapeEditorPolygon *)&stack0xfffffe18);
        if (((ABS(local_140) == 0.0) && (ABS(local_13c) == 0.0)) && (ABS(local_138) == 0.0)) {
          local_3c[1] = local_3c[2];
          local_60 = local_5c;
          local_50[1] = local_50[2];
          local_3c[2] = local_3c[3];
          local_5c = local_58;
          local_50[2] = local_50[3];
          g_ModelPolygonData[first_polygon_index].vertex_indices_count = 3;
          for (local_28[3] = 0;
              (int)local_28[3] < (int)g_ModelPolygonData[first_polygon_index].vertex_indices_count;
              local_28[3] = local_28[3] + 1) {
            g_ModelPolygonData[first_polygon_index].vertex_indices[local_28[3]] =
                 local_3c[local_28[3]];
            g_ModelPolygonData[first_polygon_index].vertex_indices[local_28[3] + 0x10] =
                 (uint)(&local_64)[local_28[3]];
            g_ModelPolygonData[first_polygon_index].uv_coordinates[local_28[3]] =
                 local_50[local_28[3]];
          }
          for (local_28[3] = 0; (int)local_28[3] < 3; local_28[3] = local_28[3] + 1) {
            local_130[local_28[3]] = local_3c[local_28[3]];
          }
          shape_design_c_calculatePolygonNormal_FUN_0045caa0
                    ((SShapeEditorPolygon *)&stack0xfffffe18);
        }
        else {
          dVar9 = shape_design_c_calculateVertexAngle_FUN_00462050
                            (local_130[1],local_130[2],in_stack_fffffe24);
          if (g_FirstAngleThreshold < dVar9) {
            local_2c = local_3c[0];
            local_130[0] = local_3c[1];
            local_130[1] = local_3c[2];
            local_130[2] = local_3c[3];
            local_130[3] = local_3c[0];
            shape_design_c_calculatePolygonNormal_FUN_0045caa0
                      ((SShapeEditorPolygon *)&stack0xfffffe18);
            local_2c = local_3c[0];
            local_54 = local_64;
            local_40 = local_50[0];
            g_ModelPolygonData[first_polygon_index].vertex_indices[0] = local_3c[1];
            g_ModelPolygonData[first_polygon_index].vertex_indices[0x10] = local_60;
            g_ModelPolygonData[first_polygon_index].uv_coordinates[0] = local_50[1];
            g_ModelPolygonData[first_polygon_index].vertex_indices[1] = local_3c[2];
            g_ModelPolygonData[first_polygon_index].vertex_indices[0x11] = local_5c;
            g_ModelPolygonData[first_polygon_index].uv_coordinates[1] = local_50[2];
            g_ModelPolygonData[first_polygon_index].vertex_indices[2] = local_3c[3];
            g_ModelPolygonData[first_polygon_index].vertex_indices[0x12] = local_58;
            g_ModelPolygonData[first_polygon_index].uv_coordinates[2] = local_50[3];
            g_ModelPolygonData[first_polygon_index].vertex_indices[3] = local_3c[0];
            g_ModelPolygonData[first_polygon_index].vertex_indices[0x13] = (uint)local_64;
            g_ModelPolygonData[first_polygon_index].uv_coordinates[3] = local_50[0];
          }
        }
        fVar8 = (float10)fcos((float10)g_AngleForCosineCalc);
        iVar3 = shape_design_c_validatePolygonNormals_FUN_00461d80
                          ((SShapeEditorPolygon *)&stack0xfffffe18,
                           g_ModelPolygonData + first_polygon_index,(double)fVar8);
        if (iVar3 == 0) {
          uVar4 = g_ModelPolygonData[first_polygon_index].vertex_indices_count;
          for (local_28[3] = 0; (int)local_28[3] < (int)uVar4; local_28[3] = local_28[3] + 1) {
            g_ModelPolygonData[first_polygon_index].vertex_indices[local_28[3]] =
                 local_3c[(uVar4 - 1) - local_28[3]];
            g_ModelPolygonData[first_polygon_index].vertex_indices[local_28[3] + 0x10] =
                 (uint)(&local_64)[(uVar4 - 1) - local_28[3]];
            g_ModelPolygonData[first_polygon_index].uv_coordinates[local_28[3]] =
                 local_50[(uVar4 - 1) - local_28[3]];
          }
          shape_design_c_calculatePolygonNormal_FUN_0045caa0
                    (g_ModelPolygonData + first_polygon_index);
          if (((ABS(g_ModelPolygonData[first_polygon_index].normal.x) == 0.0) &&
              (ABS(g_ModelPolygonData[first_polygon_index].normal.y) == 0.0)) &&
             (ABS(g_ModelPolygonData[first_polygon_index].normal.z) == 0.0)) {
            g_ModelPolygonData[first_polygon_index].vertex_indices_count = 3;
            g_ModelPolygonData[first_polygon_index].vertex_indices[1] =
                 g_ModelPolygonData[first_polygon_index].vertex_indices[2];
            g_ModelPolygonData[first_polygon_index].vertex_indices[0x11] =
                 g_ModelPolygonData[first_polygon_index].vertex_indices[0x12];
            g_ModelPolygonData[first_polygon_index].uv_coordinates[1] =
                 g_ModelPolygonData[first_polygon_index].uv_coordinates[2];
            g_ModelPolygonData[first_polygon_index].vertex_indices[2] =
                 g_ModelPolygonData[first_polygon_index].vertex_indices[3];
            g_ModelPolygonData[first_polygon_index].vertex_indices[0x12] =
                 g_ModelPolygonData[first_polygon_index].vertex_indices[0x13];
            g_ModelPolygonData[first_polygon_index].uv_coordinates[2] =
                 g_ModelPolygonData[first_polygon_index].uv_coordinates[3];
          }
          else {
            dVar9 = shape_design_c_calculateVertexAngle_FUN_00462050
                              (g_ModelPolygonData[first_polygon_index].vertex_indices[1],
                               g_ModelPolygonData[first_polygon_index].vertex_indices[2],
                               in_stack_fffffe34);
            if (DOUBLE_0061bfe6 < dVar9) {
              uVar4 = g_ModelPolygonData[first_polygon_index].vertex_indices[0];
              uVar1 = g_ModelPolygonData[first_polygon_index].vertex_indices[0x10];
              fVar2 = g_ModelPolygonData[first_polygon_index].uv_coordinates[0];
              g_ModelPolygonData[first_polygon_index].vertex_indices[0] =
                   g_ModelPolygonData[first_polygon_index].vertex_indices[1];
              g_ModelPolygonData[first_polygon_index].vertex_indices[0x10] =
                   g_ModelPolygonData[first_polygon_index].vertex_indices[0x11];
              g_ModelPolygonData[first_polygon_index].uv_coordinates[0] =
                   g_ModelPolygonData[first_polygon_index].uv_coordinates[1];
              g_ModelPolygonData[first_polygon_index].vertex_indices[1] =
                   g_ModelPolygonData[first_polygon_index].vertex_indices[2];
              g_ModelPolygonData[first_polygon_index].vertex_indices[0x11] =
                   g_ModelPolygonData[first_polygon_index].vertex_indices[0x12];
              g_ModelPolygonData[first_polygon_index].uv_coordinates[1] =
                   g_ModelPolygonData[first_polygon_index].uv_coordinates[2];
              g_ModelPolygonData[first_polygon_index].vertex_indices[2] =
                   g_ModelPolygonData[first_polygon_index].vertex_indices[3];
              g_ModelPolygonData[first_polygon_index].vertex_indices[0x12] =
                   g_ModelPolygonData[first_polygon_index].vertex_indices[0x13];
              g_ModelPolygonData[first_polygon_index].uv_coordinates[2] =
                   g_ModelPolygonData[first_polygon_index].uv_coordinates[3];
              g_ModelPolygonData[first_polygon_index].vertex_indices[3] = uVar4;
              g_ModelPolygonData[first_polygon_index].vertex_indices[0x13] = uVar1;
              g_ModelPolygonData[first_polygon_index].uv_coordinates[3] = fVar2;
            }
          }
        }
        for (local_28[3] = second_polygon_index; uVar4 = g_PolygonCount - 1,
            (int)local_28[3] < (int)uVar4; local_28[3] = local_28[3] + 1) {
          pSVar5 = g_ModelPolygonData + local_28[3] + 1;
          pSVar6 = g_ModelPolygonData + local_28[3];
          for (iVar3 = 0x61; iVar3 != 0; iVar3 = iVar3 + -1) {
            pSVar6->polygon_type = pSVar5->polygon_type;
            pSVar5 = (SShapeEditorPolygon *)((int)pSVar5 + ((uint)bVar7 * -2 + 1) * 4);
            pSVar6 = (SShapeEditorPolygon *)((int)pSVar6 + ((uint)bVar7 * -2 + 1) * 4);
          }
        }
        g_PolygonCount = g_PolygonCount + -1;
      }
      return uVar4;
    }
    local_28[4] = local_28[3] + 1 & 3;
    if (((local_3c[local_28[3]] == local_28[0]) && (local_3c[local_28[4]] == local_28[1])) ||
       ((local_3c[local_28[3]] == local_28[1] && (local_3c[local_28[4]] == local_28[0])))) {
      local_28[5] = local_28[4] + 1 & 3;
      shape_design_c_swapDWords_FUN_00462130(local_3c + local_28[4],local_3c + local_28[5]);
      shape_design_c_swapFloats_FUN_00462160(&local_64 + local_28[4],&local_64 + local_28[5]);
      shape_design_c_swapFloats_FUN_00462160(local_50 + local_28[4],local_50 + local_28[5]);
      goto LAB_004623f2;
    }
    local_28[3] = local_28[3] + 1;
  } while( true );
}


// Assembly code:
// 00462190: PUSH EBX
//   Label: shape_design.c_mergeTrianglesIntoQuad_FUN_00462190
// 00462191: PUSH ESI
// 00462192: PUSH EDI
// 00462193: PUSH EBP
// 00462194: MOV EBP,ESP
// 00462196: SUB ESP,0x1e4
// 0046219c: MOV dword ptr [EBP + -0x10],0x0
//   XREF to: Stack[-0x20] (WRITE)
// 004621a3: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 004621aa: JMP 0x004621b2
//   XREF to: 004621b2 (UNCONDITIONAL_JUMP)
// 004621ac: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_004621ac
//   XREF to: Stack[-0x1c] (READ)
// 004621af: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 004621b2: CMP dword ptr [EBP + -0xc],0x3
//   Label: LAB_004621b2
//   XREF to: Stack[-0x1c] (READ)
// 004621b6: JGE 0x00462235
//   XREF to: 00462235 (CONDITIONAL_JUMP)
// 004621bc: MOV dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (WRITE)
// 004621c3: JMP 0x004621cb
//   XREF to: 004621cb (UNCONDITIONAL_JUMP)
// 004621c5: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_004621c5
//   XREF to: Stack[-0x18] (READ)
// 004621c8: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 004621cb: CMP dword ptr [EBP + -0x8],0x3
//   Label: LAB_004621cb
//   XREF to: Stack[-0x18] (READ)
// 004621cf: JGE 0x00462230
//   XREF to: 00462230 (CONDITIONAL_JUMP)
// 004621d1: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 004621d8: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004621db: SHL EAX,0x2
// 004621de: LEA ECX,[EDX + EAX*0x1]
// 004621e1: IMUL EDX,dword ptr [EBP + 0x18],0x184
//   XREF to: Stack[0x8] (READ)
// 004621e8: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004621eb: SHL EAX,0x2
// 004621ee: ADD EDX,EAX
// 004621f0: MOV EAX,dword ptr [ECX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 004621f6: CMP EAX,dword ptr [EDX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 004621fc: JNZ 0x0046222e
//   XREF to: 0046222e (CONDITIONAL_JUMP)
// 004621fe: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462205: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00462208: SHL EAX,0x2
// 0046220b: ADD EAX,EDX
// 0046220d: MOV EDX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00462210: SHL EDX,0x2
// 00462213: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 00462219: MOV dword ptr [EDX + EBP*0x1 + -0x18],EAX
// 0046221d: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00462220: INC dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ_WRITE)
// 00462223: CMP dword ptr [EBP + -0x10],0x2
//   XREF to: Stack[-0x20] (READ)
// 00462227: JLE 0x0046222e
//   XREF to: 0046222e (CONDITIONAL_JUMP)
// 00462229: JMP 0x00462b61
//   XREF to: 00462b61 (UNCONDITIONAL_JUMP)
// 0046222e: JMP 0x004621c5
//   Label: LAB_0046222e
//   XREF to: 004621c5 (UNCONDITIONAL_JUMP)
// 00462230: JMP 0x004621ac
//   Label: LAB_00462230
//   XREF to: 004621ac (UNCONDITIONAL_JUMP)
// 00462235: MOV dword ptr [EBP + -0xc],0x0
//   Label: LAB_00462235
//   XREF to: Stack[-0x1c] (WRITE)
// 0046223c: JMP 0x00462244
//   XREF to: 00462244 (UNCONDITIONAL_JUMP)
// 0046223e: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0046223e
//   XREF to: Stack[-0x1c] (READ)
// 00462241: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 00462244: CMP dword ptr [EBP + -0xc],0x3
//   Label: LAB_00462244
//   XREF to: Stack[-0x1c] (READ)
// 00462248: JGE 0x004622a9
//   XREF to: 004622a9 (CONDITIONAL_JUMP)
// 0046224a: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462251: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00462254: SHL EAX,0x2
// 00462257: ADD EAX,EDX
// 00462259: MOV EDX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046225c: SHL EDX,0x2
// 0046225f: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 00462265: MOV dword ptr [EDX + EBP*0x1 + -0x2c],EAX
// 00462269: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462270: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00462273: SHL EAX,0x2
// 00462276: ADD EAX,EDX
// 00462278: MOV EDX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046227b: SHL EDX,0x2
// 0046227e: FLD float ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 00462284: FSTP float ptr [EDX + EBP*0x1 + -0x54]
// 00462288: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0046228f: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00462292: SHL EAX,0x2
// 00462295: ADD EAX,EDX
// 00462297: MOV EDX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046229a: SHL EDX,0x2
// 0046229d: FLD float ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 004622a3: FSTP float ptr [EDX + EBP*0x1 + -0x40]
// 004622a7: JMP 0x0046223e
//   XREF to: 0046223e (UNCONDITIONAL_JUMP)
// 004622a9: MOV dword ptr [EBP + -0xc],0x0
//   Label: LAB_004622a9
//   XREF to: Stack[-0x1c] (WRITE)
// 004622b0: JMP 0x004622b8
//   XREF to: 004622b8 (UNCONDITIONAL_JUMP)
// 004622b2: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_004622b2
//   XREF to: Stack[-0x1c] (READ)
// 004622b5: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 004622b8: CMP dword ptr [EBP + -0xc],0x3
//   Label: LAB_004622b8
//   XREF to: Stack[-0x1c] (READ)
// 004622bc: JGE 0x00462320
//   XREF to: 00462320 (CONDITIONAL_JUMP)
// 004622be: IMUL EDX,dword ptr [EBP + 0x18],0x184
//   XREF to: Stack[0x8] (READ)
// 004622c5: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004622c8: SHL EAX,0x2
// 004622cb: ADD EAX,EDX
// 004622cd: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 004622d3: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004622d6: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004622d9: CMP EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 004622dc: JZ 0x004622e6
//   XREF to: 004622e6 (CONDITIONAL_JUMP)
// 004622de: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004622e1: CMP EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 004622e4: JNZ 0x004622e8
//   XREF to: 004622e8 (CONDITIONAL_JUMP)
// 004622e6: JMP 0x0046231e
//   Label: LAB_004622e6
//   XREF to: 0046231e (UNCONDITIONAL_JUMP)
// 004622e8: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_004622e8
//   XREF to: Stack[-0x18] (READ)
// 004622eb: MOV dword ptr [EBP + -0x20],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004622ee: IMUL EDX,dword ptr [EBP + 0x18],0x184
//   XREF to: Stack[0x8] (READ)
// 004622f5: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004622f8: SHL EAX,0x2
// 004622fb: ADD EAX,EDX
// 004622fd: MOV EAX,dword ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 00462303: MOV dword ptr [EBP + -0x48],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 00462306: IMUL EDX,dword ptr [EBP + 0x18],0x184
//   XREF to: Stack[0x8] (READ)
// 0046230d: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00462310: SHL EAX,0x2
// 00462313: ADD EAX,EDX
// 00462315: MOV EAX,dword ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 0046231b: MOV dword ptr [EBP + -0x34],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0046231e: JMP 0x004622b2
//   Label: LAB_0046231e
//   XREF to: 004622b2 (UNCONDITIONAL_JUMP)
// 00462320: MOV dword ptr [EBP + -0xc],0x0
//   Label: LAB_00462320
//   XREF to: Stack[-0x1c] (WRITE)
// 00462327: JMP 0x0046232f
//   XREF to: 0046232f (UNCONDITIONAL_JUMP)
// 00462329: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00462329
//   XREF to: Stack[-0x1c] (READ)
// 0046232c: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0046232f: CMP dword ptr [EBP + -0xc],0x4
//   Label: LAB_0046232f
//   XREF to: Stack[-0x1c] (READ)
// 00462333: JGE 0x004623f2
//   XREF to: 004623f2 (CONDITIONAL_JUMP)
// 00462339: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046233c: INC EAX
// 0046233d: AND EAX,0x3
// 00462340: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00462343: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00462346: SHL EAX,0x2
// 00462349: MOV EAX,dword ptr [EAX + EBP*0x1 + -0x2c]
// 0046234d: CMP EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00462350: JNZ 0x00462361
//   XREF to: 00462361 (CONDITIONAL_JUMP)
// 00462352: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00462355: SHL EAX,0x2
// 00462358: MOV EAX,dword ptr [EAX + EBP*0x1 + -0x2c]
// 0046235c: CMP EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0046235f: JZ 0x00462381
//   XREF to: 00462381 (CONDITIONAL_JUMP)
// 00462361: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00462361
//   XREF to: Stack[-0x1c] (READ)
// 00462364: SHL EAX,0x2
// 00462367: MOV EAX,dword ptr [EAX + EBP*0x1 + -0x2c]
// 0046236b: CMP EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0046236e: JNZ 0x0046237f
//   XREF to: 0046237f (CONDITIONAL_JUMP)
// 00462370: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00462373: SHL EAX,0x2
// 00462376: MOV EAX,dword ptr [EAX + EBP*0x1 + -0x2c]
// 0046237a: CMP EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0046237d: JZ 0x00462381
//   XREF to: 00462381 (CONDITIONAL_JUMP)
// 0046237f: JMP 0x004623ed
//   Label: LAB_0046237f
//   XREF to: 004623ed (UNCONDITIONAL_JUMP)
// 00462381: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_00462381
//   XREF to: Stack[-0x18] (READ)
// 00462384: INC EAX
// 00462385: AND EAX,0x3
// 00462388: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0046238b: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046238e: SHL EAX,0x2
// 00462391: LEA EDX,[EBP + -0x2c]
//   XREF to: Stack[-0x3c] (DATA)
// 00462394: ADD EAX,EDX
// 00462396: PUSH EAX
// 00462397: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0046239a: SHL EAX,0x2
// 0046239d: LEA EDX,[EBP + -0x2c]
//   XREF to: Stack[-0x3c] (DATA)
// 004623a0: ADD EAX,EDX
// 004623a2: PUSH EAX
// 004623a3: CALL shape_design.c_swapDWords_FUN_00462130
//   XREF to: 00462130 (UNCONDITIONAL_CALL)
// 004623a8: ADD ESP,0x8
// 004623ab: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004623ae: SHL EAX,0x2
// 004623b1: LEA EDX,[EBP + -0x54]
//   XREF to: Stack[-0x64] (DATA)
// 004623b4: ADD EAX,EDX
// 004623b6: PUSH EAX
// 004623b7: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004623ba: SHL EAX,0x2
// 004623bd: LEA EDX,[EBP + -0x54]
//   XREF to: Stack[-0x64] (DATA)
// 004623c0: ADD EAX,EDX
// 004623c2: PUSH EAX
// 004623c3: CALL shape_design.c_swapFloats_FUN_00462160
//   XREF to: 00462160 (UNCONDITIONAL_CALL)
// 004623c8: ADD ESP,0x8
// 004623cb: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004623ce: SHL EAX,0x2
// 004623d1: LEA EDX,[EBP + -0x40]
//   XREF to: Stack[-0x50] (DATA)
// 004623d4: ADD EAX,EDX
// 004623d6: PUSH EAX
// 004623d7: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004623da: SHL EAX,0x2
// 004623dd: LEA EDX,[EBP + -0x40]
//   XREF to: Stack[-0x50] (DATA)
// 004623e0: ADD EAX,EDX
// 004623e2: PUSH EAX
// 004623e3: CALL shape_design.c_swapFloats_FUN_00462160
//   XREF to: 00462160 (UNCONDITIONAL_CALL)
// 004623e8: ADD ESP,0x8
// 004623eb: JMP 0x004623f2
//   XREF to: 004623f2 (UNCONDITIONAL_JUMP)
// 004623ed: JMP 0x00462329
//   Label: LAB_004623ed
//   XREF to: 00462329 (UNCONDITIONAL_JUMP)
// 004623f2: MOV dword ptr [EBP + 0xfffffecc],0x4
//   Label: LAB_004623f2
//   XREF to: Stack[-0x144] (WRITE)
// 004623fc: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 00462403: JMP 0x0046240b
//   XREF to: 0046240b (UNCONDITIONAL_JUMP)
// 00462405: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00462405
//   XREF to: Stack[-0x1c] (READ)
// 00462408: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0046240b: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0046240b
//   XREF to: Stack[-0x1c] (READ)
// 0046240e: CMP EAX,dword ptr [EBP + 0xfffffecc]
//   XREF to: Stack[-0x144] (READ)
// 00462414: JGE 0x0046242f
//   XREF to: 0046242f (CONDITIONAL_JUMP)
// 00462416: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00462419: SHL EAX,0x2
// 0046241c: MOV EDX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046241f: SHL EDX,0x2
// 00462422: MOV EAX,dword ptr [EAX + EBP*0x1 + -0x2c]
// 00462426: MOV dword ptr [EDX + EBP*0x1 + 0xfffffee0],EAX
// 0046242d: JMP 0x00462405
//   XREF to: 00462405 (UNCONDITIONAL_JUMP)
// 0046242f: LEA EAX,[EBP + 0xfffffe28]
//   Label: LAB_0046242f
//   XREF to: Stack[-0x1e8] (DATA)
// 00462435: PUSH EAX
// 00462436: CALL shape_design.c_calculatePolygonAngularArea_FUN_00461ee0
//   XREF to: 00461ee0 (UNCONDITIONAL_CALL)
// 0046243b: MOV dword ptr [EBP + 0xfffffe20],EAX
//   XREF to: Stack[-0x1f0] (WRITE)
// 00462441: MOV dword ptr [EBP + 0xfffffe24],EDX
//   XREF to: Stack[-0x1ec] (WRITE)
// 00462447: FLD double ptr [EBP + 0xfffffe20]
//   XREF to: Stack[-0x1f0] (READ)
// 0046244d: ADD ESP,0x4
// 00462450: FCOMP double ptr [0x0061bfce]
//   XREF to: 0061bfce (READ)
// 00462456: FNSTSW AX
// 00462458: SAHF
// 00462459: JNC 0x00462460
//   XREF to: 00462460 (CONDITIONAL_JUMP)
// 0046245b: JMP 0x00462b61
//   XREF to: 00462b61 (UNCONDITIONAL_JUMP)
// 00462460: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_00462460
//   XREF to: Stack[0x4] (READ)
// 00462467: MOV EDX,0x16e9910
//   XREF to: 016e9910 (PARAM)
// 0046246c: ADD EAX,EDX
// 0046246e: PUSH EAX
// 0046246f: CALL shape_design.c_calculatePolygonNormal_FUN_0045caa0
//   XREF to: 0045caa0 (UNCONDITIONAL_CALL)
// 00462474: ADD ESP,0x4
// 00462477: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0046247e: MOV dword ptr [EAX + 0x16e99b4],0x4
//   XREF to: 016e99b4 (DATA)
// 00462488: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 0046248f: JMP 0x00462497
//   XREF to: 00462497 (UNCONDITIONAL_JUMP)
// 00462491: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00462491
//   XREF to: Stack[-0x1c] (READ)
// 00462494: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 00462497: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_00462497
//   XREF to: Stack[0x4] (READ)
// 0046249e: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004624a1: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 004624a7: JGE 0x00462508
//   XREF to: 00462508 (CONDITIONAL_JUMP)
// 004624a9: MOV ECX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004624ac: SHL ECX,0x2
// 004624af: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 004624b6: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004624b9: SHL EAX,0x2
// 004624bc: ADD EDX,EAX
// 004624be: MOV EAX,dword ptr [ECX + EBP*0x1 + -0x2c]
// 004624c2: MOV dword ptr [EDX + 0x16e99c8],EAX
//   XREF to: 016e99c8 (DATA)
// 004624c8: MOV ECX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004624cb: SHL ECX,0x2
// 004624ce: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 004624d5: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004624d8: SHL EAX,0x2
// 004624db: ADD EAX,EDX
// 004624dd: FLD float ptr [ECX + EBP*0x1 + -0x54]
// 004624e1: FSTP float ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 004624e7: MOV ECX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004624ea: SHL ECX,0x2
// 004624ed: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 004624f4: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004624f7: SHL EAX,0x2
// 004624fa: ADD EAX,EDX
// 004624fc: FLD float ptr [ECX + EBP*0x1 + -0x40]
// 00462500: FSTP float ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 00462506: JMP 0x00462491
//   XREF to: 00462491 (UNCONDITIONAL_JUMP)
// 00462508: LEA EAX,[EBP + 0xfffffe28]
//   Label: LAB_00462508
//   XREF to: Stack[-0x1e8] (DATA)
// 0046250e: PUSH EAX
// 0046250f: CALL shape_design.c_calculatePolygonNormal_FUN_0045caa0
//   XREF to: 0045caa0 (UNCONDITIONAL_CALL)
// 00462514: ADD ESP,0x4
// 00462517: TEST dword ptr [EBP + 0xfffffed0],0x7fffffff
//   XREF to: Stack[-0x140] (READ)
// 00462521: JNZ 0x0046252f
//   XREF to: 0046252f (CONDITIONAL_JUMP)
// 00462523: TEST dword ptr [EBP + 0xfffffed4],0x7fffffff
//   XREF to: Stack[-0x13c] (READ)
// 0046252d: JZ 0x00462531
//   XREF to: 00462531 (CONDITIONAL_JUMP)
// 0046252f: JMP 0x0046253d
//   Label: LAB_0046252f
//   XREF to: 0046253d (UNCONDITIONAL_JUMP)
// 00462531: TEST dword ptr [EBP + 0xfffffed8],0x7fffffff
//   Label: LAB_00462531
//   XREF to: Stack[-0x138] (READ)
// 0046253b: JZ 0x00462542
//   XREF to: 00462542 (CONDITIONAL_JUMP)
// 0046253d: JMP 0x00462648
//   Label: LAB_0046253d
//   XREF to: 00462648 (UNCONDITIONAL_JUMP)
// 00462542: MOV EAX,dword ptr [EBP + -0x24]
//   Label: LAB_00462542
//   XREF to: Stack[-0x34] (READ)
// 00462545: MOV dword ptr [EBP + -0x28],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00462548: MOV EAX,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046254b: MOV dword ptr [EBP + -0x50],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 0046254e: MOV EAX,dword ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 00462551: MOV dword ptr [EBP + -0x3c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00462554: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00462557: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0046255a: MOV EAX,dword ptr [EBP + -0x48]
//   XREF to: Stack[-0x58] (READ)
// 0046255d: MOV dword ptr [EBP + -0x4c],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 00462560: MOV EAX,dword ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 00462563: MOV dword ptr [EBP + -0x38],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 00462566: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0046256d: MOV dword ptr [EAX + 0x16e99b4],0x3
//   XREF to: 016e99b4 (DATA)
// 00462577: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 0046257e: JMP 0x00462586
//   XREF to: 00462586 (UNCONDITIONAL_JUMP)
// 00462580: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00462580
//   XREF to: Stack[-0x1c] (READ)
// 00462583: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 00462586: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_00462586
//   XREF to: Stack[0x4] (READ)
// 0046258d: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00462590: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 00462596: JGE 0x004625f7
//   XREF to: 004625f7 (CONDITIONAL_JUMP)
// 00462598: MOV ECX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046259b: SHL ECX,0x2
// 0046259e: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 004625a5: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004625a8: SHL EAX,0x2
// 004625ab: ADD EDX,EAX
// 004625ad: MOV EAX,dword ptr [ECX + EBP*0x1 + -0x2c]
// 004625b1: MOV dword ptr [EDX + 0x16e99c8],EAX
//   XREF to: 016e99c8 (DATA)
// 004625b7: MOV ECX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004625ba: SHL ECX,0x2
// 004625bd: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 004625c4: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004625c7: SHL EAX,0x2
// 004625ca: ADD EAX,EDX
// 004625cc: FLD float ptr [ECX + EBP*0x1 + -0x54]
// 004625d0: FSTP float ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 004625d6: MOV ECX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004625d9: SHL ECX,0x2
// 004625dc: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 004625e3: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004625e6: SHL EAX,0x2
// 004625e9: ADD EAX,EDX
// 004625eb: FLD float ptr [ECX + EBP*0x1 + -0x40]
// 004625ef: FSTP float ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 004625f5: JMP 0x00462580
//   XREF to: 00462580 (UNCONDITIONAL_JUMP)
// 004625f7: MOV dword ptr [EBP + 0xfffffecc],0x3
//   Label: LAB_004625f7
//   XREF to: Stack[-0x144] (WRITE)
// 00462601: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 00462608: JMP 0x00462610
//   XREF to: 00462610 (UNCONDITIONAL_JUMP)
// 0046260a: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0046260a
//   XREF to: Stack[-0x1c] (READ)
// 0046260d: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 00462610: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00462610
//   XREF to: Stack[-0x1c] (READ)
// 00462613: CMP EAX,dword ptr [EBP + 0xfffffecc]
//   XREF to: Stack[-0x144] (READ)
// 00462619: JGE 0x00462634
//   XREF to: 00462634 (CONDITIONAL_JUMP)
// 0046261b: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046261e: SHL EAX,0x2
// 00462621: MOV EDX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00462624: SHL EDX,0x2
// 00462627: MOV EAX,dword ptr [EAX + EBP*0x1 + -0x2c]
// 0046262b: MOV dword ptr [EDX + EBP*0x1 + 0xfffffee0],EAX
// 00462632: JMP 0x0046260a
//   XREF to: 0046260a (UNCONDITIONAL_JUMP)
// 00462634: LEA EAX,[EBP + 0xfffffe28]
//   Label: LAB_00462634
//   XREF to: Stack[-0x1e8] (DATA)
// 0046263a: PUSH EAX
// 0046263b: CALL shape_design.c_calculatePolygonNormal_FUN_0045caa0
//   XREF to: 0045caa0 (UNCONDITIONAL_CALL)
// 00462640: ADD ESP,0x4
// 00462643: JMP 0x00462791
//   XREF to: 00462791 (UNCONDITIONAL_JUMP)
// 00462648: MOV EAX,dword ptr [EBP + 0xfffffee8]
//   Label: LAB_00462648
//   XREF to: Stack[-0x128] (READ)
// 0046264e: PUSH EAX
// 0046264f: MOV EAX,dword ptr [EBP + 0xfffffee4]
//   XREF to: Stack[-0x12c] (READ)
// 00462655: PUSH EAX
// 00462656: MOV EAX,dword ptr [EBP + 0xfffffee0]
//   XREF to: Stack[-0x130] (READ)
// 0046265c: PUSH EAX
// 0046265d: CALL shape_design.c_calculateVertexAngle_FUN_00462050
//   XREF to: 00462050 (UNCONDITIONAL_CALL)
// 00462662: MOV dword ptr [EBP + 0xfffffe20],EAX
//   XREF to: Stack[-0x1f0] (WRITE)
// 00462668: MOV dword ptr [EBP + 0xfffffe24],EDX
//   XREF to: Stack[-0x1ec] (WRITE)
// 0046266e: FLD double ptr [EBP + 0xfffffe20]
//   XREF to: Stack[-0x1f0] (READ)
// 00462674: ADD ESP,0xc
// 00462677: FCOMP double ptr [0x0061bfd6]
//   XREF to: 0061bfd6 (READ)
// 0046267d: FNSTSW AX
// 0046267f: SAHF
// 00462680: JBE 0x00462791
//   XREF to: 00462791 (CONDITIONAL_JUMP)
// 00462686: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 00462689: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0046268c: MOV EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0046268f: MOV dword ptr [EBP + 0xfffffee0],EAX
//   XREF to: Stack[-0x130] (WRITE)
// 00462695: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 00462698: MOV dword ptr [EBP + 0xfffffee4],EAX
//   XREF to: Stack[-0x12c] (WRITE)
// 0046269e: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 004626a1: MOV dword ptr [EBP + 0xfffffee8],EAX
//   XREF to: Stack[-0x128] (WRITE)
// 004626a7: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 004626aa: MOV dword ptr [EBP + 0xfffffeec],EAX
//   XREF to: Stack[-0x124] (WRITE)
// 004626b0: LEA EAX,[EBP + 0xfffffe28]
//   XREF to: Stack[-0x1e8] (DATA)
// 004626b6: PUSH EAX
// 004626b7: CALL shape_design.c_calculatePolygonNormal_FUN_0045caa0
//   XREF to: 0045caa0 (UNCONDITIONAL_CALL)
// 004626bc: ADD ESP,0x4
// 004626bf: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 004626c2: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004626c5: MOV EAX,dword ptr [EBP + -0x54]
//   XREF to: Stack[-0x64] (READ)
// 004626c8: MOV dword ptr [EBP + -0x44],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 004626cb: MOV EAX,dword ptr [EBP + -0x40]
//   XREF to: Stack[-0x50] (READ)
// 004626ce: MOV dword ptr [EBP + -0x30],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 004626d1: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 004626d8: MOV EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 004626db: MOV dword ptr [EDX + 0x16e99c8],EAX
//   XREF to: 016e99c8 (DATA)
// 004626e1: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 004626e8: MOV EAX,dword ptr [EBP + -0x50]
//   XREF to: Stack[-0x60] (READ)
// 004626eb: MOV dword ptr [EDX + 0x16e9a08],EAX
//   XREF to: 016e9a08 (DATA)
// 004626f1: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 004626f8: MOV EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 004626fb: MOV dword ptr [EDX + 0x16e9a48],EAX
//   XREF to: 016e9a48 (DATA)
// 00462701: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462708: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 0046270b: MOV dword ptr [EDX + 0x16e99cc],EAX
//   XREF to: 016e99cc (DATA)
// 00462711: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462718: MOV EAX,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046271b: MOV dword ptr [EDX + 0x16e9a0c],EAX
//   XREF to: 016e9a0c (DATA)
// 00462721: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462728: MOV EAX,dword ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 0046272b: MOV dword ptr [EDX + 0x16e9a4c],EAX
//   XREF to: 016e9a4c (DATA)
// 00462731: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462738: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0046273b: MOV dword ptr [EDX + 0x16e99d0],EAX
//   XREF to: 016e99d0 (DATA)
// 00462741: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462748: MOV EAX,dword ptr [EBP + -0x48]
//   XREF to: Stack[-0x58] (READ)
// 0046274b: MOV dword ptr [EDX + 0x16e9a10],EAX
//   XREF to: 016e9a10 (DATA)
// 00462751: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462758: MOV EAX,dword ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 0046275b: MOV dword ptr [EDX + 0x16e9a50],EAX
//   XREF to: 016e9a50 (DATA)
// 00462761: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462768: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0046276b: MOV dword ptr [EDX + 0x16e99d4],EAX
//   XREF to: 016e99d4 (DATA)
// 00462771: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462778: MOV EAX,dword ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (READ)
// 0046277b: MOV dword ptr [EDX + 0x16e9a14],EAX
//   XREF to: 016e9a14 (DATA)
// 00462781: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462788: MOV EAX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 0046278b: MOV dword ptr [EDX + 0x16e9a54],EAX
//   XREF to: 016e9a54 (DATA)
// 00462791: FLD double ptr [0x0061bfde]
//   Label: LAB_00462791
//   XREF to: 0061bfde (READ)
// 00462797: FCOS
// 00462799: SUB ESP,0x8
// 0046279c: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1fc] (DATA)
// 0046279f: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 004627a6: MOV EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 004627ab: ADD EAX,EDX
// 004627ad: PUSH EAX
// 004627ae: LEA EAX,[EBP + 0xfffffe28]
//   XREF to: Stack[-0x1e8] (DATA)
// 004627b4: PUSH EAX
// 004627b5: CALL shape_design.c_validatePolygonNormals_FUN_00461d80
//   XREF to: 00461d80 (UNCONDITIONAL_CALL)
// 004627ba: ADD ESP,0x10
// 004627bd: TEST EAX,EAX
// 004627bf: JNZ 0x00462b1c
//   XREF to: 00462b1c (CONDITIONAL_JUMP)
// 004627c5: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 004627cc: MOV EAX,dword ptr [EAX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 004627d2: MOV dword ptr [EBP + 0xfffffe1c],EAX
//   XREF to: Stack[-0x1f4] (WRITE)
// 004627d8: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 004627df: JMP 0x004627e7
//   XREF to: 004627e7 (UNCONDITIONAL_JUMP)
// 004627e1: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_004627e1
//   XREF to: Stack[-0x1c] (READ)
// 004627e4: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 004627e7: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_004627e7
//   XREF to: Stack[-0x1c] (READ)
// 004627ea: CMP EAX,dword ptr [EBP + 0xfffffe1c]
//   XREF to: Stack[-0x1f4] (READ)
// 004627f0: JGE 0x00462879
//   XREF to: 00462879 (CONDITIONAL_JUMP)
// 004627f6: MOV EAX,dword ptr [EBP + 0xfffffe1c]
//   XREF to: Stack[-0x1f4] (READ)
// 004627fc: DEC EAX
// 004627fd: SUB EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00462800: LEA ECX,[EAX*0x4 + 0x0]
// 00462807: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0046280e: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00462811: SHL EAX,0x2
// 00462814: ADD EDX,EAX
// 00462816: MOV EAX,dword ptr [ECX + EBP*0x1 + -0x2c]
// 0046281a: MOV dword ptr [EDX + 0x16e99c8],EAX
//   XREF to: 016e99c8 (DATA)
// 00462820: MOV EAX,dword ptr [EBP + 0xfffffe1c]
//   XREF to: Stack[-0x1f4] (READ)
// 00462826: DEC EAX
// 00462827: SUB EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046282a: LEA ECX,[EAX*0x4 + 0x0]
// 00462831: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462838: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046283b: SHL EAX,0x2
// 0046283e: ADD EAX,EDX
// 00462840: FLD float ptr [ECX + EBP*0x1 + -0x54]
// 00462844: FSTP float ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 0046284a: MOV EAX,dword ptr [EBP + 0xfffffe1c]
//   XREF to: Stack[-0x1f4] (READ)
// 00462850: DEC EAX
// 00462851: SUB EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00462854: LEA ECX,[EAX*0x4 + 0x0]
// 0046285b: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462862: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00462865: SHL EAX,0x2
// 00462868: ADD EAX,EDX
// 0046286a: FLD float ptr [ECX + EBP*0x1 + -0x40]
// 0046286e: FSTP float ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 00462874: JMP 0x004627e1
//   XREF to: 004627e1 (UNCONDITIONAL_JUMP)
// 00462879: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_00462879
//   XREF to: Stack[0x4] (READ)
// 00462880: MOV EDX,0x16e9910
//   XREF to: 016e9910 (PARAM)
// 00462885: ADD EAX,EDX
// 00462887: PUSH EAX
// 00462888: CALL shape_design.c_calculatePolygonNormal_FUN_0045caa0
//   XREF to: 0045caa0 (UNCONDITIONAL_CALL)
// 0046288d: ADD ESP,0x4
// 00462890: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462897: TEST dword ptr [EAX + 0x16e99b8],0x7fffffff
//   XREF to: 016e99b8 (DATA)
// 004628a1: JNZ 0x004628b6
//   XREF to: 004628b6 (CONDITIONAL_JUMP)
// 004628a3: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 004628aa: TEST dword ptr [EAX + 0x16e99bc],0x7fffffff
//   XREF to: 016e99bc (DATA)
// 004628b4: JZ 0x004628b8
//   XREF to: 004628b8 (CONDITIONAL_JUMP)
// 004628b6: JMP 0x004628cb
//   Label: LAB_004628b6
//   XREF to: 004628cb (UNCONDITIONAL_JUMP)
// 004628b8: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_004628b8
//   XREF to: Stack[0x4] (READ)
// 004628bf: TEST dword ptr [EAX + 0x16e99c0],0x7fffffff
//   XREF to: 016e99c0 (DATA)
// 004628c9: JZ 0x004628d0
//   XREF to: 004628d0 (CONDITIONAL_JUMP)
// 004628cb: JMP 0x00462982
//   Label: LAB_004628cb
//   XREF to: 00462982 (UNCONDITIONAL_JUMP)
// 004628d0: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_004628d0
//   XREF to: Stack[0x4] (READ)
// 004628d7: MOV dword ptr [EAX + 0x16e99b4],0x3
//   XREF to: 016e99b4 (DATA)
// 004628e1: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 004628e8: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 004628ef: MOV EAX,dword ptr [EAX + 0x16e99d0]
//   XREF to: 016e99d0 (DATA)
// 004628f5: MOV dword ptr [EDX + 0x16e99cc],EAX
//   XREF to: 016e99cc (DATA)
// 004628fb: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462902: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462909: FLD float ptr [EAX + 0x16e9a10]
//   XREF to: 016e9a10 (DATA)
// 0046290f: FSTP float ptr [EDX + 0x16e9a0c]
//   XREF to: 016e9a0c (DATA)
// 00462915: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0046291c: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462923: FLD float ptr [EAX + 0x16e9a50]
//   XREF to: 016e9a50 (DATA)
// 00462929: FSTP float ptr [EDX + 0x16e9a4c]
//   XREF to: 016e9a4c (DATA)
// 0046292f: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462936: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0046293d: MOV EAX,dword ptr [EAX + 0x16e99d4]
//   XREF to: 016e99d4 (DATA)
// 00462943: MOV dword ptr [EDX + 0x16e99d0],EAX
//   XREF to: 016e99d0 (DATA)
// 00462949: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462950: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462957: FLD float ptr [EAX + 0x16e9a14]
//   XREF to: 016e9a14 (DATA)
// 0046295d: FSTP float ptr [EDX + 0x16e9a10]
//   XREF to: 016e9a10 (DATA)
// 00462963: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0046296a: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462971: FLD float ptr [EAX + 0x16e9a54]
//   XREF to: 016e9a54 (DATA)
// 00462977: FSTP float ptr [EDX + 0x16e9a50]
//   XREF to: 016e9a50 (DATA)
// 0046297d: JMP 0x00462b1c
//   XREF to: 00462b1c (UNCONDITIONAL_JUMP)
// 00462982: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_00462982
//   XREF to: Stack[0x4] (READ)
// 00462989: PUSH dword ptr [EAX + 0x16e99d0]
//   XREF to: 016e99d0 (DATA)
// 0046298f: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462996: PUSH dword ptr [EAX + 0x16e99cc]
//   XREF to: 016e99cc (DATA)
// 0046299c: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 004629a3: PUSH dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 004629a9: CALL shape_design.c_calculateVertexAngle_FUN_00462050
//   XREF to: 00462050 (UNCONDITIONAL_CALL)
// 004629ae: MOV dword ptr [EBP + 0xfffffe20],EAX
//   XREF to: Stack[-0x1f0] (WRITE)
// 004629b4: MOV dword ptr [EBP + 0xfffffe24],EDX
//   XREF to: Stack[-0x1ec] (WRITE)
//   XREF to: 016e9910 (DATA)
// 004629ba: FLD double ptr [EBP + 0xfffffe20]
//   XREF to: Stack[-0x1f0] (READ)
// 004629c0: ADD ESP,0xc
// 004629c3: FCOMP double ptr [0x0061bfe6]
//   XREF to: 0061bfe6 (READ)
// 004629c9: FNSTSW AX
// 004629cb: SAHF
// 004629cc: JBE 0x00462b1c
//   XREF to: 00462b1c (CONDITIONAL_JUMP)
// 004629d2: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 004629d9: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 004629df: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004629e2: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 004629e9: MOV EAX,dword ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 004629ef: MOV dword ptr [EBP + -0x44],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 004629f2: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 004629f9: MOV EAX,dword ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 004629ff: MOV dword ptr [EBP + -0x30],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 00462a02: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462a09: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462a10: MOV EAX,dword ptr [EAX + 0x16e99cc]
//   XREF to: 016e99cc (DATA)
// 00462a16: MOV dword ptr [EDX + 0x16e99c8],EAX
//   XREF to: 016e99c8 (DATA)
// 00462a1c: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462a23: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462a2a: FLD float ptr [EAX + 0x16e9a0c]
//   XREF to: 016e9a0c (DATA)
// 00462a30: FSTP float ptr [EDX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 00462a36: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462a3d: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462a44: FLD float ptr [EAX + 0x16e9a4c]
//   XREF to: 016e9a4c (DATA)
// 00462a4a: FSTP float ptr [EDX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 00462a50: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462a57: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462a5e: MOV EAX,dword ptr [EAX + 0x16e99d0]
//   XREF to: 016e99d0 (DATA)
// 00462a64: MOV dword ptr [EDX + 0x16e99cc],EAX
//   XREF to: 016e99cc (DATA)
// 00462a6a: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462a71: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462a78: FLD float ptr [EAX + 0x16e9a10]
//   XREF to: 016e9a10 (DATA)
// 00462a7e: FSTP float ptr [EDX + 0x16e9a0c]
//   XREF to: 016e9a0c (DATA)
// 00462a84: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462a8b: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462a92: FLD float ptr [EAX + 0x16e9a50]
//   XREF to: 016e9a50 (DATA)
// 00462a98: FSTP float ptr [EDX + 0x16e9a4c]
//   XREF to: 016e9a4c (DATA)
// 00462a9e: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462aa5: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462aac: MOV EAX,dword ptr [EAX + 0x16e99d4]
//   XREF to: 016e99d4 (DATA)
// 00462ab2: MOV dword ptr [EDX + 0x16e99d0],EAX
//   XREF to: 016e99d0 (DATA)
// 00462ab8: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462abf: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462ac6: FLD float ptr [EAX + 0x16e9a14]
//   XREF to: 016e9a14 (DATA)
// 00462acc: FSTP float ptr [EDX + 0x16e9a10]
//   XREF to: 016e9a10 (DATA)
// 00462ad2: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462ad9: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462ae0: FLD float ptr [EAX + 0x16e9a54]
//   XREF to: 016e9a54 (DATA)
// 00462ae6: FSTP float ptr [EDX + 0x16e9a50]
//   XREF to: 016e9a50 (DATA)
// 00462aec: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462af3: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00462af6: MOV dword ptr [EDX + 0x16e99d4],EAX
//   XREF to: 016e99d4 (DATA)
// 00462afc: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462b03: MOV EAX,dword ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (READ)
// 00462b06: MOV dword ptr [EDX + 0x16e9a14],EAX
//   XREF to: 016e9a14 (DATA)
// 00462b0c: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462b13: MOV EAX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 00462b16: MOV dword ptr [EDX + 0x16e9a54],EAX
//   XREF to: 016e9a54 (DATA)
// 00462b1c: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_00462b1c
//   XREF to: Stack[0x8] (READ)
// 00462b1f: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00462b22: JMP 0x00462b2a
//   XREF to: 00462b2a (UNCONDITIONAL_JUMP)
// 00462b24: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00462b24
//   XREF to: Stack[-0x1c] (READ)
// 00462b27: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 00462b2a: MOV EAX,[0x016e990c]
//   Label: LAB_00462b2a
//   XREF to: 016e990c (READ)
// 00462b2f: DEC EAX
// 00462b30: CMP EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00462b33: JLE 0x00462b5b
//   XREF to: 00462b5b (CONDITIONAL_JUMP)
// 00462b35: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00462b38: INC EAX
// 00462b39: IMUL EAX,EAX,0x184
// 00462b3f: IMUL ESI,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 00462b46: MOV ECX,0x61
// 00462b4b: LEA EDI,[ESI + 0x16e9910]
//   XREF to: 016e9910 (DATA)
// 00462b51: LEA ESI,[EAX + 0x16e9910]
//   XREF to: 016e9910 (DATA)
// 00462b57: MOVSD.REP ES:EDI,ESI
//   XREF to: 016e9910 (DATA)
//   XREF to: 016e9914 (DATA)
// 00462b59: JMP 0x00462b24
//   XREF to: 00462b24 (UNCONDITIONAL_JUMP)
// 00462b5b: DEC dword ptr [0x016e990c]
//   Label: LAB_00462b5b
//   XREF to: 016e990c (READ_WRITE)
// 00462b61: MOV ESP,EBP
//   Label: LAB_00462b61
// 00462b63: POP EBP
// 00462b64: POP EDI
// 00462b65: POP ESI
// 00462b66: POP EBX
// 00462b67: RET
