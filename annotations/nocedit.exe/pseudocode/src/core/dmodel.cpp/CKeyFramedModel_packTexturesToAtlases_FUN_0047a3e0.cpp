// Name: core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0
// Address: 0047a3e0
// Address Range: [[0047a3e0, 0047a812]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0(CKeyFramedModel * model_ptr, char * atlas_filename, int quality_parameter, int pack_parameter)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047dc9d [UNCONDITIONAL_CALL]
// Globals:
//   double g_TextureScaleFactor = 65536
//   double g_FixedPointToFloat = 0.0000152587890625
//   double g_MaxTextureCoordinate = 255.999000000000
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_sortPolygonsByTexture_FUN_0047a820
//   crt_math.c_round_FUN_005fe6b0
//   engine_texture.cpp_clearTextureCache_FUN_005dd8e0
//   shape_design.c_cramTextureList_FUN_0046bb80
//   shape_design.c_cramTextures_FUN_0046a970
//   shape_design.c_findTextureByFilename_FUN_0046dfc0
//   shape_design.c_fixupCramUV_FUN_0046e090
//   shape_design.c_getAtlasMapIndex_FUN_0046e030
//   shape_design.c_getLastTextureProcessIndex_FUN_0046a860
//   shape_design.c_getTextureName_FUN_0046e060
//   shape_design.c_initializeCramConfig_FUN_0046b6e0
//   shape_design.c_initializeTextureManager_FUN_0046a880
//   shape_design.c_setTextureQualityParameter_FUN_0046a8e0

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0
          (CKeyFramedModel *model_ptr,char *atlas_filename,int quality_parameter,int pack_parameter)

