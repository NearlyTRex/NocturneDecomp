// Name: shape_design.c_removeDegenerateTriangles_FUN_00463a20
// Address: 00463a20
// Address Range: [[00463a20, 00463b2b]]
// Convention: __cdecl
// Signature: void shape_design.c_removeDegenerateTriangles_FUN_00463a20(void)
// Cross-references:
//   shape_design.c_vertexReducer_FUN_00467850 (00467850) at 00467dc8 [UNCONDITIONAL_CALL]
// Globals:
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e9914
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99c8
//   undefined4 DAT_016e99cc
//   undefined4 DAT_016e99d0

#include "nocturne.h"

void __cdecl shape_design_c_removeDegenerateTriangles_FUN_00463a20(void)

{
  bool bVar1;
  int iVar2;
  SShapeEditorPolygon *pSVar3;
  SShapeEditorPolygon *pSVar4;
  int local_20;
  int local_1c;
  
  do {
    bVar1 = false;
    for (local_20 = 0; local_20 < g_PolygonCount; local_20 = local_20 + 1) {
      if (g_ModelPolygonData[local_20].vertex_indices_count == 3) {
        if (g_ModelPolygonData[local_20].vertex_indices[0] ==
            g_ModelPolygonData[local_20].vertex_indices[1]) {
          bVar1 = true;
        }
        if (g_ModelPolygonData[local_20].vertex_indices[0] ==
            g_ModelPolygonData[local_20].vertex_indices[2]) {
          bVar1 = true;
        }
        if (g_ModelPolygonData[local_20].vertex_indices[1] ==
            g_ModelPolygonData[local_20].vertex_indices[2]) {
          bVar1 = true;
        }
      }
      if (bVar1) break;
    }
    if (!bVar1) {
      return;
    }
    for (local_1c = local_20; local_1c < g_PolygonCount + -1; local_1c = local_1c + 1) {
      pSVar3 = g_ModelPolygonData + local_1c + 1;
      pSVar4 = g_ModelPolygonData + local_1c;
      for (iVar2 = 0x61; iVar2 != 0; iVar2 = iVar2 + -1) {
        pSVar4->polygon_type = pSVar3->polygon_type;
        pSVar3 = (SShapeEditorPolygon *)pSVar3->texture_name;
        pSVar4 = (SShapeEditorPolygon *)pSVar4->texture_name;
      }
    }
    g_PolygonCount = g_PolygonCount + -1;
    if (g_PolygonCount < 1) {
      return;
    }
  } while( true );
}


