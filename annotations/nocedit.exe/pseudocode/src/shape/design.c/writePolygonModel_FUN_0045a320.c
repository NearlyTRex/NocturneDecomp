// Name: shape_design.c_writePolygonModel_FUN_0045a320
// Address: 0045a320
// Address Range: [[0045a320, 0045a601]]
// Convention: __cdecl
// Signature: void shape_design.c_writePolygonModel_FUN_0045a320(int polygon_index, FILE * output_file, float scale_factor)
// Globals:
//   float FLOAT_0061ae5e = 65535
//   double DOUBLE_0061ae66 = 65535
//   double DOUBLE_0061ae6e = 256
//   TerminatedCString s_COLOR_d_0061ae76
//   TerminatedCString s_FACET_d_d_d_d_d_0061ae81
//   TerminatedCString s_d_0061ae96
//   TerminatedCString s_anon_0061ae9a
//   TerminatedCString s_TEXTURE_s_0061ae9c
//   TerminatedCString s_FACET_dTMAP_d_d_d_d_0061aeab
//   TerminatedCString s_d_0061aec4
//   TerminatedCString s_f_0061aec8
//   TerminatedCString s_f_0061aecc
//   TerminatedCString s_anon_0061aed0
//   int g_EditorColorIndex
//   char[80] g_TempTextureName
//   undefined4 DAT_01626371
//   undefined4 DAT_01626372
//   undefined4 DAT_01626373
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e9915
//   undefined4 DAT_016e9917
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99b8
//   undefined4 DAT_016e99bc
//   undefined4 DAT_016e99c0
//   undefined4 DAT_016e99c4
//   undefined4 DAT_016e99c8
//   undefined4 DAT_016e9a08
//   undefined4 DAT_016e9a48
//   undefined4 DAT_016e9a8c
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_string.c_strcmp_FUN_005fef20
//   shape_design.c_calculatePolygonNormal_FUN_0045caa0

#include "nocturne.h"

void __cdecl
shape_design_c_writePolygonModel_FUN_0045a320
          (int polygon_index,FILE *output_file,float scale_factor)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_EDX;
  char *pcVar3;
  float10 fVar4;
  double dVar5;
  int iVar6;
  FILE *pFVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined1 *puVar10;
  int iVar11;
  
  shape_design_c_calculatePolygonNormal_FUN_0045caa0(g_ModelPolygonData + polygon_index);
  fVar4 = (float10)g_ModelPolygonData[polygon_index].normal.x * (float10)FLOAT_0061ae5e;
  dVar5 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,polygon_index * 0x184));
  iVar11 = (int)ROUND(fVar4);
  fVar4 = (float10)g_ModelPolygonData[polygon_index].normal.y * (float10)FLOAT_0061ae5e;
  dVar5 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),polygon_index * 0x184));
  iVar6 = (int)ROUND(fVar4);
  fVar4 = (float10)g_ModelPolygonData[polygon_index].normal.z * (float10)FLOAT_0061ae5e;
  dVar5 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),polygon_index * 0x184));
  pFVar7 = (FILE *)(int)ROUND(fVar4);
  fVar4 = (float10)scale_factor *
          (float10)g_ModelPolygonData[polygon_index].plane_distance * (float10)DOUBLE_0061ae66 *
          (float10)DOUBLE_0061ae6e;
  crt_math_c_round_FUN_005fe6b0
            ((double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),polygon_index * 0x184));
  pcVar9 = (char *)(int)ROUND(fVar4);
  if (g_ModelPolygonData[polygon_index].polygon_type == 1) {
    if (g_EditorColorIndex != g_ModelPolygonData[polygon_index].material_id) {
      pcVar9 = "\tCOLOR\t%d\n";
      iVar6 = 0x45a3fe;
      pFVar7 = output_file;
      crt_stdio_c_fprintf_FUN_005fe6d0
                (output_file,"\tCOLOR\t%d\n",g_ModelPolygonData[polygon_index].material_id);
      g_EditorColorIndex = g_ModelPolygonData[polygon_index].material_id;
    }
    crt_stdio_c_fprintf_FUN_005fe6d0
              (output_file,"\tFACET%d\t%d,%d,%d,%d",
               g_ModelPolygonData[polygon_index].vertex_indices_count,iVar11,iVar6,pFVar7,pcVar9);
    puVar10 = (undefined1 *)0x0;
    while ((int)puVar10 < (int)g_ModelPolygonData[polygon_index].vertex_indices_count) {
      pFVar7 = output_file;
      crt_stdio_c_fprintf_FUN_005fe6d0
                (output_file,",%d",
                 g_ModelPolygonData[polygon_index].vertex_indices[(int)puVar10]);
      puVar10 = (undefined1 *)((int)&pFVar7->_ptr + 1);
    }
    crt_stdio_c_fprintf_FUN_005fe6d0(output_file,"\n");
  }
  else {
    pcVar9 = g_TempTextureName;
    uVar8 = 0x45a4c0;
    iVar2 = crt_string_c_strcmp_FUN_005fef20
                      (g_TempTextureName,g_ModelPolygonData[polygon_index].texture_name);
    if (iVar2 != 0) {
      pcVar9 = g_ModelPolygonData[polygon_index].texture_name;
      pcVar3 = g_TempTextureName;
      do {
        cVar1 = *pcVar9;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      uVar8 = 0x45a50c;
      pcVar9 = (char *)output_file;
      crt_stdio_c_fprintf_FUN_005fe6d0(output_file,"\tTEXTURE\t'%s'\n",g_TempTextureName);
    }
    crt_stdio_c_fprintf_FUN_005fe6d0
              (output_file,"\tFACET%dTMAP\t%d,%d,%d,%d",
               g_ModelPolygonData[polygon_index].vertex_indices_count,iVar11,iVar6,uVar8,pcVar9);
    for (iVar11 = 0; iVar11 < (int)g_ModelPolygonData[polygon_index].vertex_indices_count;
        iVar11 = iVar11 + 1) {
      iVar6 = 0x45a587;
      crt_stdio_c_fprintf_FUN_005fe6d0
                (output_file,",%d",g_ModelPolygonData[polygon_index].vertex_indices[iVar11]);
      iVar11 = 0x45a5b4;
      crt_stdio_c_fprintf_FUN_005fe6d0
                (output_file,",%f",
                 SUB84((double)g_ModelPolygonData[polygon_index].uv_u[iVar6],0),
                 (int)((ulonglong)(double)g_ModelPolygonData[polygon_index].uv_u[iVar6] >> 0x20));
      crt_stdio_c_fprintf_FUN_005fe6d0
                (output_file,",%f",
                 SUB84((double)g_ModelPolygonData[polygon_index].uv_v[iVar11],0));
    }
    crt_stdio_c_fprintf_FUN_005fe6d0(output_file,"\n");
  }
  return;
}


