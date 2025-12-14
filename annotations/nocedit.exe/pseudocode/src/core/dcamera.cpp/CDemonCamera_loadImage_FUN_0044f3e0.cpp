// Name: core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0
// Address: 0044f3e0
// Address Range: [[0044f3e0, 004502d5]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0(CDemonCamera * this_ptr, char * filename)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_loadImage_FUN_0044f3e0(CDemonCamera *this_ptr,char *filename)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  char cVar4;
  FILE *pFVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  BADSPACEBASE *in_ESP;
  uint uVar18;
  uint uVar19;
  char *pcVar20;
  uint uVar21;
  SRGBColorPalette *pSVar22;
  char *pcVar23;
  uint uVar24;
  int *piVar25;
  uint *puVar26;
  uint uVar27;
  uint uVar28;
  byte bVar29;
  FILE *in_stack_0000000c;
  FILE *in_stack_00000010;
  int iStack00000014;
  int iStack00000018;
  char *in_stack_0000001c;
  int iStack00000024;
  int iStack00000028;
  char *in_stack_00000030;
  int in_stack_0000003c;
  char acStack_e0 [8];
  char acStack_d8 [80];
  char local_88 [8];
  int local_80;
  uint local_7c;
  uint local_78;
  int local_70;
  int local_6c [4];
  int local_5c;
  uint *local_58;
  int local_54;
  uint *local_50;
  uint uStack_4c;
  int local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int local_14;
  int iVar30;
  
  bVar29 = 0;
  pcVar23 = &stack0xfffffebc;
  do {
    cVar4 = *filename;
    *pcVar23 = cVar4;
    pcVar20 = &stack0xfffffebc;
    if (cVar4 == '\0') break;
    cVar4 = filename[1];
    filename = filename + 2;
    pcVar23[1] = cVar4;
    pcVar23 = pcVar23 + 2;
    pcVar20 = &stack0xfffffebc;
  } while (cVar4 != '\0');
  do {
    pcVar23 = pcVar20;
    if (*pcVar20 == '.') goto LAB_0044f429;
    if (*pcVar20 == '\0') break;
    pcVar23 = pcVar20 + 1;
    if (*pcVar23 == '.') goto LAB_0044f429;
    pcVar20 = pcVar20 + 2;
  } while (*pcVar23 != '\0');
  pcVar23 = (char *)0x0;
LAB_0044f429:
  if (pcVar23 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\dcamera.cpp";
    g_CurrentLineNumber = 0x98e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonCamera::loadImage - no extention");
  }
  pcVar20 = ".ACT";
  do {
    cVar4 = *pcVar20;
    *pcVar23 = cVar4;
    if (cVar4 == '\0') break;
    cVar4 = pcVar20[1];
    pcVar20 = pcVar20 + 2;
    pcVar23[1] = cVar4;
    pcVar23 = pcVar23 + 2;
  } while (cVar4 != '\0');
  pFVar5 = engine_dosio_c_getFile_FUN_00481a50("backdrop",&stack0xfffffec0,"rb");
  if ((pFVar5 != (FILE *)0x0) ||
     (pFVar5 = engine_dosio_c_getFile_FUN_00481a50("art",&stack0xfffffec4,"rb"),
     pFVar5 != (FILE *)0x0)) {
    crt_stdio_c_fread_FUN_005fd990(&g_CameraImagePaletteData,0x100,3,pFVar5);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar5,"..\\core\\dcamera.cpp",0x99b);
    pcVar23 = acStack_e0;
    do {
      cVar4 = *in_stack_0000001c;
      *pcVar23 = cVar4;
      if (cVar4 == '\0') break;
      cVar4 = in_stack_0000001c[1];
      in_stack_0000001c = in_stack_0000001c + 2;
      pcVar23[1] = cVar4;
      pcVar23 = pcVar23 + 2;
    } while (cVar4 != '\0');
    pcVar23 = acStack_e0;
    do {
      pcVar20 = pcVar23;
      if (*pcVar23 == '.') goto LAB_0044f4fd;
      if (*pcVar23 == '\0') break;
      pcVar20 = pcVar23 + 1;
      if (*pcVar20 == '.') goto LAB_0044f4fd;
      pcVar23 = pcVar23 + 2;
    } while (*pcVar20 != '\0');
    pcVar20 = (char *)0x0;
