// Name: shape_design.c_sortPolygonsByTexture_FUN_0045b8b0
// Address: 0045b8b0
// Address Range: [[0045b8b0, 0045b985]]
// Convention: __cdecl
// Signature: void shape_design.c_sortPolygonsByTexture_FUN_0045b8b0(void)
// Cross-references:
//   shape_design.c_exportModelToBIN_FUN_0045aa80 (0045aa80) at 0045aa8c [UNCONDITIONAL_CALL]
//   shape_design.c_exportModelToMDL_FUN_00459e80 (00459e80) at 00459e8c [UNCONDITIONAL_CALL]
// Globals:
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e9914
// Function calls:
//   shape_design.c_polygonTextureNameComparator_FUN_0045b850

#include "nocturne.h"

void __cdecl shape_design_c_sortPolygonsByTexture_FUN_0045b8b0(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  SShapeEditorPolygon *pSVar2;
  uint *puVar3;
  SShapeEditorPolygon *pSVar4;
  byte bVar5;
  uint local_19c [97];
  int local_18;
  int local_14;
  
  bVar5 = 0;
  for (local_18 = g_PolygonCount + -1; -1 < local_18; local_18 = local_18 + -1) {
    for (local_14 = 0; local_14 < local_18; local_14 = local_14 + 1) {
      iVar1 = shape_design_c_polygonTextureNameComparator_FUN_0045b850
                        (g_ModelPolygonData + local_14,g_ModelPolygonData + local_14 + 1);
      if (0 < iVar1) {
        pSVar2 = g_ModelPolygonData + local_14;
        puVar3 = local_19c;
        for (iVar1 = 0x61; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = pSVar2->polygon_type;
          pSVar2 = (SShapeEditorPolygon *)((int)pSVar2 + ((uint)bVar5 * -2 + 1) * 4);
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        }
        pSVar2 = g_ModelPolygonData + local_14 + 1;
        pSVar4 = g_ModelPolygonData + local_14;
        for (iVar1 = 0x61; iVar1 != 0; iVar1 = iVar1 + -1) {
          pSVar4->polygon_type = pSVar2->polygon_type;
          pSVar2 = (SShapeEditorPolygon *)((int)pSVar2 + ((uint)bVar5 * -2 + 1) * 4);
          pSVar4 = (SShapeEditorPolygon *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
        }
        puVar3 = local_19c;
        pSVar2 = g_ModelPolygonData + local_14 + 1;
        for (iVar1 = 0x61; iVar1 != 0; iVar1 = iVar1 + -1) {
          pSVar2->polygon_type = *puVar3;
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          pSVar2 = (SShapeEditorPolygon *)((int)pSVar2 + ((uint)bVar5 * -2 + 1) * 4);
        }
      }
    }
  }
  return;
}


// Assembly code:
// 0045b8b0: PUSH EBX
//   Label: shape_design.c_sortPolygonsByTexture_FUN_0045b8b0
// 0045b8b1: PUSH ESI
// 0045b8b2: PUSH EDI
// 0045b8b3: PUSH EBP
// 0045b8b4: MOV EBP,ESP
// 0045b8b6: SUB ESP,0x18c
// 0045b8bc: MOV EAX,[0x016e990c]
//   XREF to: 016e990c (READ)
// 0045b8c1: DEC EAX
// 0045b8c2: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0045b8c5: JMP 0x0045b8cb
//   XREF to: 0045b8cb (UNCONDITIONAL_JUMP)
// 0045b8c7: ADD dword ptr [EBP + -0x8],-0x1
//   Label: LAB_0045b8c7
//   XREF to: Stack[-0x18] (READ_WRITE)
// 0045b8cb: CMP dword ptr [EBP + -0x8],0x0
//   Label: LAB_0045b8cb
//   XREF to: Stack[-0x18] (READ)
// 0045b8cf: JL 0x0045b97f
//   XREF to: 0045b97f (CONDITIONAL_JUMP)
// 0045b8d5: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0045b8dc: JMP 0x0045b8e1
//   XREF to: 0045b8e1 (UNCONDITIONAL_JUMP)
// 0045b8de: INC dword ptr [EBP + -0x4]
//   Label: LAB_0045b8de
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0045b8e1: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0045b8e1
//   XREF to: Stack[-0x14] (READ)
// 0045b8e4: CMP EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045b8e7: JGE 0x0045b97a
//   XREF to: 0045b97a (CONDITIONAL_JUMP)
// 0045b8ed: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045b8f0: INC EAX
// 0045b8f1: IMUL EAX,EAX,0x184
// 0045b8f7: MOV EDX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 0045b8fc: ADD EAX,EDX
// 0045b8fe: PUSH EAX
// 0045b8ff: IMUL EAX,dword ptr [EBP + -0x4],0x184
//   XREF to: Stack[-0x14] (READ)
// 0045b906: MOV EDX,0x16e9910
//   XREF to: 016e9910 (PARAM)
// 0045b90b: ADD EAX,EDX
// 0045b90d: PUSH EAX
// 0045b90e: CALL shape_design.c_polygonTextureNameComparator_FUN_0045b850
//   XREF to: 0045b850 (UNCONDITIONAL_CALL)
// 0045b913: ADD ESP,0x8
// 0045b916: TEST EAX,EAX
// 0045b918: JLE 0x0045b975
//   XREF to: 0045b975 (CONDITIONAL_JUMP)
// 0045b91a: IMUL ESI,dword ptr [EBP + -0x4],0x184
//   XREF to: Stack[-0x14] (READ)
// 0045b921: MOV ECX,0x61
// 0045b926: LEA EDI,[EBP + 0xfffffe74]
//   XREF to: Stack[-0x19c] (DATA)
// 0045b92c: LEA ESI,[ESI + 0x16e9910]
//   XREF to: 016e9910 (DATA)
// 0045b932: MOVSD.REP ES:EDI,ESI
//   XREF to: 016e9910 (DATA)
//   XREF to: 016e9914 (DATA)
// 0045b934: MOV ESI,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045b937: INC ESI
// 0045b938: IMUL ESI,ESI,0x184
// 0045b93e: IMUL EDI,dword ptr [EBP + -0x4],0x184
//   XREF to: Stack[-0x14] (READ)
// 0045b945: MOV ECX,0x61
// 0045b94a: LEA EDI,[EDI + 0x16e9910]
//   XREF to: 016e9910 (DATA)
// 0045b950: LEA ESI,[ESI + 0x16e9910]
//   XREF to: 016e9910 (DATA)
// 0045b956: MOVSD.REP ES:EDI,ESI
//   XREF to: 016e9910 (DATA)
//   XREF to: 016e9914 (DATA)
// 0045b958: MOV ESI,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045b95b: INC ESI
// 0045b95c: IMUL ESI,ESI,0x184
// 0045b962: MOV ECX,0x61
// 0045b967: LEA EDI,[ESI + 0x16e9910]
//   XREF to: 016e9910 (DATA)
// 0045b96d: LEA ESI,[EBP + 0xfffffe74]
//   XREF to: Stack[-0x19c] (DATA)
// 0045b973: MOVSD.REP ES:EDI,ESI
//   XREF to: 016e9910 (DATA)
//   XREF to: 016e9914 (DATA)
// 0045b975: JMP 0x0045b8de
//   Label: LAB_0045b975
//   XREF to: 0045b8de (UNCONDITIONAL_JUMP)
// 0045b97a: JMP 0x0045b8c7
//   Label: LAB_0045b97a
//   XREF to: 0045b8c7 (UNCONDITIONAL_JUMP)
// 0045b97f: MOV ESP,EBP
//   Label: LAB_0045b97f
// 0045b981: POP EBP
// 0045b982: POP EDI
// 0045b983: POP ESI
// 0045b984: POP EBX
// 0045b985: RET