// Assembly code:
// 00463a20: PUSH EBX
//   Label: shape_design.c_removeDegenerateTriangles_FUN_00463a20
// 00463a21: PUSH ESI
// 00463a22: PUSH EDI
// 00463a23: PUSH EBP
// 00463a24: MOV EBP,ESP
// 00463a26: SUB ESP,0x10
// 00463a2c: MOV dword ptr [EBP + -0x8],0x0
//   Label: LAB_00463a2c
//   XREF to: Stack[-0x18] (WRITE)
// 00463a33: MOV dword ptr [EBP + -0x10],0x0
//   XREF to: Stack[-0x20] (WRITE)
// 00463a3a: JMP 0x00463a42
//   XREF to: 00463a42 (UNCONDITIONAL_JUMP)
// 00463a3c: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_00463a3c
//   XREF to: Stack[-0x20] (READ)
// 00463a3f: INC dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ_WRITE)
// 00463a42: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_00463a42
//   XREF to: Stack[-0x20] (READ)
// 00463a45: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 00463a4b: JGE 0x00463acc
//   XREF to: 00463acc (CONDITIONAL_JUMP)
// 00463a51: IMUL EAX,dword ptr [EBP + -0x10],0x184
//   XREF to: Stack[-0x20] (READ)
// 00463a58: MOV EDX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 00463a5d: ADD EDX,EAX
// 00463a5f: MOV dword ptr [EBP + -0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00463a62: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00463a65: CMP dword ptr [EAX + 0xa4],0x3
//   XREF to: 016e99b4 (DATA)
// 00463a6c: JNZ 0x00463abf
//   XREF to: 00463abf (CONDITIONAL_JUMP)
// 00463a6e: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00463a71: MOV EDX,dword ptr [EAX + 0xb8]
//   XREF to: 016e99c8 (DATA)
// 00463a77: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00463a7a: CMP EDX,dword ptr [EAX + 0xbc]
//   XREF to: 016e99cc (DATA)
// 00463a80: JNZ 0x00463a89
//   XREF to: 00463a89 (CONDITIONAL_JUMP)
// 00463a82: MOV dword ptr [EBP + -0x8],0x1
//   XREF to: Stack[-0x18] (WRITE)
// 00463a89: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_00463a89
//   XREF to: Stack[-0x14] (READ)
// 00463a8c: MOV EDX,dword ptr [EAX + 0xb8]
//   XREF to: 016e99c8 (DATA)
// 00463a92: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00463a95: CMP EDX,dword ptr [EAX + 0xc0]
//   XREF to: 016e99d0 (DATA)
// 00463a9b: JNZ 0x00463aa4
//   XREF to: 00463aa4 (CONDITIONAL_JUMP)
// 00463a9d: MOV dword ptr [EBP + -0x8],0x1
//   XREF to: Stack[-0x18] (WRITE)
// 00463aa4: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_00463aa4
//   XREF to: Stack[-0x14] (READ)
// 00463aa7: MOV EDX,dword ptr [EAX + 0xbc]
//   XREF to: 016e99cc (DATA)
// 00463aad: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00463ab0: CMP EDX,dword ptr [EAX + 0xc0]
//   XREF to: 016e99d0 (DATA)
// 00463ab6: JNZ 0x00463abf
//   XREF to: 00463abf (CONDITIONAL_JUMP)
// 00463ab8: MOV dword ptr [EBP + -0x8],0x1
//   XREF to: Stack[-0x18] (WRITE)
// 00463abf: CMP dword ptr [EBP + -0x8],0x0
//   Label: LAB_00463abf
//   XREF to: Stack[-0x18] (READ)
// 00463ac3: JZ 0x00463ac7
//   XREF to: 00463ac7 (CONDITIONAL_JUMP)
// 00463ac5: JMP 0x00463acc
//   XREF to: 00463acc (UNCONDITIONAL_JUMP)
// 00463ac7: JMP 0x00463a3c
//   Label: LAB_00463ac7
//   XREF to: 00463a3c (UNCONDITIONAL_JUMP)
// 00463acc: CMP dword ptr [EBP + -0x8],0x0
//   Label: LAB_00463acc
//   XREF to: Stack[-0x18] (READ)
// 00463ad0: JZ 0x00463b25
//   XREF to: 00463b25 (CONDITIONAL_JUMP)
// 00463ad2: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00463ad5: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00463ad8: JMP 0x00463ae0
//   XREF to: 00463ae0 (UNCONDITIONAL_JUMP)
// 00463ada: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00463ada
//   XREF to: Stack[-0x1c] (READ)
// 00463add: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 00463ae0: MOV EAX,[0x016e990c]
//   Label: LAB_00463ae0
//   XREF to: 016e990c (READ)
// 00463ae5: DEC EAX
// 00463ae6: CMP EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00463ae9: JLE 0x00463b11
//   XREF to: 00463b11 (CONDITIONAL_JUMP)
// 00463aeb: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00463aee: INC EAX
// 00463aef: IMUL EAX,EAX,0x184
// 00463af5: IMUL ESI,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 00463afc: MOV ECX,0x61
// 00463b01: LEA EDI,[ESI + 0x16e9910]
//   XREF to: 016e9910 (DATA)
// 00463b07: LEA ESI,[EAX + 0x16e9910]
//   XREF to: 016e9910 (DATA)
// 00463b0d: MOVSD.REP ES:EDI,ESI
//   XREF to: 016e9910 (DATA)
//   XREF to: 016e9914 (DATA)
// 00463b0f: JMP 0x00463ada
//   XREF to: 00463ada (UNCONDITIONAL_JUMP)
// 00463b11: DEC dword ptr [0x016e990c]
//   Label: LAB_00463b11
//   XREF to: 016e990c (READ_WRITE)
// 00463b17: CMP dword ptr [0x016e990c],0x0
//   XREF to: 016e990c (READ)
// 00463b1e: JLE 0x00463b25
//   XREF to: 00463b25 (CONDITIONAL_JUMP)
// 00463b20: JMP 0x00463a2c
//   XREF to: 00463a2c (UNCONDITIONAL_JUMP)
// 00463b25: MOV ESP,EBP
//   Label: LAB_00463b25
// 00463b27: POP EBP
// 00463b28: POP EDI
// 00463b29: POP ESI
// 00463b2a: POP EBX
// 00463b2b: RET
