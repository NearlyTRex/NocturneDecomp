// Name: shape_design.c_removeDuplicatePolygons_FUN_004651b0
// Address: 004651b0
// Address Range: [[004651b0, 00465309]]
// Convention: __cdecl
// Signature: void shape_design.c_removeDuplicatePolygons_FUN_004651b0(int respect_part_assignments)
// Cross-references:
//   shape_design.c_configureSinglePassPolygonReduction_FUN_00465560 (00465560) at 00465640 [UNCONDITIONAL_CALL]
//   shape_design.c_optimizePolygonMesh_FUN_004658e0 (004658e0) at 00465aa7 [UNCONDITIONAL_CALL]
// Globals:
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e9914
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99c8
//   undefined4 DAT_016e9a88

#include "nocturne.h"

void __cdecl shape_design_c_removeDuplicatePolygons_FUN_004651b0(int respect_part_assignments)

{
  int iVar1;
  SShapeEditorPolygon *pSVar2;
  SShapeEditorPolygon *pSVar3;
  int local_24;
  int local_20;
  int local_18;
  uint local_14;
  
  for (local_20 = 0; local_20 < g_PolygonCount; local_20 = local_20 + 1) {
    local_24 = local_20 + 1;
    while (local_24 < g_PolygonCount) {
      if (g_ModelPolygonData[local_20].vertex_indices_count ==
          g_ModelPolygonData[local_24].vertex_indices_count) {
        if ((respect_part_assignments == 0) ||
           (g_ModelPolygonData[local_20].part_assignment ==
            g_ModelPolygonData[local_24].part_assignment)) {
          local_14 = 0;
          for (local_18 = 0; local_18 < (int)g_ModelPolygonData[local_20].vertex_indices_count;
              local_18 = local_18 + 1) {
            if (g_ModelPolygonData[local_20].vertex_indices[local_18] ==
                g_ModelPolygonData[local_24].vertex_indices[local_18]) {
              local_14 = local_14 + 1;
            }
          }
          if (local_14 == g_ModelPolygonData[local_20].vertex_indices_count) {
            for (local_18 = local_24; local_18 < g_PolygonCount + -1; local_18 = local_18 + 1) {
              pSVar2 = g_ModelPolygonData + local_18 + 1;
              pSVar3 = g_ModelPolygonData + local_18;
              for (iVar1 = 0x61; iVar1 != 0; iVar1 = iVar1 + -1) {
                pSVar3->polygon_type = pSVar2->polygon_type;
                pSVar2 = (SShapeEditorPolygon *)pSVar2->texture_name;
                pSVar3 = (SShapeEditorPolygon *)pSVar3->texture_name;
              }
            }
            g_PolygonCount = g_PolygonCount + -1;
          }
          else {
            local_24 = local_24 + 1;
          }
        }
        else {
          local_24 = local_24 + 1;
        }
      }
      else {
        local_24 = local_24 + 1;
      }
    }
  }
  return;
}


