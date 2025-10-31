// Name: shape_design.c_mergePolygonsWithValidation_FUN_00465b40
// Address: 00465b40
// Address Range: [[00465b40, 00465c4c]]
// Convention: __cdecl
// Signature: void shape_design.c_mergePolygonsWithValidation_FUN_00465b40(int polygon1_index, int polygon2_index, float tolerance, int enforce_part_match)
// Cross-references:
//   shape_design.c_polygonMergerSelectAndProcess_FUN_00465160 (00465160) at 00465194 [UNCONDITIONAL_CALL]
// Globals:
//   double g_ModelPolygonDegreesToRadiansConversion = 0.0174532925200000
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e9a88
// Function calls:
//   crt_string.c_strcmp_FUN_005fef20
//   shape_design.c_findVertexMatches_FUN_00461ae0
//   shape_design.c_mergeAdjacentPolygons_FUN_00462b70
//   shape_design.c_removeUnusedVertices_FUN_00463830
//   shape_design.c_validatePolygonNormals_FUN_00461d80

#include "nocturne.h"

void __cdecl
shape_design_c_mergePolygonsWithValidation_FUN_00465b40
          (int polygon1_index,int polygon2_index,float tolerance,int enforce_part_match)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = (float10)fcos((float10)tolerance * (float10)g_ModelPolygonDegreesToRadiansConversion);
  iVar1 = shape_design_c_validatePolygonNormals_FUN_00461d80
                    (g_ModelPolygonData + polygon1_index,g_ModelPolygonData + polygon2_index,
                     (double)(float)fVar2);
  if (((iVar1 != 0) &&
      (iVar1 = shape_design_c_findVertexMatches_FUN_00461ae0
                         ((int *)g_ModelPolygonData[polygon1_index].vertex_indices,
                          (int *)g_ModelPolygonData[polygon2_index].vertex_indices,
                          g_ModelPolygonData[polygon1_index].vertex_indices_count,
                          g_ModelPolygonData[polygon2_index].vertex_indices_count), iVar1 != 0)) &&
     (iVar1 = crt_string_c_strcmp_FUN_005fef20
                        (g_ModelPolygonData[polygon1_index].lightmap_name,
                         g_ModelPolygonData[polygon2_index].lightmap_name), iVar1 == 0)) {
    if ((enforce_part_match != 0) &&
       (g_ModelPolygonData[polygon1_index].part_assignment !=
        g_ModelPolygonData[polygon2_index].part_assignment)) {
      return;
    }
    shape_design_c_mergeAdjacentPolygons_FUN_00462b70(polygon1_index,polygon2_index);
  }
  shape_design_c_removeUnusedVertices_FUN_00463830();
  return;
}


