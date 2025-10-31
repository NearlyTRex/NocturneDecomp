// Name: core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270
// Address: 00453270
// Address Range: [[00453270, 00453632]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270(CDemonCamera * this_ptr)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_004511c0 (004511c0) at 004511d8 [UNCONDITIONAL_CALL]
// Globals:
//   int g_FogColorIndexR = 0x40
//   int g_FogColorIndexG = 0x40
//   int g_FogColorIndexB = 0x40
//   int g_BitsPerPixel = 0x8
//   char[241][320] g_CoronaBlurWorkBuffer
//   undefined4 g_LightmapTexturePalette[64]
//   int g_CameraDownscaleIterations
//   int g_CameraEdgeCount
//   int[10000] g_CameraEdgeDetectionResults
//   undefined4 DAT_013bc26c
//   undefined4 DAT_013bc270
//   undefined4 DAT_013bc274
//   undefined4 DAT_013bc278
//   undefined4 DAT_013bc27c
//   int g_CameraShakeOffsetX
//   int g_CameraShakeOffsetY
//   SFogImagePlane g_CameraPlaneWorkBuffer
//   int g_ImageProcessingState1
//   int g_ImageProcessingState2
//   SFogGrid g_CameraFogGrid
//   int g_GlobalDeltaTimeInt
//   void*[1024] g_ScreenBufferArray
//   int g_RedBitPosition
//   int g_GreenBitPosition
//   int g_BlueBitPosition
//   int g_SolidColorMode
// Function calls:
//   core_dcamera.cpp_CDemonCamera_blendLightmapPixel16_FUN_00453db0
//   core_dcamera.cpp_CDemonCamera_blendLightmapPixel32_FUN_00453d10
//   core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_004509b0
//   core_dcamera.cpp_updateFogScrollOffset_FUN_0044bfb0
//   core_dstrender.cpp_blendBilerpLightmapToTexture64BitOutput_FUN_004917bc
//   core_dstrender.cpp_blendBilerpLightmapToTexture64BitOutput_FUN_00491c9a
//   core_dstrender.cpp_blendBilerpTextureWithLightmapMMX_FUN_00493450
//   core_dstrender.cpp_blendLightmapToTexture32BitInputOutput_FUN_004926e1
//   core_dstrender.cpp_blendLightmapToTexture64BitOutput_FUN_00492bd5
//   core_dstrender.cpp_blendLightmapToTextureMMX_FUN_00493dc4
//   core_dstrender.cpp_blendLightmapToTextureMMX_Variant2_FUN_00492f03
//   core_dstrender.cpp_blendTextureWithLightmapMMX_FUN_00493860

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270(CDemonCamera *this_ptr)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char (*pacVar5) [320];
  ulonglong *puVar6;
  ulonglong *puVar7;
  char (*pacVar8) [320];
  uint uVar9;
  int iVar10;
  
  g_ImageProcessingState2 = g_ImageProcessingState2 + g_GlobalDeltaTimeInt * 4;
  iVar10 = 0;
  if (0x10000 < g_ImageProcessingState2) {
    g_ImageProcessingState2 = g_ImageProcessingState2 + -0x10000;
    g_ImageProcessingState1 = g_ImageProcessingState1 + 1;
    if (0xf < g_ImageProcessingState1) {
      g_ImageProcessingState1 = 0;
    }
    core_dcamera_cpp_updateFogScrollOffset_FUN_0044bfb0
              (&g_CameraFogGrid,g_ImageProcessingState1,g_ImageProcessingState2);
  }
  core_dcamera_cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_004509b0(this_ptr);
  if (g_BitsPerPixel == 0x20) {
    g_SolidColorMode =
         (g_LightmapTexturePalette[g_FogColorIndexB] & 0xff) << ((byte)g_BlueBitPosition & 0x1f) |
         (g_LightmapTexturePalette[g_FogColorIndexR] & 0xff) << ((byte)g_RedBitPosition & 0x1f) |
         (g_LightmapTexturePalette[g_FogColorIndexG] & 0xff) << ((byte)g_GreenBitPosition & 0x1f);
  }
  else {
    g_SolidColorMode =
         (g_LightmapTexturePalette[g_FogColorIndexR] & 0xff) << 0x10 |
         (g_LightmapTexturePalette[g_FogColorIndexG] & 0xff) << 8 |
         g_LightmapTexturePalette[g_FogColorIndexB] & 0xff;
  }
  if (g_BitsPerPixel == 0x10) {
    uVar9 = 1;
    while ((int)uVar9 < this_ptr->framebuffer_height + -1) {
      puVar6 = (ulonglong *)
               ((int)g_ScreenBufferArray[uVar9 - g_CameraShakeOffsetY] + g_CameraShakeOffsetX * 2);
      puVar7 = (ulonglong *)
               ((int)this_ptr->framebuffer_aligned + this_ptr->framebuffer_width * uVar9 * 4);
      iVar4 = (int)uVar9 >> ((byte)g_CameraDownscaleIterations & 0x1f);
      pacVar5 = g_CameraPlaneWorkBuffer.pixels + iVar4;
      pacVar8 = g_CoronaBlurWorkBuffer + iVar4;
      if ((uVar9 & 1) == 0) {
        if (this_ptr->scale_factor == 1) {
          core_dstrender_cpp_blendTextureWithLightmapMMX_FUN_00493860
                    ((uint *)puVar6,(uint *)puVar7,(byte *)pacVar8,(byte *)pacVar5,
                     this_ptr->framebuffer_width);
        }
        if (this_ptr->scale_factor == 2) {
          core_dstrender_cpp_blendLightmapToTextureMMX_Variant2_FUN_00492f03
                    ((uint *)puVar6,puVar7,(byte *)pacVar8,(byte *)pacVar5,
                     this_ptr->framebuffer_width);
        }
      }
      else {
        if (this_ptr->scale_factor == 1) {
          core_dstrender_cpp_blendLightmapToTextureMMX_FUN_00493dc4
                    (puVar6,puVar7,(byte *)pacVar8,(byte *)pacVar5,this_ptr->framebuffer_width);
        }
        if (this_ptr->scale_factor == 2) {
          core_dstrender_cpp_blendBilerpTextureWithLightmapMMX_FUN_00493450
                    ((uint *)puVar6,puVar7,(byte *)pacVar8,(byte *)pacVar5,
                     this_ptr->framebuffer_width);
        }
      }
      iVar4 = iVar10 * 0xc;
      if (iVar10 < g_CameraEdgeCount) {
        do {
          uVar2 = *(uint *)((int)g_CameraEdgeDetectionResults + iVar4 + 8);
          if (uVar9 != uVar2) goto LAB_0045340c;
          piVar1 = (int *)((int)g_CameraEdgeDetectionResults + iVar4);
          iVar3 = iVar4 + 4;
          iVar4 = iVar4 + 0xc;
          iVar10 = iVar10 + 1;
          core_dcamera_cpp_CDemonCamera_blendLightmapPixel16_FUN_00453db0
                    (this_ptr,*(int *)((int)g_CameraEdgeDetectionResults + iVar3),uVar2,*piVar1);
        } while (iVar10 < g_CameraEdgeCount);
        uVar9 = uVar9 + 1;
      }
      else {
LAB_0045340c:
        uVar9 = uVar9 + 1;
      }
    }
  }
  else {
    uVar9 = 1;
    while ((int)uVar9 < this_ptr->framebuffer_height + -1) {
      puVar6 = (ulonglong *)
               ((int)g_ScreenBufferArray[uVar9 - g_CameraShakeOffsetY] + g_CameraShakeOffsetX * 4);
      puVar7 = (ulonglong *)
               ((int)this_ptr->framebuffer_aligned + this_ptr->framebuffer_width * uVar9 * 4);
      iVar4 = (int)uVar9 >> ((byte)g_CameraDownscaleIterations & 0x1f);
      pacVar5 = g_CameraPlaneWorkBuffer.pixels + iVar4;
      pacVar8 = g_CoronaBlurWorkBuffer + iVar4;
      if ((uVar9 & 1) == 0) {
        if (this_ptr->scale_factor == 1) {
          core_dstrender_cpp_blendLightmapToTexture32BitInputOutput_FUN_004926e1
                    ((uint *)puVar6,(uint *)puVar7,(byte *)pacVar8,(byte *)pacVar5,
                     this_ptr->framebuffer_width);
        }
        if (this_ptr->scale_factor == 2) {
          core_dstrender_cpp_blendBilerpLightmapToTexture64BitOutput_FUN_004917bc
                    (puVar6,puVar7,(byte *)pacVar8,(byte *)pacVar5,this_ptr->framebuffer_width);
        }
      }
      else {
        if (this_ptr->scale_factor == 1) {
          core_dstrender_cpp_blendLightmapToTexture64BitOutput_FUN_00492bd5
                    ((uint *)puVar6,puVar7,(byte *)pacVar8,(byte *)pacVar5,
                     this_ptr->framebuffer_width);
        }
        if (this_ptr->scale_factor == 2) {
          core_dstrender_cpp_blendBilerpLightmapToTexture64BitOutput_FUN_00491c9a
                    (puVar6,puVar7,(byte *)pacVar8,(byte *)pacVar5,this_ptr->framebuffer_width);
        }
      }
      iVar4 = iVar10 * 0xc;
      if (iVar10 < g_CameraEdgeCount) {
        do {
          uVar2 = *(uint *)((int)g_CameraEdgeDetectionResults + iVar4 + 8);
          if (uVar9 != uVar2) goto LAB_00453583;
          piVar1 = (int *)((int)g_CameraEdgeDetectionResults + iVar4);
          iVar3 = iVar4 + 4;
          iVar4 = iVar4 + 0xc;
          iVar10 = iVar10 + 1;
          core_dcamera_cpp_CDemonCamera_blendLightmapPixel32_FUN_00453d10
                    (this_ptr,*(int *)((int)g_CameraEdgeDetectionResults + iVar3),uVar2,*piVar1);
        } while (iVar10 < g_CameraEdgeCount);
        uVar9 = uVar9 + 1;
      }
      else {
LAB_00453583:
        uVar9 = uVar9 + 1;
      }
    }
  }
  return;
}