{
  char cVar1;
  int *piVar2;
  undefined4 extraout_EAX;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_EDX;
  int iVar6;
  int iVar7;
  BADSPACEBASE *in_ESP;
  int iVar8;
  int max_u;
  char *pcVar9;
  float10 fVar10;
  float10 fVar11;
  double dVar12;
  float fStack_a4;
  char *pcStack_34;
  SMRGLTextureExtended *pSStack_28;
  int local_24;
  int local_1c;
  char *local_18;
  int local_14;
  int iVar13;
  
  shape_design_c_initializeTextureManager_FUN_0046a880(1);
  shape_design_c_setTextureQualityParameter_FUN_0046a8e0(0x40);
  local_1c = 0;
  if (0 < model_ptr->texture_count) {
    pcStack_34 = model_ptr->texture_list[0].base.texture_name;
    do {
      iVar8 = 0x7fffffff;
      max_u = -0x7fffffff;
      iVar4 = 0x7fffffff;
      iVar13 = 0;
      iVar5 = -0x7fffffff;
      if (0 < model_ptr->poly_count) {
        local_18 = (char *)model_ptr->poly_texture_index_list;
        local_14 = 0;
        do {
          if (local_1c == *(int *)local_18) {
            iVar6 = local_14 + (int)model_ptr->poly_vert_list;
            iVar7 = iVar6 + 0x24;
            do {
              if (*(int *)(iVar6 + 0x1c) < iVar8) {
                iVar8 = *(int *)(iVar6 + 0x1c);
              }
              if (max_u < *(int *)(iVar6 + 0x1c)) {
                max_u = *(int *)(iVar6 + 0x1c);
              }
              if (*(int *)(iVar6 + 0x20) < iVar4) {
                iVar4 = *(int *)(iVar6 + 0x20);
              }
              if (iVar5 < *(int *)(iVar6 + 0x20)) {
                iVar5 = *(int *)(iVar6 + 0x20);
              }
              iVar6 = iVar6 + 0xc;
            } while (iVar6 != iVar7);
          }
          local_18 = (char *)((int)local_18 + 4);
          local_14 = local_14 + 0x48;
          iVar13 = iVar13 + 1;
        } while (iVar13 < model_ptr->poly_count);
      }
      if (iVar8 <= max_u) {
        shape_design_c_cramTextures_FUN_0046a970(pcStack_34,iVar8,iVar4,max_u,iVar5);
      }
      pcStack_34 = pcStack_34 + 0x48;
      local_1c = local_1c + 1;
    } while (local_1c < model_ptr->texture_count);
  }
  shape_design_c_initializeCramConfig_FUN_0046b6e0((SCramConfig *)&stack0xffffff50);
  pcVar9 = &stack0xffffff54;
  do {
    cVar1 = *atlas_filename;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = atlas_filename[1];
    atlas_filename = atlas_filename + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  shape_design_c_cramTextureList_FUN_0046bb80((SCramConfig *)&stack0xffffff54);
  local_18 = (char *)0x0;
  if (0 < model_ptr->poly_count) {
    pSStack_28 = model_ptr->texture_list;
    local_14 = 0;
    do {
      piVar2 = (int *)((int)model_ptr->poly_texture_index_list + local_14);
      if (*piVar2 < 0) {
        *piVar2 = 0;
      }
      local_14 = shape_design_c_findTextureByFilename_FUN_0046dfc0
                           (pSStack_28[*(int *)((int)model_ptr->poly_texture_index_list + local_14)]
                            .base.texture_name);
      iVar5 = (int)model_ptr->poly_vert_list + local_24;
      iVar8 = 0;
      iVar4 = iVar5;
      if (0 < *(int *)(iVar5 + 4)) {
        do {
          shape_design_c_fixupCramUV_FUN_0046e090
                    (local_14,(float *)&stack0xffffff58,(float *)&stack0xffffff54);
          fVar10 = (float10)g_TextureScaleFactor;
          fVar11 = (float10)fStack_a4 * fVar10;
          dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
          pSStack_28 = (SMRGLTextureExtended *)(int)ROUND(fVar11);
          *(SMRGLTextureExtended **)(iVar4 + 0x1c) = pSStack_28;
          fVar10 = fVar10 * (float10)fStack_a4;
          crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),pSStack_28));
          *(int *)(iVar4 + 0x20) = (int)ROUND(fVar10);
          iVar8 = iVar8 + 1;
          iVar4 = iVar4 + 0xc;
        } while (iVar8 < *(int *)(iVar5 + 4));
      }
      iVar4 = shape_design_c_getAtlasMapIndex_FUN_0046e030(local_14);
      local_18 = (char *)((int)local_18 + 1);
      *(int *)((int)model_ptr->poly_texture_index_list + local_14) = iVar4;
      local_14 = local_14 + 4;
    } while ((int)local_18 < model_ptr->poly_count);
  }
  iVar4 = shape_design_c_getLastTextureProcessIndex_FUN_0046a860();
  iVar5 = 0;
  model_ptr->texture_count = iVar4;
  if (0 < iVar4) {
    local_18 = model_ptr->texture_list[0].base.texture_name;
    do {
      pcVar3 = shape_design_c_getTextureName_FUN_0046e060(iVar5);
      pcVar9 = local_18;
      do {
        cVar1 = *pcVar3;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      iVar5 = iVar5 + 1;
      local_18 = local_18 + 0x48;
    } while (iVar5 < model_ptr->texture_count);
  }
  core_dmodel_cpp_CKeyFramedModel_sortPolygonsByTexture_FUN_0047a820(model_ptr);
  engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
  return;
}