// Assembly code:
// 00465b40: PUSH EBX
//   Label: shape_design.c_mergePolygonsWithValidation_FUN_00465b40
// 00465b41: PUSH ESI
// 00465b42: PUSH EDI
// 00465b43: PUSH EBP
// 00465b44: MOV EBP,ESP
// 00465b46: SUB ESP,0x0
// 00465b4c: FLD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00465b4f: FMUL double ptr [0x0061c65e]
//   XREF to: 0061c65e (READ)
// 00465b55: FCOS
// 00465b57: FSTP float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (WRITE)
// 00465b5a: FLD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00465b5d: SUB ESP,0x8
// 00465b60: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00465b63: IMUL EDX,dword ptr [EBP + 0x18],0x184
//   XREF to: Stack[0x8] (READ)
// 00465b6a: MOV EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 00465b6f: ADD EAX,EDX
// 00465b71: PUSH EAX
// 00465b72: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00465b79: MOV EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 00465b7e: ADD EAX,EDX
// 00465b80: PUSH EAX
// 00465b81: CALL shape_design.c_validatePolygonNormals_FUN_00461d80
//   XREF to: 00461d80 (UNCONDITIONAL_CALL)
// 00465b86: ADD ESP,0x10
// 00465b89: TEST EAX,EAX
// 00465b8b: JZ 0x00465bdb
//   XREF to: 00465bdb (CONDITIONAL_JUMP)
// 00465b8d: IMUL EAX,dword ptr [EBP + 0x18],0x184
//   XREF to: Stack[0x8] (READ)
// 00465b94: PUSH dword ptr [EAX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 00465b9a: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00465ba1: PUSH dword ptr [EAX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 00465ba7: IMUL EAX,dword ptr [EBP + 0x18],0x184
//   XREF to: Stack[0x8] (READ)
// 00465bae: MOV EDX,0x16e9910
//   XREF to: 016e9910 (PARAM)
// 00465bb3: ADD EAX,EDX
// 00465bb5: ADD EAX,0xb8
// 00465bba: PUSH EAX
// 00465bbb: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00465bc2: MOV EDX,0x16e9910
//   XREF to: 016e9910 (PARAM)
// 00465bc7: ADD EAX,EDX
// 00465bc9: ADD EAX,0xb8
// 00465bce: PUSH EAX
// 00465bcf: CALL shape_design.c_findVertexMatches_FUN_00461ae0
//   XREF to: 00461ae0 (UNCONDITIONAL_CALL)
// 00465bd4: ADD ESP,0x10
// 00465bd7: TEST EAX,EAX
// 00465bd9: JNZ 0x00465bdd
//   XREF to: 00465bdd (CONDITIONAL_JUMP)
// 00465bdb: JMP 0x00465c0d
//   Label: LAB_00465bdb
//   XREF to: 00465c0d (UNCONDITIONAL_JUMP)
// 00465bdd: IMUL EDX,dword ptr [EBP + 0x18],0x184
//   Label: LAB_00465bdd
//   XREF to: Stack[0x8] (READ)
// 00465be4: MOV EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 00465be9: ADD EAX,EDX
// 00465beb: ADD EAX,0x54
// 00465bee: PUSH EAX
// 00465bef: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00465bf6: MOV EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 00465bfb: ADD EAX,EDX
// 00465bfd: ADD EAX,0x54
// 00465c00: PUSH EAX
// 00465c01: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 00465c06: ADD ESP,0x8
// 00465c09: TEST EAX,EAX
// 00465c0b: JZ 0x00465c0f
//   XREF to: 00465c0f (CONDITIONAL_JUMP)
// 00465c0d: JMP 0x00465c43
//   Label: LAB_00465c0d
//   XREF to: 00465c43 (UNCONDITIONAL_JUMP)
// 00465c0f: CMP dword ptr [EBP + 0x20],0x0
//   Label: LAB_00465c0f
//   XREF to: Stack[0x10] (READ)
// 00465c13: JZ 0x00465c33
//   XREF to: 00465c33 (CONDITIONAL_JUMP)
// 00465c15: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00465c1c: IMUL EDX,dword ptr [EBP + 0x18],0x184
//   XREF to: Stack[0x8] (READ)
// 00465c23: MOV EAX,dword ptr [EAX + 0x16e9a88]
//   XREF to: 016e9a88 (DATA)
// 00465c29: CMP EAX,dword ptr [EDX + 0x16e9a88]
//   XREF to: 016e9a88 (DATA)
// 00465c2f: JZ 0x00465c33
//   XREF to: 00465c33 (CONDITIONAL_JUMP)
// 00465c31: JMP 0x00465c48
//   XREF to: 00465c48 (UNCONDITIONAL_JUMP)
// 00465c33: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_00465c33
//   XREF to: Stack[0x8] (READ)
// 00465c36: PUSH EAX
// 00465c37: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00465c3a: PUSH EAX
// 00465c3b: CALL shape_design.c_mergeAdjacentPolygons_FUN_00462b70
//   XREF to: 00462b70 (UNCONDITIONAL_CALL)
// 00465c40: ADD ESP,0x8
// 00465c43: CALL shape_design.c_removeUnusedVertices_FUN_00463830
//   Label: LAB_00465c43
//   XREF to: 00463830 (UNCONDITIONAL_CALL)
// 00465c48: POP EBP
//   Label: LAB_00465c48
// 00465c49: POP EDI
// 00465c4a: POP ESI
// 00465c4b: POP EBX
// 00465c4c: RET
