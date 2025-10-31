// Name: core_skeleton.cpp_CDeformableModel_FUN_0059abf0
// Address: 0059abf0
// Address Range: [[0059abf0, 0059b598]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_CDeformableModel_FUN_0059abf0()
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340 (005a0340) at 005a0379 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0064e850
//   undefined4 DAT_0064e858
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonRenderer g_CDemonRendererInstance
//   CMatrix3x3i g_InverseMatrix
//   undefined4 g_InverseMatrix[0][1]
//   undefined4 g_InverseMatrix[0][2]
//   undefined4 g_InverseMatrix[1][0]
//   undefined4 g_InverseMatrix[1][1]
//   undefined4 g_InverseMatrix[1][2]
//   undefined4 g_InverseMatrix[2][0]
//   undefined4 g_InverseMatrix[2][1]
//   undefined4 g_InverseMatrix[2][2]
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_set.cpp_CDemonSet_FUN_00570870
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
//   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_skeleton.cpp_CDeformableModel_FUN_0059abf0(undefined4 param_1,
   undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4
   param_6) */

void core_skeleton_cpp_CDeformableModel_FUN_0059abf0(void)

{
  SRenderVertex *pSVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  SRenderVertex *pSVar6;
  int *piVar7;
  SRenderVertex *pSVar8;
  int iVar9;
  int iVar10;
  BADSPACEBASE *in_ESP;
  ushort *puVar11;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  double dVar16;
  int in_stack_00000004;
  int in_stack_00000008;
  byte *in_stack_0000000c;
  int *in_stack_00000010;
  int in_stack_00000018;
  float fVar17;
  CDemonRenderer *in_stack_fffffee0;
  SMRGLHeaderPrimitive local_114;
  uint local_fc;
  uint uStack_f0;
  uint uStack_e4;
  float local_c8;
  byte *local_c4;
  int local_c0;
  byte *local_bc;
  int local_b8;
  int local_b4;
  int *local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int *local_94;
  int *local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  int local_64;
  int local_60;
  int local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  float local_34;
  float local_30;
  float local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_80 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  local_7c = *(int *)(in_stack_00000008 * 8 + in_stack_00000004 + 8);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  local_a8 = 0;
  local_b4 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x7140)) {
    local_a4 = in_stack_00000004 + in_stack_00000008 * 4;
    local_c0 = in_stack_00000008 * 4 + in_stack_00000004;
    local_8c = in_stack_00000004 + 0xc0;
    local_b0 = in_stack_00000010;
    local_bc = in_stack_0000000c;
    local_a0 = local_a4;
    local_98 = local_a4;
    local_88 = local_a4;
    do {
      iVar12 = local_a8 + *(int *)(local_c0 + 0x7164);
      if ((*local_bc & 1) != 0) {
        if ((local_7c == 0) && (local_78 != 0)) {
          engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
          if (local_a8 < iVar12) {
            local_3c = local_a8 * 0x12;
            local_84 = iVar12 * 0x12;
            do {
              puVar11 = (ushort *)(*(int *)(local_a0 + 0x7c) + local_3c);
              pSVar6 = g_CDemonRendererPtr->vertex_buffer_ptr;
              pSVar8 = pSVar6 + *puVar11;
              pSVar1 = pSVar6 + puVar11[1];
              pSVar6 = pSVar6 + puVar11[2];
              local_28 = (pSVar8->projected_vertex).transformed_x * g_InverseMatrix.m[0][0] +
                         (pSVar8->projected_vertex).transformed_y * g_InverseMatrix.m[1][0] +
                         (pSVar8->projected_vertex).transformed_z * g_InverseMatrix.m[2][0];
              local_24 = (pSVar8->projected_vertex).transformed_x * g_InverseMatrix.m[0][1] +
                         (pSVar8->projected_vertex).transformed_y * g_InverseMatrix.m[1][1] +
                         (pSVar8->projected_vertex).transformed_z * g_InverseMatrix.m[2][1];
              local_20 = (pSVar8->projected_vertex).transformed_z * g_InverseMatrix.m[2][2] +
                         (pSVar8->projected_vertex).transformed_x * g_InverseMatrix.m[0][2] +
                         (pSVar8->projected_vertex).transformed_y * g_InverseMatrix.m[1][2];
              local_1c = (pSVar1->projected_vertex).transformed_z * g_InverseMatrix.m[2][0] +
                         (pSVar1->projected_vertex).transformed_x * g_InverseMatrix.m[0][0] +
                         g_InverseMatrix.m[1][0] * (pSVar1->projected_vertex).transformed_y;
              local_18 = (pSVar1->projected_vertex).transformed_y * g_InverseMatrix.m[1][1] +
                         (pSVar1->projected_vertex).transformed_x * g_InverseMatrix.m[0][1] +
                         (pSVar1->projected_vertex).transformed_z * g_InverseMatrix.m[2][1];
              local_14 = (pSVar1->projected_vertex).transformed_z * g_InverseMatrix.m[2][2] +
                         (pSVar1->projected_vertex).transformed_x * g_InverseMatrix.m[0][2] +
                         (pSVar1->projected_vertex).transformed_y * g_InverseMatrix.m[1][2];
              iVar9 = (pSVar6->projected_vertex).transformed_x * g_InverseMatrix.m[0][2];
              iVar10 = (pSVar6->projected_vertex).transformed_z * g_InverseMatrix.m[2][2];
              local_70 = (float)local_20;
              local_4c = (float)local_1c;
              local_48 = local_4c - (float)local_28;
              local_58 = (float)local_18;
              local_50 = local_58 - (float)local_24;
              local_54 = (float)local_14;
              local_74 = (float)((pSVar6->projected_vertex).transformed_z * g_InverseMatrix.m[2][0]
                                + (pSVar6->projected_vertex).transformed_x * g_InverseMatrix.m[0][0]
                                  + (pSVar6->projected_vertex).transformed_y *
                                    g_InverseMatrix.m[1][0]);
              local_6c = (float)((pSVar6->projected_vertex).transformed_y * g_InverseMatrix.m[1][1]
                                 + (pSVar6->projected_vertex).transformed_x *
                                   g_InverseMatrix.m[0][1] +
                                (pSVar6->projected_vertex).transformed_z * g_InverseMatrix.m[2][1]);
              local_68 = (float)((pSVar6->projected_vertex).transformed_y * g_InverseMatrix.m[1][2]
                                 + iVar9 + iVar10);
              local_c8 = local_68 - local_54;
              fVar2 = local_50 * local_c8 - (local_6c - local_58) * (local_54 - local_70);
              fVar3 = (local_74 - local_4c) * (local_54 - local_70) - local_48 * local_c8;
              fVar5 = local_48 * (local_6c - local_58) - (local_74 - local_4c) * local_50;
              fVar4 = fVar5 * fVar5 + fVar2 * fVar2 + fVar3 * fVar3;
              if (0.0 < fVar4) {
                fVar17 = (float)_DAT_0064e858 / SQRT(fVar4);
              }
              else {
                fVar17 = 127.0;
              }
              fVar13 = (float10)fVar17;
              local_2c = (float)((float10)fVar2 * fVar13);
              local_34 = (float)((float10)fVar3 * fVar13);
              local_30 = (float)((float10)fVar5 * fVar13);
              fVar14 = (float10)_DAT_0064e850;
              fVar13 = (float10)fVar5 * fVar13 + fVar14;
              fVar15 = (float10)local_34 + fVar14;
              fVar14 = (float10)local_2c + fVar14;
              dVar16 = crt_math_c_round_FUN_005fe6b0
                                 ((double)CONCAT44(iVar9,CONCAT22((short)((uint)iVar10 >> 0x10),
                                                                  (ushort)(0.0 < fVar4) << 8 |
                                                                  (ushort)NAN(fVar4) << 10 |
                                                                  (ushort)(fVar4 == 0.0) << 0xe)));
              crt_math_c_round_FUN_005fe6b0(dVar16);
              local_1c = (int)ROUND(fVar13);
              local_20 = (int)ROUND(fVar15);
              dVar16 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(local_20,local_1c));
              local_1c = (int)ROUND(fVar14);
              engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
                        (g_CDemonRendererPtr,local_1c,(int)((ulonglong)dVar16 >> 0x20),
                         (int)in_stack_fffffee0);
              local_114.base.count = 3;
              local_fc = (uint)*puVar11;
              uStack_f0 = (uint)puVar11[1];
              uStack_e4 = (uint)puVar11[2];
              in_stack_fffffee0 = g_CDemonRendererPtr;
              engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
                        (g_CDemonRendererPtr,&local_114);
              local_3c = local_3c + 0x12;
            } while (local_3c < local_84);
          }
        }
        else if ((*(int *)(in_stack_00000004 + 0xbc) == 1) ||
                (((local_7c != 0 || (in_stack_00000018 != 0)) || (local_78 != 0)))) {
          if (((local_7c == 0) && (in_stack_00000018 == 0)) && (local_78 == 0)) {
            engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                      (g_CDemonRendererPtr,(SMRGLTextureBasic *)(*local_b0 * 0x1680 + local_8c));
          }
          core_set_cpp_CDemonSet_FUN_00570870(g_CDemonSetPtr);
        }
        else {
          local_60 = -1;
          local_38 = local_a8;
          if (local_a8 < iVar12) {
            local_90 = local_b0;
            do {
              iVar10 = local_38 + 1;
              iVar9 = *(int *)(*(int *)(local_a4 + 0x90) + local_38 * 4);
              if (iVar10 < iVar12) {
                piVar7 = (int *)(iVar10 * 4 + *(int *)(local_98 + 0x90));
                do {
                  if (iVar9 != *piVar7) break;
                  iVar10 = iVar10 + 1;
                  piVar7 = piVar7 + 1;
                } while (iVar10 < iVar12);
              }
              if (iVar9 != local_60) {
                engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                          (g_CDemonRendererPtr,
                           (SMRGLTextureBasic *)(*local_90 * 0x1680 + local_8c + iVar9 * 0x48));
                local_60 = iVar9;
              }
              core_set_cpp_CDemonSet_FUN_00570870(g_CDemonSetPtr);
              local_38 = iVar10;
            } while (iVar10 < iVar12);
          }
        }
      }
      local_bc = local_bc + 4;
      local_c0 = local_c0 + 0x60;
      local_b0 = local_b0 + 1;
      local_b4 = local_b4 + 1;
      local_a8 = iVar12;
    } while (local_b4 < *(int *)(in_stack_00000004 + 0x7140));
  }
  local_ac = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x7140)) {
    local_9c = in_stack_00000004 + 0xc0;
    iVar12 = in_stack_00000004 + in_stack_00000008 * 4;
    local_b8 = in_stack_00000008 * 4 + in_stack_00000004;
    local_c4 = in_stack_0000000c;
    do {
      local_80 = local_a8 + *(int *)(local_b8 + 0x7178);
      local_5c = -1;
      if (((*local_c4 & 1) != 0) && (local_a8 < local_80)) {
        local_94 = in_stack_00000010 + local_ac;
        local_40 = local_a8 * 0x12;
        local_44 = local_a8 * 4;
        iVar10 = local_a8;
        do {
          local_64 = local_40 + *(int *)(iVar12 + 0x7c);
          if ((in_stack_0000000c
               [*(int *)(*(int *)(iVar12 + 0xa4) + (iVar10 - *(int *)(iVar12 + 0x54)) * 4) * 4] & 1)
              == 0) {
            if ((((local_7c == 0) && (in_stack_00000018 == 0)) && (local_78 == 0)) &&
               (iVar9 = *(int *)(*(int *)(iVar12 + 0x90) + local_44), iVar9 != local_5c)) {
              engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                        (g_CDemonRendererPtr,
                         (SMRGLTextureBasic *)(*local_94 * 0x1680 + local_9c + iVar9 * 0x48));
              local_60 = iVar9;
            }
            core_set_cpp_CDemonSet_FUN_00570870(g_CDemonSetPtr);
          }
          iVar10 = iVar10 + 1;
          local_40 = local_40 + 0x12;
          local_44 = local_44 + 4;
        } while (iVar10 < local_80);
      }
      local_a8 = local_80;
      local_c4 = local_c4 + 4;
      local_b8 = local_b8 + 0x60;
      local_ac = local_ac + 1;
    } while (local_ac < *(int *)(in_stack_00000004 + 0x7140));
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
  return;
}