// Assembly code:
// 0047a3e0: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0
// 0047a3e1: PUSH ESI
// 0047a3e2: PUSH EDI
// 0047a3e3: PUSH EBP
// 0047a3e4: MOV EBP,ESP
// 0047a3e6: SUB ESP,0xb0
// 0047a3ec: AND ESP,0xfffffff8
// 0047a3ef: PUSH 0x1
// 0047a3f1: CALL shape_design.c_initializeTextureManager_FUN_0046a880
//   XREF to: 0046a880 (UNCONDITIONAL_CALL)
// 0047a3f6: ADD ESP,0x4
// 0047a3f9: PUSH 0x40
// 0047a3fb: CALL shape_design.c_setTextureQualityParameter_FUN_0046a8e0
//   XREF to: 0046a8e0 (UNCONDITIONAL_CALL)
// 0047a400: ADD ESP,0x4
// 0047a403: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047a406: XOR EDX,EDX
// 0047a408: MOV ECX,dword ptr [EAX + 0x120]
// 0047a40e: MOV dword ptr [ESP + 0x9c],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 0047a415: TEST ECX,ECX
// 0047a417: JLE 0x0047a554
//   XREF to: 0047a554 (CONDITIONAL_JUMP)
// 0047a41d: ADD EAX,0x12c
// 0047a422: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0047a429: MOV ESI,0x7fffffff
//   Label: LAB_0047a429
// 0047a42e: MOV EDI,0x80000001
// 0047a433: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047a436: XOR EBX,EBX
// 0047a438: MOV ECX,ESI
// 0047a43a: MOV dword ptr [ESP + 0xa8],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 0047a441: MOV EBX,dword ptr [EAX + 0x110]
// 0047a447: MOV EDX,EDI
// 0047a449: TEST EBX,EBX
// 0047a44b: JLE 0x0047a50b
//   XREF to: 0047a50b (CONDITIONAL_JUMP)
// 0047a451: MOV EAX,dword ptr [EAX + 0x118]
// 0047a457: MOV dword ptr [ESP + 0xa0],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0047a45e: XOR EAX,EAX
// 0047a460: MOV dword ptr [ESP + 0xa4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0047a467: MOV EAX,dword ptr [ESP + 0xa0]
//   Label: LAB_0047a467
//   XREF to: Stack[-0x20] (READ)
// 0047a46e: MOV EBX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x24] (READ)
// 0047a475: CMP EBX,dword ptr [EAX]
// 0047a477: JNZ 0x0047a4c9
//   XREF to: 0047a4c9 (CONDITIONAL_JUMP)
// 0047a479: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047a47c: MOV EBX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0x1c] (READ)
// 0047a483: MOV EAX,dword ptr [EAX + 0x114]
// 0047a489: ADD EBX,EAX
// 0047a48b: MOV EAX,EBX
// 0047a48d: ADD EBX,0x24
// 0047a490: MOV dword ptr [ESP + 0xac],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 0047a497: MOV EBX,dword ptr [EAX + 0x1c]
//   Label: LAB_0047a497
// 0047a49a: CMP ESI,EBX
// 0047a49c: JLE 0x0047a4a0
//   XREF to: 0047a4a0 (CONDITIONAL_JUMP)
// 0047a49e: MOV ESI,EBX
// 0047a4a0: MOV EBX,dword ptr [EAX + 0x1c]
//   Label: LAB_0047a4a0
// 0047a4a3: CMP EDI,EBX
// 0047a4a5: JGE 0x0047a4a9
//   XREF to: 0047a4a9 (CONDITIONAL_JUMP)
// 0047a4a7: MOV EDI,EBX
// 0047a4a9: MOV EBX,dword ptr [EAX + 0x20]
//   Label: LAB_0047a4a9
// 0047a4ac: CMP ECX,EBX
// 0047a4ae: JLE 0x0047a4b2
//   XREF to: 0047a4b2 (CONDITIONAL_JUMP)
// 0047a4b0: MOV ECX,EBX
// 0047a4b2: MOV EBX,dword ptr [EAX + 0x20]
//   Label: LAB_0047a4b2
// 0047a4b5: CMP EDX,EBX
// 0047a4b7: JGE 0x0047a4bb
//   XREF to: 0047a4bb (CONDITIONAL_JUMP)
// 0047a4b9: MOV EDX,EBX
// 0047a4bb: MOV EBX,dword ptr [ESP + 0xac]
//   Label: LAB_0047a4bb
//   XREF to: Stack[-0x14] (READ)
// 0047a4c2: ADD EAX,0xc
// 0047a4c5: CMP EAX,EBX
// 0047a4c7: JNZ 0x0047a497
//   XREF to: 0047a497 (CONDITIONAL_JUMP)
// 0047a4c9: MOV EBX,dword ptr [ESP + 0xa0]
//   Label: LAB_0047a4c9
//   XREF to: Stack[-0x20] (READ)
// 0047a4d0: ADD EBX,0x4
// 0047a4d3: MOV EAX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0x1c] (READ)
// 0047a4da: MOV dword ptr [ESP + 0xa0],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 0047a4e1: MOV EBX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x18] (READ)
// 0047a4e8: ADD EAX,0x48
// 0047a4eb: INC EBX
// 0047a4ec: MOV dword ptr [ESP + 0xa4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0047a4f3: MOV dword ptr [ESP + 0xa8],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 0047a4fa: MOV EAX,EBX
// 0047a4fc: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047a4ff: CMP EAX,dword ptr [EBX + 0x110]
// 0047a505: JL 0x0047a467
//   XREF to: 0047a467 (CONDITIONAL_JUMP)
// 0047a50b: CMP ESI,EDI
//   Label: LAB_0047a50b
// 0047a50d: JG 0x0047a523
//   XREF to: 0047a523 (CONDITIONAL_JUMP)
// 0047a50f: PUSH EDX
// 0047a510: PUSH EDI
// 0047a511: PUSH ECX
// 0047a512: PUSH ESI
// 0047a513: MOV ESI,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x3c] (READ)
// 0047a51a: PUSH ESI
// 0047a51b: CALL shape_design.c_cramTextures_FUN_0046a970
//   XREF to: 0046a970 (UNCONDITIONAL_CALL)
// 0047a520: ADD ESP,0x14
// 0047a523: MOV EBX,dword ptr [ESP + 0x84]
//   Label: LAB_0047a523
//   XREF to: Stack[-0x3c] (READ)
// 0047a52a: MOV ESI,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x24] (READ)
// 0047a531: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047a534: ADD EBX,0x48
// 0047a537: INC ESI
// 0047a538: MOV EDI,dword ptr [EDX + 0x120]
// 0047a53e: MOV dword ptr [ESP + 0x84],EBX
//   XREF to: Stack[-0x3c] (WRITE)
// 0047a545: MOV dword ptr [ESP + 0x9c],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 0047a54c: CMP ESI,EDI
// 0047a54e: JL 0x0047a429
//   XREF to: 0047a429 (CONDITIONAL_JUMP)
// 0047a554: LEA EAX,[ESP + 0x8]
//   Label: LAB_0047a554
//   XREF to: Stack[-0xb8] (DATA)
// 0047a558: PUSH EAX
// 0047a559: CALL shape_design.c_initializeCramConfig_FUN_0046b6e0
//   XREF to: 0046b6e0 (UNCONDITIONAL_CALL)
// 0047a55e: ADD ESP,0x4
// 0047a561: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0xb8] (DATA)
// 0047a565: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0047a568: MOV EDX,0x1
// 0047a56d: PUSH EDI
// 0047a56e: MOV AL,byte ptr [ESI]
//   Label: LAB_0047a56e
// 0047a570: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0xb8] (DATA)
// 0047a572: CMP AL,0x0
// 0047a574: JZ 0x0047a586
//   XREF to: 0047a586 (CONDITIONAL_JUMP)
// 0047a576: MOV AL,byte ptr [ESI + 0x1]
// 0047a579: ADD ESI,0x2
// 0047a57c: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0xb7] (WRITE)
// 0047a57f: ADD EDI,0x2
// 0047a582: CMP AL,0x0
// 0047a584: JNZ 0x0047a56e
//   XREF to: 0047a56e (CONDITIONAL_JUMP)
// 0047a586: POP EDI
//   Label: LAB_0047a586
// 0047a587: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0047a58a: MOV ECX,0x2
// 0047a58f: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 0047a593: MOV EAX,0x5f
// 0047a598: MOV dword ptr [ESP + 0x64],EDX
//   XREF to: Stack[-0x5c] (WRITE)
// 0047a59c: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 0047a5a0: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0047a5a3: MOV dword ptr [ESP + 0x5c],ECX
//   XREF to: Stack[-0x64] (WRITE)
// 0047a5a7: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 0047a5ab: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xb8] (DATA)
// 0047a5af: MOV dword ptr [ESP + 0x74],EDX
//   XREF to: Stack[-0x4c] (WRITE)
// 0047a5b3: PUSH EAX
// 0047a5b4: MOV dword ptr [ESP + 0x70],EDX
//   XREF to: Stack[-0x54] (WRITE)
// 0047a5b8: MOV dword ptr [ESP + 0x74],EDX
//   XREF to: Stack[-0x50] (WRITE)
// 0047a5bc: CALL shape_design.c_cramTextureList_FUN_0046bb80
//   XREF to: 0046bb80 (UNCONDITIONAL_CALL)
// 0047a5c1: ADD ESP,0x4
// 0047a5c4: XOR EAX,EAX
// 0047a5c6: MOV dword ptr [ESP + 0x90],EAX
// 0047a5cd: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047a5d0: CMP dword ptr [EAX + 0x110],0x0
// 0047a5d7: JLE 0x0047a784
//   XREF to: 0047a784 (CONDITIONAL_JUMP)
// 0047a5dd: ADD EAX,0x124
// 0047a5e2: XOR EDI,EDI
// 0047a5e4: MOV dword ptr [ESP + 0x80],EAX
// 0047a5eb: MOV dword ptr [ESP + 0x88],EDI
// 0047a5f2: MOV dword ptr [ESP + 0x94],EDI
// 0047a5f9: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0047a5f9
//   XREF to: Stack[0x4] (READ)
// 0047a5fc: MOV EDX,dword ptr [ESP + 0x94]
// 0047a603: MOV EAX,dword ptr [EAX + 0x118]
// 0047a609: ADD EAX,EDX
// 0047a60b: CMP dword ptr [EAX],0x0
// 0047a60e: JL 0x0047a808
//   XREF to: 0047a808 (CONDITIONAL_JUMP)
// 0047a614: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0047a614
//   XREF to: Stack[0x4] (READ)
// 0047a617: MOV EBX,dword ptr [ESP + 0x94]
// 0047a61e: MOV EAX,dword ptr [EAX + 0x118]
// 0047a624: ADD EAX,EBX
// 0047a626: IMUL EAX,dword ptr [EAX],0x48
// 0047a629: ADD EAX,dword ptr [ESP + 0x80]
// 0047a630: ADD EAX,0x8
// 0047a633: PUSH EAX
// 0047a634: CALL shape_design.c_findTextureByFilename_FUN_0046dfc0
//   XREF to: 0046dfc0 (UNCONDITIONAL_CALL)
// 0047a639: ADD ESP,0x4
// 0047a63c: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047a63f: MOV dword ptr [ESP + 0x98],EAX
// 0047a646: MOV EAX,dword ptr [ESP + 0x88]
// 0047a64d: MOV EBX,dword ptr [EBX + 0x114]
// 0047a653: ADD EBX,EAX
// 0047a655: MOV EDX,dword ptr [EBX + 0x4]
// 0047a658: XOR EDI,EDI
// 0047a65a: TEST EDX,EDX
// 0047a65c: JLE 0x0047a725
//   XREF to: 0047a725 (CONDITIONAL_JUMP)
// 0047a662: MOV ESI,EBX
// 0047a664: FLD double ptr [0x0062022b]
//   Label: LAB_0047a664
//   XREF to: 0062022b (READ)
// 0047a66a: FILD dword ptr [ESI + 0x1c]
// 0047a66d: FMUL ST1
// 0047a66f: FSTP float ptr [ESP + 0x4]
// 0047a673: FILD dword ptr [ESI + 0x20]
// 0047a676: FMULP
// 0047a678: FLD float ptr [ESP + 0x4]
// 0047a67c: FLDZ
// 0047a67e: FXCH ST2
// 0047a680: FSTP float ptr [ESP]
// 0047a683: FXCH
// 0047a685: FCOMPP
// 0047a687: FNSTSW AX
// 0047a689: SAHF
// 0047a68a: JBE 0x0047a692
//   XREF to: 0047a692 (CONDITIONAL_JUMP)
// 0047a68c: XOR ECX,ECX
// 0047a68e: MOV dword ptr [ESP + 0x4],ECX
// 0047a692: FLD float ptr [ESP + 0x4]
//   Label: LAB_0047a692
// 0047a696: FCOMP double ptr [0x00620233]
//   XREF to: 00620233 (READ)
// 0047a69c: FNSTSW AX
// 0047a69e: SAHF
// 0047a69f: JBE 0x0047a6a9
//   XREF to: 0047a6a9 (CONDITIONAL_JUMP)
// 0047a6a1: MOV dword ptr [ESP + 0x4],0x437fffbe
// 0047a6a9: FLD float ptr [ESP]
//   Label: LAB_0047a6a9
// 0047a6ac: FLDZ
// 0047a6ae: FCOMPP
// 0047a6b0: FNSTSW AX
// 0047a6b2: SAHF
// 0047a6b3: JBE 0x0047a6ba
//   XREF to: 0047a6ba (CONDITIONAL_JUMP)
// 0047a6b5: XOR EDX,EDX
// 0047a6b7: MOV dword ptr [ESP],EDX
// 0047a6ba: FLD float ptr [ESP]
//   Label: LAB_0047a6ba
// 0047a6bd: FCOMP double ptr [0x00620233]
//   XREF to: 00620233 (READ)
// 0047a6c3: FNSTSW AX
// 0047a6c5: SAHF
// 0047a6c6: JBE 0x0047a6cf
//   XREF to: 0047a6cf (CONDITIONAL_JUMP)
// 0047a6c8: MOV dword ptr [ESP],0x437fffbe
// 0047a6cf: MOV EAX,ESP
//   Label: LAB_0047a6cf
// 0047a6d1: PUSH EAX
// 0047a6d2: LEA EAX,[ESP + 0x8]
// 0047a6d6: PUSH EAX
// 0047a6d7: MOV EAX,dword ptr [ESP + 0xa0]
// 0047a6de: PUSH EAX
// 0047a6df: CALL shape_design.c_fixupCramUV_FUN_0046e090
//   XREF to: 0046e090 (UNCONDITIONAL_CALL)
// 0047a6e4: ADD ESP,0xc
// 0047a6e7: FLD double ptr [0x00620223]
//   XREF to: 00620223 (READ)
// 0047a6ed: FLD float ptr [ESP + 0x4]
// 0047a6f1: FMUL ST1
// 0047a6f3: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047a6f8: FISTP dword ptr [ESP + 0x7c]
// 0047a6fc: MOV EAX,dword ptr [ESP + 0x7c]
// 0047a700: MOV dword ptr [ESI + 0x1c],EAX
// 0047a703: FMUL float ptr [ESP]
// 0047a706: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047a70b: FISTP dword ptr [ESP + 0x7c]
// 0047a70f: MOV EAX,dword ptr [ESP + 0x7c]
// 0047a713: MOV dword ptr [ESI + 0x20],EAX
// 0047a716: INC EDI
// 0047a717: MOV EDX,dword ptr [EBX + 0x4]
// 0047a71a: ADD ESI,0xc
// 0047a71d: CMP EDI,EDX
// 0047a71f: JL 0x0047a664
//   XREF to: 0047a664 (CONDITIONAL_JUMP)
// 0047a725: MOV ESI,dword ptr [ESP + 0x98]
//   Label: LAB_0047a725
// 0047a72c: PUSH ESI
// 0047a72d: CALL shape_design.c_getAtlasMapIndex_FUN_0046e030
//   XREF to: 0046e030 (UNCONDITIONAL_CALL)
// 0047a732: ADD ESP,0x4
// 0047a735: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047a738: MOV EDI,dword ptr [ESP + 0x94]
// 0047a73f: MOV EDX,dword ptr [EDX + 0x118]
// 0047a745: MOV ECX,dword ptr [ESP + 0x90]
// 0047a74c: ADD EDX,EDI
// 0047a74e: INC ECX
// 0047a74f: MOV dword ptr [EDX],EAX
// 0047a751: LEA EDX,[EDI + 0x4]
// 0047a754: MOV EAX,dword ptr [ESP + 0x88]
// 0047a75b: MOV dword ptr [ESP + 0x94],EDX
// 0047a762: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047a765: MOV dword ptr [ESP + 0x90],ECX
// 0047a76c: ADD EAX,0x48
// 0047a76f: MOV EBX,dword ptr [EDX + 0x110]
// 0047a775: MOV dword ptr [ESP + 0x88],EAX
// 0047a77c: CMP ECX,EBX
// 0047a77e: JL 0x0047a5f9
//   XREF to: 0047a5f9 (CONDITIONAL_JUMP)
// 0047a784: CALL shape_design.c_getLastTextureProcessIndex_FUN_0046a860
//   Label: LAB_0047a784
//   XREF to: 0046a860 (UNCONDITIONAL_CALL)
// 0047a789: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047a78c: XOR EBX,EBX
// 0047a78e: MOV dword ptr [EDX + 0x120],EAX
// 0047a794: TEST EAX,EAX
// 0047a796: JLE 0x0047a7f0
//   XREF to: 0047a7f0 (CONDITIONAL_JUMP)
// 0047a798: LEA EAX,[EDX + 0x12c]
// 0047a79e: MOV dword ptr [ESP + 0x8c],EAX
// 0047a7a5: PUSH EBX
//   Label: LAB_0047a7a5
// 0047a7a6: CALL shape_design.c_getTextureName_FUN_0046e060
//   XREF to: 0046e060 (UNCONDITIONAL_CALL)
// 0047a7ab: ADD ESP,0x4
// 0047a7ae: MOV ESI,EAX
// 0047a7b0: MOV EDI,dword ptr [ESP + 0x8c]
// 0047a7b7: PUSH EDI
// 0047a7b8: MOV AL,byte ptr [ESI]
//   Label: LAB_0047a7b8
// 0047a7ba: MOV byte ptr [EDI],AL
// 0047a7bc: CMP AL,0x0
// 0047a7be: JZ 0x0047a7d0
//   XREF to: 0047a7d0 (CONDITIONAL_JUMP)
// 0047a7c0: MOV AL,byte ptr [ESI + 0x1]
// 0047a7c3: ADD ESI,0x2
// 0047a7c6: MOV byte ptr [EDI + 0x1],AL
// 0047a7c9: ADD EDI,0x2
// 0047a7cc: CMP AL,0x0
// 0047a7ce: JNZ 0x0047a7b8
//   XREF to: 0047a7b8 (CONDITIONAL_JUMP)
// 0047a7d0: POP EDI
//   Label: LAB_0047a7d0
// 0047a7d1: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047a7d4: INC EBX
// 0047a7d5: LEA ECX,[EDI + 0x48]
// 0047a7d8: MOV ESI,dword ptr [EAX + 0x120]
// 0047a7de: MOV dword ptr [ESP + 0x8c],ECX
// 0047a7e5: CMP EBX,ESI
// 0047a7e7: JL 0x0047a7a5
//   XREF to: 0047a7a5 (CONDITIONAL_JUMP)
// 0047a7e9: LEA EAX,[EAX]
// 0047a7ef: NOP
// 0047a7f0: MOV ESI,dword ptr [EBP + 0x14]
//   Label: LAB_0047a7f0
//   XREF to: Stack[0x4] (READ)
// 0047a7f3: PUSH ESI
// 0047a7f4: CALL core_dmodel.cpp_CKeyFramedModel_sortPolygonsByTexture_FUN_0047a820
//   XREF to: 0047a820 (UNCONDITIONAL_CALL)
// 0047a7f9: ADD ESP,0x4
// 0047a7fc: CALL engine_texture.cpp_clearTextureCache_FUN_005dd8e0
//   XREF to: 005dd8e0 (UNCONDITIONAL_CALL)
// 0047a801: MOV ESP,EBP
// 0047a803: POP EBP
// 0047a804: POP EDI
// 0047a805: POP ESI
// 0047a806: POP EBX
// 0047a807: RET
// 0047a808: MOV dword ptr [EAX],0x0
//   Label: LAB_0047a808
// 0047a80e: JMP 0x0047a614
//   XREF to: 0047a614 (UNCONDITIONAL_JUMP)
