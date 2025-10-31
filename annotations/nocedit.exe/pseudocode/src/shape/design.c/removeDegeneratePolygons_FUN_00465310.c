// Name: shape_design.c_removeDegeneratePolygons_FUN_00465310
// Address: 00465310
// Address Range: [[00465310, 004654d5]]
// Convention: __cdecl
// Signature: void shape_design.c_removeDegeneratePolygons_FUN_00465310(void)
// Cross-references:
//   shape_design.c_configureSinglePassPolygonReduction_FUN_00465560 (00465560) at 00465780 [UNCONDITIONAL_CALL]
//   shape_design.c_optimizePolygonMesh_FUN_004658e0 (004658e0) at 00465aaf [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_TriListSomething_FUN_005d77a0 (005d77a0) at 005d77af [UNCONDITIONAL_CALL]
// Globals:
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e9914
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99c8
//   undefined4 DAT_016e99cc

#include "nocturne.h"

void __cdecl shape_design_c_removeDegeneratePolygons_FUN_00465310(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  SShapeEditorPolygon *pSVar4;
  SShapeEditorPolygon *pSVar5;
  int local_24;
  int local_20;
  int local_1c;
  uint local_14;
  
  do {
    local_24 = 0;
    while( true ) {
      if (g_PolygonCount <= local_24) {
        return;
      }
      uVar1 = g_ModelPolygonData[local_24].vertex_indices_count;
      local_14 = 0xffffffff;
      for (local_20 = 0; iVar3 = local_20, local_20 < (int)(uVar1 - 1); local_20 = local_20 + 1) {
        while (local_1c = iVar3 + 1, local_1c < (int)uVar1) {
          iVar2 = iVar3 + 1;
          iVar3 = local_1c;
          if (g_ModelPolygonData[local_24].vertex_indices[local_20] ==
              g_ModelPolygonData[local_24].vertex_indices[iVar2]) {
            local_14 = g_ModelPolygonData[local_24].vertex_indices[local_20];
          }
        }
      }
      if (local_14 != 0xffffffff) break;
LAB_00465325:
      local_24 = local_24 + 1;
    }
    local_20 = 0;
    while( true ) {
      if ((int)uVar1 <= local_20) goto LAB_00465325;
      if (g_ModelPolygonData[local_24].vertex_indices[local_20] == local_14) break;
      local_20 = local_20 + 1;
    }
    for (local_1c = local_20; local_1c < (int)(uVar1 - 1); local_1c = local_1c + 1) {
      g_ModelPolygonData[local_24].vertex_indices[local_1c] =
           g_ModelPolygonData[local_24].vertex_indices[local_1c + 1];
    }
    g_ModelPolygonData[local_24].vertex_indices_count =
         g_ModelPolygonData[local_24].vertex_indices_count - 1;
    if ((int)g_ModelPolygonData[local_24].vertex_indices_count < 3) {
      for (local_20 = local_24; local_20 < g_PolygonCount + -1; local_20 = local_20 + 1) {
        pSVar4 = g_ModelPolygonData + local_20 + 1;
        pSVar5 = g_ModelPolygonData + local_20;
        for (iVar3 = 0x61; iVar3 != 0; iVar3 = iVar3 + -1) {
          pSVar5->polygon_type = pSVar4->polygon_type;
          pSVar4 = (SShapeEditorPolygon *)pSVar4->texture_name;
          pSVar5 = (SShapeEditorPolygon *)pSVar5->texture_name;
        }
      }
      g_PolygonCount = g_PolygonCount + -1;
    }
  } while( true );
}


