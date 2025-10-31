// Name: shape_design.c_weldNearbyVertices_FUN_00465c50
// Address: 00465c50
// Address Range: [[00465c50, 00465d48]]
// Convention: __cdecl
// Signature: void shape_design.c_weldNearbyVertices_FUN_00465c50(int polygon_index, float tolerance)
// Cross-references:
//   shape_design.c_polygonToolModeManager_FUN_00464c90 (00464c90) at 00464ec2 [UNCONDITIONAL_CALL]
// Globals:
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99c8
// Function calls:
//   shape_design.c_removeUnusedVertices_FUN_00463830

#include "nocturne.h"

void __cdecl shape_design_c_weldNearbyVertices_FUN_00465c50(int polygon_index,float tolerance)

{
  uint uVar1;
  int local_1c;
  uint local_18;
  
  for (local_1c = 0; local_1c < (int)g_ModelPolygonData[polygon_index].vertex_indices_count;
      local_1c = local_1c + 1) {
    uVar1 = g_ModelPolygonData[polygon_index].vertex_indices[local_1c];
    for (local_18 = 0; (int)local_18 < g_VertexCount; local_18 = local_18 + 1) {
      if (((ABS(g_LoadedVertices[uVar1].vertex.x - g_LoadedVertices[local_18].vertex.x) < tolerance)
          && (ABS(g_LoadedVertices[uVar1].vertex.y - g_LoadedVertices[local_18].vertex.y) <
              tolerance)) &&
         (ABS(g_LoadedVertices[uVar1].vertex.z - g_LoadedVertices[local_18].vertex.z) < tolerance))
      {
        g_ModelPolygonData[polygon_index].vertex_indices[local_1c] = local_18;
      }
    }
  }
  shape_design_c_removeUnusedVertices_FUN_00463830();
  return;
}


// Assembly code:
// 00465c50: PUSH EBX
//   Label: shape_design.c_weldNearbyVertices_FUN_00465c50
// 00465c51: PUSH ESI
// 00465c52: PUSH EDI
// 00465c53: PUSH EBP
// 00465c54: MOV EBP,ESP
// 00465c56: SUB ESP,0xc
// 00465c5c: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 00465c63: JMP 0x00465c6b
//   XREF to: 00465c6b (UNCONDITIONAL_JUMP)
// 00465c65: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00465c65
//   XREF to: Stack[-0x1c] (READ)
// 00465c68: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 00465c6b: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_00465c6b
//   XREF to: Stack[0x4] (READ)
// 00465c72: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00465c75: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 00465c7b: JGE 0x00465d3d
//   XREF to: 00465d3d (CONDITIONAL_JUMP)
// 00465c81: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00465c88: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00465c8b: SHL EAX,0x2
// 00465c8e: ADD EAX,EDX
// 00465c90: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 00465c96: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00465c99: MOV dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (WRITE)
// 00465ca0: JMP 0x00465ca8
//   XREF to: 00465ca8 (UNCONDITIONAL_JUMP)
// 00465ca2: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_00465ca2
//   XREF to: Stack[-0x18] (READ)
// 00465ca5: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 00465ca8: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_00465ca8
//   XREF to: Stack[-0x18] (READ)
// 00465cab: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00465cb1: JGE 0x00465d38
//   XREF to: 00465d38 (CONDITIONAL_JUMP)
// 00465cb7: IMUL EDX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 00465cbb: IMUL EAX,dword ptr [EBP + -0x8],0x14
//   XREF to: Stack[-0x18] (READ)
// 00465cbf: FLD float ptr [EDX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00465cc5: FSUB float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00465ccb: FABS
// 00465ccd: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00465cd0: FCOMPP
// 00465cd2: FNSTSW AX
// 00465cd4: SAHF
// 00465cd5: JBE 0x00465cf7
//   XREF to: 00465cf7 (CONDITIONAL_JUMP)
// 00465cd7: IMUL EDX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 00465cdb: IMUL EAX,dword ptr [EBP + -0x8],0x14
//   XREF to: Stack[-0x18] (READ)
// 00465cdf: FLD float ptr [EDX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00465ce5: FSUB float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00465ceb: FABS
// 00465ced: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00465cf0: FCOMPP
// 00465cf2: FNSTSW AX
// 00465cf4: SAHF
// 00465cf5: JA 0x00465cf9
//   XREF to: 00465cf9 (CONDITIONAL_JUMP)
// 00465cf7: JMP 0x00465d19
//   Label: LAB_00465cf7
//   XREF to: 00465d19 (UNCONDITIONAL_JUMP)
// 00465cf9: IMUL EDX,dword ptr [EBP + -0x4],0x14
//   Label: LAB_00465cf9
//   XREF to: Stack[-0x14] (READ)
// 00465cfd: IMUL EAX,dword ptr [EBP + -0x8],0x14
//   XREF to: Stack[-0x18] (READ)
// 00465d01: FLD float ptr [EDX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00465d07: FSUB float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00465d0d: FABS
// 00465d0f: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00465d12: FCOMPP
// 00465d14: FNSTSW AX
// 00465d16: SAHF
// 00465d17: JA 0x00465d1b
//   XREF to: 00465d1b (CONDITIONAL_JUMP)
// 00465d19: JMP 0x00465d33
//   Label: LAB_00465d19
//   XREF to: 00465d33 (UNCONDITIONAL_JUMP)
// 00465d1b: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_00465d1b
//   XREF to: Stack[0x4] (READ)
// 00465d22: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00465d25: SHL EAX,0x2
// 00465d28: ADD EDX,EAX
// 00465d2a: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00465d2d: MOV dword ptr [EDX + 0x16e99c8],EAX
//   XREF to: 016e99c8 (DATA)
// 00465d33: JMP 0x00465ca2
//   Label: LAB_00465d33
//   XREF to: 00465ca2 (UNCONDITIONAL_JUMP)
// 00465d38: JMP 0x00465c65
//   Label: LAB_00465d38
//   XREF to: 00465c65 (UNCONDITIONAL_JUMP)
// 00465d3d: CALL shape_design.c_removeUnusedVertices_FUN_00463830
//   Label: LAB_00465d3d
//   XREF to: 00463830 (UNCONDITIONAL_CALL)
// 00465d42: MOV ESP,EBP
// 00465d44: POP EBP
// 00465d45: POP EDI
// 00465d46: POP ESI
// 00465d47: POP EBX
// 00465d48: RET