// Assembly code:
// 0059abf0: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModel_FUN_0059abf0
// 0059abf1: PUSH ESI
// 0059abf2: PUSH EDI
// 0059abf3: PUSH EBP
// 0059abf4: MOV EBP,ESP
// 0059abf6: SUB ESP,0x120
// 0059abfc: AND ESP,0xfffffff8
// 0059abff: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0059ac05: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0059ac06: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 0059ac0b: ADD ESP,0x4
// 0059ac0e: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 0059ac15: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0059ac18: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059ac1b: SHL EAX,0x3
// 0059ac1e: ADD EAX,ECX
// 0059ac20: MOV EAX,dword ptr [EAX + 0x8]
// 0059ac23: MOV dword ptr [ESP + 0xb0],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 0059ac2a: TEST EAX,EAX
// 0059ac2c: JZ 0x0059ac32
//   XREF to: 0059ac32 (CONDITIONAL_JUMP)
// 0059ac2e: AND byte ptr [EBP + 0x24],0xfe
//   XREF to: Stack[0x14] (READ_WRITE)
// 0059ac32: PUSH 0x1
//   Label: LAB_0059ac32
// 0059ac34: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0059ac3a: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 0059ac3b: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 0059ac40: ADD ESP,0x8
// 0059ac43: XOR EDI,EDI
// 0059ac45: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059ac48: MOV dword ptr [ESP + 0x80],EDI
//   XREF to: Stack[-0xb0] (WRITE)
// 0059ac4f: MOV EDX,dword ptr [EAX + 0x7140]
// 0059ac55: MOV dword ptr [ESP + 0x74],EDI
//   XREF to: Stack[-0xbc] (WRITE)
// 0059ac59: TEST EDX,EDX
// 0059ac5b: JLE 0x0059ad6f
//   XREF to: 0059ad6f (CONDITIONAL_JUMP)
// 0059ac61: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0059ac64: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059ac67: SHL EAX,0x2
// 0059ac6a: ADD EDX,EAX
// 0059ac6c: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059ac6f: MOV dword ptr [ESP + 0xa0],EDX
//   XREF to: Stack[-0x90] (WRITE)
// 0059ac76: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059ac79: ADD EAX,EDI
// 0059ac7b: ADD EDX,0xc0
// 0059ac81: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0xc8] (WRITE)
// 0059ac85: MOV dword ptr [ESP + 0x9c],EDX
//   XREF to: Stack[-0x94] (WRITE)
// 0059ac8c: MOV EDX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x90] (READ)
// 0059ac93: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0059ac96: MOV dword ptr [ESP + 0x90],EDX
//   XREF to: Stack[-0xa0] (WRITE)
// 0059ac9d: MOV dword ptr [ESP + 0x84],EDX
//   XREF to: Stack[-0xac] (WRITE)
// 0059aca4: MOV dword ptr [ESP + 0x88],EDX
//   XREF to: Stack[-0xa8] (WRITE)
// 0059acab: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0059acae: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 0059acb2: MOV dword ptr [ESP + 0x6c],EDX
//   XREF to: Stack[-0xc4] (WRITE)
// 0059acb6: MOV EAX,dword ptr [ESP + 0x68]
//   Label: LAB_0059acb6
//   XREF to: Stack[-0xc8] (READ)
// 0059acba: MOV EDI,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0xb0] (READ)
// 0059acc1: MOV EDX,dword ptr [EAX + 0x7164]
// 0059acc7: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0xc4] (READ)
// 0059accb: ADD EDI,EDX
// 0059accd: TEST byte ptr [EAX],0x1
// 0059acd0: JZ 0x0059ad2d
//   XREF to: 0059ad2d (CONDITIONAL_JUMP)
// 0059acd2: CMP dword ptr [ESP + 0xac],0x0
//   XREF to: Stack[-0x84] (READ)
// 0059acda: JZ 0x0059aeec
//   XREF to: 0059aeec (CONDITIONAL_JUMP)
// 0059ace0: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0059ace0
//   XREF to: Stack[0x4] (READ)
// 0059ace3: CMP dword ptr [EAX + 0xbc],0x1
// 0059acea: JNZ 0x0059b3ba
//   XREF to: 0059b3ba (CONDITIONAL_JUMP)
// 0059acf0: CMP dword ptr [ESP + 0xac],0x0
//   Label: LAB_0059acf0
//   XREF to: Stack[-0x84] (READ)
// 0059acf8: JZ 0x0059b4c3
//   XREF to: 0059b4c3 (CONDITIONAL_JUMP)
// 0059acfe: MOV ESI,dword ptr [EBP + 0x24]
//   Label: LAB_0059acfe
//   XREF to: Stack[0x14] (READ)
// 0059ad01: MOV EDX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0xb0] (READ)
// 0059ad08: MOV EAX,EDI
// 0059ad0a: PUSH ESI
// 0059ad0b: SUB EAX,EDX
// 0059ad0d: PUSH EAX
// 0059ad0e: IMUL EAX,EDX,0x12
// 0059ad11: MOV EDX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x90] (READ)
// 0059ad18: MOV EDX,dword ptr [EDX + 0x7c]
// 0059ad1b: ADD EAX,EDX
// 0059ad1d: PUSH EAX
// 0059ad1e: MOV EBX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0059ad24: PUSH EBX
//   XREF to: 03114278 (DATA)
// 0059ad25: CALL core_set.cpp_CDemonSet_FUN_00570870
//   XREF to: 00570870 (UNCONDITIONAL_CALL)
// 0059ad2a: ADD ESP,0x10
// 0059ad2d: MOV ECX,dword ptr [ESP + 0x6c]
//   Label: LAB_0059ad2d
//   XREF to: Stack[-0xc4] (READ)
// 0059ad31: MOV EBX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0xc8] (READ)
// 0059ad35: MOV ESI,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0xb8] (READ)
// 0059ad39: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059ad3c: MOV dword ptr [ESP + 0x80],EDI
//   XREF to: Stack[-0xb0] (WRITE)
// 0059ad43: MOV EDI,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0xbc] (READ)
// 0059ad47: ADD ECX,0x4
// 0059ad4a: ADD EBX,0x60
// 0059ad4d: ADD ESI,0x4
// 0059ad50: MOV dword ptr [ESP + 0x6c],ECX
//   XREF to: Stack[-0xc4] (WRITE)
// 0059ad54: MOV dword ptr [ESP + 0x68],EBX
//   XREF to: Stack[-0xc8] (WRITE)
// 0059ad58: MOV dword ptr [ESP + 0x78],ESI
//   XREF to: Stack[-0xb8] (WRITE)
// 0059ad5c: INC EDI
// 0059ad5d: MOV ECX,dword ptr [EDX + 0x7140]
// 0059ad63: MOV dword ptr [ESP + 0x74],EDI
//   XREF to: Stack[-0xbc] (WRITE)
// 0059ad67: CMP EDI,ECX
// 0059ad69: JL 0x0059acb6
//   XREF to: 0059acb6 (CONDITIONAL_JUMP)
// 0059ad6f: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0059ad6f
//   XREF to: Stack[0x4] (READ)
// 0059ad72: XOR EBX,EBX
// 0059ad74: MOV ESI,dword ptr [EAX + 0x7140]
// 0059ad7a: MOV dword ptr [ESP + 0x7c],EBX
//   XREF to: Stack[-0xb4] (WRITE)
// 0059ad7e: TEST ESI,ESI
// 0059ad80: JLE 0x0059aec3
//   XREF to: 0059aec3 (CONDITIONAL_JUMP)
// 0059ad86: ADD EAX,0xc0
// 0059ad8b: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059ad8e: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 0059ad95: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0059ad98: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0059ad9b: SHL EAX,0x2
// 0059ad9e: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059ada1: ADD ESI,EAX
// 0059ada3: ADD EAX,EBX
// 0059ada5: MOV dword ptr [ESP + 0x64],EDX
//   XREF to: Stack[-0xcc] (WRITE)
// 0059ada9: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0xc0] (WRITE)
// 0059adad: MOV EDX,dword ptr [ESP + 0x70]
//   Label: LAB_0059adad
//   XREF to: Stack[-0xc0] (READ)
// 0059adb1: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0xb0] (READ)
// 0059adb8: MOV EDI,dword ptr [EDX + 0x7178]
// 0059adbe: ADD EAX,EDI
// 0059adc0: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 0059adc7: MOV EAX,0xffffffff
// 0059adcc: MOV EDX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0xcc] (READ)
// 0059add0: MOV dword ptr [ESP + 0xcc],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 0059add7: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0xb4] (READ)
// 0059addb: MOV BL,byte ptr [EDX]
// 0059addd: SHL EAX,0x2
// 0059ade0: TEST BL,0x1
// 0059ade3: JZ 0x0059ae85
//   XREF to: 0059ae85 (CONDITIONAL_JUMP)
// 0059ade9: MOV ECX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x88] (READ)
// 0059adf0: MOV EBX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0xb0] (READ)
// 0059adf7: CMP EBX,ECX
// 0059adf9: JGE 0x0059ae85
//   XREF to: 0059ae85 (CONDITIONAL_JUMP)
// 0059adff: MOV EDX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0059ae02: ADD EDX,EAX
// 0059ae04: IMUL EAX,EBX,0x12
// 0059ae07: MOV dword ptr [ESP + 0xe8],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0059ae0e: LEA EAX,[EBX*0x4 + 0x0]
// 0059ae15: MOV dword ptr [ESP + 0x94],EDX
//   XREF to: Stack[-0x9c] (WRITE)
// 0059ae1c: MOV dword ptr [ESP + 0xe4],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0059ae23: MOV EDX,dword ptr [ESP + 0xe8]
//   Label: LAB_0059ae23
//   XREF to: Stack[-0x48] (READ)
// 0059ae2a: MOV EAX,dword ptr [ESI + 0x7c]
// 0059ae2d: MOV EDI,dword ptr [ESI + 0x54]
// 0059ae30: ADD EDX,EAX
// 0059ae32: MOV EAX,EBX
// 0059ae34: SUB EAX,EDI
// 0059ae36: MOV EDI,dword ptr [ESI + 0xa4]
// 0059ae3c: MOV dword ptr [ESP + 0xc4],EDX
//   XREF to: Stack[-0x6c] (WRITE)
// 0059ae43: MOV EAX,dword ptr [EDI + EAX*0x4]
// 0059ae46: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0059ae49: SHL EAX,0x2
// 0059ae4c: ADD EAX,EDX
// 0059ae4e: TEST byte ptr [EAX],0x1
// 0059ae51: JZ 0x0059b512
//   XREF to: 0059b512 (CONDITIONAL_JUMP)
// 0059ae57: MOV EDI,dword ptr [ESP + 0xe8]
//   Label: LAB_0059ae57
//   XREF to: Stack[-0x48] (READ)
// 0059ae5e: MOV EAX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[-0x4c] (READ)
// 0059ae65: MOV EDX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x88] (READ)
// 0059ae6c: INC EBX
// 0059ae6d: ADD EDI,0x12
// 0059ae70: ADD EAX,0x4
// 0059ae73: MOV dword ptr [ESP + 0xe8],EDI
//   XREF to: Stack[-0x48] (WRITE)
// 0059ae7a: MOV dword ptr [ESP + 0xe4],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0059ae81: CMP EBX,EDX
// 0059ae83: JL 0x0059ae23
//   XREF to: 0059ae23 (CONDITIONAL_JUMP)
// 0059ae85: MOV EAX,dword ptr [ESP + 0xa8]
//   Label: LAB_0059ae85
//   XREF to: Stack[-0x88] (READ)
// 0059ae8c: MOV EBX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0xcc] (READ)
// 0059ae90: MOV EDI,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0xc0] (READ)
// 0059ae94: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059ae97: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 0059ae9e: ADD EBX,0x4
// 0059aea1: ADD EDI,0x60
// 0059aea4: MOV ECX,dword ptr [EDX + 0x7140]
// 0059aeaa: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0xb4] (READ)
// 0059aeae: MOV dword ptr [ESP + 0x64],EBX
//   XREF to: Stack[-0xcc] (WRITE)
// 0059aeb2: INC EAX
// 0059aeb3: MOV dword ptr [ESP + 0x70],EDI
//   XREF to: Stack[-0xc0] (WRITE)
// 0059aeb7: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 0059aebb: CMP EAX,ECX
// 0059aebd: JL 0x0059adad
//   XREF to: 0059adad (CONDITIONAL_JUMP)
// 0059aec3: PUSH 0x0
//   Label: LAB_0059aec3
// 0059aec5: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0059aecb: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0059aecc: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 0059aed1: ADD ESP,0x8
// 0059aed4: PUSH 0x1
// 0059aed6: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0059aedc: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0059aedd: CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   XREF to: 0048caa0 (UNCONDITIONAL_CALL)
// 0059aee2: ADD ESP,0x8
// 0059aee5: MOV ESP,EBP
// 0059aee7: POP EBP
// 0059aee8: POP EDI
// 0059aee9: POP ESI
// 0059aeea: POP EBX
// 0059aeeb: RET
// 0059aeec: CMP dword ptr [ESP + 0xb0],0x0
//   Label: LAB_0059aeec
//   XREF to: Stack[-0x80] (READ)
// 0059aef4: JZ 0x0059ace0
//   XREF to: 0059ace0 (CONDITIONAL_JUMP)
// 0059aefa: PUSH 0x1
// 0059aefc: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0059af02: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 0059af03: CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   XREF to: 0048caa0 (UNCONDITIONAL_CALL)
// 0059af08: ADD ESP,0x8
// 0059af0b: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0xb0] (READ)
// 0059af12: CMP EDI,EAX
// 0059af14: JLE 0x0059ad2d
//   XREF to: 0059ad2d (CONDITIONAL_JUMP)
// 0059af1a: IMUL EAX,EAX,0x12
// 0059af1d: MOV dword ptr [ESP + 0xec],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0059af24: IMUL EAX,EDI,0x12
// 0059af27: MOV dword ptr [ESP + 0xa4],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 0059af2e: MOV EAX,dword ptr [ESP + 0x88]
//   Label: LAB_0059af2e
//   XREF to: Stack[-0xa8] (READ)
// 0059af35: MOV ESI,dword ptr [EAX + 0x7c]
// 0059af38: ADD ESI,dword ptr [ESP + 0xec]
//   XREF to: Stack[-0x44] (READ)
// 0059af3f: XOR ECX,ECX
// 0059af41: MOV CX,word ptr [ESI + 0x2]
// 0059af45: IMUL ECX,ECX,0x30
// 0059af48: XOR EAX,EAX
// 0059af4a: MOV AX,word ptr [ESI]
// 0059af4d: IMUL EDX,EAX,0x30
// 0059af50: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 0059af55: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0059af57: ADD EDX,EAX
// 0059af59: LEA EBX,[EAX + ECX*0x1]
// 0059af5c: XOR ECX,ECX
// 0059af5e: MOV CX,word ptr [ESI + 0x4]
// 0059af62: IMUL ECX,ECX,0x30
// 0059af65: ADD EAX,ECX
// 0059af67: MOV ECX,dword ptr [EDX + 0x4]
// 0059af6a: IMUL ECX,dword ptr [0x02f0d370]
//   XREF to: 02f0d370 (READ)
// 0059af71: MOV dword ptr [ESP + 0x100],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 0059af78: MOV ECX,dword ptr [EDX]
// 0059af7a: IMUL ECX,dword ptr [0x02f0d364]
//   XREF to: 02f0d364 (READ)
// 0059af81: ADD ECX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x30] (READ)
// 0059af88: MOV dword ptr [ESP + 0x104],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 0059af8f: MOV ECX,dword ptr [EDX + 0x8]
// 0059af92: IMUL ECX,dword ptr [0x02f0d37c]
//   XREF to: 02f0d37c (READ)
// 0059af99: MOV dword ptr [ESP + 0x100],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 0059afa0: MOV ECX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x2c] (READ)
// 0059afa7: ADD ECX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x30] (READ)
// 0059afae: MOV dword ptr [ESP + 0x100],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 0059afb5: MOV ECX,dword ptr [EDX + 0x4]
// 0059afb8: IMUL ECX,dword ptr [0x02f0d374]
//   XREF to: 02f0d374 (READ)
// 0059afbf: MOV dword ptr [ESP + 0x104],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 0059afc6: MOV ECX,dword ptr [EDX]
// 0059afc8: IMUL ECX,dword ptr [0x02f0d368]
//   XREF to: 02f0d368 (READ)
// 0059afcf: ADD ECX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x2c] (READ)
// 0059afd6: MOV dword ptr [ESP + 0x108],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 0059afdd: MOV ECX,dword ptr [EDX + 0x8]
// 0059afe0: IMUL ECX,dword ptr [0x02f0d380]
//   XREF to: 02f0d380 (READ)
// 0059afe7: MOV dword ptr [ESP + 0x104],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 0059afee: MOV ECX,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x28] (READ)
// 0059aff5: ADD ECX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x2c] (READ)
// 0059affc: MOV dword ptr [ESP + 0x104],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 0059b003: MOV ECX,dword ptr [EDX + 0x4]
// 0059b006: IMUL ECX,dword ptr [0x02f0d378]
//   XREF to: 02f0d378 (READ)
// 0059b00d: MOV dword ptr [ESP + 0x108],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 0059b014: MOV ECX,dword ptr [EDX]
// 0059b016: IMUL ECX,dword ptr [0x02f0d36c]
//   XREF to: 02f0d36c (READ)
// 0059b01d: ADD ECX,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x28] (READ)
// 0059b024: MOV EDX,dword ptr [EDX + 0x8]
// 0059b027: MOV dword ptr [ESP + 0x108],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 0059b02e: IMUL EDX,dword ptr [0x02f0d384]
//   XREF to: 02f0d384 (READ)
// 0059b035: ADD EDX,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x28] (READ)
// 0059b03c: MOV ECX,dword ptr [0x02f0d370]
//   XREF to: 02f0d370 (READ)
// 0059b042: MOV dword ptr [ESP + 0x108],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 0059b049: IMUL ECX,dword ptr [EBX + 0x4]
// 0059b04d: MOV EDX,dword ptr [EBX]
// 0059b04f: IMUL EDX,dword ptr [0x02f0d364]
//   XREF to: 02f0d364 (READ)
// 0059b056: ADD EDX,ECX
// 0059b058: MOV ECX,dword ptr [0x02f0d37c]
//   XREF to: 02f0d37c (READ)
// 0059b05e: MOV dword ptr [ESP + 0x10c],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 0059b065: MOV EDX,dword ptr [EBX + 0x8]
// 0059b068: IMUL EDX,ECX
// 0059b06b: ADD EDX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x24] (READ)
// 0059b072: MOV ECX,dword ptr [0x02f0d374]
//   XREF to: 02f0d374 (READ)
// 0059b078: MOV dword ptr [ESP + 0x10c],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 0059b07f: MOV EDX,dword ptr [EBX + 0x4]
// 0059b082: IMUL EDX,ECX
// 0059b085: MOV ECX,dword ptr [EBX]
// 0059b087: IMUL ECX,dword ptr [0x02f0d368]
//   XREF to: 02f0d368 (READ)
// 0059b08e: ADD EDX,ECX
// 0059b090: MOV ECX,dword ptr [EBX + 0x8]
// 0059b093: IMUL ECX,dword ptr [0x02f0d380]
//   XREF to: 02f0d380 (READ)
// 0059b09a: ADD EDX,ECX
// 0059b09c: MOV ECX,dword ptr [0x02f0d378]
//   XREF to: 02f0d378 (READ)
// 0059b0a2: MOV dword ptr [ESP + 0x110],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0059b0a9: MOV EDX,dword ptr [EBX + 0x4]
// 0059b0ac: IMUL EDX,ECX
// 0059b0af: MOV ECX,dword ptr [EBX]
// 0059b0b1: IMUL ECX,dword ptr [0x02f0d36c]
//   XREF to: 02f0d36c (READ)
// 0059b0b8: ADD ECX,EDX
// 0059b0ba: MOV EDX,dword ptr [EBX + 0x8]
// 0059b0bd: IMUL EDX,dword ptr [0x02f0d384]
//   XREF to: 02f0d384 (READ)
// 0059b0c4: ADD EDX,ECX
// 0059b0c6: MOV EBX,dword ptr [0x02f0d370]
//   XREF to: 02f0d370 (READ)
// 0059b0cc: MOV dword ptr [ESP + 0x114],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0059b0d3: MOV EDX,dword ptr [EAX + 0x4]
// 0059b0d6: IMUL EDX,EBX
// 0059b0d9: MOV ECX,dword ptr [0x02f0d364]
//   XREF to: 02f0d364 (READ)
// 0059b0df: MOV EBX,dword ptr [EAX]
// 0059b0e1: IMUL EBX,ECX
// 0059b0e4: MOV ECX,dword ptr [0x02f0d37c]
//   XREF to: 02f0d37c (READ)
// 0059b0ea: ADD EBX,EDX
// 0059b0ec: MOV EDX,dword ptr [EAX + 0x8]
// 0059b0ef: IMUL EDX,ECX
// 0059b0f2: ADD EDX,EBX
// 0059b0f4: MOV dword ptr [ESP + 0x118],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0059b0fb: MOV EBX,dword ptr [EAX + 0x4]
// 0059b0fe: IMUL EBX,dword ptr [0x02f0d374]
//   XREF to: 02f0d374 (READ)
// 0059b105: MOV ECX,dword ptr [0x02f0d368]
//   XREF to: 02f0d368 (READ)
// 0059b10b: MOV EDX,dword ptr [EAX]
// 0059b10d: IMUL EDX,ECX
// 0059b110: MOV ECX,dword ptr [0x02f0d380]
//   XREF to: 02f0d380 (READ)
// 0059b116: ADD EBX,EDX
// 0059b118: MOV EDX,dword ptr [EAX + 0x8]
// 0059b11b: IMUL EDX,ECX
// 0059b11e: ADD EBX,EDX
// 0059b120: MOV EDX,dword ptr [0x02f0d378]
//   XREF to: 02f0d378 (READ)
// 0059b126: MOV dword ptr [ESP + 0x11c],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 0059b12d: MOV EBX,dword ptr [EAX + 0x4]
// 0059b130: IMUL EBX,EDX
// 0059b133: MOV ECX,dword ptr [0x02f0d36c]
//   XREF to: 02f0d36c (READ)
// 0059b139: MOV EDX,dword ptr [EAX]
// 0059b13b: IMUL EDX,ECX
// 0059b13e: MOV EAX,dword ptr [EAX + 0x8]
// 0059b141: ADD EBX,EDX
// 0059b143: IMUL EAX,dword ptr [0x02f0d384]
//   XREF to: 02f0d384 (READ)
// 0059b14a: FILD dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x30] (READ)
// 0059b151: FILD dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x2c] (READ)
// 0059b158: FILD dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x28] (READ)
// 0059b15f: FSTP float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x78] (WRITE)
// 0059b166: FILD dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x24] (READ)
// 0059b16d: FST float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x54] (WRITE)
// 0059b174: FSUBRP ST2,ST0
// 0059b176: FILD dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x20] (READ)
// 0059b17d: FST float ptr [ESP + 0xd0]
//   XREF to: Stack[-0x60] (WRITE)
// 0059b184: FSUBRP
// 0059b186: FXCH
// 0059b188: FSTP float ptr [ESP + 0xe0]
//   XREF to: Stack[-0x50] (WRITE)
// 0059b18f: FSTP float ptr [ESP + 0xd8]
//   XREF to: Stack[-0x58] (WRITE)
// 0059b196: FILD dword ptr [ESP + 0x114]
//   XREF to: Stack[-0x1c] (READ)
// 0059b19d: FSTP float ptr [ESP + 0xd4]
//   XREF to: Stack[-0x5c] (WRITE)
// 0059b1a4: FILD dword ptr [ESP + 0x118]
//   XREF to: Stack[-0x18] (READ)
// 0059b1ab: FSTP float ptr [ESP + 0xb4]
//   XREF to: Stack[-0x7c] (WRITE)
// 0059b1b2: ADD EBX,EAX
// 0059b1b4: FILD dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0x14] (READ)
// 0059b1bb: MOV dword ptr [ESP + 0x11c],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 0059b1c2: FSTP float ptr [ESP + 0xbc]
//   XREF to: Stack[-0x74] (WRITE)
// 0059b1c9: FILD dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0x14] (READ)
// 0059b1d0: FSTP float ptr [ESP + 0xc0]
//   XREF to: Stack[-0x70] (WRITE)
// 0059b1d7: FLD float ptr [ESP + 0xd8]
//   XREF to: Stack[-0x58] (READ)
// 0059b1de: FLD float ptr [ESP + 0xd4]
//   XREF to: Stack[-0x5c] (READ)
// 0059b1e5: FLD float ptr [ESP + 0xc0]
//   XREF to: Stack[-0x70] (READ)
// 0059b1ec: FSUB ST0,ST1
// 0059b1ee: FSTP float ptr [ESP + 0x60]
//   XREF to: Stack[-0xd0] (WRITE)
// 0059b1f2: FXCH
// 0059b1f4: FMUL float ptr [ESP + 0x60]
//   XREF to: Stack[-0xd0] (READ)
// 0059b1f8: FLD float ptr [ESP + 0xbc]
//   XREF to: Stack[-0x74] (READ)
// 0059b1ff: FSUB float ptr [ESP + 0xd0]
//   XREF to: Stack[-0x60] (READ)
// 0059b206: FLD float ptr [ESP + 0xe0]
//   XREF to: Stack[-0x50] (READ)
// 0059b20d: FMUL ST1
// 0059b20f: FLD float ptr [ESP + 0xb4]
//   XREF to: Stack[-0x7c] (READ)
// 0059b216: FXCH ST4
// 0059b218: FSUB float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x78] (READ)
// 0059b21f: FXCH ST4
// 0059b221: FSUB float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x54] (READ)
// 0059b228: FLD ST0
// 0059b22a: FMUL ST5
// 0059b22c: FXCH ST3
// 0059b22e: FMULP ST5
// 0059b230: FMUL float ptr [ESP + 0xd8]
//   XREF to: Stack[-0x58] (READ)
// 0059b237: FLD float ptr [ESP + 0xe0]
//   XREF to: Stack[-0x50] (READ)
// 0059b23e: FXCH ST5
// 0059b240: FSUBP ST4,ST0
// 0059b242: FXCH ST4
// 0059b244: FMUL float ptr [ESP + 0x60]
//   XREF to: Stack[-0xd0] (READ)
// 0059b248: FXCH ST3
// 0059b24a: FSTP float ptr [ESP + 0xfc]
//   XREF to: Stack[-0x34] (WRITE)
// 0059b251: FXCH ST2
// 0059b253: FSUBP
// 0059b255: FLD float ptr [ESP + 0xfc]
//   XREF to: Stack[-0x34] (READ)
// 0059b25c: FMUL ST0
// 0059b25e: FXCH
// 0059b260: FST float ptr [ESP + 0xf4]
//   XREF to: Stack[-0x3c] (WRITE)
// 0059b267: FMUL float ptr [ESP + 0xf4]
//   XREF to: Stack[-0x3c] (READ)
// 0059b26e: FXCH ST3
// 0059b270: FSUBP ST2,ST0
// 0059b272: FADDP ST2,ST0
// 0059b274: FST float ptr [ESP + 0xf8]
//   XREF to: Stack[-0x38] (WRITE)
// 0059b27b: FMUL float ptr [ESP + 0xf8]
//   XREF to: Stack[-0x38] (READ)
// 0059b282: FADDP
// 0059b284: FLDZ
// 0059b286: FXCH
// 0059b288: FSTP float ptr [ESP]
//   XREF to: Stack[-0x130] (DATA)
// 0059b28b: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x130] (DATA)
// 0059b28e: FNSTSW AX
// 0059b290: SAHF
// 0059b291: JNC 0x0059b3ae
//   XREF to: 0059b3ae (CONDITIONAL_JUMP)
// 0059b297: FLD float ptr [ESP]
//   XREF to: Stack[-0x130] (DATA)
// 0059b29a: FSQRT
// 0059b29c: FDIVR double ptr [0x0064e858]
//   XREF to: 0064e858 (READ)
// 0059b2a2: FSTP float ptr [ESP]
//   XREF to: Stack[-0x130] (DATA)
// 0059b2a5: FLD float ptr [ESP]
//   Label: LAB_0059b2a5
//   XREF to: Stack[-0x130] (DATA)
// 0059b2a8: FLD float ptr [ESP + 0xfc]
//   XREF to: Stack[-0x34] (READ)
// 0059b2af: FMUL ST1
// 0059b2b1: FLD float ptr [ESP + 0xf4]
//   XREF to: Stack[-0x3c] (READ)
// 0059b2b8: FMUL ST2
// 0059b2ba: FLD float ptr [ESP + 0xf8]
//   XREF to: Stack[-0x38] (READ)
// 0059b2c1: FMULP ST3
// 0059b2c3: FXCH
// 0059b2c5: FSTP float ptr [ESP + 0xfc]
//   XREF to: Stack[-0x34] (WRITE)
// 0059b2cc: FSTP float ptr [ESP + 0xf4]
//   XREF to: Stack[-0x3c] (WRITE)
// 0059b2d3: FST float ptr [ESP + 0xf8]
//   XREF to: Stack[-0x38] (WRITE)
// 0059b2da: FLD float ptr [ESP + 0xf4]
//   XREF to: Stack[-0x3c] (READ)
// 0059b2e1: FLD float ptr [ESP + 0xfc]
//   XREF to: Stack[-0x34] (READ)
// 0059b2e8: FXCH ST2
// 0059b2ea: FLD float ptr [0x0064e850]
//   XREF to: 0064e850 (READ)
// 0059b2f0: FXCH
// 0059b2f2: FADD ST0,ST1
// 0059b2f4: FXCH ST2
// 0059b2f6: FADD ST0,ST1
// 0059b2f8: FXCH ST3
// 0059b2fa: FADDP
// 0059b2fc: FXCH
// 0059b2fe: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0059b303: FXCH ST2
// 0059b305: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0059b30a: FXCH ST2
// 0059b30c: FISTP dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x2c] (WRITE)
// 0059b313: FXCH
// 0059b315: FISTP dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x30] (WRITE)
// 0059b31c: MOV EAX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x2c] (READ)
// 0059b323: MOV EDX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x30] (READ)
// 0059b32a: PUSH EAX
// 0059b32b: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0059b330: PUSH EDX
// 0059b331: FISTP dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x30] (WRITE)
// 0059b338: MOV ECX,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x30] (READ)
// 0059b33f: PUSH ECX
// 0059b340: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0059b346: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 0059b347: CALL engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
//   XREF to: 0048c970 (UNCONDITIONAL_CALL)
// 0059b34c: MOV EAX,0x3
// 0059b351: ADD ESP,0x10
// 0059b354: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x128] (WRITE)
// 0059b358: XOR EAX,EAX
// 0059b35a: MOV AX,word ptr [ESI]
// 0059b35d: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x114] (WRITE)
// 0059b361: XOR EAX,EAX
// 0059b363: MOV AX,word ptr [ESI + 0x2]
// 0059b367: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x108] (WRITE)
// 0059b36b: XOR EAX,EAX
// 0059b36d: MOV AX,word ptr [ESI + 0x4]
// 0059b371: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0xfc] (WRITE)
// 0059b375: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x12c] (DATA)
// 0059b379: PUSH EAX
// 0059b37a: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0059b380: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0059b381: CALL engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
//   XREF to: 0048a8a0 (UNCONDITIONAL_CALL)
// 0059b386: ADD ESP,0x8
// 0059b389: MOV ECX,dword ptr [ESP + 0xec]
//   XREF to: Stack[-0x44] (READ)
// 0059b390: ADD ECX,0x12
// 0059b393: MOV EBX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0x8c] (READ)
// 0059b39a: MOV dword ptr [ESP + 0xec],ECX
//   XREF to: Stack[-0x44] (WRITE)
// 0059b3a1: CMP ECX,EBX
// 0059b3a3: JGE 0x0059ad2d
//   XREF to: 0059ad2d (CONDITIONAL_JUMP)
// 0059b3a9: JMP 0x0059af2e
//   XREF to: 0059af2e (UNCONDITIONAL_JUMP)
// 0059b3ae: MOV dword ptr [ESP],0x42fe0000
//   Label: LAB_0059b3ae
//   XREF to: Stack[-0x130] (DATA)
// 0059b3b5: JMP 0x0059b2a5
//   XREF to: 0059b2a5 (UNCONDITIONAL_JUMP)
// 0059b3ba: CMP dword ptr [ESP + 0xac],0x0
//   Label: LAB_0059b3ba
//   XREF to: Stack[-0x84] (READ)
// 0059b3c2: JNZ 0x0059acf0
//   XREF to: 0059acf0 (CONDITIONAL_JUMP)
// 0059b3c8: CMP dword ptr [EBP + 0x28],0x0
//   XREF to: Stack[0x18] (READ)
// 0059b3cc: JNZ 0x0059acf0
//   XREF to: 0059acf0 (CONDITIONAL_JUMP)
// 0059b3d2: CMP dword ptr [ESP + 0xb0],0x0
//   XREF to: Stack[-0x80] (READ)
// 0059b3da: JNZ 0x0059acf0
//   XREF to: 0059acf0 (CONDITIONAL_JUMP)
// 0059b3e0: MOV dword ptr [ESP + 0xc8],0xffffffff
//   XREF to: Stack[-0x68] (WRITE)
// 0059b3eb: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0xb0] (READ)
// 0059b3f2: MOV dword ptr [ESP + 0xf0],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0059b3f9: CMP EDI,EAX
// 0059b3fb: JLE 0x0059ad2d
//   XREF to: 0059ad2d (CONDITIONAL_JUMP)
// 0059b401: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0xb8] (READ)
// 0059b405: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 0059b40c: MOV EDX,dword ptr [ESP + 0x84]
//   Label: LAB_0059b40c
//   XREF to: Stack[-0xac] (READ)
// 0059b413: MOV EAX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[-0x40] (READ)
// 0059b41a: MOV EDX,dword ptr [EDX + 0x90]
// 0059b420: LEA EBX,[EAX + 0x1]
// 0059b423: MOV ESI,dword ptr [EDX + EAX*0x4]
// 0059b426: CMP EBX,EDI
// 0059b428: JGE 0x0059b448
//   XREF to: 0059b448 (CONDITIONAL_JUMP)
// 0059b42a: MOV EDX,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0xa0] (READ)
// 0059b431: LEA EAX,[EBX*0x4 + 0x0]
// 0059b438: MOV EDX,dword ptr [EDX + 0x90]
// 0059b43e: ADD EAX,EDX
// 0059b440: CMP ESI,dword ptr [EAX]
//   Label: LAB_0059b440
// 0059b442: JZ 0x0059b501
//   XREF to: 0059b501 (CONDITIONAL_JUMP)
// 0059b448: CMP ESI,dword ptr [ESP + 0xc8]
//   Label: LAB_0059b448
//   XREF to: Stack[-0x68] (READ)
// 0059b44f: JZ 0x0059b480
//   XREF to: 0059b480 (CONDITIONAL_JUMP)
// 0059b451: MOV EAX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x98] (READ)
// 0059b458: IMUL EAX,dword ptr [EAX],0x1680
// 0059b45e: IMUL EDX,ESI,0x48
// 0059b461: ADD EAX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x94] (READ)
// 0059b468: ADD EAX,EDX
// 0059b46a: PUSH EAX
// 0059b46b: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0059b470: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0059b471: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 0059b476: ADD ESP,0x8
// 0059b479: MOV dword ptr [ESP + 0xc8],ESI
//   XREF to: Stack[-0x68] (WRITE)
// 0059b480: MOV EAX,dword ptr [EBP + 0x24]
//   Label: LAB_0059b480
//   XREF to: Stack[0x14] (READ)
// 0059b483: MOV EDX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[-0x40] (READ)
// 0059b48a: PUSH EAX
// 0059b48b: MOV EAX,EBX
// 0059b48d: SUB EAX,EDX
// 0059b48f: PUSH EAX
// 0059b490: IMUL EAX,EDX,0x12
// 0059b493: MOV EDX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x90] (READ)
// 0059b49a: MOV EDX,dword ptr [EDX + 0x7c]
// 0059b49d: ADD EAX,EDX
// 0059b49f: PUSH EAX
// 0059b4a0: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0059b4a6: PUSH ESI
//   XREF to: 03114278 (DATA)
// 0059b4a7: CALL core_set.cpp_CDemonSet_FUN_00570870
//   XREF to: 00570870 (UNCONDITIONAL_CALL)
// 0059b4ac: ADD ESP,0x10
// 0059b4af: MOV dword ptr [ESP + 0xf0],EBX
//   XREF to: Stack[-0x40] (WRITE)
// 0059b4b6: CMP EBX,EDI
// 0059b4b8: JL 0x0059b40c
//   XREF to: 0059b40c (CONDITIONAL_JUMP)
// 0059b4be: JMP 0x0059ad2d
//   XREF to: 0059ad2d (UNCONDITIONAL_JUMP)
// 0059b4c3: CMP dword ptr [EBP + 0x28],0x0
//   Label: LAB_0059b4c3
//   XREF to: Stack[0x18] (READ)
// 0059b4c7: JNZ 0x0059acfe
//   XREF to: 0059acfe (CONDITIONAL_JUMP)
// 0059b4cd: CMP dword ptr [ESP + 0xb0],0x0
//   XREF to: Stack[-0x80] (READ)
// 0059b4d5: JNZ 0x0059acfe
//   XREF to: 0059acfe (CONDITIONAL_JUMP)
// 0059b4db: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0xb8] (READ)
// 0059b4df: IMUL EAX,dword ptr [EAX],0x1680
// 0059b4e5: ADD EAX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x94] (READ)
// 0059b4ec: PUSH EAX
// 0059b4ed: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0059b4f3: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 0059b4f4: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 0059b4f9: ADD ESP,0x8
// 0059b4fc: JMP 0x0059acfe
//   XREF to: 0059acfe (UNCONDITIONAL_JUMP)
// 0059b501: INC EBX
//   Label: LAB_0059b501
// 0059b502: ADD EAX,0x4
// 0059b505: CMP EBX,EDI
// 0059b507: JL 0x0059b440
//   XREF to: 0059b440 (CONDITIONAL_JUMP)
// 0059b50d: JMP 0x0059b448
//   XREF to: 0059b448 (UNCONDITIONAL_JUMP)
// 0059b512: CMP dword ptr [ESP + 0xac],0x0
//   Label: LAB_0059b512
//   XREF to: Stack[-0x84] (READ)
// 0059b51a: JNZ 0x0059b577
//   XREF to: 0059b577 (CONDITIONAL_JUMP)
// 0059b51c: CMP dword ptr [EBP + 0x28],0x0
//   XREF to: Stack[0x18] (READ)
// 0059b520: JNZ 0x0059b577
//   XREF to: 0059b577 (CONDITIONAL_JUMP)
// 0059b522: CMP dword ptr [ESP + 0xb0],0x0
//   XREF to: Stack[-0x80] (READ)
// 0059b52a: JNZ 0x0059b577
//   XREF to: 0059b577 (CONDITIONAL_JUMP)
// 0059b52c: MOV EDX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[-0x4c] (READ)
// 0059b533: MOV EAX,dword ptr [ESI + 0x90]
// 0059b539: ADD EAX,EDX
// 0059b53b: MOV ECX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x64] (READ)
// 0059b542: MOV EDI,dword ptr [EAX]
// 0059b544: CMP EDI,ECX
// 0059b546: JZ 0x0059b577
//   XREF to: 0059b577 (CONDITIONAL_JUMP)
// 0059b548: MOV EAX,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x9c] (READ)
// 0059b54f: IMUL EAX,dword ptr [EAX],0x1680
// 0059b555: IMUL EDX,EDI,0x48
// 0059b558: ADD EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0xa4] (READ)
// 0059b55f: ADD EAX,EDX
// 0059b561: PUSH EAX
// 0059b562: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0059b567: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0059b568: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 0059b56d: ADD ESP,0x8
// 0059b570: MOV dword ptr [ESP + 0xcc],EDI
//   XREF to: Stack[-0x64] (WRITE)
// 0059b577: MOV EDX,dword ptr [EBP + 0x24]
//   Label: LAB_0059b577
//   XREF to: Stack[0x14] (READ)
// 0059b57a: PUSH EDX
// 0059b57b: PUSH 0x1
// 0059b57d: MOV ECX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x6c] (READ)
// 0059b584: PUSH ECX
// 0059b585: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0059b58b: PUSH EDI
//   XREF to: 03114278 (DATA)
// 0059b58c: CALL core_set.cpp_CDemonSet_FUN_00570870
//   XREF to: 00570870 (UNCONDITIONAL_CALL)
// 0059b591: ADD ESP,0x10
// 0059b594: JMP 0x0059ae57
//   XREF to: 0059ae57 (UNCONDITIONAL_JUMP)
