// Name: core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044e360
// Address: 0044e360
// Address Range: [[0044e360, 0044e789]]
// Convention: __cdecl
// Signature: CDemonCamera * core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044e360(CDemonCamera * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 (0056a470) at 0056a7a9 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056b3f9 [UNCONDITIONAL_CALL]
// Globals:
//   double g_PrecomputePackedNormalToFloat = 0.00390625
//   double g_PrecomputeFixedPointToFloat = 0.00787401574803150
//   int[8] g_CameraEdgeOffsetX
//   undefined4 DAT_0066ed14
//   int[8] g_CameraEdgeOffsetY
//   undefined4 DAT_0066ed34
//   undefined4 DAT_00903e80
//   undefined4 DAT_00903e88
//   undefined4 DAT_009e5d80
//   undefined4 DAT_009e5d88
//   undefined4 DAT_00ac7c80
//   undefined4 DAT_00ac7c84
//   undefined4 DAT_00ac7c88
//   int[76800] g_PrecomputedDepthBuffer
//   undefined4 DAT_00bcebfc
//   int g_LightBufferPoolIndex
//   undefined4 g_LightBufferPool[24][0]
//   int g_CameraDownscaleIterations
//   int g_CameraEdgeCount
//   int[10000] g_CameraEdgeDetectionResults
//   undefined4 DAT_013bc26c
//   undefined4 DAT_013bc270
//   void*[1024] g_ScreenBufferArray
//   uint*[1024] g_ZBufferScanlineArray
// Function calls:
//   core_dcamera.cpp_CDemonCamera_restoreAlphaTransform_FUN_00453a70
//   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0
//   core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
//   core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370

#include "nocturne.h"

CDemonCamera * __cdecl
core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0044e360(CDemonCamera *this_ptr)