LAB_0044f4fd:
    if (pcVar20 == (char *)0x0) {
      g_CurrentFilename = "..\\core\\dcamera.cpp";
      g_CurrentLineNumber = 0x9a1;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonCamera::loadImage - no ext");
    }
    pcVar23 = ".fog";
    do {
      cVar4 = *pcVar23;
      *pcVar20 = cVar4;
      if (cVar4 == '\0') break;
      cVar4 = pcVar23[1];
      pcVar23 = pcVar23 + 2;
      pcVar20[1] = cVar4;
      pcVar20 = pcVar20 + 2;
    } while (cVar4 != '\0');
    pFVar5 = engine_dosio_c_getFile_FUN_00481a50("backdrop",acStack_e0 + 4,"rb");
    if (pFVar5 != (FILE *)0x0) {
      crt_stdio_c_fread_FUN_005fd990(&g_CameraFogGrid,0x1000,1,pFVar5);
      if (g_CameraFogGrid.density_multiplier == 0) {
        crt_memory_c_memset_FUN_005fde40(g_CameraImageDecompressBuffer,0,0x12c000);
      }
      else {
        g_ImageBytesPerPixel = 0x10;
        if ((g_CameraFogGrid.scroll_vector.x == 0 && g_CameraFogGrid.scroll_vector.y == 0) &&
            g_CameraFogGrid.scroll_vector.z == 0) {
          g_ImageBytesPerPixel = 1;
        }
        crt_stdio_c_fread_FUN_005fd990(&local_80,3,1,in_stack_0000000c);
        local_7c = local_7c & 0xffffff;
        iVar6 = crt_string_c_strcmp_FUN_005fef20((char *)&local_7c,"LZW");
        if ((iVar6 == 0) ||
           (iVar6 = crt_string_c_strcmp_FUN_005fef20(local_88,"EFD"), iVar6 == 0)) {
          iVar6 = engine_dosio_c_getFileSize_FUN_00481880("backdrop",acStack_d8);
          local_7c = iVar6 - 0x1003;
          if ((int)local_7c < 1) {
            g_CurrentFilename = "..\\core\\dcamera.cpp";
            g_CurrentLineNumber = 0x9c1;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze loading %s");
          }
          if (500000 < local_78) {
            g_CurrentFilename = "..\\core\\dcamera.cpp";
            g_CurrentLineNumber = 0x9c7;
            core_main_c_displayErrorAndQuit_FUN_00506f10("%s too big to fit in decompress buffer");
          }
          crt_stdio_c_fread_FUN_005fd990(g_CameraLoadImageReadBuffer,local_78,1,in_stack_00000010);
          support_codec_cpp_CLZWDecompress_init_FUN_0043f4d0(&g_CLZWDecompressInstance);
          local_6c[0] = g_ImageBytesPerPixel * 0x12c00;
          iVar6 = support_codec_cpp_CLZWDecompress_processBuffer_FUN_0043f5d0
                            (&g_CLZWDecompressInstance,(byte *)g_CameraLoadImageReadBuffer,&local_70
                             ,(byte *)g_CameraImageDecompressBuffer,local_6c,1);
          if (iVar6 == 0) {
            g_CurrentFilename = "..\\core\\dcamera.cpp";
            g_CurrentLineNumber = 0x9d0;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Error decompressing %s");
          }
          local_80 = 0;
          if (0 < g_ImageBytesPerPixel) {
            iVar6 = 0;
            iVar30 = -0x12c00;
            local_14 = 0x12c00;
            do {
              iStack_18 = local_14;
              local_24 = iVar6;
              local_20 = iVar30;
              iStack_1c = iVar6;
              do {
                iVar13 = 0;
                iVar17 = 0;
                iVar14 = iStack_1c;
                do {
                  iVar17 = (*(int *)(g_CameraPlaneWorkBuffer.pixels[0xef] +
                                    iVar13 + local_24 + 0x13d) >> 0x18) + iVar17;
                  cVar4 = (char)iVar17 * '\x04';
                  if (0 < local_80) {
                    cVar4 = cVar4 + g_CameraImageDecompressBuffer[0].pixels[0][local_20 + iVar13];
                  }
                  iVar13 = iVar13 + 1;
                  g_CameraImageDecompressBuffer[0].pixels[0][iVar14] = cVar4;
                  iVar14 = iVar14 + 1;
                } while (iVar13 < 0x140);
                local_20 = local_20 + 0x140;
                iStack_1c = iStack_1c + 0x140;
                local_24 = local_24 + 0x140;
              } while (iStack_1c != local_14);
              local_14 = local_14 + 0x12c00;
              iVar6 = iVar6 + 0x12c00;
              iVar30 = iVar30 + 0x12c00;
              local_80 = local_80 + 1;
            } while (local_80 < g_ImageBytesPerPixel);
          }
        }
        else {
          crt_stdio_c_fseek_FUN_005ffacc(in_stack_0000000c,-3,1);
          crt_stdio_c_fread_FUN_005fd990
                    (g_CameraImageDecompressBuffer,0x12c00,g_ImageBytesPerPixel,in_stack_0000000c);
        }
      }
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_00000010,"..\\core\\dcamera.cpp",0xa09);
    }
    pFVar5 = engine_dosio_c_getFile_FUN_00481a50
                       ("backdrop",in_stack_00000030,"rb");
    if ((pFVar5 != (FILE *)0x0) ||
       (pFVar5 = engine_dosio_c_getFile_FUN_00481a50("art",in_stack_00000030,"rb")
       , pFVar5 != (FILE *)0x0)) {
      iVar30 = 0;
      iVar6 = 0;
      do {
        uVar21 = (uint)(&g_CameraImagePaletteData.colors[0].b)[iVar30];
        uVar24 = (uint)(&g_CameraImagePaletteData.colors[0].r)[iVar30];
        uVar8 = (uint)(&g_CameraImagePaletteData.colors[0].g)[iVar30];
        if (g_BitsPerPixel == 0x20) {
          uVar21 = uVar21 << ((byte)g_BlueBitPosition & 0x1f) |
                   uVar8 << ((byte)g_GreenBitPosition & 0x1f) |
                   uVar24 << ((byte)g_RedBitPosition & 0x1f);
        }
        else {
          uVar21 = uVar8 << 8 | uVar24 << 0x10 | uVar21;
        }
        iVar14 = iVar6 + 4;
        iVar30 = iVar30 + 3;
        *(uint *)((int)g_CameraConvertedPalette + iVar6) = uVar21;
        iVar6 = iVar14;
      } while (iVar14 != 0x400);
      crt_stdio_c_fread_FUN_005fd990(g_CameraIndexedImageData,0x280,0x1e0,pFVar5);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar5,"..\\core\\dcamera.cpp",0xa20);
      iVar6 = *(int *)(in_stack_0000003c + 0x148);
      if (iVar6 == 0xf0) {
        iStack00000018 = 0;
        do {
          local_5c = 0;
          pbVar7 = (byte *)(g_CameraIndexedImageData + iStack00000018);
          piVar25 = (int *)(*(int *)(in_stack_0000003c + 0x158) + iStack00000018);
          do {
            local_5c = local_5c + 1;
            *piVar25 = ((g_CameraConvertedPalette[*pbVar7] & 0xfcfcfc) >> 2) +
                       ((g_CameraConvertedPalette[pbVar7[1]] & 0xfcfcfc) >> 2) +
                       ((g_CameraConvertedPalette[pbVar7[0x280]] & 0xfcfcfc) >> 2) +
                       ((g_CameraConvertedPalette[pbVar7[0x281]] & 0xfcfcfc) >> 2);
            pbVar7 = pbVar7 + 2;
            piVar25 = piVar25 + 1;
          } while (local_5c < 0x140);
          iStack00000018 = iStack00000018 + 0x500;
        } while (iStack00000018 != 0x4b000);
      }
      else if (iVar6 == 0x1e0) {
        pcVar23 = g_CameraIndexedImageData;
        iVar6 = 0;
        puVar12 = *(uint **)(in_stack_0000003c + 0x158);
        do {
          bVar1 = *pcVar23;
          pcVar23 = (char *)((byte *)pcVar23 + 1);
          iVar6 = iVar6 + 1;
          *puVar12 = g_CameraConvertedPalette[bVar1];
          puVar12 = puVar12 + 1;
        } while (iVar6 < 0x4b000);
      }
      else if (iVar6 < 0x1e1) {
        local_50 = *(uint **)(in_stack_0000003c + 0x158);
        uVar3 = 0x9600000 / (longlong)*(int *)(in_stack_0000003c + 0x144);
        uStack_4c = (uint)((longlong)
                           ((ulonglong)(uint)((int)uVar3 >> 0x1f) << 0x20 | uVar3 & 0xffffffff) /
                          (longlong)*(int *)(in_stack_0000003c + 0x148));
        local_44 = 0;
        if (0 < *(int *)(in_stack_0000003c + 0x148)) {
          in_stack_00000010 = (FILE *)0x0;
          do {
            local_48 = 0;
            if (0 < *(int *)(in_stack_0000003c + 0x144)) {
              in_stack_0000000c = (FILE *)0x0;
              local_2c = (int)in_stack_00000010;
              do {
                uVar8 = (int)in_stack_0000000c / *(int *)(in_stack_0000003c + 0x144);
                uVar24 = (int)in_stack_00000010 / *(int *)(in_stack_0000003c + 0x148);
                local_34 = (int)(0x27d80 / (longlong)*(int *)(in_stack_0000003c + 0x144)) + uVar8;
                iVar30 = ((int)uVar24 >> 8) * 0x280;
                local_30 = (int)(0x1de20 / (longlong)*(int *)(in_stack_0000003c + 0x148)) + uVar24;
                local_28 = (int)uVar8 >> 8;
                uVar21 = g_CameraConvertedPalette[(byte)g_CameraIndexedImageData[local_28 + iVar30]]
                ;
                iVar14 = 0xff - (uVar24 & 0xff);
                uVar16 = uVar21 >> 8 & 0xff;
                uVar9 = uVar21 >> 0x10 & 0xff;
                iVar6 = 0xff - (uVar8 & 0xff);
                local_24 = (int)local_34 >> 8;
                uVar8 = g_CameraConvertedPalette[(byte)g_CameraIndexedImageData[iVar30 + local_24]];
                uVar10 = uVar8 >> 0x10 & 0xff;
                uVar18 = uVar8 >> 8 & 0xff;
                uVar19 = local_34 & 0xff;
                local_20 = ((int)local_30 >> 8) * 0x280;
                uVar24 = g_CameraConvertedPalette
                         [(byte)g_CameraIndexedImageData[local_20 + local_28]];
                uVar11 = uVar24 >> 0x10 & 0xff;
                uVar27 = uVar24 >> 8 & 0xff;
                uVar28 = local_30 & 0xff;
                iStack_1c = uVar27 * iVar6;
                uVar2 = g_CameraConvertedPalette
                        [(byte)g_CameraIndexedImageData[local_20 + local_24]];
                local_40 = uVar2 & 0xff;
                local_38 = uVar2 >> 0x10 & 0xff;
                local_3c = uVar2 >> 8 & 0xff;
                iStack_18 = local_3c * uVar19;
                uVar21 = ((uVar21 & 0xff) * iVar14 + (uVar21 & 0xff) * iVar6 +
                          (uVar8 & 0xff) * uVar19 + (uVar8 & 0xff) * iVar14 +
                          (uVar24 & 0xff) * iVar6 + (uVar24 & 0xff) * uVar28 +
                         local_40 * uVar28 + local_40 * uVar19) / uStack_4c;
                uVar8 = (uVar16 * iVar14 + uVar16 * iVar6 + uVar18 * uVar19 + uVar18 * iVar14 +
                         iStack_1c + uVar27 * uVar28 + local_3c * uVar28 + iStack_18) / uStack_4c;
                uVar24 = (uVar9 * iVar14 + uVar9 * iVar6 + iVar14 * uVar10 + uVar10 * uVar19 +
                          uVar11 * uVar28 + uVar11 * iVar6 + local_38 * uVar28 + uVar19 * local_38)
                         / uStack_4c;
                if (0xff < uVar21) {
                  uVar21 = 0xff;
                }
                if (0xff < uVar8) {
                  uVar8 = 0xff;
                }
                if (0xff < uVar24) {
                  uVar24 = 0xff;
                }
                local_48 = local_48 + 1;
                *local_50 = uVar21 | uVar8 << 8 | uVar24 << 0x10;
                local_50 = local_50 + 1;
                in_stack_0000000c = (FILE *)((int)in_stack_0000000c + 0x28000);
              } while (local_48 < *(int *)(in_stack_0000003c + 0x144));
            }
            in_stack_00000010 = (FILE *)((int)in_stack_00000010 + 0x1e000);
            local_44 = local_44 + 1;
          } while (local_44 < *(int *)(in_stack_0000003c + 0x148));
        }
      }
      else {
        local_58 = *(uint **)(in_stack_0000003c + 0x158);
        local_54 = 0;
        if (0 < *(int *)(in_stack_0000003c + 0x148)) {
          iStack00000014 = 0;
          do {
            iVar6 = 0;
            if (0 < *(int *)(in_stack_0000003c + 0x144)) {
              iVar30 = 0;
              do {
                iVar14 = iVar30 / *(int *)(in_stack_0000003c + 0x144);
                iVar30 = iVar30 + 0x280;
                *local_58 = g_CameraConvertedPalette
                            [(byte)g_CameraIndexedImageData
                                   [iVar14 + (iStack00000014 / *(int *)(in_stack_0000003c + 0x148))
                                             * 0x280]];
                local_58 = local_58 + 1;
                iVar6 = iVar6 + 1;
              } while (iVar6 < *(int *)(in_stack_0000003c + 0x144));
            }
            iStack00000014 = iStack00000014 + 0x1e0;
            local_54 = local_54 + 1;
          } while (local_54 < *(int *)(in_stack_0000003c + 0x148));
        }
      }
      iVar30 = 0;
      iVar6 = 0;
      do {
        iVar17 = 0;
        iVar14 = iVar6;
        do {
          iVar15 = iVar17 >> 0x1f;
          iVar13 = iVar17 + iVar15 * -0x100;
          iVar17 = iVar17 + 0x280;
          *(char *)((int)g_CameraTextureWorkBuffer + iVar14) =
               g_CameraIndexedImageData
               [((int)(iVar13 - (uint)(iVar15 << 7 < 0)) >> 8) +
                ((int)((iVar30 + (iVar30 >> 0x1f) * -0x100) - (uint)((iVar30 >> 0x1f) << 7 < 0)) >>
                8) * 0x280];
          iVar14 = iVar14 + 1;
        } while (iVar17 != 0x28000);
        iVar6 = iVar6 + 0x100;
        iVar30 = iVar30 + 0x1e0;
      } while (iVar6 != 0x10000);
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                (g_CDemonRendererPtr,&g_CameraBackdropTexture);
      puVar12 = g_CameraTextureWorkBuffer;
      puVar26 = g_CurrentTextureData;
      for (iVar6 = 0x4000; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar26 = *puVar12;
        puVar12 = puVar12 + (uint)bVar29 * -2 + 1;
        puVar26 = puVar26 + (uint)bVar29 * -2 + 1;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(char *)puVar26 = (char)*puVar12;
        puVar12 = (uint *)((int)puVar12 + (uint)bVar29 * -2 + 1);
        puVar26 = (uint *)((int)puVar26 + (uint)bVar29 * -2 + 1);
      }
      pSVar22 = &g_CameraImagePaletteData;
      pbVar7 = g_CurrentPalette;
      for (iVar6 = 0xc0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(uint *)pbVar7 = *(uint *)pSVar22->colors;
        pSVar22 = (SRGBColorPalette *)((int)pSVar22 + (uint)bVar29 * -8 + 4);
        pbVar7 = pbVar7 + (uint)bVar29 * -8 + 4;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pbVar7 = pSVar22->colors[0].r;
        pSVar22 = (SRGBColorPalette *)((int)pSVar22 + (uint)bVar29 * -2 + 1);
        pbVar7 = pbVar7 + (uint)bVar29 * -2 + 1;
      }
      engine_drender_cpp_CDemonRenderer_updateTexture_FUN_0048dc30
                (g_CDemonRendererPtr,&g_CameraBackdropTexture,&g_CameraImagePaletteData);
      core_event_cpp_FUN_004b19d0();
      if (g_WindowHeight == 0x180) {
        iStack00000028 = 0;
        iStack00000024 = 0;
        do {
          iVar30 = 0;
          iVar6 = 0;
          do {
            iVar14 = 0;
            if (0 < g_ImageBytesPerPixel) {
              iVar17 = ((int)((iVar6 + (iVar6 >> 0x1f) * -0x100) - (uint)((iVar6 >> 0x1f) << 7 < 0))
                       >> 8) + (iStack00000028 / 0xc0) * 0x140;
              iVar13 = iStack00000024 + iVar30;
              do {
                iVar14 = iVar14 + 1;
                g_CameraImageDecompressBuffer[0].pixels[0][iVar13] =
                     g_CameraImageDecompressBuffer[0].pixels[0][iVar17];
                iVar17 = iVar17 + 0x12c00;
                iVar13 = iVar13 + 0x12c00;
              } while (iVar14 < g_ImageBytesPerPixel);
            }
            iVar30 = iVar30 + 1;
            iVar6 = iVar6 + 0x140;
          } while (iVar30 < 0x100);
          iStack00000028 = iStack00000028 + 0xf0;
          iStack00000024 = iStack00000024 + 0x140;
        } while (iStack00000028 != 0xb400);
      }
    }
  }
  return;
}