// Assembly code:
// 00453270: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270
// 00453271: PUSH ESI
// 00453272: PUSH EDI
// 00453273: PUSH EBP
// 00453274: SUB ESP,0x18
// 00453277: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0045327b: MOV EAX,[0x02cf6a80]
//   XREF to: 02cf6a80 (READ)
// 00453280: MOV EDX,dword ptr [0x0151937c]
//   XREF to: 0151937c (READ)
// 00453286: SHL EAX,0x2
// 00453289: ADD EDX,EAX
// 0045328b: XOR ESI,ESI
// 0045328d: MOV dword ptr [0x0151937c],EDX
//   XREF to: 0151937c (WRITE)
// 00453293: CMP EDX,0x10000
// 00453299: JLE 0x004532da
//   XREF to: 004532da (CONDITIONAL_JUMP)
// 0045329b: MOV EBP,dword ptr [0x01519378]
//   XREF to: 01519378 (READ)
// 004532a1: LEA EBX,[EDX + 0xffff0000]
// 004532a7: INC EBP
// 004532a8: MOV dword ptr [0x0151937c],EBX
//   XREF to: 0151937c (WRITE)
// 004532ae: MOV dword ptr [0x01519378],EBP
//   XREF to: 01519378 (WRITE)
// 004532b4: CMP EBP,0x10
// 004532b7: JL 0x004532bf
//   XREF to: 004532bf (CONDITIONAL_JUMP)
// 004532b9: MOV dword ptr [0x01519378],ESI
//   XREF to: 01519378 (WRITE)
// 004532bf: MOV ECX,dword ptr [0x0151937c]
//   Label: LAB_004532bf
//   XREF to: 0151937c (READ)
// 004532c5: PUSH ECX
// 004532c6: MOV EBX,dword ptr [0x01519378]
//   XREF to: 01519378 (READ)
// 004532cc: PUSH EBX
// 004532cd: PUSH 0x1519384
//   XREF to: 01519384 (DATA)
// 004532d2: CALL core_dcamera.cpp_updateFogScrollOffset_FUN_0044bfb0
//   XREF to: 0044bfb0 (UNCONDITIONAL_CALL)
// 004532d7: ADD ESP,0xc
// 004532da: PUSH EDI
//   Label: LAB_004532da
// 004532db: CALL core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_004509b0
//   XREF to: 004509b0 (UNCONDITIONAL_CALL)
// 004532e0: MOV EAX,[0x0066ed0c]
//   XREF to: 0066ed0c (READ)
// 004532e5: MOV EBX,dword ptr [EAX*0x4 + 0xc19dfc]
//   XREF to: 00c19efc (READ)
// 004532ec: MOV EAX,[0x0066ed08]
//   XREF to: 0066ed08 (READ)
// 004532f1: MOV EDX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 004532f7: MOV EBP,dword ptr [EAX*0x4 + 0xc19dfc]
//   XREF to: 00c19efc (READ)
// 004532fe: MOV EAX,[0x0066ed04]
//   XREF to: 0066ed04 (READ)
// 00453303: ADD ESP,0x4
// 00453306: AND EBX,0xff
// 0045330c: MOV EAX,dword ptr [EAX*0x4 + 0xc19dfc]
//   XREF to: 00c19efc (READ)
// 00453313: AND EBP,0xff
// 00453319: AND EAX,0xff
// 0045331e: CMP EDX,0x20
// 00453321: JNZ 0x00453412
//   XREF to: 00453412 (CONDITIONAL_JUMP)
// 00453327: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 0045332d: SHL EAX,CL
// 0045332f: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 00453335: SHL EBP,CL
// 00453337: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 0045333d: SHL EBX,CL
// 0045333f: OR EAX,EBP
// 00453341: MOV ECX,EBX
// 00453343: OR ECX,EAX
// 00453345: MOV dword ptr [0x02d052a8],ECX
//   Label: LAB_00453345
//   XREF to: 02d052a8 (WRITE)
// 0045334b: CMP dword ptr [0x0067939c],0x10
//   XREF to: 0067939c (READ)
// 00453352: JNZ 0x004534cd
//   XREF to: 004534cd (CONDITIONAL_JUMP)
// 00453358: MOV EBP,0x1
// 0045335d: MOV EAX,dword ptr [EDI + 0x148]
//   Label: LAB_0045335d
// 00453363: DEC EAX
// 00453364: CMP EBP,EAX
// 00453366: JGE 0x00450791
//   XREF to: 00450791 (CONDITIONAL_JUMP)
// 0045336c: MOV ECX,dword ptr [0x013da774]
//   XREF to: 013da774 (READ)
// 00453372: MOV EBX,EBP
// 00453374: MOV EAX,[0x013da770]
//   XREF to: 013da770 (READ)
// 00453379: SUB EBX,ECX
// 0045337b: ADD EAX,EAX
// 0045337d: MOV EBX,dword ptr [EBX*0x4 + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 00453384: ADD EBX,EAX
// 00453386: MOV EAX,dword ptr [EDI + 0x144]
// 0045338c: IMUL EAX,EBP
// 0045338f: MOV dword ptr [ESP + 0x10],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 00453393: MOV EBX,dword ptr [EDI + 0x158]
// 00453399: SHL EAX,0x2
// 0045339c: MOV CL,byte ptr [0x013bc260]
//   XREF to: 013bc260 (READ)
// 004533a2: ADD EBX,EAX
// 004533a4: MOV EAX,EBP
// 004533a6: SAR EAX,CL
// 004533a8: IMUL EAX,EAX,0x140
// 004533ae: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 004533b2: MOV ECX,0x13da778
//   XREF to: 013da778 (DATA)
// 004533b7: MOV EBX,0xbbb9b8
//   XREF to: 00bbb9b8 (DATA)
// 004533bc: ADD ECX,EAX
// 004533be: ADD EBX,EAX
// 004533c0: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 004533c4: TEST EBP,0x1
// 004533ca: JNZ 0x00453444
//   XREF to: 00453444 (CONDITIONAL_JUMP)
// 004533d0: CMP dword ptr [EDI + 0x14c],0x1
// 004533d7: JNZ 0x004533f4
//   XREF to: 004533f4 (CONDITIONAL_JUMP)
// 004533d9: MOV EDX,dword ptr [EDI + 0x144]
// 004533df: PUSH EDX
// 004533e0: PUSH ECX
// 004533e1: PUSH EBX
// 004533e2: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x20] (READ)
// 004533e6: PUSH EAX
// 004533e7: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 004533eb: PUSH EDX
// 004533ec: CALL core_dstrender.cpp_blendTextureWithLightmapMMX_FUN_00493860
//   XREF to: 00493860 (UNCONDITIONAL_CALL)
// 004533f1: ADD ESP,0x14
// 004533f4: CMP dword ptr [EDI + 0x14c],0x2
//   Label: LAB_004533f4
// 004533fb: JZ 0x00453423
//   XREF to: 00453423 (CONDITIONAL_JUMP)
// 004533fd: IMUL EBX,ESI,0xc
//   Label: LAB_004533fd
// 00453400: CMP ESI,dword ptr [0x013bc264]
//   XREF to: 013bc264 (READ)
// 00453406: JL 0x00453495
//   XREF to: 00453495 (CONDITIONAL_JUMP)
// 0045340c: INC EBP
//   Label: LAB_0045340c
// 0045340d: JMP 0x0045335d
//   XREF to: 0045335d (UNCONDITIONAL_JUMP)
// 00453412: MOV ECX,EAX
//   Label: LAB_00453412
// 00453414: SHL EBP,0x8
// 00453417: SHL ECX,0x10
// 0045341a: OR ECX,EBP
// 0045341c: OR ECX,EBX
// 0045341e: JMP 0x00453345
//   XREF to: 00453345 (UNCONDITIONAL_JUMP)
// 00453423: MOV EAX,dword ptr [EDI + 0x144]
//   Label: LAB_00453423
// 00453429: PUSH EAX
// 0045342a: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x24] (READ)
// 0045342e: PUSH EDX
// 0045342f: PUSH EBX
// 00453430: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x20] (READ)
// 00453434: PUSH ECX
// 00453435: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 00453439: PUSH EBX
// 0045343a: CALL core_dstrender.cpp_blendLightmapToTextureMMX_Variant2_FUN_00492f03
//   XREF to: 00492f03 (UNCONDITIONAL_CALL)
// 0045343f: ADD ESP,0x14
// 00453442: JMP 0x004533fd
//   XREF to: 004533fd (UNCONDITIONAL_JUMP)
// 00453444: CMP dword ptr [EDI + 0x14c],0x1
//   Label: LAB_00453444
// 0045344b: JNZ 0x00453468
//   XREF to: 00453468 (CONDITIONAL_JUMP)
// 0045344d: MOV EDX,dword ptr [EDI + 0x144]
// 00453453: PUSH EDX
// 00453454: PUSH ECX
// 00453455: PUSH EBX
// 00453456: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x20] (READ)
// 0045345a: PUSH EAX
// 0045345b: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 0045345f: PUSH EDX
// 00453460: CALL core_dstrender.cpp_blendLightmapToTextureMMX_FUN_00493dc4
//   XREF to: 00493dc4 (UNCONDITIONAL_CALL)
// 00453465: ADD ESP,0x14
// 00453468: CMP dword ptr [EDI + 0x14c],0x2
//   Label: LAB_00453468
// 0045346f: JNZ 0x004533fd
//   XREF to: 004533fd (CONDITIONAL_JUMP)
// 00453471: MOV EAX,dword ptr [EDI + 0x144]
// 00453477: PUSH EAX
// 00453478: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x24] (READ)
// 0045347c: PUSH EDX
// 0045347d: PUSH EBX
// 0045347e: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x20] (READ)
// 00453482: PUSH ECX
// 00453483: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 00453487: PUSH EBX
// 00453488: CALL core_dstrender.cpp_blendBilerpTextureWithLightmapMMX_FUN_00493450
//   XREF to: 00493450 (UNCONDITIONAL_CALL)
// 0045348d: ADD ESP,0x14
// 00453490: JMP 0x004533fd
//   XREF to: 004533fd (UNCONDITIONAL_JUMP)
// 00453495: MOV EDX,dword ptr [EBX + 0x13bc270]
//   Label: LAB_00453495
//   XREF to: 013bc270 (READ)
//   XREF to: 013bc27c (READ)
// 0045349b: CMP EBP,EDX
// 0045349d: JNZ 0x0045340c
//   XREF to: 0045340c (CONDITIONAL_JUMP)
// 004534a3: MOV ECX,dword ptr [EBX + 0x13bc268]
//   XREF to: 013bc268 (READ)
//   XREF to: 013bc274 (READ)
// 004534a9: PUSH ECX
// 004534aa: PUSH EDX
// 004534ab: MOV EDX,dword ptr [EBX + 0x13bc26c]
//   XREF to: 013bc26c (READ)
//   XREF to: 013bc278 (READ)
// 004534b1: PUSH EDX
// 004534b2: PUSH EDI
// 004534b3: ADD EBX,0xc
// 004534b6: INC ESI
// 004534b7: CALL core_dcamera.cpp_CDemonCamera_blendLightmapPixel16_FUN_00453db0
//   XREF to: 00453db0 (UNCONDITIONAL_CALL)
// 004534bc: ADD ESP,0x10
// 004534bf: CMP ESI,dword ptr [0x013bc264]
//   XREF to: 013bc264 (READ)
// 004534c5: JL 0x00453495
//   XREF to: 00453495 (CONDITIONAL_JUMP)
// 004534c7: INC EBP
// 004534c8: JMP 0x0045335d
//   XREF to: 0045335d (UNCONDITIONAL_JUMP)
// 004534cd: MOV EBP,0x1
//   Label: LAB_004534cd
// 004534d2: MOV EAX,dword ptr [EDI + 0x148]
//   Label: LAB_004534d2
// 004534d8: DEC EAX
// 004534d9: CMP EBP,EAX
// 004534db: JGE 0x00450791
//   XREF to: 00450791 (CONDITIONAL_JUMP)
// 004534e1: MOV EBX,dword ptr [0x013da774]
//   XREF to: 013da774 (READ)
// 004534e7: MOV EAX,EBP
// 004534e9: SUB EAX,EBX
// 004534eb: LEA EBX,[EAX*0x4 + 0x0]
// 004534f2: MOV EAX,[0x013da770]
//   XREF to: 013da770 (READ)
// 004534f7: MOV EBX,dword ptr [EBX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 004534fd: SHL EAX,0x2
// 00453500: ADD EBX,EAX
// 00453502: MOV EAX,dword ptr [EDI + 0x144]
// 00453508: IMUL EAX,EBP
// 0045350b: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 0045350f: MOV EBX,dword ptr [EDI + 0x158]
// 00453515: SHL EAX,0x2
// 00453518: MOV CL,byte ptr [0x013bc260]
//   XREF to: 013bc260 (READ)
// 0045351e: ADD EBX,EAX
// 00453520: MOV EAX,EBP
// 00453522: SAR EAX,CL
// 00453524: IMUL EAX,EAX,0x140
// 0045352a: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x28] (DATA)
// 0045352d: MOV ECX,0x13da778
//   XREF to: 013da778 (DATA)
// 00453532: MOV EBX,0xbbb9b8
//   XREF to: 00bbb9b8 (DATA)
// 00453537: ADD ECX,EAX
// 00453539: ADD EBX,EAX
// 0045353b: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0045353f: TEST EBP,0x1
// 00453545: JNZ 0x004535aa
//   XREF to: 004535aa (CONDITIONAL_JUMP)
// 00453547: CMP dword ptr [EDI + 0x14c],0x1
// 0045354e: JNZ 0x0045356b
//   XREF to: 0045356b (CONDITIONAL_JUMP)
// 00453550: MOV EDX,dword ptr [EDI + 0x144]
// 00453556: PUSH EDX
// 00453557: PUSH ECX
// 00453558: PUSH EBX
// 00453559: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x28] (READ)
// 0045355d: PUSH EAX
// 0045355e: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 00453562: PUSH EDX
// 00453563: CALL core_dstrender.cpp_blendLightmapToTexture32BitInputOutput_FUN_004926e1
//   XREF to: 004926e1 (UNCONDITIONAL_CALL)
// 00453568: ADD ESP,0x14
// 0045356b: CMP dword ptr [EDI + 0x14c],0x2
//   Label: LAB_0045356b
// 00453572: JZ 0x00453589
//   XREF to: 00453589 (CONDITIONAL_JUMP)
// 00453574: IMUL EBX,ESI,0xc
//   Label: LAB_00453574
// 00453577: CMP ESI,dword ptr [0x013bc264]
//   XREF to: 013bc264 (READ)
// 0045357d: JL 0x004535fb
//   XREF to: 004535fb (CONDITIONAL_JUMP)
// 00453583: INC EBP
//   Label: LAB_00453583
// 00453584: JMP 0x004534d2
//   XREF to: 004534d2 (UNCONDITIONAL_JUMP)
// 00453589: MOV EAX,dword ptr [EDI + 0x144]
//   Label: LAB_00453589
// 0045358f: PUSH EAX
// 00453590: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 00453594: PUSH EDX
// 00453595: PUSH EBX
// 00453596: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x28] (READ)
// 0045359a: PUSH ECX
// 0045359b: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 0045359f: PUSH EBX
// 004535a0: CALL core_dstrender.cpp_blendBilerpLightmapToTexture64BitOutput_FUN_004917bc
//   XREF to: 004917bc (UNCONDITIONAL_CALL)
// 004535a5: ADD ESP,0x14
// 004535a8: JMP 0x00453574
//   XREF to: 00453574 (UNCONDITIONAL_JUMP)
// 004535aa: CMP dword ptr [EDI + 0x14c],0x1
//   Label: LAB_004535aa
// 004535b1: JNZ 0x004535ce
//   XREF to: 004535ce (CONDITIONAL_JUMP)
// 004535b3: MOV EDX,dword ptr [EDI + 0x144]
// 004535b9: PUSH EDX
// 004535ba: PUSH ECX
// 004535bb: PUSH EBX
// 004535bc: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x28] (READ)
// 004535c0: PUSH EAX
// 004535c1: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 004535c5: PUSH EDX
// 004535c6: CALL core_dstrender.cpp_blendLightmapToTexture64BitOutput_FUN_00492bd5
//   XREF to: 00492bd5 (UNCONDITIONAL_CALL)
// 004535cb: ADD ESP,0x14
// 004535ce: CMP dword ptr [EDI + 0x14c],0x2
//   Label: LAB_004535ce
// 004535d5: JNZ 0x00453574
//   XREF to: 00453574 (CONDITIONAL_JUMP)
// 004535d7: MOV EAX,dword ptr [EDI + 0x144]
// 004535dd: PUSH EAX
// 004535de: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 004535e2: PUSH EDX
// 004535e3: PUSH EBX
// 004535e4: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x28] (READ)
// 004535e8: PUSH ECX
// 004535e9: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 004535ed: PUSH EBX
// 004535ee: CALL core_dstrender.cpp_blendBilerpLightmapToTexture64BitOutput_FUN_00491c9a
//   XREF to: 00491c9a (UNCONDITIONAL_CALL)
// 004535f3: ADD ESP,0x14
// 004535f6: JMP 0x00453574
//   XREF to: 00453574 (UNCONDITIONAL_JUMP)
// 004535fb: MOV EDX,dword ptr [EBX + 0x13bc270]
//   Label: LAB_004535fb
//   XREF to: 013bc270 (READ)
//   XREF to: 013bc27c (READ)
// 00453601: CMP EBP,EDX
// 00453603: JNZ 0x00453583
//   XREF to: 00453583 (CONDITIONAL_JUMP)
// 00453609: MOV ECX,dword ptr [EBX + 0x13bc268]
//   XREF to: 013bc268 (READ)
//   XREF to: 013bc274 (READ)
// 0045360f: PUSH ECX
// 00453610: PUSH EDX
// 00453611: MOV EDX,dword ptr [EBX + 0x13bc26c]
//   XREF to: 013bc26c (READ)
//   XREF to: 013bc278 (READ)
// 00453617: PUSH EDX
// 00453618: PUSH EDI
// 00453619: ADD EBX,0xc
// 0045361c: INC ESI
// 0045361d: CALL core_dcamera.cpp_CDemonCamera_blendLightmapPixel32_FUN_00453d10
//   XREF to: 00453d10 (UNCONDITIONAL_CALL)
// 00453622: ADD ESP,0x10
// 00453625: CMP ESI,dword ptr [0x013bc264]
//   XREF to: 013bc264 (READ)
// 0045362b: JL 0x004535fb
//   XREF to: 004535fb (CONDITIONAL_JUMP)
// 0045362d: INC EBP
// 0045362e: JMP 0x004534d2
//   XREF to: 004534d2 (UNCONDITIONAL_JUMP)
