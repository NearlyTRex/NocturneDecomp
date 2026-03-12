// Name: core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0
// Address: 0044f3e0
// Address Range: [[0044f3e0, 004502d5]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_loadImage_FUN_0044f3e0(CDemonCamera *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_loadImage_FUN_0044f3e0(CDemonCamera *this_ptr,char *filename)

{
  char cVar1;
  char cVar4;
  _FILE *p_Var5;
  int iVar6;
  int iVar2;
  _FILE *p_Var3;
  int iVar4;
  byte *pbVar7;
  uint uVar8;
  uint uVar5;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar6;
  uint uVar7;
  int iVar12;
  int iVar8;
  uint *puVar13;
  int iVar14;
  int iVar9;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  char *pcVar21;
  char *pcVar22;
  char *pcVar10;
  char *pcVar11;
  uint uVar23;
  uint *puVar12;
  SRGBColorPalette *pSVar24;
  char *pcVar25;
  uint uVar26;
  int *piVar27;
  uint *puVar28;
  byte *pbVar13;
  uint uVar29;
  uint uVar30;
  byte bVar31;
  char local_144 [80];
  char local_f4 [80];
  int local_a4;
  char local_a0 [3];
  uint local_9c;
  int local_98;
  int local_94;
  uint *local_90;
  int local_8c;
  uint *local_88;
  uint local_84;
  int local_80;
  int local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int iStack_1c;
  int iStack_18;
  _FILE *local_14;
  ulonglong uVar3;
  uint uVar2;
  byte bVar1;
  
  bVar31 = 0;
  pcVar25 = local_144;
  pcVar21 = filename;
  do {
    cVar1 = *pcVar21;
    *pcVar25 = cVar1;
    pcVar22 = local_144;
    if (cVar1 == '\0') break;
    cVar1 = pcVar21[1];
    pcVar21 = pcVar21 + 2;
    pcVar25[1] = cVar1;
    pcVar25 = pcVar25 + 2;
    pcVar22 = local_144;
  } while (cVar1 != '\0');
  do {
    pcVar10 = pcVar22;
    if (*pcVar22 == '.') goto LAB_0044f429;
    if (*pcVar22 == '\0') break;
    pcVar10 = pcVar22 + 1;
    if (*pcVar10 == '.') goto LAB_0044f429;
    pcVar22 = pcVar22 + 2;
  } while (*pcVar10 != '\0');
  pcVar10 = (char *)0x0;
LAB_0044f429:
  if (pcVar10 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\dcamera.cpp";
    g_CurrentLineNumber = 0x98e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonCamera::loadImage - no extention");
  }
  pcVar11 = ".ACT";
  do {
    cVar1 = *pcVar11;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar11[1];
    pcVar11 = pcVar11 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  p_Var5 = engine_dosio_c_getFile_FUN_00481a50("backdrop",local_144,"rb");
  if ((p_Var5 != (_FILE *)0x0) ||
     (p_Var5 = engine_dosio_c_getFile_FUN_00481a50("art",local_144,"rb"),
     p_Var5 != (_FILE *)0x0)) {
    _fread(&g_CameraImagePaletteData,0x100,3,p_Var5);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var5,"..\\core\\dcamera.cpp",0x99b);
    pcVar10 = local_f4;
    pcVar11 = filename;
    do {
      cVar1 = *pcVar11;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    pcVar10 = local_f4;
    do {
      pcVar11 = pcVar10;
      if (*pcVar10 == '.') goto LAB_0044f4fd;
      if (*pcVar10 == '\0') break;
      pcVar11 = pcVar10 + 1;
      if (*pcVar11 == '.') goto LAB_0044f4fd;
      pcVar10 = pcVar10 + 2;
    } while (*pcVar11 != '\0');
    pcVar11 = (char *)0x0;
LAB_0044f4fd:
    if (pcVar11 == (char *)0x0) {
      g_CurrentFilename = "..\\core\\dcamera.cpp";
      g_CurrentLineNumber = 0x9a1;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonCamera::loadImage - no ext");
    }
    pcVar10 = ".fog";
    do {
      cVar1 = *pcVar10;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    local_14 = engine_dosio_c_getFile_FUN_00481a50("backdrop",local_f4,"rb");
    if (local_14 != (_FILE *)0x0) {
      _fread(&g_CameraFogGrid,0x1000,1,local_14);
      p_Var3 = local_14;
      if (g_CameraFogGrid.density_multiplier == 0) {
        memset(g_CameraImageDecompressBuffer,0,0x12c000);
      }
      else {
        g_ImageBytesPerPixel = 0x10;
        if ((g_CameraFogGrid.scroll_vector.x == 0 && g_CameraFogGrid.scroll_vector.y == 0) &&
            g_CameraFogGrid.scroll_vector.z == 0) {
          g_ImageBytesPerPixel = 1;
        }
        _fread(local_a0,3,1,local_14);
        iVar6 = _strcmp(local_a0,"LZW");
        if ((iVar6 == 0) ||
           (iVar2 = _strcmp(local_a0,"EFD"), iVar2 == 0)) {
          iVar2 = engine_dosio_c_getFileSize_FUN_00481880("backdrop",local_f4);
          local_9c = iVar2 - 0x1003;
          if ((int)local_9c < 1) {
            g_CurrentFilename = "..\\core\\dcamera.cpp";
            g_CurrentLineNumber = 0x9c1;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze loading %s",local_f4);
          }
          if (500000 < local_9c) {
            g_CurrentFilename = "..\\core\\dcamera.cpp";
            g_CurrentLineNumber = 0x9c7;
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("%s too big to fit in decompress buffer",local_f4);
          }
          _fread(g_CameraLoadImageReadBuffer,local_9c,1,local_14);
          support_codec_cpp_CLZWDecompress_init_FUN_0043f4d0(&g_CLZWDecompressInstance);
          local_98 = g_ImageBytesPerPixel * 0x12c00;
          iVar2 = support_codec_cpp_CLZWDecompress_processBuffer_FUN_0043f5d0
                            (&g_CLZWDecompressInstance,g_CameraLoadImageReadBuffer,(int *)&local_9c,
                             (char *)g_CameraImageDecompressBuffer,&local_98,1);
          if (iVar2 == 0) {
            g_CurrentFilename = "..\\core\\dcamera.cpp";
            g_CurrentLineNumber = 0x9d0;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Error decompressing %s",local_f4);
          }
          local_a4 = 0;
          if (0 < g_ImageBytesPerPixel) {
            local_34 = 0;
            local_30 = -0x12c00;
            local_38 = 0x12c00;
            do {
              local_48 = local_34;
              local_44 = local_30;
              local_40 = local_34;
              local_3c = local_38;
              do {
                iVar14 = 0;
                iVar18 = 0;
                iVar2 = local_40;
                do {
                  iVar18 = (*(int *)(g_CameraPlaneWorkBuffer.pixels[0xef] +
                                    iVar14 + local_48 + 0x13d) >> 0x18) + iVar18;
                  cVar4 = (char)iVar18 * '\x04';
                  if (0 < local_a4) {
                    cVar4 = cVar4 + g_CameraImageDecompressBuffer[0].pixels[0][local_44 + iVar14];
                  }
                  iVar14 = iVar14 + 1;
                  g_CameraImageDecompressBuffer[0].pixels[0][iVar2] = cVar4;
                  iVar2 = iVar2 + 1;
                } while (iVar14 < 0x140);
                local_44 = local_44 + 0x140;
                local_40 = local_40 + 0x140;
                local_48 = local_48 + 0x140;
              } while (local_40 != local_38);
              local_38 = local_38 + 0x12c00;
              local_34 = local_34 + 0x12c00;
              local_30 = local_30 + 0x12c00;
              local_a4 = local_a4 + 1;
            } while (local_a4 < g_ImageBytesPerPixel);
          }
        }
        else {
          _fseek(p_Var3,-3,1);
          _fread(g_CameraImageDecompressBuffer,0x12c00,g_ImageBytesPerPixel,p_Var3);
        }
      }
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_14,"..\\core\\dcamera.cpp",0xa09);
    }
    p_Var3 = engine_dosio_c_getFile_FUN_00481a50("backdrop",filename,"rb");
    if ((p_Var3 != (_FILE *)0x0) ||
       (p_Var3 = engine_dosio_c_getFile_FUN_00481a50("art",filename,"rb"),
       p_Var3 != (_FILE *)0x0)) {
      iVar4 = 0;
      iVar2 = 0;
      do {
        uVar23 = (uint)(&g_CameraImagePaletteData.colors[0].b)[iVar4];
        uVar26 = (uint)(&g_CameraImagePaletteData.colors[0].r)[iVar4];
        uVar7 = (uint)(&g_CameraImagePaletteData.colors[0].g)[iVar4];
        if (g_BitsPerPixel == 0x20) {
          uVar7 = uVar23 << (g_BlueBitPosition.bytes[0] & 0x1f) |
                  uVar7 << (g_GreenBitPosition.bytes[0] & 0x1f) |
                  uVar26 << (g_RedBitPosition.bytes[0] & 0x1f);
        }
        else {
          uVar7 = uVar7 << 8 | uVar26 << 0x10 | uVar23;
        }
        iVar9 = iVar2 + 4;
        iVar4 = iVar4 + 3;
        *(uint *)((int)g_CameraConvertedPalette + iVar2) = uVar7;
        iVar2 = iVar9;
      } while (iVar9 != 0x400);
      _fread(g_CameraIndexedImageData,0x280,0x1e0,p_Var3);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var3,"..\\core\\dcamera.cpp",0xa20);
      iVar2 = this_ptr->framebuffer_height;
      if (iVar2 == 0xf0) {
        local_20 = 0;
        do {
          local_94 = 0;
          pbVar7 = (byte *)(g_CameraIndexedImageData + local_20);
          piVar27 = (int *)((int)this_ptr->framebuffer_aligned + local_20);
          do {
            piVar27 = piVar27 + 1;
            local_94 = local_94 + 1;
            *piVar27 = ((g_CameraConvertedPalette[*pbVar7] & 0xfcfcfc) >> 2) +
                       ((g_CameraConvertedPalette[pbVar7[1]] & 0xfcfcfc) >> 2) +
                       ((g_CameraConvertedPalette[pbVar7[0x280]] & 0xfcfcfc) >> 2) +
                       ((g_CameraConvertedPalette[pbVar7[0x281]] & 0xfcfcfc) >> 2);
            pbVar7 = pbVar7 + 2;
            piVar27 = piVar27;
          } while (local_94 < 0x140);
          local_20 = local_20 + 0x500;
        } while (local_20 != 0x4b000);
      }
      else if (iVar2 == 0x1e0) {
        pcVar10 = g_CameraIndexedImageData;
        iVar2 = 0;
        puVar13 = this_ptr->framebuffer_aligned;
        do {
          bVar1 = *pcVar10;
          pcVar10 = (char *)((byte *)pcVar10 + 1);
          iVar2 = iVar2 + 1;
          *puVar13 = g_CameraConvertedPalette[bVar1];
          puVar13 = puVar13 + 1;
        } while (iVar2 < 0x4b000);
      }
      else if (iVar2 < 0x1e1) {
        local_88 = this_ptr->framebuffer_aligned;
        uVar3 = 0x9600000 / (longlong)this_ptr->framebuffer_width;
        local_84 = (uint)((longlong)
                          ((ulonglong)(uint)((int)uVar3 >> 0x1f) << 0x20 | uVar3 & 0xffffffff) /
                         (longlong)this_ptr->framebuffer_height);
        local_7c = 0;
        if (0 < this_ptr->framebuffer_height) {
          local_28 = 0;
          do {
            local_80 = 0;
            if (0 < this_ptr->framebuffer_width) {
              local_2c = 0;
              local_64 = local_28;
              do {
                uVar8 = local_2c / this_ptr->framebuffer_width;
                uVar5 = local_28 / this_ptr->framebuffer_height;
                local_6c = (int)(0x27d80 / (longlong)this_ptr->framebuffer_width) + uVar8;
                iVar4 = ((int)uVar5 >> 8) * 0x280;
                local_68 = (int)(0x1de20 / (longlong)this_ptr->framebuffer_height) + uVar5;
                local_60 = (int)uVar8 >> 8;
                uVar7 = g_CameraConvertedPalette[(byte)g_CameraIndexedImageData[local_60 + iVar4]];
                iVar9 = 0xff - (uVar5 & 0xff);
                uVar17 = uVar7 >> 8 & 0xff;
                uVar9 = uVar7 >> 0x10 & 0xff;
                iVar2 = 0xff - (uVar8 & 0xff);
                local_5c = (int)local_6c >> 8;
                uVar5 = g_CameraConvertedPalette[(byte)g_CameraIndexedImageData[iVar4 + local_5c]];
                uVar10 = uVar5 >> 0x10 & 0xff;
                uVar19 = uVar5 >> 8 & 0xff;
                uVar20 = local_6c & 0xff;
                local_58 = ((int)local_68 >> 8) * 0x280;
                uVar6 = g_CameraConvertedPalette
                        [(byte)g_CameraIndexedImageData[local_58 + local_60]];
                uVar11 = uVar6 >> 0x10 & 0xff;
                uVar29 = uVar6 >> 8 & 0xff;
                uVar30 = local_68 & 0xff;
                local_54 = uVar29 * iVar2;
                uVar2 = g_CameraConvertedPalette
                        [(byte)g_CameraIndexedImageData[local_58 + local_5c]];
                local_78 = uVar2 & 0xff;
                local_70 = uVar2 >> 0x10 & 0xff;
                local_74 = uVar2 >> 8 & 0xff;
                local_50 = local_74 * uVar20;
                uVar7 = ((uVar7 & 0xff) * iVar9 + (uVar7 & 0xff) * iVar2 +
                         (uVar5 & 0xff) * uVar20 + (uVar5 & 0xff) * iVar9 +
                         (uVar6 & 0xff) * iVar2 + (uVar6 & 0xff) * uVar30 +
                        local_78 * uVar30 + local_78 * uVar20) / local_84;
                uVar5 = (uVar17 * iVar9 + uVar17 * iVar2 + uVar19 * uVar20 + uVar19 * iVar9 +
                         local_54 + uVar29 * uVar30 + local_74 * uVar30 + local_50) / local_84;
                uVar6 = (uVar9 * iVar9 + uVar9 * iVar2 + iVar9 * uVar10 + uVar10 * uVar20 +
                         uVar11 * uVar30 + uVar11 * iVar2 + local_70 * uVar30 + uVar20 * local_70) /
                        local_84;
                if (0xff < uVar7) {
                  uVar7 = 0xff;
                }
                if (0xff < uVar5) {
                  uVar5 = 0xff;
                }
                if (0xff < uVar6) {
                  uVar6 = 0xff;
                }
                local_80 = local_80 + 1;
                *local_88 = uVar7 | uVar5 << 8 | uVar6 << 0x10;
                local_88 = local_88 + 1;
                local_2c = local_2c + 0x28000;
              } while (local_80 < this_ptr->framebuffer_width);
            }
            local_28 = local_28 + 0x1e000;
            local_7c = local_7c + 1;
          } while (local_7c < this_ptr->framebuffer_height);
        }
      }
      else {
        local_90 = this_ptr->framebuffer_aligned;
        local_8c = 0;
        if (0 < this_ptr->framebuffer_height) {
          local_24 = 0;
          do {
            iVar2 = 0;
            if (0 < this_ptr->framebuffer_width) {
              iVar4 = 0;
              do {
                iVar9 = iVar4 / this_ptr->framebuffer_width;
                iVar4 = iVar4 + 0x280;
                *local_90 = g_CameraConvertedPalette
                            [(byte)g_CameraIndexedImageData
                                   [iVar9 + (local_24 / this_ptr->framebuffer_height) * 0x280]];
                local_90 = local_90 + 1;
                iVar2 = iVar2 + 1;
              } while (iVar2 < this_ptr->framebuffer_width);
            }
            local_24 = local_24 + 0x1e0;
            local_8c = local_8c + 1;
          } while (local_8c < this_ptr->framebuffer_height);
        }
      }
      iVar4 = 0;
      iVar2 = 0;
      do {
        iVar12 = 0;
        iVar9 = iVar2;
        do {
          iVar15 = iVar12 >> 0x1f;
          iVar8 = iVar12 + iVar15 * -0x100;
          iVar12 = iVar12 + 0x280;
          *(char *)((int)g_CameraTextureWorkBuffer + iVar9) =
               g_CameraIndexedImageData
               [((int)(iVar8 - (uint)(iVar15 << 7 < 0)) >> 8) +
                ((int)((iVar4 + (iVar4 >> 0x1f) * -0x100) - (uint)((iVar4 >> 0x1f) << 7 < 0)) >> 8)
                * 0x280];
          iVar9 = iVar9 + 1;
        } while (iVar12 != 0x28000);
        iVar2 = iVar2 + 0x100;
        iVar4 = iVar4 + 0x1e0;
      } while (iVar2 != 0x10000);
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                (g_CDemonRendererPtr2,&g_CameraBackdropTexture);
      puVar12 = g_CameraTextureWorkBuffer;
      puVar28 = g_CurrentTextureData;
      for (iVar2 = 0x4000; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar28 = *puVar12;
        puVar12 = puVar12 + (uint)bVar31 * -2 + 1;
        puVar28 = puVar28 + (uint)bVar31 * -2 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        puVar28 = (uint *)((int)puVar28 + (uint)bVar31 * -2 + 1);
        *(char *)puVar28 = (char)*puVar12;
        puVar12 = (uint *)((int)puVar12 + (uint)bVar31 * -2 + 1);
        puVar28 = puVar28;
      }
      pSVar24 = &g_CameraImagePaletteData;
      pbVar13 = g_CurrentPalette;
      for (iVar2 = 0xc0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(uint *)pbVar13 = *(uint *)pSVar24->colors;
        pSVar24 = (SRGBColorPalette *)((int)pSVar24 + (uint)bVar31 * -8 + 4);
        pbVar13 = pbVar13 + (uint)bVar31 * -8 + 4;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        pSVar24 = (SRGBColorPalette *)((int)pSVar24 + (uint)bVar31 * -2 + 1);
        *pbVar13 = pSVar24->colors[0].r;
        pSVar24 = pSVar24;
        pbVar13 = pbVar13 + (uint)bVar31 * -2 + 1;
      }
      engine_drender_cpp_CDemonRenderer_updateTexture_FUN_0048dc30
                (g_CDemonRendererPtr2,&g_CameraBackdropTexture,&g_CameraImagePaletteData);
      _memset(g_CoronaBlurWorkBuffer,0,0x12d40);
      if (g_WindowHeight == 0x180) {
        iStack_18 = 0;
        iStack_1c = 0;
        do {
          iVar4 = 0;
          iVar2 = 0;
          do {
            iVar9 = 0;
            if (0 < g_ImageBytesPerPixel) {
              iVar8 = ((int)((iVar2 + (iVar2 >> 0x1f) * -0x100) - (uint)((iVar2 >> 0x1f) << 7 < 0))
                      >> 8) + (iStack_18 / 0xc0) * 0x140;
              iVar16 = iStack_1c + iVar4;
              do {
                iVar16 = iVar16 + 0x12c00;
                iVar9 = iVar9 + 1;
                g_CameraImageDecompressBuffer[0].pixels[0][iVar16] =
                     g_CameraImageDecompressBuffer[0].pixels[0][iVar8];
                iVar8 = iVar8 + 0x12c00;
                iVar16 = iVar16;
              } while (iVar9 < g_ImageBytesPerPixel);
            }
            iVar4 = iVar4 + 1;
            iVar2 = iVar2 + 0x140;
          } while (iVar4 < 0x100);
          iStack_18 = iStack_18 + 0xf0;
          iStack_1c = iStack_1c + 0x140;
        } while (iStack_18 != 0xb400);
      }
    }
  }
  return;
}