// Assembly code:
// 0045a320: PUSH EBX
//   Label: shape_design.c_writePolygonModel_FUN_0045a320
// 0045a321: PUSH ESI
// 0045a322: PUSH EDI
// 0045a323: PUSH EBP
// 0045a324: MOV EBP,ESP
// 0045a326: SUB ESP,0x14
// 0045a32c: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0045a333: MOV EDX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 0045a338: ADD EAX,EDX
// 0045a33a: PUSH EAX
// 0045a33b: CALL shape_design.c_calculatePolygonNormal_FUN_0045caa0
//   XREF to: 0045caa0 (UNCONDITIONAL_CALL)
// 0045a340: ADD ESP,0x4
// 0045a343: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0045a34a: FLD float ptr [EAX + 0x16e99b8]
//   XREF to: 016e99b8 (DATA)
// 0045a350: FMUL float ptr [0x0061ae5e]
//   XREF to: 0061ae5e (READ)
// 0045a356: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045a35b: FISTP dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 0045a35e: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0045a365: FLD float ptr [EAX + 0x16e99bc]
//   XREF to: 016e99bc (DATA)
// 0045a36b: FMUL float ptr [0x0061ae5e]
//   XREF to: 0061ae5e (READ)
// 0045a371: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045a376: FISTP dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 0045a379: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0045a380: FLD float ptr [EAX + 0x16e99c0]
//   XREF to: 016e99c0 (DATA)
// 0045a386: FMUL float ptr [0x0061ae5e]
//   XREF to: 0061ae5e (READ)
// 0045a38c: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045a391: FISTP dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 0045a394: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0045a39b: FLD float ptr [EAX + 0x16e99c4]
//   XREF to: 016e99c4 (DATA)
// 0045a3a1: FMUL double ptr [0x0061ae66]
//   XREF to: 0061ae66 (READ)
// 0045a3a7: FMUL double ptr [0x0061ae6e]
//   XREF to: 0061ae6e (READ)
// 0045a3ad: FLD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0045a3b0: FMULP
// 0045a3b2: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045a3b7: FISTP dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 0045a3ba: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0045a3c1: CMP dword ptr [EAX + 0x16e9910],0x1
//   XREF to: 016e9910 (DATA)
// 0045a3c8: JNZ 0x0045a4a3
//   XREF to: 0045a4a3 (CONDITIONAL_JUMP)
// 0045a3ce: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0045a3d5: MOV EAX,[0x01626368]
//   XREF to: 01626368 (READ)
// 0045a3da: CMP EAX,dword ptr [EDX + 0x16e9a8c]
//   XREF to: 016e9a8c (DATA)
// 0045a3e0: JZ 0x0045a413
//   XREF to: 0045a413 (CONDITIONAL_JUMP)
// 0045a3e2: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0045a3e9: PUSH dword ptr [EAX + 0x16e9a8c]
//   XREF to: 016e9a8c (DATA)
// 0045a3ef: MOV EAX,0x61ae76
//   XREF to: 0061ae76 (DATA)
// 0045a3f4: PUSH EAX
//   XREF to: 0061ae76 (DATA)
// 0045a3f5: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0045a3f8: PUSH EAX
// 0045a3f9: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045a3fe: ADD ESP,0xc
// 0045a401: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0045a408: MOV EAX,dword ptr [EAX + 0x16e9a8c]
//   XREF to: 016e9a8c (DATA)
// 0045a40e: MOV [0x01626368],EAX
//   XREF to: 01626368 (WRITE)
// 0045a413: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0045a413
//   XREF to: Stack[-0x18] (READ)
// 0045a416: PUSH EAX
// 0045a417: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045a41a: PUSH EAX
// 0045a41b: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045a41e: PUSH EAX
// 0045a41f: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0045a422: PUSH EAX
// 0045a423: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0045a42a: PUSH dword ptr [EAX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0045a430: MOV EAX,0x61ae81
//   XREF to: 0061ae81 (DATA)
// 0045a435: PUSH EAX
//   XREF to: 0061ae81 (DATA)
// 0045a436: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0045a439: PUSH EAX
// 0045a43a: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045a43f: ADD ESP,0x1c
// 0045a442: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0045a449: JMP 0x0045a451
//   XREF to: 0045a451 (UNCONDITIONAL_JUMP)
// 0045a44b: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0045a44b
//   XREF to: Stack[-0x14] (READ)
// 0045a44e: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0045a451: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_0045a451
//   XREF to: Stack[0x4] (READ)
// 0045a458: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045a45b: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0045a461: JGE 0x0045a48c
//   XREF to: 0045a48c (CONDITIONAL_JUMP)
// 0045a463: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0045a46a: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045a46d: SHL EAX,0x2
// 0045a470: ADD EAX,EDX
// 0045a472: PUSH dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 0045a478: MOV EAX,0x61ae96
//   XREF to: 0061ae96 (DATA)
// 0045a47d: PUSH EAX
//   XREF to: 0061ae96 (DATA)
// 0045a47e: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0045a481: PUSH EAX
// 0045a482: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045a487: ADD ESP,0xc
// 0045a48a: JMP 0x0045a44b
//   XREF to: 0045a44b (UNCONDITIONAL_JUMP)
// 0045a48c: MOV EAX,0x61ae9a
//   Label: LAB_0045a48c
//   XREF to: 0061ae9a (DATA)
// 0045a491: PUSH EAX
//   XREF to: 0061ae9a (DATA)
// 0045a492: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0045a495: PUSH EAX
// 0045a496: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045a49b: ADD ESP,0x8
// 0045a49e: JMP 0x0045a5fb
//   XREF to: 0045a5fb (UNCONDITIONAL_JUMP)
// 0045a4a3: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_0045a4a3
//   XREF to: Stack[0x4] (READ)
// 0045a4aa: MOV EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 0045a4af: ADD EAX,EDX
// 0045a4b1: ADD EAX,0x4
// 0045a4b4: PUSH EAX
// 0045a4b5: MOV EAX,0x1626370
//   XREF to: 01626370 (DATA)
// 0045a4ba: PUSH EAX
//   XREF to: 01626370 (DATA)
// 0045a4bb: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 0045a4c0: ADD ESP,0x8
// 0045a4c3: TEST EAX,EAX
// 0045a4c5: JZ 0x0045a50f
//   XREF to: 0045a50f (CONDITIONAL_JUMP)
// 0045a4c7: IMUL ESI,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0045a4ce: MOV EDI,0x16e9910
//   XREF to: 016e9910 (DATA)
// 0045a4d3: ADD ESI,EDI
// 0045a4d5: ADD ESI,0x4
// 0045a4d8: MOV EDI,0x1626370
//   XREF to: 01626370 (DATA)
// 0045a4dd: PUSH EDI
//   XREF to: 01626370 (DATA)
// 0045a4de: MOV AL,byte ptr [ESI]
//   Label: LAB_0045a4de
//   XREF to: 016e9914 (DATA)
//   XREF to: 016e9916 (DATA)
// 0045a4e0: MOV byte ptr [EDI],AL
//   XREF to: 01626370 (WRITE)
//   XREF to: 01626372 (WRITE)
// 0045a4e2: CMP AL,0x0
// 0045a4e4: JZ 0x0045a4f6
//   XREF to: 0045a4f6 (CONDITIONAL_JUMP)
// 0045a4e6: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 016e9915 (DATA)
//   XREF to: 016e9917 (DATA)
// 0045a4e9: ADD ESI,0x2
// 0045a4ec: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 01626371 (WRITE)
//   XREF to: 01626373 (WRITE)
// 0045a4ef: ADD EDI,0x2
// 0045a4f2: CMP AL,0x0
// 0045a4f4: JNZ 0x0045a4de
//   XREF to: 0045a4de (CONDITIONAL_JUMP)
// 0045a4f6: POP EDI
//   Label: LAB_0045a4f6
// 0045a4f7: MOV ESI,0x1626370
//   XREF to: 01626370 (DATA)
// 0045a4fc: PUSH ESI
//   XREF to: 01626370 (DATA)
// 0045a4fd: MOV ESI,0x61ae9c
//   XREF to: 0061ae9c (DATA)
// 0045a502: PUSH ESI
//   XREF to: 0061ae9c (DATA)
// 0045a503: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0045a506: PUSH ESI
// 0045a507: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045a50c: ADD ESP,0xc
// 0045a50f: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0045a50f
//   XREF to: Stack[-0x18] (READ)
// 0045a512: PUSH EAX
// 0045a513: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045a516: PUSH EAX
// 0045a517: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045a51a: PUSH EAX
// 0045a51b: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0045a51e: PUSH EAX
// 0045a51f: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0045a526: PUSH dword ptr [EAX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0045a52c: MOV EAX,0x61aeab
//   XREF to: 0061aeab (DATA)
// 0045a531: PUSH EAX
//   XREF to: 0061aeab (DATA)
// 0045a532: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0045a535: PUSH EAX
// 0045a536: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045a53b: ADD ESP,0x1c
// 0045a53e: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0045a545: JMP 0x0045a54d
//   XREF to: 0045a54d (UNCONDITIONAL_JUMP)
// 0045a547: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0045a547
//   XREF to: Stack[-0x14] (READ)
// 0045a54a: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0045a54d: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_0045a54d
//   XREF to: Stack[0x4] (READ)
// 0045a554: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045a557: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0045a55d: JGE 0x0045a5e9
//   XREF to: 0045a5e9 (CONDITIONAL_JUMP)
// 0045a563: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0045a56a: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045a56d: SHL EAX,0x2
// 0045a570: ADD EAX,EDX
// 0045a572: PUSH dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 0045a578: MOV EAX,0x61aec4
//   XREF to: 0061aec4 (DATA)
// 0045a57d: PUSH EAX
//   XREF to: 0061aec4 (DATA)
// 0045a57e: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0045a581: PUSH EAX
// 0045a582: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045a587: ADD ESP,0xc
// 0045a58a: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0045a591: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045a594: SHL EAX,0x2
// 0045a597: ADD EAX,EDX
// 0045a599: FLD float ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 0045a59f: SUB ESP,0x8
// 0045a5a2: FSTP double ptr [ESP]
//   XREF to: Stack[-0x2c] (DATA)
// 0045a5a5: MOV EAX,0x61aec8
//   XREF to: 0061aec8 (DATA)
// 0045a5aa: PUSH EAX
//   XREF to: 0061aec8 (DATA)
// 0045a5ab: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0045a5ae: PUSH EAX
// 0045a5af: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045a5b4: ADD ESP,0x10
// 0045a5b7: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0045a5be: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045a5c1: SHL EAX,0x2
// 0045a5c4: ADD EAX,EDX
// 0045a5c6: FLD float ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 0045a5cc: SUB ESP,0x8
// 0045a5cf: FSTP double ptr [ESP]
//   XREF to: Stack[-0x2c] (DATA)
// 0045a5d2: MOV EAX,0x61aecc
//   XREF to: 0061aecc (DATA)
// 0045a5d7: PUSH EAX
//   XREF to: 0061aecc (DATA)
// 0045a5d8: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0045a5db: PUSH EAX
// 0045a5dc: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045a5e1: ADD ESP,0x10
// 0045a5e4: JMP 0x0045a547
//   XREF to: 0045a547 (UNCONDITIONAL_JUMP)
// 0045a5e9: MOV EAX,0x61aed0
//   Label: LAB_0045a5e9
//   XREF to: 0061aed0 (DATA)
// 0045a5ee: PUSH EAX
//   XREF to: 0061aed0 (DATA)
// 0045a5ef: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0045a5f2: PUSH EAX
// 0045a5f3: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045a5f8: ADD ESP,0x8
// 0045a5fb: MOV ESP,EBP
//   Label: LAB_0045a5fb
// 0045a5fd: POP EBP
// 0045a5fe: POP EDI
// 0045a5ff: POP ESI
// 0045a600: POP EBX
// 0045a601: RET