// Assembly code:
// 00465310: PUSH EBX
//   Label: shape_design.c_removeDegeneratePolygons_FUN_00465310
// 00465311: PUSH ESI
// 00465312: PUSH EDI
// 00465313: PUSH EBP
// 00465314: MOV EBP,ESP
// 00465316: SUB ESP,0x14
// 0046531c: MOV dword ptr [EBP + -0x14],0x0
//   Label: LAB_0046531c
//   XREF to: Stack[-0x24] (WRITE)
// 00465323: JMP 0x0046532b
//   XREF to: 0046532b (UNCONDITIONAL_JUMP)
// 00465325: MOV EAX,dword ptr [EBP + -0x14]
//   Label: LAB_00465325
//   XREF to: Stack[-0x24] (READ)
// 00465328: INC dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ_WRITE)
// 0046532b: MOV EAX,dword ptr [EBP + -0x14]
//   Label: LAB_0046532b
//   XREF to: Stack[-0x24] (READ)
// 0046532e: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 00465334: JGE 0x004654cf
//   XREF to: 004654cf (CONDITIONAL_JUMP)
// 0046533a: IMUL EAX,dword ptr [EBP + -0x14],0x184
//   XREF to: Stack[-0x24] (READ)
// 00465341: MOV EAX,dword ptr [EAX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 00465347: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0046534a: MOV dword ptr [EBP + -0x4],0xffffffff
//   XREF to: Stack[-0x14] (WRITE)
// 00465351: MOV dword ptr [EBP + -0x10],0x0
//   XREF to: Stack[-0x20] (WRITE)
// 00465358: JMP 0x00465360
//   XREF to: 00465360 (UNCONDITIONAL_JUMP)
// 0046535a: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_0046535a
//   XREF to: Stack[-0x20] (READ)
// 0046535d: INC dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ_WRITE)
// 00465360: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_00465360
//   XREF to: Stack[-0x18] (READ)
// 00465363: DEC EAX
// 00465364: CMP EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00465367: JLE 0x004653c9
//   XREF to: 004653c9 (CONDITIONAL_JUMP)
// 00465369: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046536c: INC EAX
// 0046536d: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00465370: JMP 0x00465378
//   XREF to: 00465378 (UNCONDITIONAL_JUMP)
// 00465372: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00465372
//   XREF to: Stack[-0x1c] (READ)
// 00465375: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 00465378: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00465378
//   XREF to: Stack[-0x1c] (READ)
// 0046537b: CMP EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0046537e: JGE 0x004653c7
//   XREF to: 004653c7 (CONDITIONAL_JUMP)
// 00465380: IMUL EDX,dword ptr [EBP + -0x14],0x184
//   XREF to: Stack[-0x24] (READ)
// 00465387: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046538a: SHL EAX,0x2
// 0046538d: LEA ECX,[EDX + EAX*0x1]
// 00465390: IMUL EDX,dword ptr [EBP + -0x14],0x184
//   XREF to: Stack[-0x24] (READ)
// 00465397: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046539a: SHL EAX,0x2
// 0046539d: ADD EDX,EAX
// 0046539f: MOV EAX,dword ptr [ECX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 004653a5: CMP EAX,dword ptr [EDX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 004653ab: JNZ 0x004653c5
//   XREF to: 004653c5 (CONDITIONAL_JUMP)
// 004653ad: IMUL EDX,dword ptr [EBP + -0x14],0x184
//   XREF to: Stack[-0x24] (READ)
// 004653b4: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 004653b7: SHL EAX,0x2
// 004653ba: ADD EAX,EDX
// 004653bc: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 004653c2: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004653c5: JMP 0x00465372
//   Label: LAB_004653c5
//   XREF to: 00465372 (UNCONDITIONAL_JUMP)
// 004653c7: JMP 0x0046535a
//   Label: LAB_004653c7
//   XREF to: 0046535a (UNCONDITIONAL_JUMP)
// 004653c9: CMP dword ptr [EBP + -0x4],-0x1
//   Label: LAB_004653c9
//   XREF to: Stack[-0x14] (READ)
// 004653cd: JZ 0x004654ca
//   XREF to: 004654ca (CONDITIONAL_JUMP)
// 004653d3: MOV dword ptr [EBP + -0x10],0x0
//   XREF to: Stack[-0x20] (WRITE)
// 004653da: JMP 0x004653e2
//   XREF to: 004653e2 (UNCONDITIONAL_JUMP)
// 004653dc: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_004653dc
//   XREF to: Stack[-0x20] (READ)
// 004653df: INC dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ_WRITE)
// 004653e2: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_004653e2
//   XREF to: Stack[-0x20] (READ)
// 004653e5: CMP EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004653e8: JGE 0x004654ca
//   XREF to: 004654ca (CONDITIONAL_JUMP)
// 004653ee: IMUL EDX,dword ptr [EBP + -0x14],0x184
//   XREF to: Stack[-0x24] (READ)
// 004653f5: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 004653f8: SHL EAX,0x2
// 004653fb: ADD EAX,EDX
// 004653fd: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 00465403: CMP EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00465406: JNZ 0x004654c5
//   XREF to: 004654c5 (CONDITIONAL_JUMP)
// 0046540c: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046540f: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00465412: JMP 0x0046541a
//   XREF to: 0046541a (UNCONDITIONAL_JUMP)
// 00465414: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00465414
//   XREF to: Stack[-0x1c] (READ)
// 00465417: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0046541a: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0046541a
//   XREF to: Stack[-0x18] (READ)
// 0046541d: DEC EAX
// 0046541e: CMP EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00465421: JLE 0x00465450
//   XREF to: 00465450 (CONDITIONAL_JUMP)
// 00465423: IMUL EDX,dword ptr [EBP + -0x14],0x184
//   XREF to: Stack[-0x24] (READ)
// 0046542a: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046542d: SHL EAX,0x2
// 00465430: LEA ECX,[EDX + EAX*0x1]
// 00465433: IMUL EDX,dword ptr [EBP + -0x14],0x184
//   XREF to: Stack[-0x24] (READ)
// 0046543a: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046543d: SHL EAX,0x2
// 00465440: ADD EDX,EAX
// 00465442: MOV EAX,dword ptr [ECX + 0x16e99cc]
//   XREF to: 016e99cc (DATA)
// 00465448: MOV dword ptr [EDX + 0x16e99c8],EAX
//   XREF to: 016e99c8 (DATA)
// 0046544e: JMP 0x00465414
//   XREF to: 00465414 (UNCONDITIONAL_JUMP)
// 00465450: IMUL EAX,dword ptr [EBP + -0x14],0x184
//   Label: LAB_00465450
//   XREF to: Stack[-0x24] (READ)
// 00465457: MOV EAX,dword ptr [EAX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0046545d: DEC EAX
// 0046545e: IMUL EDX,dword ptr [EBP + -0x14],0x184
//   XREF to: Stack[-0x24] (READ)
// 00465465: MOV dword ptr [EDX + 0x16e99b4],EAX
//   XREF to: 016e99b4 (DATA)
// 0046546b: IMUL EAX,dword ptr [EBP + -0x14],0x184
//   XREF to: Stack[-0x24] (READ)
// 00465472: CMP dword ptr [EAX + 0x16e99b4],0x3
//   XREF to: 016e99b4 (DATA)
// 00465479: JGE 0x004654c0
//   XREF to: 004654c0 (CONDITIONAL_JUMP)
// 0046547b: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0046547e: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00465481: JMP 0x00465489
//   XREF to: 00465489 (UNCONDITIONAL_JUMP)
// 00465483: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_00465483
//   XREF to: Stack[-0x20] (READ)
// 00465486: INC dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ_WRITE)
// 00465489: MOV EAX,[0x016e990c]
//   Label: LAB_00465489
//   XREF to: 016e990c (READ)
// 0046548e: DEC EAX
// 0046548f: CMP EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00465492: JLE 0x004654ba
//   XREF to: 004654ba (CONDITIONAL_JUMP)
// 00465494: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00465497: INC EAX
// 00465498: IMUL EAX,EAX,0x184
// 0046549e: IMUL ESI,dword ptr [EBP + -0x10],0x184
//   XREF to: Stack[-0x20] (READ)
// 004654a5: MOV ECX,0x61
// 004654aa: LEA EDI,[ESI + 0x16e9910]
//   XREF to: 016e9910 (DATA)
// 004654b0: LEA ESI,[EAX + 0x16e9910]
//   XREF to: 016e9910 (DATA)
// 004654b6: MOVSD.REP ES:EDI,ESI
//   XREF to: 016e9910 (DATA)
//   XREF to: 016e9914 (DATA)
// 004654b8: JMP 0x00465483
//   XREF to: 00465483 (UNCONDITIONAL_JUMP)
// 004654ba: DEC dword ptr [0x016e990c]
//   Label: LAB_004654ba
//   XREF to: 016e990c (READ_WRITE)
// 004654c0: JMP 0x0046531c
//   Label: LAB_004654c0
//   XREF to: 0046531c (UNCONDITIONAL_JUMP)
// 004654c5: JMP 0x004653dc
//   Label: LAB_004654c5
//   XREF to: 004653dc (UNCONDITIONAL_JUMP)
// 004654ca: JMP 0x00465325
//   Label: LAB_004654ca
//   XREF to: 00465325 (UNCONDITIONAL_JUMP)
// 004654cf: MOV ESP,EBP
//   Label: LAB_004654cf
// 004654d1: POP EBP
// 004654d2: POP EDI
// 004654d3: POP ESI
// 004654d4: POP EBX
// 004654d5: RET