// Assembly code:
// 004651b0: PUSH EBX
//   Label: shape_design.c_removeDuplicatePolygons_FUN_004651b0
// 004651b1: PUSH ESI
// 004651b2: PUSH EDI
// 004651b3: PUSH EBP
// 004651b4: MOV EBP,ESP
// 004651b6: SUB ESP,0x14
// 004651bc: MOV dword ptr [EBP + -0x10],0x0
//   XREF to: Stack[-0x20] (WRITE)
// 004651c3: JMP 0x004651cb
//   XREF to: 004651cb (UNCONDITIONAL_JUMP)
// 004651c5: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_004651c5
//   XREF to: Stack[-0x20] (READ)
// 004651c8: INC dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ_WRITE)
// 004651cb: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_004651cb
//   XREF to: Stack[-0x20] (READ)
// 004651ce: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 004651d4: JGE 0x00465303
//   XREF to: 00465303 (CONDITIONAL_JUMP)
// 004651da: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 004651dd: INC EAX
// 004651de: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004651e1: MOV EAX,dword ptr [EBP + -0x14]
//   Label: LAB_004651e1
//   XREF to: Stack[-0x24] (READ)
// 004651e4: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 004651ea: JGE 0x004652fe
//   XREF to: 004652fe (CONDITIONAL_JUMP)
// 004651f0: IMUL EAX,dword ptr [EBP + -0x10],0x184
//   XREF to: Stack[-0x20] (READ)
// 004651f7: IMUL EDX,dword ptr [EBP + -0x14],0x184
//   XREF to: Stack[-0x24] (READ)
// 004651fe: MOV EAX,dword ptr [EAX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 00465204: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0046520a: JZ 0x00465214
//   XREF to: 00465214 (CONDITIONAL_JUMP)
// 0046520c: INC dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ_WRITE)
// 0046520f: JMP 0x004652f9
//   XREF to: 004652f9 (UNCONDITIONAL_JUMP)
// 00465214: CMP dword ptr [EBP + 0x14],0x0
//   Label: LAB_00465214
//   XREF to: Stack[0x4] (READ)
// 00465218: JZ 0x00465236
//   XREF to: 00465236 (CONDITIONAL_JUMP)
// 0046521a: IMUL EAX,dword ptr [EBP + -0x10],0x184
//   XREF to: Stack[-0x20] (READ)
// 00465221: IMUL EDX,dword ptr [EBP + -0x14],0x184
//   XREF to: Stack[-0x24] (READ)
// 00465228: MOV EAX,dword ptr [EAX + 0x16e9a88]
//   XREF to: 016e9a88 (DATA)
// 0046522e: CMP EAX,dword ptr [EDX + 0x16e9a88]
//   XREF to: 016e9a88 (DATA)
// 00465234: JNZ 0x00465238
//   XREF to: 00465238 (CONDITIONAL_JUMP)
// 00465236: JMP 0x00465240
//   Label: LAB_00465236
//   XREF to: 00465240 (UNCONDITIONAL_JUMP)
// 00465238: INC dword ptr [EBP + -0x14]
//   Label: LAB_00465238
//   XREF to: Stack[-0x24] (READ_WRITE)
// 0046523b: JMP 0x004652f9
//   XREF to: 004652f9 (UNCONDITIONAL_JUMP)
// 00465240: MOV dword ptr [EBP + -0x4],0x0
//   Label: LAB_00465240
//   XREF to: Stack[-0x14] (WRITE)
// 00465247: MOV dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (WRITE)
// 0046524e: JMP 0x00465256
//   XREF to: 00465256 (UNCONDITIONAL_JUMP)
// 00465250: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_00465250
//   XREF to: Stack[-0x18] (READ)
// 00465253: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 00465256: IMUL EDX,dword ptr [EBP + -0x10],0x184
//   Label: LAB_00465256
//   XREF to: Stack[-0x20] (READ)
// 0046525d: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00465260: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 00465266: JGE 0x0046529d
//   XREF to: 0046529d (CONDITIONAL_JUMP)
// 00465268: IMUL EDX,dword ptr [EBP + -0x10],0x184
//   XREF to: Stack[-0x20] (READ)
// 0046526f: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00465272: SHL EAX,0x2
// 00465275: LEA ECX,[EDX + EAX*0x1]
// 00465278: IMUL EDX,dword ptr [EBP + -0x14],0x184
//   XREF to: Stack[-0x24] (READ)
// 0046527f: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00465282: SHL EAX,0x2
// 00465285: ADD EDX,EAX
// 00465287: MOV EAX,dword ptr [ECX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 0046528d: CMP EAX,dword ptr [EDX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 00465293: JNZ 0x0046529b
//   XREF to: 0046529b (CONDITIONAL_JUMP)
// 00465295: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00465298: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0046529b: JMP 0x00465250
//   Label: LAB_0046529b
//   XREF to: 00465250 (UNCONDITIONAL_JUMP)
// 0046529d: IMUL EDX,dword ptr [EBP + -0x10],0x184
//   Label: LAB_0046529d
//   XREF to: Stack[-0x20] (READ)
// 004652a4: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004652a7: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 004652ad: JNZ 0x004652f6
//   XREF to: 004652f6 (CONDITIONAL_JUMP)
// 004652af: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 004652b2: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004652b5: JMP 0x004652bd
//   XREF to: 004652bd (UNCONDITIONAL_JUMP)
// 004652b7: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_004652b7
//   XREF to: Stack[-0x18] (READ)
// 004652ba: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 004652bd: MOV EAX,[0x016e990c]
//   Label: LAB_004652bd
//   XREF to: 016e990c (READ)
// 004652c2: DEC EAX
// 004652c3: CMP EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004652c6: JLE 0x004652ee
//   XREF to: 004652ee (CONDITIONAL_JUMP)
// 004652c8: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004652cb: INC EAX
// 004652cc: IMUL EAX,EAX,0x184
// 004652d2: IMUL ESI,dword ptr [EBP + -0x8],0x184
//   XREF to: Stack[-0x18] (READ)
// 004652d9: MOV ECX,0x61
// 004652de: LEA EDI,[ESI + 0x16e9910]
//   XREF to: 016e9910 (DATA)
// 004652e4: LEA ESI,[EAX + 0x16e9910]
//   XREF to: 016e9910 (DATA)
// 004652ea: MOVSD.REP ES:EDI,ESI
//   XREF to: 016e9910 (DATA)
//   XREF to: 016e9914 (DATA)
// 004652ec: JMP 0x004652b7
//   XREF to: 004652b7 (UNCONDITIONAL_JUMP)
// 004652ee: DEC dword ptr [0x016e990c]
//   Label: LAB_004652ee
//   XREF to: 016e990c (READ_WRITE)
// 004652f4: JMP 0x004652f9
//   XREF to: 004652f9 (UNCONDITIONAL_JUMP)
// 004652f6: INC dword ptr [EBP + -0x14]
//   Label: LAB_004652f6
//   XREF to: Stack[-0x24] (READ_WRITE)
// 004652f9: JMP 0x004651e1
//   Label: LAB_004652f9
//   XREF to: 004651e1 (UNCONDITIONAL_JUMP)
// 004652fe: JMP 0x004651c5
//   Label: LAB_004652fe
//   XREF to: 004651c5 (UNCONDITIONAL_JUMP)
// 00465303: MOV ESP,EBP
//   Label: LAB_00465303
// 00465305: POP EBP
// 00465306: POP EDI
// 00465307: POP ESI
// 00465308: POP EBX
// 00465309: RET
