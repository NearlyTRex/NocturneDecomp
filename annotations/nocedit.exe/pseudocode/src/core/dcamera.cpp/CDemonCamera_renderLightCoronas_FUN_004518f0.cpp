// Name: core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004518f0
// Address: 004518f0
// Address Range: [[004518f0, 0045210f]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004518f0(CDemonCamera * this_ptr, void * p1, int p2)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c3e3 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0066ed68
//   CGame* g_CGamePtr = 02d81a9c
//   CVector3i[15360] g_PrecomputedWorldPositions
//   undefined4 DAT_00902f78
//   undefined4 DAT_00902f7c
//   undefined4 DAT_00902f80
//   undefined4 DAT_00903e74
//   undefined4 DAT_00903e78
//   undefined4 DAT_00903e7c
//   undefined4 DAT_00903e80
//   undefined4 DAT_00904d74
//   char[241][320] g_CoronaBlurOutputBuffer
//   undefined4 DAT_00ba8db8
//   undefined4 DAT_00ba8ef8
//   int[76800] g_PrecomputedDepthBuffer
//   undefined4 g_LightBufferPool[24][0]
//   undefined4 DAT_0132220c
//   undefined4 DAT_01322210
//   undefined4 DAT_01322214
//   undefined4 DAT_013225d0
//   undefined4 DAT_01335590
//   undefined4 DAT_01335594
//   int g_CameraDownscaleIterations
//   int[240] g_CoronaLeftExtent
//   undefined4 DAT_01576fac
//   int[240] g_CoronaRightExtent
//   undefined4 DAT_0157736c
//   int[240][320] g_CoronaDepthBuffer
//   undefined4 DAT_0157772c
//   undefined4 DAT_01577c28
//   undefined4 DAT_01577c2c
//   undefined4 DAT_01578128
//   CDemonGlobe* g_CurrentGlobe
//   int g_CoronaVisibilityEnabled
//   int g_CoronaTargetX
//   int g_CoronaTargetY
//   int g_CoronaTargetDepth
//   uint*[1024] g_ZBufferScanlineArray
//   CGame g_CGameInstance
//   undefined4 DAT_02d81aa8
// Function calls:
//   core_dcamera.cpp_blendCoronaTextureSpan_FUN_004517f0
//   core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
//   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00471400

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_004518f0
          (CDemonCamera *this_ptr,void *p1,int p2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  CVector3i *pCVar9;
  BADSPACEBASE *in_ESP;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 in_stack_00000010;
  int aiStackY_1078 [1014];
  CVector3i *in_stack_ffffff6c;
  int in_stack_ffffff70;
  int local_80;
  int local_7c;
  undefined4 *local_78;
  char (*local_74) [320];
  int (*local_70) [320];
  CVector3i *local_6c;
  int (*local_68) [320];
  undefined4 *local_64;
  CVector3i *local_60;
  int local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  uint *local_30;
  int *local_2c;
  undefined1 *local_28;
  int *local_24;
  int local_20;
  uint *local_1c;
  CVector3i *local_18;
  int local_14;
  undefined1 uVar14;
  
  bVar2 = 0;
  if ((g_CGamePtr->halo_mode != 0) || ((p2 == 0 && (*(int *)((int)p1 + 0x20) != 0)))) {
    g_CurrentGlobe = (CDemonGlobe *)p1;
    iVar5 = in_stack_ffffff70;
    core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
              (this_ptr,(CVector3i *)p1,in_stack_ffffff6c);
    g_CoronaTargetX = iVar5;
    (&g_CoronaTargetY)[(uint)bVar2 * -2] = *(int *)(&stack0xffffff74 + (uint)bVar2 * -8);
    (&g_CoronaTargetDepth)[(uint)bVar2 * -2 + (uint)bVar2 * -2] =
         *(int *)(&stack0xffffff78 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    if (*(int *)(p2 + 0x20) == 0) {
      g_CoronaVisibilityEnabled = 0;
    }
    else {
      g_CoronaVisibilityEnabled = g_CoronaTargetX;
      if (g_CoronaTargetX != 0) {
        bVar2 = (char)g_CameraDownscaleIterations + 0x10;
        g_CoronaVisibilityEnabled = 1;
        g_CoronaTargetX = g_CoronaTargetX >> (bVar2 & 0x1f);
        g_CoronaTargetY = g_CoronaTargetY >> (bVar2 & 0x1f);
      }
    }
    iVar5 = 0;
    if (0 < *(int *)((int)p1 + 0x154)) {
      iVar3 = 0;
      do {
        *(undefined4 *)((int)g_CoronaLeftExtent + iVar3) = *(undefined4 *)((int)p1 + 0x144);
        *(undefined4 *)((int)g_CoronaRightExtent + iVar3) = 0;
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar5 < *(int *)((int)p1 + 0x154));
    }
    if (((p2 == 0) && (iRam00000020 != 0)) && (_DAT_0066ed68 = 0xffffffff, iRam00000020 == 2)) {
      if (g_LightBufferPool[0x18]._0_4_ != 0) {
        iVar5 = 0;
        do {
          if (*(int *)(g_LightBufferPool[0x18] + iVar5 + 4) == 0) {
            iVar11 = 0;
            iVar3 = iVar5 + 0x132220c;
            if (*(int *)((int)p1 + 0x154) < 1) {
              _DAT_0066ed68 = 0xffffffff;
              return;
            }
            do {
              if (*(int *)(iVar3 + 4) != *(int *)((int)p1 + 0x144)) {
                core_dcamera_cpp_blendCoronaTextureSpan_FUN_004517f0
                          (iVar11,*(int *)(iVar3 + 4),*(int *)(iVar3 + 0x3c4),iVar5 + 0x132220c);
              }
              iVar11 = iVar11 + 1;
              iVar3 = iVar3 + 4;
            } while (iVar11 < *(int *)((int)p1 + 0x154));
            return;
          }
          iVar5 = iVar5 + 0x13384;
        } while (iVar5 < g_LightBufferPool[0x18]._0_4_ * 0x13384);
      }
      if ((uint)g_LightBufferPool[0x18]._0_4_ < 8) {
        local_7c = g_LightBufferPool[0x18]._0_4_ * 0x13384;
        g_LightBufferPool[0x18]._0_4_ = g_LightBufferPool[0x18]._0_4_ + 1;
        local_7c = local_7c + 0x132220c;
        core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_00471400((CDemonGlobe *)0x0);
        local_4c = 0;
        if (0 < iRam00000154) {
          local_64 = local_78 + 0x1e1;
          local_60 = g_PrecomputedWorldPositions;
          local_68 = g_CoronaDepthBuffer;
          local_58 = local_78;
          do {
            if (iRam00000144 != g_CoronaLeftExtent[local_4c]) {
              local_40 = local_4c;
              local_80 = g_CoronaLeftExtent[local_4c];
              local_48 = g_CoronaRightExtent[local_4c];
              local_54 = local_78;
              local_18 = local_60 + local_80;
              local_24 = *local_68 + local_80;
              local_1c = g_ZBufferScanlineArray
                         [local_4c << ((byte)g_CameraDownscaleIterations & 0x1f)] +
                         (local_80 << ((byte)g_CameraDownscaleIterations & 0x1f));
              local_28 = (undefined1 *)((int)local_64 + local_80);
              for (; local_80 < local_48; local_80 = local_80 + 1) {
                uVar14 = 0;
                if (((*local_1c < (uint)*local_24) &&
                    (uVar4 = local_18->x - (g_CurrentGlobe->color).r, uVar12 = (int)uVar4 >> 0x1f,
                    iVar5 = (uVar4 ^ uVar12) - uVar12, iVar5 < g_CurrentGlobe->linear_radius_scaled)
                    ) && ((uVar4 = local_18->y - (g_CurrentGlobe->color).g,
                          uVar12 = (int)uVar4 >> 0x1f, iVar3 = (uVar4 ^ uVar12) - uVar12,
                          iVar3 < g_CurrentGlobe->linear_radius_scaled &&
                          ((uVar4 = local_18->z - (g_CurrentGlobe->color).b,
                           uVar12 = (int)uVar4 >> 0x1f, iVar11 = (uVar4 ^ uVar12) - uVar12,
                           iVar11 < g_CurrentGlobe->linear_radius_scaled &&
                           (local_34 = iVar3 * iVar3 + iVar5 * iVar5 + iVar11 * iVar11,
                           local_34 < g_CurrentGlobe->quadratic_radius_scaled)))))) {
                  if (g_CoronaVisibilityEnabled != 0) {
                    local_38 = 0;
                    if (*local_1c == 0) {
                      iVar5 = 0x7fffffff;
                    }
                    else {
                      iVar5 = (int)(0x7fffffff / (longlong)(int)*local_1c);
                    }
                    iVar6 = g_CoronaTargetDepth - iVar5;
                    iVar7 = iVar6 >> 0x1f;
                    local_14 = (g_CoronaTargetX - local_80) * 0x10;
                    iVar8 = local_80 << 8;
                    iVar11 = local_4c << 8;
                    iVar3 = 0x10;
                    do {
                      if (g_PrecomputedDepthBuffer[(iVar11 >> 8) * 0x140 + (iVar8 >> 8)] <
                          iVar5 + -0x80) break;
                      iVar3 = iVar3 + -1;
                      iVar5 = iVar5 + ((int)((iVar6 + iVar7 * -0x10) - (uint)(iVar7 << 3 < 0)) >> 4)
                      ;
                      iVar8 = iVar8 + local_14;
                      iVar11 = iVar11 + (g_CoronaTargetY - local_4c) * 0x10;
                    } while (0 < iVar3);
                    local_3c = g_CoronaTargetDepth;
                    if (iVar3 != 0) goto LAB_00451d8b;
                  }
                  uVar14 = (undefined1)
                           (((g_CurrentGlobe->quadratic_radius_scaled - local_34 >> 0x10) * 0x3f) /
                           (g_CurrentGlobe->quadratic_radius_scaled >> 0x10));
                }
LAB_00451d8b:
                bVar2 = (byte)g_CameraDownscaleIterations;
                local_24 = local_24 + 1;
                local_18 = local_18 + 1;
                *local_28 = uVar14;
                local_1c = local_1c + (1 << (bVar2 & 0x1f));
                local_28 = local_28 + 1;
              }
              iVar5 = local_78[local_4c + 1];
              iVar3 = local_78[local_4c + 0xf1];
              for (pcVar10 = (char *)((int)local_78 + iVar5 + local_4c * 0x140 + 0x784);
                  (iVar5 < iVar3 && (*pcVar10 == '\0')); pcVar10 = pcVar10 + 1) {
                iVar5 = iVar5 + 1;
              }
              for (pcVar10 = (char *)((int)local_78 + iVar3 + local_4c * 0x140 + 0x783);
                  (iVar5 < iVar3 && (*pcVar10 == '\0')); pcVar10 = pcVar10 + -1) {
                iVar3 = iVar3 + -1;
              }
              local_78[local_4c + 1] = iVar5;
              local_78[local_4c + 0xf1] = iVar3;
              core_dcamera_cpp_blendCoronaTextureSpan_FUN_004517f0
                        (local_4c,g_CoronaLeftExtent[local_4c],g_CoronaRightExtent[local_4c],
                         (int)local_78);
            }
            local_64 = local_64 + 0x50;
            local_68 = local_68 + 1;
            local_60 = local_60 + 0x140;
            local_58[1] = g_CoronaLeftExtent[local_4c];
            piVar1 = g_CoronaRightExtent + local_4c;
            local_4c = local_4c + 1;
            local_58[0xf1] = *piVar1;
            local_58 = local_58 + 1;
          } while (local_4c < iRam00000154);
        }
        *local_78 = in_stack_00000010;
        return;
      }
      g_CoronaVisibilityEnabled = 0;
    }
    core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_00471400((CDemonGlobe *)p2);
    local_5c = 0;
    if (0 < *(int *)(p2 + 0x154)) {
      local_50 = 0;
      local_70 = g_CoronaDepthBuffer;
      local_74 = g_CoronaBlurOutputBuffer;
      local_6c = g_PrecomputedWorldPositions;
      do {
        if (*(int *)(p2 + 0x144) != *(int *)((int)g_CoronaLeftExtent + local_50)) {
          local_20 = *(int *)((int)g_CoronaLeftExtent + local_50);
          iVar5 = *(int *)((int)g_CoronaRightExtent + local_50);
          pcVar10 = *local_74 + local_20;
          local_2c = *local_70 + local_20;
          pCVar9 = local_6c + local_20;
          local_30 = g_ZBufferScanlineArray[local_5c << ((byte)g_CameraDownscaleIterations & 0x1f)]
                     + (local_20 << ((byte)g_CameraDownscaleIterations & 0x1f));
          iVar3 = local_20 - iVar5;
          while (SBORROW4(local_20,iVar5) != iVar3 < 0) {
            if ((((*local_30 < (uint)*local_2c) &&
                 (uVar4 = pCVar9->x - (g_CurrentGlobe->color).r,
                 (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) <
                 g_CurrentGlobe->linear_radius_scaled)) &&
                (uVar12 = pCVar9->y - (g_CurrentGlobe->color).g,
                (int)((uVar12 ^ (int)uVar12 >> 0x1f) - ((int)uVar12 >> 0x1f)) <
                g_CurrentGlobe->linear_radius_scaled)) &&
               (uVar13 = pCVar9->z - (g_CurrentGlobe->color).b,
               (int)((uVar13 ^ (int)uVar13 >> 0x1f) - ((int)uVar13 >> 0x1f)) <
               g_CurrentGlobe->linear_radius_scaled)) {
              iVar3 = uVar13 * uVar13 + uVar4 * uVar4 + uVar12 * uVar12;
              if (iVar3 < g_CurrentGlobe->quadratic_radius_scaled) {
                *pcVar10 = *pcVar10 +
                           (char)((ulonglong)
                                  ((longlong)
                                   (g_CurrentGlobe->quadratic_radius_scaled - iVar3 >> 0x10) *
                                  (longlong)g_CurrentGlobe->falloff_value) >> 0x10);
              }
            }
            pCVar9 = pCVar9 + 1;
            pcVar10 = pcVar10 + 1;
            local_2c = local_2c + 1;
            local_30 = local_30 + (1 << ((byte)g_CameraDownscaleIterations & 0x1f));
            local_20 = local_20 + 1;
            iVar3 = local_20 - iVar5;
          }
        }
        local_50 = local_50 + 4;
        local_70 = local_70 + 1;
        local_74 = local_74 + 1;
        local_6c = local_6c + 0x140;
        local_5c = local_5c + 1;
      } while (local_5c < *(int *)(p2 + 0x154));
    }
  }
  return;
}


// Assembly code:
// 004518f0: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004518f0
// 004518f1: PUSH ESI
// 004518f2: PUSH EDI
// 004518f3: PUSH EBP
// 004518f4: SUB ESP,0x84
// 004518fa: MOV EBX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[0xc] (READ)
// 00451901: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (DATA)
//   XREF to: 0067b654 (READ)
// 00451906: CMP dword ptr [EAX + 0xc],0x0
//   XREF to: 02d81aa8 (READ)
// 0045190a: JNZ 0x00451925
//   XREF to: 00451925 (CONDITIONAL_JUMP)
// 0045190c: TEST EBX,EBX
// 0045190e: JNZ 0x00451a94
//   XREF to: 00451a94 (CONDITIONAL_JUMP)
// 00451914: MOV EAX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[0x8] (READ)
// 0045191b: CMP dword ptr [EAX + 0x20],0x0
// 0045191f: JZ 0x00451a94
//   XREF to: 00451a94 (CONDITIONAL_JUMP)
// 00451925: MOV EAX,dword ptr [ESP + 0x9c]
//   Label: LAB_00451925
//   XREF to: Stack[0x8] (READ)
// 0045192c: PUSH EAX
// 0045192d: MOV EDI,dword ptr [ESP + 0x9c]
//   XREF to: Stack[0x4] (READ)
// 00451934: PUSH EDI
// 00451935: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x94] (DATA)
// 00451939: MOV [0x015c4170],EAX
//   XREF to: 015c4170 (WRITE)
// 0045193e: CALL core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
//   XREF to: 0044d7d0 (UNCONDITIONAL_CALL)
// 00451943: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x94] (DATA)
// 00451947: ADD ESP,0x8
// 0045194a: MOV EDI,0x15c4178
//   XREF to: 015c4178 (DATA)
// 0045194f: MOV EAX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[0x8] (READ)
// 00451956: MOVSD ES:EDI,ESI
//   XREF to: 015c4178 (WRITE)
// 00451957: MOVSD ES:EDI,ESI
//   XREF to: 015c417c (WRITE)
// 00451958: MOVSD ES:EDI,ESI
//   XREF to: 015c4180 (WRITE)
// 00451959: MOV EBP,dword ptr [EAX + 0x20]
// 0045195c: TEST EBP,EBP
// 0045195e: JZ 0x00451aac
//   XREF to: 00451aac (CONDITIONAL_JUMP)
// 00451964: MOV EDX,dword ptr [0x015c4178]
//   XREF to: 015c4178 (READ)
// 0045196a: TEST EDX,EDX
// 0045196c: JZ 0x00451aa1
//   XREF to: 00451aa1 (CONDITIONAL_JUMP)
// 00451972: MOV ESI,0x1
// 00451977: MOV EAX,[0x013bc260]
//   XREF to: 013bc260 (READ)
// 0045197c: MOV EBP,dword ptr [0x015c417c]
//   XREF to: 015c417c (READ)
// 00451982: ADD EAX,0x10
// 00451985: MOV EDI,EDX
// 00451987: MOV CL,AL
// 00451989: MOV dword ptr [0x015c4174],ESI
//   XREF to: 015c4174 (WRITE)
// 0045198f: SAR EDI,CL
// 00451991: SAR EBP,CL
// 00451993: MOV dword ptr [0x015c4178],EDI
//   XREF to: 015c4178 (WRITE)
// 00451999: MOV dword ptr [0x015c417c],EBP
//   XREF to: 015c417c (WRITE)
// 0045199f: MOV EAX,dword ptr [ESP + 0x98]
//   Label: LAB_0045199f
//   XREF to: Stack[0x4] (READ)
// 004519a6: MOV ECX,dword ptr [EAX + 0x154]
// 004519ac: XOR EDX,EDX
// 004519ae: TEST ECX,ECX
// 004519b0: JLE 0x004519f0
//   XREF to: 004519f0 (CONDITIONAL_JUMP)
// 004519b2: XOR EAX,EAX
// 004519b4: MOV ECX,dword ptr [ESP + 0x98]
//   Label: LAB_004519b4
//   XREF to: Stack[0x4] (READ)
// 004519bb: MOV ECX,dword ptr [ECX + 0x144]
// 004519c1: XOR ESI,ESI
// 004519c3: MOV dword ptr [EAX + 0x1576fa8],ECX
//   XREF to: 01576fa8 (WRITE)
//   XREF to: 01576fac (WRITE)
// 004519c9: MOV ECX,dword ptr [ESP + 0x98]
//   XREF to: Stack[0x4] (READ)
// 004519d0: MOV dword ptr [EAX + 0x1577368],ESI
//   XREF to: 01577368 (WRITE)
//   XREF to: 0157736c (WRITE)
// 004519d6: INC EDX
// 004519d7: MOV EDI,dword ptr [ECX + 0x154]
// 004519dd: ADD EAX,0x4
// 004519e0: CMP EDX,EDI
// 004519e2: JL 0x004519b4
//   XREF to: 004519b4 (CONDITIONAL_JUMP)
// 004519e4: LEA EAX,[EAX]
// 004519ea: LEA EDX,[EDX]
// 004519f0: TEST EBX,EBX
//   Label: LAB_004519f0
// 004519f2: JNZ 0x00451ad6
//   XREF to: 00451ad6 (CONDITIONAL_JUMP)
// 004519f8: MOV EAX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[0x8] (READ)
// 004519ff: CMP dword ptr [EAX + 0x20],0x0
// 00451a03: JZ 0x00451ad6
//   XREF to: 00451ad6 (CONDITIONAL_JUMP)
// 00451a09: MOV dword ptr [0x0066ed68],0xffffffff
//   XREF to: 0066ed68 (WRITE)
// 00451a13: MOV EAX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[0x8] (READ)
// 00451a1a: CMP dword ptr [EAX + 0x20],0x2
// 00451a1e: JNZ 0x00451ad6
//   XREF to: 00451ad6 (CONDITIONAL_JUMP)
// 00451a24: MOV ECX,dword ptr [0x01322208]
//   XREF to: 01322208 (READ)
// 00451a2a: TEST ECX,ECX
// 00451a2c: JBE 0x00451ac0
//   XREF to: 00451ac0 (CONDITIONAL_JUMP)
// 00451a32: MOV ESI,dword ptr [ESP + 0x9c]
//   XREF to: Stack[0x8] (READ)
// 00451a39: XOR EAX,EAX
// 00451a3b: IMUL EDX,ECX,0x13384
// 00451a41: CMP ESI,dword ptr [EAX + 0x132220c]
//   Label: LAB_00451a41
//   XREF to: 0132220c (READ)
//   XREF to: 01335590 (READ)
// 00451a47: JNZ 0x00451ab7
//   XREF to: 00451ab7 (CONDITIONAL_JUMP)
// 00451a4d: MOV EDI,0x132220c
//   XREF to: 0132220c (DATA)
// 00451a52: ADD EDI,EAX
// 00451a54: MOV EAX,dword ptr [ESP + 0x98]
//   XREF to: Stack[0x4] (READ)
// 00451a5b: MOV EBP,dword ptr [EAX + 0x154]
// 00451a61: XOR ESI,ESI
// 00451a63: TEST EBP,EBP
// 00451a65: JLE 0x00451a94
//   XREF to: 00451a94 (CONDITIONAL_JUMP)
// 00451a67: MOV EBX,EDI
// 00451a69: MOV EDX,dword ptr [ESP + 0x98]
//   Label: LAB_00451a69
//   XREF to: Stack[0x4] (READ)
// 00451a70: MOV EAX,dword ptr [EBX + 0x4]
//   XREF to: 01322210 (READ)
//   XREF to: 01322214 (READ)
//   XREF to: 01335594 (READ)
// 00451a73: CMP EAX,dword ptr [EDX + 0x144]
// 00451a79: JNZ 0x00451b8e
//   XREF to: 00451b8e (CONDITIONAL_JUMP)
// 00451a7f: MOV EAX,dword ptr [ESP + 0x98]
//   Label: LAB_00451a7f
//   XREF to: Stack[0x4] (READ)
// 00451a86: INC ESI
// 00451a87: MOV EDX,dword ptr [EAX + 0x154]
// 00451a8d: ADD EBX,0x4
//   XREF to: 01322210 (PARAM)
// 00451a90: CMP ESI,EDX
// 00451a92: JL 0x00451a69
//   XREF to: 00451a69 (CONDITIONAL_JUMP)
// 00451a94: ADD ESP,0x84
//   Label: LAB_00451a94
// 00451a9a: POP EBP
// 00451a9b: POP EDI
// 00451a9c: POP ESI
// 00451a9d: POP EBX
// 00451a9e: MOV EAX,EAX
// 00451aa0: RET
// 00451aa1: MOV dword ptr [0x015c4174],EDX
//   Label: LAB_00451aa1
//   XREF to: 015c4174 (WRITE)
// 00451aa7: JMP 0x0045199f
//   XREF to: 0045199f (UNCONDITIONAL_JUMP)
// 00451aac: MOV dword ptr [0x015c4174],EBP
//   Label: LAB_00451aac
//   XREF to: 015c4174 (WRITE)
// 00451ab2: JMP 0x0045199f
//   XREF to: 0045199f (UNCONDITIONAL_JUMP)
// 00451ab7: ADD EAX,0x13384
//   Label: LAB_00451ab7
// 00451abc: CMP EAX,EDX
// 00451abe: JL 0x00451a41
//   XREF to: 00451a41 (CONDITIONAL_JUMP)
// 00451ac0: MOV EAX,[0x01322208]
//   Label: LAB_00451ac0
//   XREF to: 01322208 (READ)
// 00451ac5: CMP EAX,0x8
// 00451ac8: JC 0x00451ba5
//   XREF to: 00451ba5 (CONDITIONAL_JUMP)
// 00451ace: XOR EDX,EDX
// 00451ad0: MOV dword ptr [0x015c4174],EDX
//   XREF to: 015c4174 (WRITE)
// 00451ad6: MOV ECX,dword ptr [ESP + 0x9c]
//   Label: LAB_00451ad6
//   XREF to: Stack[0x8] (READ)
// 00451add: PUSH ECX
// 00451ade: CALL core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00471400
//   XREF to: 00471400 (UNCONDITIONAL_CALL)
// 00451ae3: ADD ESP,0x4
// 00451ae6: MOV EAX,dword ptr [ESP + 0x98]
//   XREF to: Stack[0x4] (READ)
// 00451aed: XOR EBX,EBX
// 00451aef: MOV ESI,dword ptr [EAX + 0x154]
// 00451af5: MOV dword ptr [ESP + 0x30],EBX
//   XREF to: Stack[-0x64] (WRITE)
// 00451af9: TEST ESI,ESI
// 00451afb: JLE 0x00451a94
//   XREF to: 00451a94 (CONDITIONAL_JUMP)
// 00451afd: MOV EBP,0x1577728
//   XREF to: 01577728 (DATA)
// 00451b02: MOV EAX,0xba8c78
//   XREF to: 00ba8c78 (DATA)
// 00451b07: MOV EDX,0x902f74
//   XREF to: 00902f74 (DATA)
// 00451b0c: MOV dword ptr [ESP + 0x3c],EBX
//   XREF to: Stack[-0x58] (WRITE)
// 00451b10: MOV dword ptr [ESP + 0x1c],EBP
//   XREF to: Stack[-0x78] (WRITE)
//   XREF to: 01577728 (DATA)
// 00451b14: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x7c] (WRITE)
//   XREF to: 00ba8c78 (DATA)
// 00451b18: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x74] (WRITE)
//   XREF to: 00902f74 (DATA)
// 00451b1c: MOV EDX,dword ptr [ESP + 0x98]
//   Label: LAB_00451b1c
//   XREF to: Stack[0x4] (READ)
// 00451b23: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x58] (READ)
// 00451b27: MOV ECX,dword ptr [EDX + 0x144]
// 00451b2d: CMP ECX,dword ptr [EAX + 0x1576fa8]
//   XREF to: 01576fa8 (DATA)
//   XREF to: 01576fac (DATA)
// 00451b33: JNZ 0x00451fd6
//   XREF to: 00451fd6 (CONDITIONAL_JUMP)
// 00451b39: MOV ECX,dword ptr [ESP + 0x3c]
//   Label: LAB_00451b39
//   XREF to: Stack[-0x58] (READ)
// 00451b3d: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x78] (READ)
// 00451b41: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x7c] (READ)
// 00451b45: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x74] (READ)
// 00451b49: MOV EBP,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x64] (READ)
// 00451b4d: MOV EDX,dword ptr [ESP + 0x98]
//   XREF to: Stack[0x4] (READ)
// 00451b54: ADD ECX,0x4
// 00451b57: ADD EBX,0x500
// 00451b5d: ADD ESI,0x140
// 00451b63: ADD EDI,0xf00
// 00451b69: INC EBP
// 00451b6a: MOV dword ptr [ESP + 0x3c],ECX
//   XREF to: Stack[-0x58] (WRITE)
// 00451b6e: MOV dword ptr [ESP + 0x1c],EBX
//   XREF to: Stack[-0x78] (WRITE)
//   XREF to: 01577c28 (DATA)
//   XREF to: 01578128 (DATA)
// 00451b72: MOV dword ptr [ESP + 0x18],ESI
//   XREF to: Stack[-0x7c] (WRITE)
//   XREF to: 00ba8db8 (DATA)
//   XREF to: 00ba8ef8 (DATA)
// 00451b76: MOV dword ptr [ESP + 0x20],EDI
//   XREF to: Stack[-0x74] (WRITE)
//   XREF to: 00903e74 (DATA)
//   XREF to: 00904d74 (DATA)
// 00451b7a: MOV ECX,dword ptr [EDX + 0x154]
// 00451b80: MOV dword ptr [ESP + 0x30],EBP
//   XREF to: Stack[-0x64] (WRITE)
// 00451b84: CMP EBP,ECX
// 00451b86: JGE 0x00451a94
//   XREF to: 00451a94 (CONDITIONAL_JUMP)
// 00451b8c: JMP 0x00451b1c
//   XREF to: 00451b1c (UNCONDITIONAL_JUMP)
// 00451b8e: PUSH EDI
//   Label: LAB_00451b8e
//   XREF to: 0132220c (DATA)
// 00451b8f: MOV EBP,dword ptr [EBX + 0x3c4]
//   XREF to: 013225d4 (READ)
// 00451b95: PUSH EBP
// 00451b96: PUSH EAX
// 00451b97: PUSH ESI
// 00451b98: CALL core_dcamera.cpp_blendCoronaTextureSpan_FUN_004517f0
//   XREF to: 004517f0 (UNCONDITIONAL_CALL)
// 00451b9d: ADD ESP,0x10
// 00451ba0: JMP 0x00451a7f
//   XREF to: 00451a7f (UNCONDITIONAL_JUMP)
// 00451ba5: IMUL EAX,EAX,0x13384
//   Label: LAB_00451ba5
// 00451bab: MOV EDX,0x132220c
//   XREF to: 0132220c (DATA)
// 00451bb0: MOV ECX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[0x8] (READ)
// 00451bb7: MOV EBX,dword ptr [0x01322208]
//   XREF to: 01322208 (READ)
// 00451bbd: PUSH ECX
// 00451bbe: INC EBX
// 00451bbf: ADD EDX,EAX
// 00451bc1: MOV dword ptr [0x01322208],EBX
//   XREF to: 01322208 (WRITE)
// 00451bc7: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x80] (WRITE)
// 00451bcb: CALL core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00471400
//   XREF to: 00471400 (UNCONDITIONAL_CALL)
// 00451bd0: ADD ESP,0x4
// 00451bd3: MOV EAX,dword ptr [ESP + 0x98]
//   XREF to: Stack[0x4] (READ)
// 00451bda: XOR ESI,ESI
// 00451bdc: MOV EDI,dword ptr [EAX + 0x154]
// 00451be2: MOV dword ptr [ESP + 0x40],ESI
//   XREF to: Stack[-0x54] (WRITE)
// 00451be6: TEST EDI,EDI
// 00451be8: JLE 0x00451ee5
//   XREF to: 00451ee5 (CONDITIONAL_JUMP)
// 00451bee: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x80] (READ)
// 00451bf2: ADD EAX,0x784
// 00451bf7: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 00451bfb: MOV EAX,0x902f74
//   XREF to: 00902f74 (DATA)
// 00451c00: MOV EBP,0x1577728
//   XREF to: 01577728 (DATA)
// 00451c05: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x68] (WRITE)
//   XREF to: 00902f74 (DATA)
// 00451c09: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x80] (READ)
// 00451c0d: MOV dword ptr [ESP + 0x24],EBP
//   XREF to: Stack[-0x70] (WRITE)
//   XREF to: 01577728 (DATA)
// 00451c11: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 00451c15: MOV EAX,dword ptr [ESP + 0x40]
//   Label: LAB_00451c15
//   XREF to: Stack[-0x54] (READ)
// 00451c19: MOV ECX,dword ptr [ESP + 0x98]
//   XREF to: Stack[0x4] (READ)
// 00451c20: SHL EAX,0x2
// 00451c23: MOV EBX,dword ptr [ECX + 0x144]
// 00451c29: CMP EBX,dword ptr [EAX + 0x1576fa8]
//   XREF to: 01576fa8 (DATA)
// 00451c2f: JZ 0x00451e75
//   XREF to: 00451e75 (CONDITIONAL_JUMP)
// 00451c35: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x54] (READ)
// 00451c39: MOV dword ptr [ESP + 0x4c],EDX
//   XREF to: Stack[-0x48] (WRITE)
// 00451c3d: MOV EDX,dword ptr [EAX + 0x1576fa8]
//   XREF to: 01576fa8 (DATA)
// 00451c43: MOV EAX,dword ptr [EAX + 0x1577368]
//   XREF to: 01577368 (DATA)
// 00451c49: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x88] (WRITE)
// 00451c4d: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00451c51: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x80] (READ)
// 00451c55: MOV ESI,EDX
// 00451c57: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 00451c5b: IMUL EAX,EDX,0xc
// 00451c5e: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x68] (READ)
// 00451c62: ADD EDX,EAX
// 00451c64: MOV dword ptr [ESP + 0x74],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00451c68: MOV EAX,ESI
// 00451c6a: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x70] (READ)
// 00451c6e: SHL EAX,0x2
// 00451c71: MOV CL,byte ptr [0x013bc260]
//   XREF to: 013bc260 (READ)
// 00451c77: ADD EDX,EAX
// 00451c79: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x54] (READ)
// 00451c7d: MOV dword ptr [ESP + 0x68],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 00451c81: MOV EDX,ESI
// 00451c83: SHL EAX,CL
// 00451c85: SHL EDX,CL
// 00451c87: MOV EAX,dword ptr [EAX*0x4 + 0x2cf7d5c]
//   XREF to: 02cf7d5c (DATA)
// 00451c8e: SHL EDX,0x2
// 00451c91: ADD EAX,EDX
// 00451c93: MOV EDI,ESI
// 00451c95: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00451c99: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x6c] (READ)
// 00451c9d: ADD EAX,EDI
// 00451c9f: MOV EBP,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x50] (READ)
// 00451ca3: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00451ca7: CMP ESI,EBP
// 00451ca9: JGE 0x00451de4
//   XREF to: 00451de4 (CONDITIONAL_JUMP)
// 00451caf: XOR DL,DL
//   Label: LAB_00451caf
// 00451cb1: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x24] (READ)
// 00451cb5: MOV byte ptr [ESP + 0x80],DL
//   XREF to: Stack[-0x14] (WRITE)
// 00451cbc: MOV EDX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x2c] (READ)
// 00451cc0: MOV EAX,dword ptr [EAX]
// 00451cc2: CMP EAX,dword ptr [EDX]
//   XREF to: 01577728 (DATA)
//   XREF to: 0157772c (DATA)
// 00451cc4: JNC 0x00451d8b
//   XREF to: 00451d8b (CONDITIONAL_JUMP)
// 00451cca: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x20] (READ)
// 00451cce: MOV EDX,dword ptr [0x015c4170]
//   XREF to: 015c4170 (READ)
// 00451cd4: MOV EAX,dword ptr [EAX]
//   XREF to: 00902f74 (DATA)
//   XREF to: 00902f80 (DATA)
// 00451cd6: SUB EAX,dword ptr [EDX]
// 00451cd8: CDQ
// 00451cd9: XOR EAX,EDX
// 00451cdb: SUB EAX,EDX
// 00451cdd: MOV EDX,dword ptr [0x015c4170]
//   XREF to: 015c4170 (READ)
// 00451ce3: MOV ESI,dword ptr [EDX + 0xc]
// 00451ce6: MOV EBX,EAX
// 00451ce8: CMP EAX,ESI
// 00451cea: JGE 0x00451d8b
//   XREF to: 00451d8b (CONDITIONAL_JUMP)
// 00451cf0: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x20] (READ)
// 00451cf4: MOV EDI,dword ptr [EDX + 0x4]
// 00451cf7: MOV EAX,dword ptr [EAX + 0x4]
//   XREF to: 00902f78 (DATA)
// 00451cfa: SUB EAX,EDI
// 00451cfc: CDQ
// 00451cfd: XOR EAX,EDX
// 00451cff: SUB EAX,EDX
// 00451d01: MOV EDX,dword ptr [0x015c4170]
//   XREF to: 015c4170 (READ)
// 00451d07: MOV EBP,dword ptr [EDX + 0xc]
// 00451d0a: MOV ECX,EAX
// 00451d0c: CMP EAX,EBP
// 00451d0e: JGE 0x00451d8b
//   XREF to: 00451d8b (CONDITIONAL_JUMP)
// 00451d14: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x20] (READ)
// 00451d18: MOV ESI,dword ptr [EDX + 0x8]
// 00451d1b: MOV EAX,dword ptr [EAX + 0x8]
//   XREF to: 00902f7c (DATA)
// 00451d1e: SUB EAX,ESI
// 00451d20: CDQ
// 00451d21: XOR EAX,EDX
// 00451d23: SUB EAX,EDX
// 00451d25: MOV EDX,dword ptr [0x015c4170]
//   XREF to: 015c4170 (READ)
// 00451d2b: CMP EAX,dword ptr [EDX + 0xc]
// 00451d2e: JGE 0x00451d8b
//   XREF to: 00451d8b (CONDITIONAL_JUMP)
// 00451d30: IMUL ECX,ECX
// 00451d33: IMUL EBX,EBX
// 00451d36: IMUL EAX,EAX
// 00451d39: ADD ECX,EBX
// 00451d3b: ADD ECX,EAX
// 00451d3d: MOV EBP,dword ptr [EDX + 0x10]
// 00451d40: MOV dword ptr [ESP + 0x58],ECX
//   XREF to: Stack[-0x3c] (WRITE)
// 00451d44: CMP ECX,EBP
// 00451d46: JGE 0x00451d8b
//   XREF to: 00451d8b (CONDITIONAL_JUMP)
// 00451d48: MOV ECX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x48] (READ)
// 00451d4c: MOV ESI,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x24] (READ)
// 00451d50: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x88] (READ)
// 00451d54: MOV EAX,[0x015c4174]
//   XREF to: 015c4174 (READ)
// 00451d59: MOV ESI,dword ptr [ESI]
// 00451d5b: TEST EAX,EAX
// 00451d5d: JNZ 0x00451efd
//   XREF to: 00451efd (CONDITIONAL_JUMP)
// 00451d63: MOV EAX,[0x015c4170]
//   Label: LAB_00451d63
//   XREF to: 015c4170 (READ)
// 00451d68: MOV ECX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x3c] (READ)
// 00451d6c: MOV EDX,dword ptr [EAX + 0x10]
// 00451d6f: SUB EDX,ECX
// 00451d71: SAR EDX,0x10
// 00451d74: IMUL EDX,EDX,0x3f
// 00451d77: MOV ECX,dword ptr [EAX + 0x10]
// 00451d7a: SAR ECX,0x10
// 00451d7d: MOV EAX,EDX
// 00451d7f: SAR EDX,0x1f
// 00451d82: IDIV ECX
// 00451d84: MOV byte ptr [ESP + 0x80],AL
//   XREF to: Stack[-0x14] (WRITE)
// 00451d8b: MOV EDX,dword ptr [ESP + 0x64]
//   Label: LAB_00451d8b
//   XREF to: Stack[-0x30] (READ)
// 00451d8f: MOV EDI,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x2c] (READ)
// 00451d93: MOV EBP,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x20] (READ)
// 00451d97: MOV AL,byte ptr [ESP + 0x80]
//   XREF to: Stack[-0x14] (READ)
// 00451d9e: MOV ESI,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x24] (READ)
// 00451da2: MOV CL,byte ptr [0x013bc260]
//   XREF to: 013bc260 (READ)
// 00451da8: LEA EBX,[EDX + 0x1]
// 00451dab: ADD EDI,0x4
// 00451dae: ADD EBP,0xc
// 00451db1: MOV byte ptr [EDX],AL
// 00451db3: MOV EAX,0x1
// 00451db8: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x50] (READ)
// 00451dbc: SHL EAX,CL
// 00451dbe: MOV dword ptr [ESP + 0x64],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 00451dc2: SHL EAX,0x2
// 00451dc5: MOV dword ptr [ESP + 0x68],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 00451dc9: ADD ESI,EAX
// 00451dcb: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x88] (READ)
// 00451dcf: MOV dword ptr [ESP + 0x74],EBP
//   XREF to: Stack[-0x20] (WRITE)
// 00451dd3: INC EAX
// 00451dd4: MOV dword ptr [ESP + 0x70],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 00451dd8: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 00451ddc: CMP EAX,EDX
// 00451dde: JL 0x00451caf
//   XREF to: 00451caf (CONDITIONAL_JUMP)
// 00451de4: IMUL EBX,dword ptr [ESP + 0x4c],0x140
//   Label: LAB_00451de4
//   XREF to: Stack[-0x48] (READ)
// 00451dec: MOV EDX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x48] (READ)
// 00451df0: MOV ECX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x5c] (READ)
// 00451df4: SHL EDX,0x2
// 00451df7: ADD EDX,ECX
// 00451df9: ADD ECX,0x784
// 00451dff: MOV EAX,dword ptr [EDX + 0x4]
// 00451e02: ADD ECX,EBX
// 00451e04: MOV EDX,dword ptr [EDX + 0x3c4]
// 00451e0a: ADD ECX,EAX
// 00451e0c: CMP EAX,EDX
// 00451e0e: JGE 0x00451e19
//   XREF to: 00451e19 (CONDITIONAL_JUMP)
// 00451e10: CMP byte ptr [ECX],0x0
//   Label: LAB_00451e10
// 00451e13: JZ 0x00451fb8
//   XREF to: 00451fb8 (CONDITIONAL_JUMP)
// 00451e19: IMUL ECX,dword ptr [ESP + 0x4c],0x140
//   Label: LAB_00451e19
//   XREF to: Stack[-0x48] (READ)
// 00451e21: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x5c] (READ)
// 00451e25: ADD EBX,0x784
// 00451e2b: ADD ECX,EBX
// 00451e2d: ADD ECX,EDX
// 00451e2f: DEC ECX
// 00451e30: CMP EDX,EAX
// 00451e32: JLE 0x00451e3d
//   XREF to: 00451e3d (CONDITIONAL_JUMP)
// 00451e34: CMP byte ptr [ECX],0x0
//   Label: LAB_00451e34
// 00451e37: JZ 0x00451fc7
//   XREF to: 00451fc7 (CONDITIONAL_JUMP)
// 00451e3d: MOV ECX,dword ptr [ESP + 0x4c]
//   Label: LAB_00451e3d
//   XREF to: Stack[-0x48] (READ)
// 00451e41: MOV EBP,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x5c] (READ)
// 00451e45: SHL ECX,0x2
// 00451e48: ADD ECX,EBP
// 00451e4a: MOV dword ptr [ECX + 0x4],EAX
// 00451e4d: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x80] (READ)
// 00451e51: PUSH EAX
// 00451e52: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x54] (READ)
// 00451e56: MOV dword ptr [ECX + 0x3c4],EDX
// 00451e5c: MOV EDX,dword ptr [EAX*0x4 + 0x1577368]
//   XREF to: 01577368 (DATA)
// 00451e63: PUSH EDX
// 00451e64: MOV ECX,dword ptr [EAX*0x4 + 0x1576fa8]
//   XREF to: 01576fa8 (DATA)
// 00451e6b: PUSH ECX
// 00451e6c: PUSH EAX
// 00451e6d: CALL core_dcamera.cpp_blendCoronaTextureSpan_FUN_004517f0
//   XREF to: 004517f0 (UNCONDITIONAL_CALL)
// 00451e72: ADD ESP,0x10
// 00451e75: MOV ESI,dword ptr [ESP + 0x28]
//   Label: LAB_00451e75
//   XREF to: Stack[-0x6c] (READ)
// 00451e79: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x70] (READ)
// 00451e7d: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x54] (READ)
// 00451e81: MOV ECX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x60] (READ)
// 00451e85: MOV EBP,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x68] (READ)
// 00451e89: ADD ESI,0x140
// 00451e8f: ADD EDI,0x500
// 00451e95: MOV EDX,dword ptr [EAX*0x4 + 0x1576fa8]
//   XREF to: 01576fa8 (DATA)
// 00451e9c: ADD EBP,0xf00
// 00451ea2: MOV dword ptr [ECX + 0x4],EDX
//   XREF to: 01322210 (DATA)
//   XREF to: 01322214 (DATA)
// 00451ea5: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x54] (READ)
// 00451ea9: MOV EAX,dword ptr [EAX*0x4 + 0x1577368]
//   XREF to: 01577368 (DATA)
// 00451eb0: INC EDX
// 00451eb1: MOV dword ptr [ECX + 0x3c4],EAX
//   XREF to: 013225d0 (DATA)
// 00451eb7: LEA EAX,[ECX + 0x4]
// 00451eba: MOV dword ptr [ESP + 0x40],EDX
//   XREF to: Stack[-0x54] (WRITE)
// 00451ebe: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 00451ec2: MOV EAX,EDX
// 00451ec4: MOV EDX,dword ptr [ESP + 0x98]
//   XREF to: Stack[0x4] (READ)
// 00451ecb: MOV dword ptr [ESP + 0x28],ESI
//   XREF to: Stack[-0x6c] (WRITE)
// 00451ecf: MOV dword ptr [ESP + 0x24],EDI
//   XREF to: Stack[-0x70] (WRITE)
//   XREF to: 01577c28 (DATA)
// 00451ed3: MOV ECX,dword ptr [EDX + 0x154]
// 00451ed9: MOV dword ptr [ESP + 0x2c],EBP
//   XREF to: Stack[-0x68] (WRITE)
//   XREF to: 00903e74 (DATA)
// 00451edd: CMP EAX,ECX
// 00451edf: JL 0x00451c15
//   XREF to: 00451c15 (CONDITIONAL_JUMP)
// 00451ee5: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_00451ee5
//   XREF to: Stack[-0x80] (READ)
// 00451ee9: MOV EDX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[0x8] (READ)
// 00451ef0: MOV dword ptr [EAX],EDX
//   XREF to: 0132220c (DATA)
// 00451ef2: ADD ESP,0x84
// 00451ef8: POP EBP
// 00451ef9: POP EDI
// 00451efa: POP ESI
// 00451efb: POP EBX
// 00451efc: RET
// 00451efd: MOV EBP,dword ptr [0x015c4178]
//   Label: LAB_00451efd
//   XREF to: 015c4178 (READ)
// 00451f03: MOV EDI,dword ptr [0x015c417c]
//   XREF to: 015c417c (READ)
// 00451f09: MOV EAX,[0x015c4180]
//   XREF to: 015c4180 (READ)
// 00451f0e: XOR EDX,EDX
// 00451f10: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 00451f14: MOV dword ptr [ESP + 0x54],EDX
//   XREF to: Stack[-0x40] (WRITE)
// 00451f18: TEST ESI,ESI
// 00451f1a: JZ 0x00451f85
//   XREF to: 00451f85 (CONDITIONAL_JUMP)
// 00451f1c: MOV EAX,0x7fffffff
// 00451f21: MOV EDX,EAX
// 00451f23: SAR EDX,0x1f
// 00451f26: IDIV ESI
// 00451f28: MOV ESI,EAX
// 00451f2a: MOV EDX,dword ptr [ESP + 0x50]
//   Label: LAB_00451f2a
//   XREF to: Stack[-0x44] (READ)
// 00451f2e: SUB EDX,ESI
// 00451f30: MOV EAX,EDX
// 00451f32: SAR EDX,0x1f
// 00451f35: SHL EDX,0x4
// 00451f38: SBB EAX,EDX
// 00451f3a: SAR EAX,0x4
// 00451f3d: SUB EBP,EBX
// 00451f3f: SUB EDI,ECX
// 00451f41: SHL EBP,0x4
// 00451f44: SHL EDI,0x4
// 00451f47: SHL EBX,0x8
// 00451f4a: SHL ECX,0x8
// 00451f4d: MOV dword ptr [ESP + 0x78],EBP
//   XREF to: Stack[-0x1c] (WRITE)
// 00451f51: MOV dword ptr [ESP + 0x7c],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 00451f55: MOV EBP,EAX
// 00451f57: MOV EDX,ESI
// 00451f59: MOV EAX,0x10
// 00451f5e: MOV ESI,ECX
//   Label: LAB_00451f5e
// 00451f60: SAR ESI,0x8
// 00451f63: IMUL ESI,ESI,0x500
// 00451f69: MOV EDI,EBX
// 00451f6b: SAR EDI,0x8
// 00451f6e: MOV EDI,dword ptr [ESI + EDI*0x4 + 0xbce6f8]
//   XREF to: 00bce6f8 (DATA)
// 00451f75: LEA ESI,[EDX + -0x80]
// 00451f78: CMP EDI,ESI
// 00451f7a: JGE 0x00451f8c
//   XREF to: 00451f8c (CONDITIONAL_JUMP)
// 00451f7c: TEST EAX,EAX
// 00451f7e: JNZ 0x00451fa8
//   XREF to: 00451fa8 (CONDITIONAL_JUMP)
// 00451f80: JMP 0x00451d63
//   XREF to: 00451d63 (UNCONDITIONAL_JUMP)
// 00451f85: MOV ESI,0x7fffffff
//   Label: LAB_00451f85
// 00451f8a: JMP 0x00451f2a
//   XREF to: 00451f2a (UNCONDITIONAL_JUMP)
// 00451f8c: MOV ESI,dword ptr [ESP + 0x78]
//   Label: LAB_00451f8c
//   XREF to: Stack[-0x1c] (READ)
// 00451f90: MOV EDI,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x18] (READ)
// 00451f94: DEC EAX
// 00451f95: ADD EDX,EBP
// 00451f97: ADD EBX,ESI
// 00451f99: ADD ECX,EDI
// 00451f9b: TEST EAX,EAX
// 00451f9d: JG 0x00451f5e
//   XREF to: 00451f5e (CONDITIONAL_JUMP)
// 00451f9f: TEST EAX,EAX
// 00451fa1: JNZ 0x00451fa8
//   XREF to: 00451fa8 (CONDITIONAL_JUMP)
// 00451fa3: JMP 0x00451d63
//   XREF to: 00451d63 (UNCONDITIONAL_JUMP)
// 00451fa8: CMP dword ptr [ESP + 0x54],0x0
//   Label: LAB_00451fa8
//   XREF to: Stack[-0x40] (READ)
// 00451fad: JNZ 0x00451d63
//   XREF to: 00451d63 (CONDITIONAL_JUMP)
// 00451fb3: JMP 0x00451d8b
//   XREF to: 00451d8b (UNCONDITIONAL_JUMP)
// 00451fb8: INC EAX
//   Label: LAB_00451fb8
// 00451fb9: INC ECX
// 00451fba: CMP EAX,EDX
// 00451fbc: JL 0x00451e10
//   XREF to: 00451e10 (CONDITIONAL_JUMP)
// 00451fc2: JMP 0x00451e19
//   XREF to: 00451e19 (UNCONDITIONAL_JUMP)
// 00451fc7: DEC EDX
//   Label: LAB_00451fc7
// 00451fc8: DEC ECX
// 00451fc9: CMP EDX,EAX
// 00451fcb: JG 0x00451e34
//   XREF to: 00451e34 (CONDITIONAL_JUMP)
// 00451fd1: JMP 0x00451e3d
//   XREF to: 00451e3d (UNCONDITIONAL_JUMP)
// 00451fd6: MOV EAX,dword ptr [ESP + 0x3c]
//   Label: LAB_00451fd6
//   XREF to: Stack[-0x58] (READ)
// 00451fda: MOV EAX,dword ptr [EAX + 0x1576fa8]
//   XREF to: 01576fac (DATA)
// 00451fe0: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00451fe4: MOV ESI,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x28] (READ)
// 00451fe8: IMUL EBX,ESI,0xc
// 00451feb: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x58] (READ)
// 00451fef: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x74] (READ)
// 00451ff3: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x7c] (READ)
// 00451ff7: MOV EAX,dword ptr [EAX + 0x1577368]
//   XREF to: 0157736c (DATA)
// 00451ffd: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x78] (READ)
// 00452001: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00452005: ADD EBP,ESI
// 00452007: LEA EAX,[ESI*0x4 + 0x0]
// 0045200e: MOV CL,byte ptr [0x013bc260]
//   XREF to: 013bc260 (READ)
// 00452014: ADD EDX,EAX
// 00452016: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x64] (READ)
// 0045201a: MOV dword ptr [ESP + 0x60],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 0045201e: MOV EDX,ESI
// 00452020: SHL EAX,CL
// 00452022: SHL EDX,CL
// 00452024: MOV EAX,dword ptr [EAX*0x4 + 0x2cf7d5c]
//   XREF to: 02cf7d5c (DATA)
// 0045202b: SHL EDX,0x2
// 0045202e: ADD EBX,EDI
// 00452030: ADD EAX,EDX
// 00452032: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x4c] (READ)
// 00452036: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0045203a: CMP ESI,EDX
// 0045203c: JGE 0x00451b39
//   Label: LAB_0045203c
//   XREF to: 00451b39 (CONDITIONAL_JUMP)
// 00452042: MOV EDX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x34] (READ)
// 00452046: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x38] (READ)
// 0045204a: MOV ECX,dword ptr [EDX]
//   XREF to: 01577c28 (DATA)
//   XREF to: 01577c2c (DATA)
// 0045204c: CMP ECX,dword ptr [EAX]
// 0045204e: JBE 0x004520d3
//   XREF to: 004520d3 (CONDITIONAL_JUMP)
// 00452054: MOV ESI,dword ptr [0x015c4170]
//   XREF to: 015c4170 (READ)
// 0045205a: MOV ECX,dword ptr [EBX]
//   XREF to: 00902f74 (DATA)
//   XREF to: 00903e74 (DATA)
//   XREF to: 00903e80 (DATA)
// 0045205c: MOV EDI,dword ptr [ESI]
// 0045205e: SUB ECX,EDI
// 00452060: MOV EAX,ECX
// 00452062: CDQ
// 00452063: XOR EAX,EDX
// 00452065: SUB EAX,EDX
// 00452067: CMP EAX,dword ptr [ESI + 0xc]
// 0045206a: JGE 0x004520d3
//   XREF to: 004520d3 (CONDITIONAL_JUMP)
// 0045206c: MOV EDI,dword ptr [0x015c4170]
//   XREF to: 015c4170 (READ)
// 00452072: MOV ESI,dword ptr [EBX + 0x4]
//   XREF to: 00902f78 (DATA)
//   XREF to: 00903e78 (DATA)
// 00452075: MOV EAX,dword ptr [EDI + 0x4]
// 00452078: SUB ESI,EAX
// 0045207a: MOV EAX,ESI
// 0045207c: CDQ
// 0045207d: XOR EAX,EDX
// 0045207f: SUB EAX,EDX
// 00452081: CMP EAX,dword ptr [EDI + 0xc]
// 00452084: JGE 0x004520d3
//   XREF to: 004520d3 (CONDITIONAL_JUMP)
// 00452086: MOV EAX,[0x015c4170]
//   XREF to: 015c4170 (READ)
// 0045208b: MOV EDI,dword ptr [EBX + 0x8]
//   XREF to: 00902f7c (DATA)
//   XREF to: 00903e7c (DATA)
// 0045208e: SUB EDI,dword ptr [EAX + 0x8]
// 00452091: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 00452095: MOV EAX,EDI
// 00452097: CDQ
// 00452098: XOR EAX,EDX
// 0045209a: SUB EAX,EDX
// 0045209c: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x84] (READ)
// 004520a0: CMP EAX,dword ptr [EDX + 0xc]
// 004520a3: JGE 0x004520d3
//   XREF to: 004520d3 (CONDITIONAL_JUMP)
// 004520a5: IMUL ESI,ESI
// 004520a8: IMUL ECX,ECX
// 004520ab: MOV EDX,EDI
// 004520ad: IMUL EDX,EDI
// 004520b0: ADD ECX,ESI
// 004520b2: MOV EAX,[0x015c4170]
//   XREF to: 015c4170 (READ)
// 004520b7: ADD EDX,ECX
// 004520b9: MOV ECX,dword ptr [EAX + 0x10]
// 004520bc: CMP EDX,ECX
// 004520be: JGE 0x004520d3
//   XREF to: 004520d3 (CONDITIONAL_JUMP)
// 004520c0: SUB ECX,EDX
// 004520c2: SAR ECX,0x10
// 004520c5: MOV EDX,dword ptr [EAX + 0x14]
// 004520c8: MOV EAX,ECX
// 004520ca: IMUL EDX
// 004520cc: SHRD EAX,EDX,0x10
// 004520d0: ADD byte ptr [EBP],AL
//   XREF to: 00ba8db8 (DATA)
// 004520d3: MOV EAX,0x1
//   Label: LAB_004520d3
// 004520d8: MOV ESI,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x38] (READ)
// 004520dc: MOV EDI,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x34] (READ)
// 004520e0: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x4c] (READ)
// 004520e4: MOV CL,byte ptr [0x013bc260]
//   XREF to: 013bc260 (READ)
// 004520ea: ADD EBX,0xc
// 004520ed: SHL EAX,CL
// 004520ef: INC EBP
// 004520f0: SHL EAX,0x2
// 004520f3: ADD EDI,0x4
// 004520f6: ADD ESI,EAX
// 004520f8: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x28] (READ)
// 004520fc: MOV dword ptr [ESP + 0x60],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 00452100: INC EAX
// 00452101: MOV dword ptr [ESP + 0x5c],ESI
//   XREF to: Stack[-0x38] (WRITE)
// 00452105: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00452109: CMP EAX,EDX
// 0045210b: JMP 0x0045203c
//   XREF to: 0045203c (UNCONDITIONAL_JUMP)