{
  char cVar1;
  undefined4 uVar2;
  float fVar3;
  CVector3i *alpha_index;
  CDemonCamera *pCVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  int iVar9;
  int *piVar10;
  uint uVar11;
  byte bVar12;
  int aiStackY_1068 [1013];
  CVector3i *output_ptr;
  CVector3i *in_stack_ffffff7c;
  undefined4 uStack_80;
  CVector3i CStack_70;
  int aiStack_64 [2];
  undefined1 auStack_5c [8];
  CVector3i *local_54;
  int iStack_4c;
  int local_48 [4];
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  char *local_24;
  uint *local_1c;
  CVector3i *local_18;
  uint local_14;
  
  bVar12 = 0;
  local_38 = 1;
  output_ptr = (CVector3i *)0x0;
  if (1 < this_ptr->display_height) {
    local_48[2] = 0x500;
    local_48[1] = 0xf00;
    do {
      local_28 = 1;
      local_24 = (char *)g_ScreenBufferArray[local_38 * this_ptr->scale_factor];
      if (1 < this_ptr->display_width) {
        local_30 = local_48[1] + 0xc;
        local_2c = local_48[2] + 4;
        iVar7 = local_30;
        do {
          local_24 = local_24 + this_ptr->scale_factor * 4;
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                    (this_ptr,(CVector3i *)(local_28 * this_ptr->scale_factor),
                     local_38 * this_ptr->scale_factor,(int)output_ptr);
          aiStack_64[1] = uStack_80;
          *(undefined4 *)(auStack_5c + (uint)bVar12 * -8) =
               *(undefined4 *)(&stack0xffffff84 + (uint)bVar12 * -8);
          *(undefined4 *)(auStack_5c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 4) =
               *(undefined4 *)(&stack0xffffff88 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
          if ((local_54 != (CVector3i *)0x7fffffff) && ((int)in_stack_ffffff7c < (int)local_54)) {
            in_stack_ffffff7c = local_54;
          }
          output_ptr = (CVector3i *)auStack_5c;
          core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
                    (this_ptr,output_ptr,in_stack_ffffff7c);
          CStack_70.z = iStack_4c;
          aiStack_64[(uint)bVar12 * -2] = local_48[(uint)bVar12 * -2];
          *(int *)(auStack_5c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + -4) =
               local_48[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          piVar10 = (int *)(local_28 + 0x9e4e78 + (uint)bVar12 * -8);
          *(int *)((int)&g_TempWorldPositionRow[0].x + local_28) = iStack_4c;
          *piVar10 = local_48[(uint)bVar12 * -2];
          piVar10[(uint)bVar12 * -2 + 1] = local_48[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          alpha_index = (CVector3i *)(*local_1c >> 0x18);
          if (alpha_index != (CVector3i *)0x0) {
            output_ptr = (CVector3i *)(auStack_5c + 4);
            core_dcamera_cpp_CDemonCamera_restoreAlphaTransform_FUN_00453a70
                      (this_ptr,output_ptr,(int)alpha_index,&CStack_70);
            aiStack_64[0] = CStack_70.y;
            *(int *)(auStack_5c + (uint)bVar12 * -8 + -4) = aiStack_64[(uint)bVar12 * -2 + -1];
            *(int *)(auStack_5c + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
                 aiStack_64[(uint)bVar12 * -2 + (uint)bVar12 * -2];
            in_stack_ffffff7c = alpha_index;
          }
          piVar10 = (int *)(iVar7 + 0x902f78 + (uint)bVar12 * -8);
          *(int *)((int)&g_PrecomputedWorldPositions[0].x + iVar7) = CStack_70.y;
          *piVar10 = aiStack_64[(uint)bVar12 * -2 + -1];
          piVar10[(uint)bVar12 * -2 + 1] = aiStack_64[(uint)bVar12 * -2 + (uint)bVar12 * -2];
          *(undefined4 *)((int)g_PrecomputedDepthBuffer + local_2c) = auStack_5c._4_4_;
          uVar2 = *(undefined4 *)local_24;
          cVar1 = *local_24;
          fVar3 = (float)g_PrecomputeFixedPointToFloat;
          local_14 = (uint)(ushort)(short)cVar1;
          local_30 = local_30 + 0xc;
          local_28 = local_28 + 1;
          local_2c = local_2c + 4;
          *(float *)((int)&g_PrecomputedSurfaceNormals[0].x + iVar7) =
               (float)(short)(char)((uint)*(undefined4 *)local_24 >> 0x10) * fVar3;
          *(float *)((int)&g_PrecomputedSurfaceNormals[0].y + iVar7) =
               (float)(short)(char)((uint)uVar2 >> 8) * fVar3;
          *(float *)((int)&g_PrecomputedSurfaceNormals[0].z + iVar7) = (float)(short)cVar1 * fVar3;
          iVar7 = iVar7 + 0xc;
        } while (local_28 < this_ptr->display_width);
      }
      local_48[1] = local_48[1] + 0xf00;
      local_48[2] = local_48[2] + 0x500;
      local_38 = local_38 + 1;
    } while (local_38 < this_ptr->display_height);
  }
  this_ptr->max_distance = (float)(int)output_ptr * (float)g_PrecomputePackedNormalToFloat;
  local_18 = output_ptr;
  core_dcamera_cpp_CDemonCamera_saveBackdrop_FUN_004529b0(this_ptr);
  g_LightBufferPoolIndex = 0;
  g_LightBufferPool[0x18][0] = '\0';
  g_LightBufferPool[0x18][1] = '\0';
  g_LightBufferPool[0x18][2] = '\0';
  g_LightBufferPool[0x18][3] = '\0';
  g_CameraEdgeCount = 0;
  pCVar4 = this_ptr;
  if (0x1df < this_ptr->framebuffer_height) {
    local_18 = (CVector3i *)this_ptr->scale_factor;
    local_48[1] = (int)local_18 << 2;
    for (; pCVar4 = (CDemonCamera *)(this_ptr->framebuffer_height - this_ptr->scale_factor),
        (int)local_18 < (int)pCVar4; local_18 = (CVector3i *)((int)local_18 + 1)) {
      uVar11 = this_ptr->scale_factor;
      local_30 = uVar11 * 4;
      for (; (int)uVar11 < this_ptr->framebuffer_width + this_ptr->scale_factor * -2;
          uVar11 = uVar11 + 1) {
        if ((g_CameraEdgeCount < 10000) && (((uVar11 & 1) != 0 || (((uint)local_18 & 1) != 0)))) {
          iVar7 = *(int *)(*(int *)((int)g_ZBufferScanlineArray + local_48[1]) + local_30);
          iVar9 = 0x7fffffff;
          if (iVar7 == 0) {
            iVar7 = 0x7fffffff;
          }
          else {
            iVar7 = (int)(0x7fffffff / (longlong)iVar7);
          }
          uVar6 = iVar7 - g_PrecomputedDepthBuffer
                          [((int)local_18 >> ((byte)g_CameraDownscaleIterations & 0x1f)) * 0x140 +
                           ((int)uVar11 >> ((byte)g_CameraDownscaleIterations & 0x1f))] >> 0x1f;
          if (0x400 < (int)((iVar7 - g_PrecomputedDepthBuffer
                                     [((int)local_18 >> ((byte)g_CameraDownscaleIterations & 0x1f))
                                      * 0x140 + ((int)uVar11 >>
                                                ((byte)g_CameraDownscaleIterations & 0x1f))] ^ uVar6
                            ) - uVar6)) {
            iVar8 = 0;
            do {
              uVar6 = iVar7 - g_PrecomputedDepthBuffer
                              [(((int)local_18 >> ((byte)g_CameraDownscaleIterations & 0x1f)) +
                               *(int *)((int)g_CameraEdgeOffsetY + iVar8)) * 0x140 +
                               ((int)uVar11 >> ((byte)g_CameraDownscaleIterations & 0x1f)) +
                               *(int *)((int)g_CameraEdgeOffsetX + iVar8)] >> 0x1f;
              iVar5 = (iVar7 - g_PrecomputedDepthBuffer
                               [(((int)local_18 >> ((byte)g_CameraDownscaleIterations & 0x1f)) +
                                *(int *)((int)g_CameraEdgeOffsetY + iVar8)) * 0x140 +
                                ((int)uVar11 >> ((byte)g_CameraDownscaleIterations & 0x1f)) +
                                *(int *)((int)g_CameraEdgeOffsetX + iVar8)] ^ uVar6) - uVar6;
              if (iVar5 < iVar9) {
                g_CameraEdgeDetectionResults[g_CameraEdgeCount * 3] =
                     *(int *)((int)g_CameraEdgeOffsetX + iVar8) +
                     *(int *)((int)g_CameraEdgeOffsetY + iVar8) * 0x140;
                iVar9 = iVar5;
              }
              iVar8 = iVar8 + 4;
            } while (iVar8 != 0x20);
            if (g_CameraEdgeDetectionResults[g_CameraEdgeCount * 3] != 0) {
              g_CameraEdgeDetectionResults[g_CameraEdgeCount * 3 + 1] = uVar11;
              g_CameraEdgeDetectionResults[g_CameraEdgeCount * 3 + 2] = (int)local_18;
              g_CameraEdgeCount = g_CameraEdgeCount + 1;
            }
          }
        }
        local_30 = local_30 + 4;
      }
      local_48[1] = local_48[1] + 4;
    }
  }
  return pCVar4;
}


// Assembly code:
// 0044e360: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044e360
// 0044e361: PUSH ESI
// 0044e362: PUSH EDI
// 0044e363: PUSH EBP
// 0044e364: MOV EBP,ESP
// 0044e366: SUB ESP,0x78
// 0044e369: AND ESP,0xfffffff8
// 0044e36c: MOV ECX,0x1
// 0044e371: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044e374: XOR EDX,EDX
// 0044e376: MOV dword ptr [ESP + 0x50],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 0044e37a: MOV EBX,dword ptr [EAX + 0x154]
// 0044e380: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x88] (DATA)
// 0044e383: CMP EBX,ECX
// 0044e385: JLE 0x0044e588
//   XREF to: 0044e588 (CONDITIONAL_JUMP)
// 0044e38b: MOV EBX,0x500
// 0044e390: MOV ECX,0xf00
// 0044e395: MOV dword ptr [ESP + 0x48],EBX
//   XREF to: Stack[-0x40] (WRITE)
// 0044e399: MOV dword ptr [ESP + 0x44],ECX
//   XREF to: Stack[-0x44] (WRITE)
// 0044e39d: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_0044e39d
//   XREF to: Stack[0x4] (READ)
// 0044e3a0: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x38] (READ)
// 0044e3a4: IMUL EAX,dword ptr [EDX + 0x14c]
// 0044e3ab: MOV EDI,0x1
// 0044e3b0: MOV dword ptr [ESP + 0x60],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 0044e3b4: MOV EAX,dword ptr [EAX*0x4 + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 0044e3bb: MOV EDX,dword ptr [EDX + 0x150]
// 0044e3c1: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0044e3c5: CMP EDX,EDI
// 0044e3c7: JLE 0x0044e552
//   XREF to: 0044e552 (CONDITIONAL_JUMP)
// 0044e3cd: MOV EBX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x44] (READ)
// 0044e3d1: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x40] (READ)
// 0044e3d5: ADD EBX,0xc
// 0044e3d8: ADD EAX,0x4
// 0044e3db: MOV dword ptr [ESP + 0x58],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 0044e3df: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0044e3e3: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0044e3e3
//   XREF to: Stack[0x4] (READ)
// 0044e3e6: MOV ESI,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x24] (READ)
// 0044e3ea: MOV EAX,dword ptr [EAX + 0x14c]
// 0044e3f0: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044e3f3: SHL EAX,0x2
// 0044e3f6: MOV EDI,dword ptr [EDX + 0x14c]
// 0044e3fc: ADD ESI,EAX
// 0044e3fe: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x38] (READ)
// 0044e402: IMUL EAX,EDI
// 0044e405: PUSH EAX
// 0044e406: MOV EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x28] (READ)
// 0044e40a: IMUL EAX,EDI
// 0044e40d: PUSH EAX
// 0044e40e: MOV dword ptr [ESP + 0x6c],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 0044e412: PUSH EDX
// 0044e413: LEA ESI,[ESP + 0x10]
//   XREF to: Stack[-0x84] (DATA)
// 0044e417: LEA EDI,[ESP + 0x34]
//   XREF to: Stack[-0x60] (DATA)
// 0044e41b: CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
//   XREF to: 0044d2a0 (UNCONDITIONAL_CALL)
// 0044e420: LEA ESI,[ESP + 0x10]
//   XREF to: Stack[-0x84] (DATA)
// 0044e424: ADD ESP,0xc
// 0044e427: MOVSD ES:EDI,ESI
// 0044e428: MOVSD ES:EDI,ESI
// 0044e429: MOVSD ES:EDI,ESI
// 0044e42a: MOV EDI,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x58] (READ)
// 0044e42e: CMP EDI,0x7fffffff
// 0044e434: JZ 0x0044e43e
//   XREF to: 0044e43e (CONDITIONAL_JUMP)
// 0044e436: CMP EDI,dword ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 0044e439: JLE 0x0044e43e
//   XREF to: 0044e43e (CONDITIONAL_JUMP)
// 0044e43b: MOV dword ptr [ESP],EDI
//   XREF to: Stack[-0x88] (DATA)
// 0044e43e: LEA EAX,[ESP + 0x28]
//   Label: LAB_0044e43e
//   XREF to: Stack[-0x60] (DATA)
// 0044e442: PUSH EAX
// 0044e443: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044e446: PUSH ECX
// 0044e447: LEA ESI,[ESP + 0x3c]
//   XREF to: Stack[-0x54] (DATA)
// 0044e44b: LEA EDI,[ESP + 0x24]
//   XREF to: Stack[-0x6c] (DATA)
// 0044e44f: CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
//   XREF to: 0044d370 (UNCONDITIONAL_CALL)
// 0044e454: LEA ESI,[ESP + 0x3c]
//   XREF to: Stack[-0x54] (DATA)
// 0044e458: ADD ESP,0x8
// 0044e45b: MOVSD ES:EDI,ESI
// 0044e45c: MOVSD ES:EDI,ESI
// 0044e45d: MOVSD ES:EDI,ESI
// 0044e45e: MOV EDI,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x30] (READ)
// 0044e462: LEA ESI,[ESP + 0x34]
//   XREF to: Stack[-0x54] (DATA)
// 0044e466: LEA EDI,[EDI + 0x9e4e74]
//   XREF to: 009e5d80 (DATA)
// 0044e46c: MOV EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x24] (READ)
// 0044e470: MOVSD ES:EDI,ESI
//   XREF to: 009e5d80 (WRITE)
// 0044e471: MOVSD ES:EDI,ESI
//   XREF to: 009e5d84 (WRITE)
// 0044e472: MOVSD ES:EDI,ESI
//   XREF to: 009e5d88 (WRITE)
// 0044e473: MOV EAX,dword ptr [EAX]
// 0044e475: SHR EAX,0x18
// 0044e478: TEST EAX,EAX
// 0044e47a: JZ 0x0044e49d
//   XREF to: 0044e49d (CONDITIONAL_JUMP)
// 0044e47c: PUSH EAX
// 0044e47d: LEA EAX,[ESP + 0x2c]
//   XREF to: Stack[-0x60] (DATA)
// 0044e481: PUSH EAX
// 0044e482: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044e485: PUSH ESI
// 0044e486: LEA ESI,[ESP + 0x1c]
//   XREF to: Stack[-0x78] (DATA)
// 0044e48a: LEA EDI,[ESP + 0x28]
//   XREF to: Stack[-0x6c] (DATA)
// 0044e48e: CALL core_dcamera.cpp_CDemonCamera_restoreAlphaTransform_FUN_00453a70
//   XREF to: 00453a70 (UNCONDITIONAL_CALL)
// 0044e493: LEA ESI,[ESP + 0x1c]
//   XREF to: Stack[-0x78] (DATA)
// 0044e497: ADD ESP,0xc
// 0044e49a: MOVSD ES:EDI,ESI
// 0044e49b: MOVSD ES:EDI,ESI
// 0044e49c: MOVSD ES:EDI,ESI
// 0044e49d: LEA ESI,[ESP + 0x1c]
//   Label: LAB_0044e49d
//   XREF to: Stack[-0x6c] (DATA)
// 0044e4a1: LEA EDI,[EBX + 0x902f74]
//   XREF to: 00903e80 (DATA)
// 0044e4a7: MOVSD ES:EDI,ESI
//   XREF to: 00903e80 (WRITE)
// 0044e4a8: MOVSD ES:EDI,ESI
//   XREF to: 00903e84 (WRITE)
// 0044e4a9: MOVSD ES:EDI,ESI
//   XREF to: 00903e88 (WRITE)
// 0044e4aa: MOV EDX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (READ)
// 0044e4ae: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x58] (READ)
// 0044e4b2: MOV dword ptr [EDX + 0xbce6f8],EAX
//   XREF to: 00bcebfc (WRITE)
// 0044e4b8: MOV EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x24] (READ)
// 0044e4bc: MOV ESI,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x24] (READ)
// 0044e4c0: MOV EAX,dword ptr [EAX]
// 0044e4c2: MOV EDX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x24] (READ)
// 0044e4c6: SHR EAX,0x10
// 0044e4c9: MOV EDX,dword ptr [EDX]
// 0044e4cb: AND EAX,0xff
// 0044e4d0: SHR EDX,0x8
// 0044e4d3: CBW
// 0044e4d5: AND EDX,0xff
// 0044e4db: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0044e4df: MOV DH,byte ptr [ESI]
// 0044e4e1: FILD word ptr [ESP + 0x74]
//   XREF to: Stack[-0x14] (READ)
// 0044e4e5: MOVSX AX,DL
// 0044e4e9: FLD double ptr [0x0061a11a]
//   XREF to: 0061a11a (READ)
// 0044e4ef: FXCH
// 0044e4f1: FMUL ST1
// 0044e4f3: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0044e4f7: MOVSX AX,DH
// 0044e4fb: FILD word ptr [ESP + 0x74]
//   XREF to: Stack[-0x14] (READ)
// 0044e4ff: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0044e503: FMUL ST2
// 0044e505: FILD word ptr [ESP + 0x74]
//   XREF to: Stack[-0x14] (READ)
// 0044e509: FMULP ST3
// 0044e50b: MOV ECX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x30] (READ)
// 0044e50f: ADD EBX,0xc
// 0044e512: ADD ECX,0xc
// 0044e515: MOV EDI,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x28] (READ)
// 0044e519: MOV dword ptr [ESP + 0x58],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 0044e51d: INC EDI
// 0044e51e: MOV ESI,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (READ)
// 0044e522: MOV dword ptr [ESP + 0x60],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 0044e526: ADD ESI,0x4
// 0044e529: FXCH
// 0044e52b: FSTP float ptr [EBX + 0xac6d68]
//   XREF to: 00ac7c80 (WRITE)
// 0044e531: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044e534: FSTP float ptr [EBX + 0xac6d6c]
//   XREF to: 00ac7c84 (WRITE)
// 0044e53a: FSTP float ptr [EBX + 0xac6d70]
//   XREF to: 00ac7c88 (WRITE)
// 0044e540: MOV ECX,dword ptr [EDX + 0x150]
// 0044e546: MOV dword ptr [ESP + 0x5c],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 0044e54a: CMP EDI,ECX
// 0044e54c: JL 0x0044e3e3
//   XREF to: 0044e3e3 (CONDITIONAL_JUMP)
// 0044e552: MOV ESI,dword ptr [ESP + 0x44]
//   Label: LAB_0044e552
//   XREF to: Stack[-0x44] (READ)
// 0044e556: MOV EDI,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x40] (READ)
// 0044e55a: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x38] (READ)
// 0044e55e: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044e561: ADD ESI,0xf00
// 0044e567: ADD EDI,0x500
// 0044e56d: INC EAX
// 0044e56e: MOV ECX,dword ptr [EDX + 0x154]
// 0044e574: MOV dword ptr [ESP + 0x44],ESI
//   XREF to: Stack[-0x44] (WRITE)
// 0044e578: MOV dword ptr [ESP + 0x48],EDI
//   XREF to: Stack[-0x40] (WRITE)
// 0044e57c: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0044e580: CMP EAX,ECX
// 0044e582: JL 0x0044e39d
//   XREF to: 0044e39d (CONDITIONAL_JUMP)
// 0044e588: MOV EAX,dword ptr [ESP]
//   Label: LAB_0044e588
//   XREF to: Stack[-0x88] (DATA)
// 0044e58b: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0044e58f: FILD dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x18] (READ)
// 0044e593: FMUL double ptr [0x0061a112]
//   XREF to: 0061a112 (READ)
// 0044e599: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044e59c: XOR ESI,ESI
// 0044e59e: MOV EBX,EAX
// 0044e5a0: PUSH EAX
// 0044e5a1: FSTP float ptr [EAX + 0x140]
// 0044e5a7: CALL core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0
//   XREF to: 004529b0 (UNCONDITIONAL_CALL)
// 0044e5ac: ADD ESP,0x4
// 0044e5af: MOV EAX,EBX
// 0044e5b1: MOV dword ptr [0x00c1a204],ESI
//   XREF to: 00c1a204 (WRITE)
// 0044e5b7: MOV dword ptr [0x01322208],ESI
//   XREF to: 01322208 (WRITE)
// 0044e5bd: MOV EDX,dword ptr [EAX + 0x148]
// 0044e5c3: MOV dword ptr [0x013bc264],ESI
//   XREF to: 013bc264 (WRITE)
// 0044e5c9: CMP EDX,0x1e0
// 0044e5cf: JL 0x0044e133
//   XREF to: 0044e133 (CONDITIONAL_JUMP)
// 0044e5d5: MOV EAX,dword ptr [EAX + 0x14c]
// 0044e5db: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0044e5df: SHL EAX,0x2
// 0044e5e2: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0044e5e6: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_0044e5e6
//   XREF to: Stack[0x4] (READ)
// 0044e5e9: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044e5ec: MOV EDI,dword ptr [EDX + 0x14c]
// 0044e5f2: MOV EAX,dword ptr [EAX + 0x148]
// 0044e5f8: MOV EDX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x1c] (READ)
// 0044e5fc: SUB EAX,EDI
// 0044e5fe: CMP EAX,EDX
// 0044e600: JLE 0x0044e133
//   XREF to: 0044e133 (CONDITIONAL_JUMP)
// 0044e606: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044e609: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (READ)
// 0044e60d: MOV EDI,dword ptr [EDI + 0x14c]
// 0044e613: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0044e617: LEA EAX,[EDI*0x4 + 0x0]
// 0044e61e: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0044e622: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0044e622
//   XREF to: Stack[0x4] (READ)
// 0044e625: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044e628: MOV EAX,dword ptr [EAX + 0x14c]
// 0044e62e: MOV EDX,dword ptr [EDX + 0x144]
// 0044e634: ADD EAX,EAX
// 0044e636: SUB EDX,EAX
// 0044e638: CMP EDI,EDX
// 0044e63a: JL 0x0044e652
//   XREF to: 0044e652 (CONDITIONAL_JUMP)
// 0044e63c: MOV EBX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x1c] (READ)
// 0044e640: MOV ECX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (READ)
// 0044e644: INC EBX
// 0044e645: ADD ECX,0x4
// 0044e648: MOV dword ptr [ESP + 0x6c],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 0044e64c: MOV dword ptr [ESP + 0x40],ECX
//   XREF to: Stack[-0x48] (WRITE)
// 0044e650: JMP 0x0044e5e6
//   XREF to: 0044e5e6 (UNCONDITIONAL_JUMP)
// 0044e652: CMP dword ptr [0x013bc264],0x2710
//   Label: LAB_0044e652
//   XREF to: 013bc264 (READ)
// 0044e65c: JGE 0x0044e769
//   XREF to: 0044e769 (CONDITIONAL_JUMP)
// 0044e662: TEST DI,0x1
// 0044e667: JZ 0x0044e75e
//   XREF to: 0044e75e (CONDITIONAL_JUMP)
// 0044e66d: MOV EAX,dword ptr [ESP + 0x4c]
//   Label: LAB_0044e66d
//   XREF to: Stack[-0x3c] (READ)
// 0044e671: MOV EDX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x34] (READ)
// 0044e675: MOV EAX,dword ptr [EAX + 0x2cf7d5c]
//   XREF to: 02cf7d5c (DATA)
// 0044e67b: ADD EAX,EDX
// 0044e67d: MOV EBX,dword ptr [EAX]
// 0044e67f: MOV ESI,0x7fffffff
// 0044e684: TEST EBX,EBX
// 0044e686: JNZ 0x0044e77a
//   XREF to: 0044e77a (CONDITIONAL_JUMP)
// 0044e68c: MOV EBX,ESI
// 0044e68e: MOV EAX,dword ptr [ESP + 0x6c]
//   Label: LAB_0044e68e
//   XREF to: Stack[-0x1c] (READ)
// 0044e692: MOV CL,byte ptr [0x013bc260]
//   XREF to: 013bc260 (READ)
// 0044e698: SAR EAX,CL
// 0044e69a: IMUL EDX,EAX,0x500
// 0044e6a0: MOV EAX,EDI
// 0044e6a2: SAR EAX,CL
// 0044e6a4: MOV EAX,dword ptr [EDX + EAX*0x4 + 0xbce6f8]
//   XREF to: 00bce6f8 (DATA)
// 0044e6ab: MOV dword ptr [ESP + 0x68],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 0044e6af: SUB EBX,EAX
// 0044e6b1: MOV EAX,EBX
// 0044e6b3: CDQ
// 0044e6b4: XOR EAX,EDX
// 0044e6b6: SUB EAX,EDX
// 0044e6b8: CMP EAX,0x400
// 0044e6bd: JLE 0x0044e769
//   XREF to: 0044e769 (CONDITIONAL_JUMP)
// 0044e6c3: XOR EBX,EBX
// 0044e6c5: MOV EAX,dword ptr [ESP + 0x6c]
//   Label: LAB_0044e6c5
//   XREF to: Stack[-0x1c] (READ)
// 0044e6c9: MOV CL,byte ptr [0x013bc260]
//   XREF to: 013bc260 (READ)
// 0044e6cf: SAR EAX,CL
// 0044e6d1: ADD EAX,dword ptr [EBX + 0x66ed30]
//   XREF to: 0066ed30 (READ)
//   XREF to: 0066ed34 (READ)
// 0044e6d7: IMUL EDX,EAX,0x500
// 0044e6dd: MOV CL,byte ptr [0x013bc260]
//   XREF to: 013bc260 (READ)
// 0044e6e3: MOV EAX,EDI
// 0044e6e5: SAR EAX,CL
// 0044e6e7: ADD EAX,dword ptr [EBX + 0x66ed10]
//   XREF to: 0066ed10 (READ)
//   XREF to: 0066ed14 (READ)
// 0044e6ed: MOV EAX,dword ptr [EDX + EAX*0x4 + 0xbce6f8]
//   XREF to: 00bce6f8 (DATA)
// 0044e6f4: MOV EDX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x20] (READ)
// 0044e6f8: SUB EDX,EAX
// 0044e6fa: MOV EAX,EDX
// 0044e6fc: CDQ
// 0044e6fd: XOR EAX,EDX
// 0044e6ff: SUB EAX,EDX
// 0044e701: CMP EAX,ESI
// 0044e703: JGE 0x0044e72a
//   XREF to: 0044e72a (CONDITIONAL_JUMP)
// 0044e705: MOV EDX,dword ptr [EBX + 0x66ed30]
//   XREF to: 0066ed30 (READ)
// 0044e70b: MOV ESI,EAX
// 0044e70d: IMUL EAX,EDX,0x140
// 0044e713: MOV EDX,dword ptr [EBX + 0x66ed10]
//   XREF to: 0066ed10 (READ)
// 0044e719: MOV ECX,dword ptr [0x013bc264]
//   XREF to: 013bc264 (READ)
// 0044e71f: ADD EDX,EAX
// 0044e721: IMUL EAX,ECX,0xc
// 0044e724: MOV dword ptr [EAX + 0x13bc268],EDX
//   XREF to: 013bc268 (WRITE)
// 0044e72a: ADD EBX,0x4
//   Label: LAB_0044e72a
// 0044e72d: CMP EBX,0x20
// 0044e730: JNZ 0x0044e6c5
//   XREF to: 0044e6c5 (CONDITIONAL_JUMP)
// 0044e732: MOV EBX,dword ptr [0x013bc264]
//   XREF to: 013bc264 (READ)
// 0044e738: IMUL EAX,EBX,0xc
// 0044e73b: CMP dword ptr [EAX + 0x13bc268],0x0
//   XREF to: 013bc268 (READ)
// 0044e742: JZ 0x0044e769
//   XREF to: 0044e769 (CONDITIONAL_JUMP)
// 0044e744: MOV EDX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x1c] (READ)
// 0044e748: MOV dword ptr [EAX + 0x13bc26c],EDI
//   XREF to: 013bc26c (WRITE)
// 0044e74e: MOV dword ptr [EAX + 0x13bc270],EDX
//   XREF to: 013bc270 (WRITE)
// 0044e754: LEA EAX,[EBX + 0x1]
// 0044e757: MOV [0x013bc264],EAX
//   XREF to: 013bc264 (WRITE)
// 0044e75c: JMP 0x0044e769
//   XREF to: 0044e769 (UNCONDITIONAL_JUMP)
// 0044e75e: TEST byte ptr [ESP + 0x6c],0x1
//   Label: LAB_0044e75e
//   XREF to: Stack[-0x1c] (READ)
// 0044e763: JNZ 0x0044e66d
//   XREF to: 0044e66d (CONDITIONAL_JUMP)
// 0044e769: MOV EDX,dword ptr [ESP + 0x54]
//   Label: LAB_0044e769
//   XREF to: Stack[-0x34] (READ)
// 0044e76d: ADD EDX,0x4
// 0044e770: INC EDI
// 0044e771: MOV dword ptr [ESP + 0x54],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 0044e775: JMP 0x0044e622
//   XREF to: 0044e622 (UNCONDITIONAL_JUMP)
// 0044e77a: MOV EDX,ESI
//   Label: LAB_0044e77a
// 0044e77c: MOV EAX,ESI
// 0044e77e: SAR EDX,0x1f
// 0044e781: IDIV EBX
// 0044e783: MOV EBX,EAX
// 0044e785: JMP 0x0044e68e
//   XREF to: 0044e68e (UNCONDITIONAL_JUMP)
