// Name: core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0
// Address: 0044f3e0
// Address Range: [[0044f3e0, 004502d5]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0(CDemonCamera * this_ptr, char * filename)
// Cross-references:
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056b43b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dcamera_cpp_0061a12a
//   undefined4 s_ore\dcamera.cpp_0061a12e
//   TerminatedCString s_CDemonCamera_loadImage_n_0061a13e
//   TerminatedCString s_ACT_0061a165
//   undefined4 DAT_0061a166
//   undefined4 DAT_0061a167
//   undefined4 DAT_0061a168
//   TerminatedCString s_rb_0061a16a
//   string s_backdrop_0061a16d
//   TerminatedCString s_rb_0061a176
//   TerminatedCString s_art_0061a179
//   TerminatedCString s_core_dcamera_cpp_0061a17d
//   TerminatedCString s_core_dcamera_cpp_0061a191
//   TerminatedCString s_CDemonCamera_loadImage_n_0061a1a5
//   TerminatedCString s_fog_0061a1c6
//   undefined4 DAT_0061a1c7
//   undefined4 DAT_0061a1c8
//   undefined4 DAT_0061a1c9
//   TerminatedCString s_rb_0061a1cb
//   TerminatedCString s_backdrop_0061a1ce
//   TerminatedCString s_LZW_0061a1d7
//   TerminatedCString s_EFD_0061a1db
//   TerminatedCString s_backdrop_0061a1df
//   TerminatedCString s_core_dcamera_cpp_0061a1e8
//   TerminatedCString s_Hell_froze_loading_s_0061a1fc
//   TerminatedCString s_core_dcamera_cpp_0061a212
//   TerminatedCString s_s_too_big_to_fit_in_deco_0061a226
//   TerminatedCString s_core_dcamera_cpp_0061a24d
//   TerminatedCString s_Error_decompressing_s_0061a261
//   TerminatedCString s_core_dcamera_cpp_0061a278
//   TerminatedCString s_rb_0061a28c
//   TerminatedCString s_backdrop_0061a28f
//   TerminatedCString s_rb_0061a298
//   TerminatedCString s_art_0061a29b
//   TerminatedCString s_core_dcamera_cpp_0061a29f
//   SMRGLTextureBasic g_CameraBackdropTexture
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   int g_WindowHeight = 0xc8
//   int g_BitsPerPixel = 0x8
//   char[500000] g_CameraLoadImageReadBuffer
//   char[241][320] g_CoronaBlurWorkBuffer
//   SRGBColorPalette g_CameraImagePaletteData
//   undefined4 DAT_00c196f9
//   undefined4 DAT_00c196fa
//   undefined4 DAT_00c196fb
//   undefined4 DAT_00c196fc
//   undefined4 DAT_00c196fd
//   uint[256] g_CameraConvertedPalette
//   undefined4 DAT_00c19a00
//   undefined4 DAT_00fcfcfc
//   undefined4 DAT_00ffffff
//   CLZWDecompress g_CLZWDecompressInstance
//   SFogImagePlane g_CameraPlaneWorkBuffer
//   undefined4 DAT_013da779
//   undefined4 DAT_013da8b8
//   undefined4 DAT_013ed375
//   undefined4 DAT_013ed376
//   undefined4 DAT_013ed377
//   SFogImagePlane[16] g_CameraImageDecompressBuffer
//   undefined4 DAT_013ed379
//   undefined4 DAT_013ed4b8
//   undefined4 DAT_013fff78
//   int g_ImageBytesPerPixel
//   SFogGrid g_CameraFogGrid
//   undefined4 g_CameraFogGrid.scroll_vector.x
//   undefined4 g_CameraFogGrid.scroll_vector.y
//   undefined4 g_CameraFogGrid.scroll_vector.z
//   undefined4 g_CameraFogGrid.density_multiplier
//   char[307200] g_CameraIndexedImageData
//   undefined4 DAT_0151bfa9
//   undefined4 DAT_0151bfaa
//   undefined4 DAT_0151bfab
//   undefined4 DAT_0151c228
//   undefined4 DAT_0151c229
//   undefined4 DAT_0151c22a
//   undefined4 DAT_0151c22b
//   undefined4 DAT_0151c4a8
//   undefined4 DAT_0151c4a9
//   undefined4 DAT_0151c728
//   uint[16384] g_CameraTextureWorkBuffer
//   undefined4 DAT_01566fa8+1
//   undefined4 DAT_01566fac
//   undefined4 DAT_01566fad
//   CDemonRenderer g_CDemonRendererInstance
//   byte* g_CurrentPalette
//   int g_RedBitPosition
//   int g_GreenBitPosition
//   int g_BlueBitPosition
//   void* g_CurrentTextureData
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_event.cpp_FUN_004b19d0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_memset_FUN_005fde40
//   crt_stdio.c_fread_FUN_005fd990
//   crt_stdio.c_fseek_FUN_005ffacc
//   crt_string.c_strcmp_FUN_005fef20
//   engine_dosio.c_getFile_FUN_00481a50
//   engine_dosio.c_getFileSize_FUN_00481880
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_updateTexture_FUN_0048dc30
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   support_codec.cpp_CLZWDecompress_init_FUN_0043f4d0
//   support_codec.cpp_CLZWDecompress_processBuffer_FUN_0043f5d0

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
      puVar26 = (uint *)g_CurrentTextureData;
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
        *(undefined4 *)pbVar7 = *(undefined4 *)pSVar22->colors;
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


// Assembly code:
// 0044f3e0: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0
// 0044f3e1: PUSH ESI
// 0044f3e2: PUSH EDI
// 0044f3e3: PUSH EBP
// 0044f3e4: SUB ESP,0x134
// 0044f3ea: MOV ESI,dword ptr [ESP + 0x14c]
//   XREF to: Stack[0x8] (READ)
// 0044f3f1: MOV EDI,ESP
// 0044f3f3: MOV DL,0x2e
// 0044f3f5: PUSH EDI
// 0044f3f6: MOV AL,byte ptr [ESI]
//   Label: LAB_0044f3f6
// 0044f3f8: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x144] (DATA)
// 0044f3fa: CMP AL,0x0
// 0044f3fc: JZ 0x0044f40e
//   XREF to: 0044f40e (CONDITIONAL_JUMP)
// 0044f3fe: MOV AL,byte ptr [ESI + 0x1]
// 0044f401: ADD ESI,0x2
// 0044f404: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x143] (WRITE)
// 0044f407: ADD EDI,0x2
// 0044f40a: CMP AL,0x0
// 0044f40c: JNZ 0x0044f3f6
//   XREF to: 0044f3f6 (CONDITIONAL_JUMP)
// 0044f40e: POP EDI
//   Label: LAB_0044f40e
// 0044f40f: MOV ESI,ESP
// 0044f411: MOV AL,byte ptr [ESI]
//   Label: LAB_0044f411
//   XREF to: Stack[-0x144] (DATA)
// 0044f413: CMP AL,DL
// 0044f415: JZ 0x0044f429
//   XREF to: 0044f429 (CONDITIONAL_JUMP)
// 0044f417: CMP AL,0x0
// 0044f419: JZ 0x0044f427
//   XREF to: 0044f427 (CONDITIONAL_JUMP)
// 0044f41b: INC ESI
// 0044f41c: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x143] (DATA)
// 0044f41e: CMP AL,DL
// 0044f420: JZ 0x0044f429
//   XREF to: 0044f429 (CONDITIONAL_JUMP)
// 0044f422: INC ESI
// 0044f423: CMP AL,0x0
// 0044f425: JNZ 0x0044f411
//   XREF to: 0044f411 (CONDITIONAL_JUMP)
// 0044f427: SUB ESI,ESI
//   Label: LAB_0044f427
// 0044f429: MOV EDI,ESI
//   Label: LAB_0044f429
// 0044f42b: TEST ESI,ESI
// 0044f42d: JNZ 0x0044f452
//   XREF to: 0044f452 (CONDITIONAL_JUMP)
// 0044f42f: MOV EDX,0x61a12a
//   XREF to: 0061a12a (PARAM)
// 0044f434: MOV ECX,0x98e
// 0044f439: PUSH 0x61a13e
//   XREF to: 0061a13e (DATA)
// 0044f43e: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0044f444: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0044f44a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0044f44f: ADD ESP,0x4
// 0044f452: MOV ESI,0x61a165
//   Label: LAB_0044f452
//   XREF to: 0061a165 (DATA)
// 0044f457: PUSH EDI
// 0044f458: MOV AL,byte ptr [ESI]
//   Label: LAB_0044f458
//   XREF to: 0061a165 (READ)
//   XREF to: 0061a167 (READ)
// 0044f45a: MOV byte ptr [EDI],AL
// 0044f45c: CMP AL,0x0
// 0044f45e: JZ 0x0044f470
//   XREF to: 0044f470 (CONDITIONAL_JUMP)
// 0044f460: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0061a166 (READ)
//   XREF to: 0061a168 (READ)
// 0044f463: ADD ESI,0x2
// 0044f466: MOV byte ptr [EDI + 0x1],AL
// 0044f469: ADD EDI,0x2
// 0044f46c: CMP AL,0x0
// 0044f46e: JNZ 0x0044f458
//   XREF to: 0044f458 (CONDITIONAL_JUMP)
// 0044f470: POP EDI
//   Label: LAB_0044f470
// 0044f471: PUSH 0x61a16a
//   XREF to: 0061a16a (DATA)
// 0044f476: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x144] (DATA)
// 0044f47a: PUSH EAX
// 0044f47b: PUSH 0x61a16d
//   XREF to: 0061a16d (DATA)
// 0044f480: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0044f485: ADD ESP,0xc
// 0044f488: MOV EBX,EAX
// 0044f48a: TEST EAX,EAX
// 0044f48c: JZ 0x0044fbcc
//   XREF to: 0044fbcc (CONDITIONAL_JUMP)
// 0044f492: PUSH EBX
//   Label: LAB_0044f492
// 0044f493: PUSH 0x3
// 0044f495: PUSH 0x100
// 0044f49a: PUSH 0xc196f8
//   XREF to: 00c196f8 (DATA)
// 0044f49f: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0044f4a4: ADD ESP,0x10
// 0044f4a7: PUSH 0x99b
// 0044f4ac: PUSH 0x61a17d
//   XREF to: 0061a17d (DATA)
// 0044f4b1: PUSH EBX
// 0044f4b2: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0044f4b7: ADD ESP,0xc
// 0044f4ba: LEA EDI,[ESP + 0x50]
//   XREF to: Stack[-0xf4] (DATA)
// 0044f4be: MOV ESI,dword ptr [ESP + 0x14c]
//   XREF to: Stack[0x8] (READ)
// 0044f4c5: MOV DL,0x2e
//   XREF to: 0061a12e (PARAM)
// 0044f4c7: PUSH EDI
// 0044f4c8: MOV AL,byte ptr [ESI]
//   Label: LAB_0044f4c8
// 0044f4ca: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0xf4] (DATA)
// 0044f4cc: CMP AL,0x0
// 0044f4ce: JZ 0x0044f4e0
//   XREF to: 0044f4e0 (CONDITIONAL_JUMP)
// 0044f4d0: MOV AL,byte ptr [ESI + 0x1]
// 0044f4d3: ADD ESI,0x2
// 0044f4d6: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0xf3] (WRITE)
// 0044f4d9: ADD EDI,0x2
// 0044f4dc: CMP AL,0x0
// 0044f4de: JNZ 0x0044f4c8
//   XREF to: 0044f4c8 (CONDITIONAL_JUMP)
// 0044f4e0: POP EDI
//   Label: LAB_0044f4e0
// 0044f4e1: LEA ESI,[ESP + 0x50]
//   XREF to: Stack[-0xf4] (DATA)
// 0044f4e5: MOV AL,byte ptr [ESI]
//   Label: LAB_0044f4e5
//   XREF to: Stack[-0xf4] (DATA)
// 0044f4e7: CMP AL,DL
// 0044f4e9: JZ 0x0044f4fd
//   XREF to: 0044f4fd (CONDITIONAL_JUMP)
// 0044f4eb: CMP AL,0x0
// 0044f4ed: JZ 0x0044f4fb
//   XREF to: 0044f4fb (CONDITIONAL_JUMP)
// 0044f4ef: INC ESI
// 0044f4f0: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0xf3] (DATA)
// 0044f4f2: CMP AL,DL
// 0044f4f4: JZ 0x0044f4fd
//   XREF to: 0044f4fd (CONDITIONAL_JUMP)
// 0044f4f6: INC ESI
// 0044f4f7: CMP AL,0x0
// 0044f4f9: JNZ 0x0044f4e5
//   XREF to: 0044f4e5 (CONDITIONAL_JUMP)
// 0044f4fb: SUB ESI,ESI
//   Label: LAB_0044f4fb
// 0044f4fd: MOV EDI,ESI
//   Label: LAB_0044f4fd
// 0044f4ff: TEST ESI,ESI
// 0044f501: JNZ 0x0044f526
//   XREF to: 0044f526 (CONDITIONAL_JUMP)
// 0044f503: MOV EBX,0x61a191
//   XREF to: 0061a191 (PARAM)
// 0044f508: MOV ESI,0x9a1
// 0044f50d: PUSH 0x61a1a5
//   XREF to: 0061a1a5 (DATA)
// 0044f512: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0044f518: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0044f51e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0044f523: ADD ESP,0x4
// 0044f526: MOV ESI,0x61a1c6
//   Label: LAB_0044f526
//   XREF to: 0061a1c6 (DATA)
// 0044f52b: PUSH EDI
// 0044f52c: MOV AL,byte ptr [ESI]
//   Label: LAB_0044f52c
//   XREF to: 0061a1c6 (READ)
//   XREF to: 0061a1c8 (READ)
// 0044f52e: MOV byte ptr [EDI],AL
// 0044f530: CMP AL,0x0
// 0044f532: JZ 0x0044f544
//   XREF to: 0044f544 (CONDITIONAL_JUMP)
// 0044f534: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0061a1c7 (READ)
//   XREF to: 0061a1c9 (READ)
// 0044f537: ADD ESI,0x2
// 0044f53a: MOV byte ptr [EDI + 0x1],AL
// 0044f53d: ADD EDI,0x2
// 0044f540: CMP AL,0x0
// 0044f542: JNZ 0x0044f52c
//   XREF to: 0044f52c (CONDITIONAL_JUMP)
// 0044f544: POP EDI
//   Label: LAB_0044f544
// 0044f545: PUSH 0x61a1cb
//   XREF to: 0061a1cb (DATA)
// 0044f54a: LEA EAX,[ESP + 0x54]
//   XREF to: Stack[-0xf4] (DATA)
// 0044f54e: PUSH EAX
// 0044f54f: PUSH 0x61a1ce
//   XREF to: 0061a1ce (DATA)
// 0044f554: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0044f559: ADD ESP,0xc
// 0044f55c: MOV dword ptr [ESP + 0x130],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0044f563: TEST EAX,EAX
// 0044f565: JZ 0x0044f878
//   XREF to: 0044f878 (CONDITIONAL_JUMP)
// 0044f56b: PUSH EAX
// 0044f56c: PUSH 0x1
// 0044f56e: PUSH 0x1000
// 0044f573: PUSH 0x1519384
//   XREF to: 01519384 (DATA)
// 0044f578: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0044f57d: MOV EDI,dword ptr [0x0151a3a0]
//   XREF to: 0151a3a0 (READ)
// 0044f583: ADD ESP,0x10
// 0044f586: TEST EDI,EDI
// 0044f588: JZ 0x0044fc63
//   XREF to: 0044fc63 (CONDITIONAL_JUMP)
// 0044f58e: MOV EBP,0x10
// 0044f593: MOV EAX,[0x0151a390]
//   XREF to: 0151a390 (READ)
// 0044f598: MOV EDX,dword ptr [0x0151a394]
//   XREF to: 0151a394 (READ)
// 0044f59e: MOV ECX,dword ptr [0x0151a398]
//   XREF to: 0151a398 (READ)
// 0044f5a4: OR EAX,EDX
// 0044f5a6: MOV dword ptr [0x01519380],EBP
//   XREF to: 01519380 (WRITE)
// 0044f5ac: OR EAX,ECX
// 0044f5ae: JNZ 0x0044f5ba
//   XREF to: 0044f5ba (CONDITIONAL_JUMP)
// 0044f5b0: MOV dword ptr [0x01519380],0x1
//   XREF to: 01519380 (WRITE)
// 0044f5ba: MOV ESI,dword ptr [ESP + 0x130]
//   Label: LAB_0044f5ba
//   XREF to: Stack[-0x14] (READ)
// 0044f5c1: PUSH ESI
// 0044f5c2: PUSH 0x1
// 0044f5c4: PUSH 0x3
// 0044f5c6: LEA EAX,[ESP + 0xb0]
//   XREF to: Stack[-0xa0] (DATA)
// 0044f5cd: PUSH EAX
// 0044f5ce: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0044f5d3: ADD ESP,0x10
// 0044f5d6: XOR AH,AH
// 0044f5d8: PUSH 0x61a1d7
//   XREF to: 0061a1d7 (DATA)
// 0044f5dd: MOV byte ptr [ESP + 0xab],AH
//   XREF to: Stack[-0x9d] (WRITE)
// 0044f5e4: LEA EAX,[ESP + 0xa8]
//   XREF to: Stack[-0xa0] (DATA)
// 0044f5eb: PUSH EAX
// 0044f5ec: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 0044f5f1: ADD ESP,0x8
// 0044f5f4: TEST EAX,EAX
// 0044f5f6: JNZ 0x0044fbee
//   XREF to: 0044fbee (CONDITIONAL_JUMP)
// 0044f5fc: LEA EAX,[ESP + 0x50]
//   Label: LAB_0044f5fc
//   XREF to: Stack[-0xf4] (DATA)
// 0044f600: PUSH EAX
// 0044f601: PUSH 0x61a1df
//   XREF to: 0061a1df (DATA)
// 0044f606: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 0044f60b: ADD ESP,0x8
// 0044f60e: SUB EAX,0x1003
// 0044f613: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 0044f61a: CMP EAX,0x1
// 0044f61d: JGE 0x0044f647
//   XREF to: 0044f647 (CONDITIONAL_JUMP)
// 0044f61f: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0xf4] (DATA)
// 0044f623: PUSH EAX
// 0044f624: MOV ECX,0x61a1e8
//   XREF to: 0061a1e8 (PARAM)
// 0044f629: MOV EBX,0x9c1
// 0044f62e: PUSH 0x61a1fc
//   XREF to: 0061a1fc (DATA)
// 0044f633: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0044f639: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0044f63f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0044f644: ADD ESP,0x8
// 0044f647: CMP dword ptr [ESP + 0xa8],0x7a120
//   Label: LAB_0044f647
//   XREF to: Stack[-0x9c] (READ)
// 0044f652: JBE 0x0044f67c
//   XREF to: 0044f67c (CONDITIONAL_JUMP)
// 0044f654: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0xf4] (DATA)
// 0044f658: PUSH EAX
// 0044f659: MOV EDI,0x61a212
//   XREF to: 0061a212 (DATA)
// 0044f65e: MOV EBP,0x9c7
// 0044f663: PUSH 0x61a226
//   XREF to: 0061a226 (DATA)
// 0044f668: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0044f66e: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 0044f674: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0044f679: ADD ESP,0x8
// 0044f67c: MOV EAX,dword ptr [ESP + 0x130]
//   Label: LAB_0044f67c
//   XREF to: Stack[-0x14] (READ)
// 0044f683: PUSH EAX
// 0044f684: PUSH 0x1
// 0044f686: MOV EDX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0x9c] (READ)
// 0044f68d: PUSH EDX
// 0044f68e: PUSH 0x888e50
//   XREF to: 00888e50 (DATA)
// 0044f693: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0044f698: ADD ESP,0x10
// 0044f69b: PUSH 0x13d9728
//   XREF to: 013d9728 (DATA)
// 0044f6a0: CALL support_codec.cpp_CLZWDecompress_init_FUN_0043f4d0
//   XREF to: 0043f4d0 (UNCONDITIONAL_CALL)
// 0044f6a5: MOV EDX,dword ptr [0x01519380]
//   XREF to: 01519380 (READ)
// 0044f6ab: LEA EAX,[EDX*0x4 + 0x0]
// 0044f6b2: ADD EAX,EDX
// 0044f6b4: SHL EAX,0xa
// 0044f6b7: MOV EDX,EAX
// 0044f6b9: SHL EAX,0x4
// 0044f6bc: ADD ESP,0x4
// 0044f6bf: SUB EAX,EDX
// 0044f6c1: PUSH 0x1
// 0044f6c3: MOV dword ptr [ESP + 0xb0],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 0044f6ca: LEA EAX,[ESP + 0xb0]
//   XREF to: Stack[-0x98] (DATA)
// 0044f6d1: PUSH EAX
// 0044f6d2: PUSH 0x13ed378
//   XREF to: 013ed378 (DATA)
// 0044f6d7: LEA EAX,[ESP + 0xb4]
//   XREF to: Stack[-0x9c] (DATA)
// 0044f6de: PUSH EAX
// 0044f6df: PUSH 0x888e50
//   XREF to: 00888e50 (DATA)
// 0044f6e4: PUSH 0x13d9728
//   XREF to: 013d9728 (DATA)
// 0044f6e9: CALL support_codec.cpp_CLZWDecompress_processBuffer_FUN_0043f5d0
//   XREF to: 0043f5d0 (UNCONDITIONAL_CALL)
// 0044f6ee: ADD ESP,0x18
// 0044f6f1: TEST EAX,EAX
// 0044f6f3: JZ 0x0044fc36
//   XREF to: 0044fc36 (CONDITIONAL_JUMP)
// 0044f6f9: XOR ESI,ESI
//   Label: LAB_0044f6f9
// 0044f6fb: MOV EDI,dword ptr [0x01519380]
//   XREF to: 01519380 (READ)
// 0044f701: MOV dword ptr [ESP + 0xa0],ESI
//   XREF to: Stack[-0xa4] (WRITE)
// 0044f708: TEST EDI,EDI
// 0044f70a: JLE 0x0044f85e
//   XREF to: 0044f85e (CONDITIONAL_JUMP)
// 0044f710: MOV EBP,0xfffed400
// 0044f715: XOR EDI,EDI
// 0044f717: MOV ESI,0x12c00
// 0044f71c: MOV dword ptr [ESP + 0x110],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 0044f723: MOV dword ptr [ESP + 0x114],EBP
//   XREF to: Stack[-0x30] (WRITE)
// 0044f72a: MOV dword ptr [ESP + 0x10c],ESI
//   XREF to: Stack[-0x38] (WRITE)
// 0044f731: MOV EAX,dword ptr [ESP + 0x110]
//   Label: LAB_0044f731
//   XREF to: Stack[-0x34] (READ)
// 0044f738: MOV dword ptr [ESP + 0xfc],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0044f73f: MOV EAX,dword ptr [ESP + 0x114]
//   XREF to: Stack[-0x30] (READ)
// 0044f746: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0044f74d: MOV EAX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x34] (READ)
// 0044f754: MOV dword ptr [ESP + 0x104],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0044f75b: MOV EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x38] (READ)
// 0044f762: MOV dword ptr [ESP + 0x108],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0044f769: MOV ECX,dword ptr [ESP + 0x104]
//   Label: LAB_0044f769
//   XREF to: Stack[-0x40] (READ)
// 0044f770: MOV EDI,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x44] (READ)
// 0044f777: MOV EBP,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x48] (READ)
// 0044f77e: XOR EDX,EDX
// 0044f780: XOR EBX,EBX
// 0044f782: LEA EAX,[EDX + EBP*0x1]
//   Label: LAB_0044f782
// 0044f785: MOV EAX,dword ptr [EAX + 0x13ed375]
//   XREF to: 013ed375 (DATA)
//   XREF to: 013ed376 (DATA)
// 0044f78b: SAR EAX,0x18
// 0044f78e: ADD EAX,EBX
// 0044f790: MOV ESI,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0xa4] (READ)
// 0044f797: MOV EBX,EAX
// 0044f799: SHL EAX,0x2
// 0044f79c: TEST ESI,ESI
// 0044f79e: JLE 0x0044f7ac
//   XREF to: 0044f7ac (CONDITIONAL_JUMP)
// 0044f7a0: LEA ESI,[EDI + EDX*0x1]
// 0044f7a3: MOVZX ESI,byte ptr [ESI + 0x13ed378]
//   XREF to: 013da778 (READ)
//   XREF to: 013da779 (READ)
//   XREF to: 013da8b8 (READ)
// 0044f7aa: ADD EAX,ESI
// 0044f7ac: INC ECX
//   Label: LAB_0044f7ac
// 0044f7ad: INC EDX
// 0044f7ae: MOV byte ptr [ECX + 0x13ed377],AL
//   XREF to: 013ed377 (DATA)
//   XREF to: 013ed378 (DATA)
//   XREF to: 013ed379 (DATA)
//   XREF to: 013ed4b8 (DATA)
// 0044f7b4: CMP EDX,0x140
// 0044f7ba: JL 0x0044f782
//   XREF to: 0044f782 (CONDITIONAL_JUMP)
// 0044f7bc: MOV EBP,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x44] (READ)
// 0044f7c3: MOV EAX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x40] (READ)
// 0044f7ca: MOV EDI,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x48] (READ)
// 0044f7d1: MOV EDX,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x3c] (READ)
// 0044f7d8: ADD EBP,0x140
// 0044f7de: ADD EAX,0x140
// 0044f7e3: ADD EDI,0x140
// 0044f7e9: MOV dword ptr [ESP + 0x100],EBP
//   XREF to: Stack[-0x44] (WRITE)
// 0044f7f0: MOV dword ptr [ESP + 0x104],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0044f7f7: MOV dword ptr [ESP + 0xfc],EDI
//   XREF to: Stack[-0x48] (WRITE)
// 0044f7fe: CMP EAX,EDX
// 0044f800: JNZ 0x0044f769
//   XREF to: 0044f769 (CONDITIONAL_JUMP)
// 0044f806: MOV EBP,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x38] (READ)
// 0044f80d: MOV EAX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x34] (READ)
// 0044f814: MOV EDX,dword ptr [ESP + 0x114]
//   XREF to: Stack[-0x30] (READ)
// 0044f81b: MOV ECX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0xa4] (READ)
// 0044f822: MOV EBX,dword ptr [0x01519380]
//   XREF to: 01519380 (READ)
// 0044f828: ADD EBP,0x12c00
// 0044f82e: ADD EAX,0x12c00
// 0044f833: ADD EDX,0x12c00
// 0044f839: INC ECX
// 0044f83a: MOV dword ptr [ESP + 0x10c],EBP
//   XREF to: Stack[-0x38] (WRITE)
// 0044f841: MOV dword ptr [ESP + 0x110],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0044f848: MOV dword ptr [ESP + 0x114],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 0044f84f: MOV dword ptr [ESP + 0xa0],ECX
//   XREF to: Stack[-0xa4] (WRITE)
// 0044f856: CMP ECX,EBX
// 0044f858: JL 0x0044f731
//   XREF to: 0044f731 (CONDITIONAL_JUMP)
// 0044f85e: PUSH 0xa09
//   Label: LAB_0044f85e
// 0044f863: PUSH 0x61a278
//   XREF to: 0061a278 (DATA)
// 0044f868: MOV ECX,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x14] (READ)
// 0044f86f: PUSH ECX
// 0044f870: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0044f875: ADD ESP,0xc
// 0044f878: PUSH 0x61a28c
//   Label: LAB_0044f878
//   XREF to: 0061a28c (DATA)
// 0044f87d: MOV EBX,dword ptr [ESP + 0x150]
//   XREF to: Stack[0x8] (READ)
// 0044f884: PUSH EBX
// 0044f885: PUSH 0x61a28f
//   XREF to: 0061a28f (DATA)
// 0044f88a: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0044f88f: ADD ESP,0xc
// 0044f892: MOV EBP,EAX
// 0044f894: TEST EAX,EAX
// 0044f896: JZ 0x0044fc7b
//   XREF to: 0044fc7b (CONDITIONAL_JUMP)
// 0044f89c: XOR EDX,EDX
//   Label: LAB_0044f89c
// 0044f89e: XOR EAX,EAX
// 0044f8a0: MOV ECX,dword ptr [0x0067939c]
//   Label: LAB_0044f8a0
//   XREF to: 0067939c (READ)
// 0044f8a6: MOVZX ESI,byte ptr [EAX + 0xc196fa]
//   XREF to: 00c196fa (READ)
//   XREF to: 00c196fd (READ)
// 0044f8ad: XOR EBX,EBX
// 0044f8af: MOVZX EDI,byte ptr [EAX + 0xc196f8]
//   XREF to: 00c196f8 (READ)
//   XREF to: 00c196fb (READ)
// 0044f8b6: MOV BL,byte ptr [EAX + 0xc196f9]
//   XREF to: 00c196f9 (READ)
//   XREF to: 00c196fc (READ)
// 0044f8bc: CMP ECX,0x20
// 0044f8bf: JNZ 0x0044fc9d
//   XREF to: 0044fc9d (CONDITIONAL_JUMP)
// 0044f8c5: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 0044f8cb: SHL EDI,CL
// 0044f8cd: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 0044f8d3: SHL EBX,CL
// 0044f8d5: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 0044f8db: SHL ESI,CL
// 0044f8dd: OR EBX,EDI
// 0044f8df: MOV ECX,ESI
// 0044f8e1: OR ECX,EBX
// 0044f8e3: ADD EDX,0x4
//   Label: LAB_0044f8e3
// 0044f8e6: ADD EAX,0x3
// 0044f8e9: MOV dword ptr [EDX + 0xc199f8],ECX
//   XREF to: 00c199fc (WRITE)
//   XREF to: 00c19a00 (WRITE)
// 0044f8ef: CMP EDX,0x400
// 0044f8f5: JNZ 0x0044f8a0
//   XREF to: 0044f8a0 (CONDITIONAL_JUMP)
// 0044f8f7: PUSH EBP
// 0044f8f8: PUSH 0x1e0
// 0044f8fd: PUSH 0x280
// 0044f902: PUSH 0x151bfa8
//   XREF to: 0151bfa8 (DATA)
// 0044f907: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0044f90c: ADD ESP,0x10
// 0044f90f: PUSH 0xa20
// 0044f914: PUSH 0x61a29f
//   XREF to: 0061a29f (DATA)
// 0044f919: PUSH EBP
// 0044f91a: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0044f91f: ADD ESP,0xc
// 0044f922: MOV EAX,dword ptr [ESP + 0x148]
//   XREF to: Stack[0x4] (READ)
// 0044f929: MOV EBX,dword ptr [EAX + 0x148]
// 0044f92f: CMP EBX,0xf0
// 0044f935: JNZ 0x0044fcae
//   XREF to: 0044fcae (CONDITIONAL_JUMP)
// 0044f93b: XOR ECX,ECX
// 0044f93d: MOV dword ptr [ESP + 0x124],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0044f944: MOV EBP,0x151bfa8
//   XREF to: 0151bfa8 (DATA)
// 0044f949: MOV EDI,dword ptr [ESP + 0x148]
//   Label: LAB_0044f949
//   XREF to: Stack[0x4] (READ)
// 0044f950: MOV EAX,dword ptr [ESP + 0x124]
//   XREF to: Stack[-0x20] (READ)
// 0044f957: XOR EBX,EBX
// 0044f959: MOV ECX,dword ptr [ESP + 0x124]
//   XREF to: Stack[-0x20] (READ)
// 0044f960: MOV dword ptr [ESP + 0xb0],EBX
//   XREF to: Stack[-0x94] (WRITE)
// 0044f967: MOV EDI,dword ptr [EDI + 0x158]
// 0044f96d: ADD EAX,EBP
// 0044f96f: ADD EDI,ECX
// 0044f971: ADD EDI,0x4
//   Label: LAB_0044f971
// 0044f974: MOVZX ESI,byte ptr [EAX + 0x1]
//   XREF to: 0151bfa9 (DATA)
//   XREF to: 0151bfab (DATA)
//   XREF to: 0151c4a9 (DATA)
// 0044f978: ADD EAX,0x2
// 0044f97b: XOR EDX,EDX
// 0044f97d: XOR EBX,EBX
// 0044f97f: XOR ECX,ECX
// 0044f981: MOV ESI,dword ptr [ESI*0x4 + 0xc199fc]
//   XREF to: 00c199fc (DATA)
// 0044f988: MOV DL,byte ptr [EAX + -0x2]
//   XREF to: 0151bfa8 (DATA)
//   XREF to: 0151bfaa (DATA)
//   XREF to: 0151c4a8 (DATA)
// 0044f98b: MOV BL,byte ptr [EAX + 0x27e]
//   XREF to: 0151c228 (DATA)
//   XREF to: 0151c22a (DATA)
//   XREF to: 0151c728 (DATA)
// 0044f991: MOV CL,byte ptr [EAX + 0x27f]
//   XREF to: 0151c229 (DATA)
//   XREF to: 0151c22b (DATA)
// 0044f997: AND ESI,0xfcfcfc
//   XREF to: 00fcfcfc (DATA)
// 0044f99d: MOV EDX,dword ptr [EDX*0x4 + 0xc199fc]
//   XREF to: 00c199fc (DATA)
// 0044f9a4: MOV EBX,dword ptr [EBX*0x4 + 0xc199fc]
//   XREF to: 00c199fc (DATA)
// 0044f9ab: MOV ECX,dword ptr [ECX*0x4 + 0xc199fc]
//   XREF to: 00c199fc (DATA)
// 0044f9b2: AND EDX,0xfcfcfc
//   XREF to: 00fcfcfc (DATA)
// 0044f9b8: SHR ESI,0x2
// 0044f9bb: AND EBX,0xfcfcfc
//   XREF to: 00fcfcfc (DATA)
// 0044f9c1: AND ECX,0xfcfcfc
//   XREF to: 00fcfcfc (DATA)
// 0044f9c7: SHR EDX,0x2
// 0044f9ca: SHR EBX,0x2
// 0044f9cd: SHR ECX,0x2
// 0044f9d0: ADD EDX,ESI
// 0044f9d2: MOV ESI,dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0x94] (READ)
// 0044f9d9: ADD EDX,EBX
// 0044f9db: INC ESI
// 0044f9dc: ADD EDX,ECX
// 0044f9de: MOV dword ptr [ESP + 0xb0],ESI
//   XREF to: Stack[-0x94] (WRITE)
// 0044f9e5: MOV dword ptr [EDI + -0x4],EDX
// 0044f9e8: CMP ESI,0x140
// 0044f9ee: JL 0x0044f971
//   XREF to: 0044f971 (CONDITIONAL_JUMP)
// 0044f9f0: MOV ECX,dword ptr [ESP + 0x124]
//   XREF to: Stack[-0x20] (READ)
// 0044f9f7: ADD ECX,0x500
// 0044f9fd: MOV dword ptr [ESP + 0x124],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0044fa04: CMP ECX,0x4b000
// 0044fa0a: JNZ 0x0044f949
//   XREF to: 0044f949 (CONDITIONAL_JUMP)
// 0044fa10: XOR EDI,EDI
//   Label: LAB_0044fa10
// 0044fa12: XOR EBP,EBP
// 0044fa14: MOV EDX,EDI
//   Label: LAB_0044fa14
// 0044fa16: MOV EAX,EDI
// 0044fa18: SAR EDX,0x1f
// 0044fa1b: SHL EDX,0x8
// 0044fa1e: SBB EAX,EDX
// 0044fa20: SAR EAX,0x8
// 0044fa23: MOV EBX,EBP
// 0044fa25: XOR ECX,ECX
// 0044fa27: IMUL ESI,EAX,0x280
// 0044fa2d: MOV EDX,ECX
//   Label: LAB_0044fa2d
// 0044fa2f: MOV EAX,ECX
// 0044fa31: SAR EDX,0x1f
// 0044fa34: SHL EDX,0x8
// 0044fa37: SBB EAX,EDX
// 0044fa39: SAR EAX,0x8
// 0044fa3c: INC EBX
// 0044fa3d: MOV AL,byte ptr [ESI + EAX*0x1 + 0x151bfa8]
//   XREF to: 0151bfa8 (DATA)
// 0044fa44: ADD ECX,0x280
// 0044fa4a: MOV byte ptr [EBX + 0x1566fa7],AL
//   XREF to: 01566fa8 (WRITE)
//   XREF to: 01566fa9 (WRITE)
// 0044fa50: CMP ECX,0x28000
// 0044fa56: JNZ 0x0044fa2d
//   XREF to: 0044fa2d (CONDITIONAL_JUMP)
// 0044fa58: ADD EBP,0x100
// 0044fa5e: ADD EDI,0x1e0
// 0044fa64: CMP EBP,0x10000
// 0044fa6a: JNZ 0x0044fa14
//   XREF to: 0044fa14 (CONDITIONAL_JUMP)
// 0044fa6c: PUSH 0x66ed50
//   XREF to: 0066ed50 (DATA)
// 0044fa71: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0044fa77: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 0044fa78: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 0044fa7d: MOV ESI,0x1566fa8
//   XREF to: 01566fa8 (DATA)
// 0044fa82: ADD ESP,0x8
// 0044fa85: MOV EDI,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 0044fa8b: MOV ECX,EBP
// 0044fa8d: PUSH EDI
// 0044fa8e: MOV EAX,ECX
// 0044fa90: SHR ECX,0x2
// 0044fa93: MOVSD.REP ES:EDI,ESI
//   XREF to: 01566fa8 (READ)
//   XREF to: 01566fac (READ)
// 0044fa95: MOV CL,AL
// 0044fa97: AND CL,0x3
// 0044fa9a: MOVSB.REP ES:EDI,ESI
//   XREF to: 01566fa8 (READ)
//   XREF to: 01566fac (READ)
//   XREF to: 01566fad (READ)
// 0044fa9c: POP EDI
// 0044fa9d: MOV ECX,0x300
// 0044faa2: MOV ESI,0xc196f8
//   XREF to: 00c196f8 (DATA)
// 0044faa7: MOV EDI,dword ptr [0x02d01920]
//   XREF to: 02d01920 (READ)
// 0044faad: PUSH EDI
// 0044faae: MOV EAX,ECX
// 0044fab0: SHR ECX,0x2
// 0044fab3: MOVSD.REP ES:EDI,ESI
//   XREF to: 00c196f8 (READ)
//   XREF to: 00c196fc (READ)
// 0044fab5: MOV CL,AL
// 0044fab7: AND CL,0x3
// 0044faba: MOVSB.REP ES:EDI,ESI
//   XREF to: 00c196f8 (READ)
//   XREF to: 00c196fc (READ)
//   XREF to: 00c196fd (READ)
// 0044fabc: POP EDI
// 0044fabd: PUSH 0xc196f8
//   XREF to: 00c196f8 (DATA)
// 0044fac2: PUSH 0x66ed50
//   XREF to: 0066ed50 (DATA)
// 0044fac7: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0044facd: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 0044face: CALL engine_drender.cpp_CDemonRenderer_updateTexture_FUN_0048dc30
//   XREF to: 0048dc30 (UNCONDITIONAL_CALL)
// 0044fad3: ADD ESP,0xc
// 0044fad6: PUSH 0x12d40
// 0044fadb: MOV ECX,0xbbb9b8
//   XREF to: 00bbb9b8 (PARAM)
// 0044fae0: XOR EDX,EDX
// 0044fae2: CALL core_event.cpp_FUN_004b19d0
//   XREF to: 004b19d0 (UNCONDITIONAL_CALL)
// 0044fae7: CMP dword ptr [0x00679398],0x180
//   XREF to: 00679398 (READ)
// 0044faf1: JNZ 0x0044fbc1
//   XREF to: 0044fbc1 (CONDITIONAL_JUMP)
// 0044faf7: XOR EAX,EAX
// 0044faf9: MOV dword ptr [ESP + 0x12c],EAX
// 0044fb00: MOV dword ptr [ESP + 0x128],EAX
// 0044fb07: MOV EAX,dword ptr [ESP + 0x12c]
//   Label: LAB_0044fb07
// 0044fb0e: MOV EDX,EAX
// 0044fb10: MOV ECX,0xc0
// 0044fb15: SAR EDX,0x1f
// 0044fb18: IDIV ECX
// 0044fb1a: IMUL EBP,EAX,0x140
// 0044fb20: XOR EDI,EDI
// 0044fb22: MOV EAX,dword ptr [ESP + 0x128]
// 0044fb29: XOR ESI,ESI
// 0044fb2b: MOV dword ptr [ESP + 0xf8],EAX
// 0044fb32: MOV EDX,ESI
//   Label: LAB_0044fb32
// 0044fb34: MOV EAX,ESI
// 0044fb36: SAR EDX,0x1f
// 0044fb39: SHL EDX,0x8
// 0044fb3c: SBB EAX,EDX
// 0044fb3e: SAR EAX,0x8
// 0044fb41: MOV ECX,dword ptr [0x01519380]
//   XREF to: 01519380 (READ)
// 0044fb47: MOV EBX,EAX
// 0044fb49: XOR EAX,EAX
// 0044fb4b: TEST ECX,ECX
// 0044fb4d: JLE 0x0044fb7e
//   XREF to: 0044fb7e (CONDITIONAL_JUMP)
// 0044fb4f: MOV EDX,dword ptr [ESP + 0xf8]
// 0044fb56: LEA ECX,[EBX + EBP*0x1]
// 0044fb59: ADD EDX,EDI
// 0044fb5b: ADD EDX,0x12c00
//   Label: LAB_0044fb5b
// 0044fb61: MOV BL,byte ptr [ECX + 0x13ed378]
//   XREF to: 013ed378 (DATA)
//   XREF to: 013fff78 (DATA)
// 0044fb67: INC EAX
// 0044fb68: MOV byte ptr [EDX + 0x13da778],BL
//   XREF to: 013da778 (DATA)
//   XREF to: 013ed378 (DATA)
//   XREF to: 013fff78 (DATA)
// 0044fb6e: MOV EBX,dword ptr [0x01519380]
//   XREF to: 01519380 (READ)
// 0044fb74: ADD ECX,0x12c00
// 0044fb7a: CMP EAX,EBX
// 0044fb7c: JL 0x0044fb5b
//   XREF to: 0044fb5b (CONDITIONAL_JUMP)
// 0044fb7e: INC EDI
//   Label: LAB_0044fb7e
// 0044fb7f: ADD ESI,0x140
// 0044fb85: CMP EDI,0x100
// 0044fb8b: JL 0x0044fb32
//   XREF to: 0044fb32 (CONDITIONAL_JUMP)
// 0044fb8d: MOV EDI,dword ptr [ESP + 0x12c]
// 0044fb94: MOV ESI,dword ptr [ESP + 0x128]
// 0044fb9b: ADD EDI,0xf0
// 0044fba1: ADD ESI,0x140
// 0044fba7: MOV dword ptr [ESP + 0x12c],EDI
// 0044fbae: MOV dword ptr [ESP + 0x128],ESI
// 0044fbb5: CMP EDI,0xb400
// 0044fbbb: JNZ 0x0044fb07
//   XREF to: 0044fb07 (CONDITIONAL_JUMP)
// 0044fbc1: ADD ESP,0x134
//   Label: LAB_0044fbc1
// 0044fbc7: POP EBP
// 0044fbc8: POP EDI
// 0044fbc9: POP ESI
// 0044fbca: POP EBX
// 0044fbcb: RET
// 0044fbcc: PUSH 0x61a176
//   Label: LAB_0044fbcc
//   XREF to: 0061a176 (DATA)
// 0044fbd1: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x144] (DATA)
// 0044fbd5: PUSH EAX
// 0044fbd6: PUSH 0x61a179
//   XREF to: 0061a179 (DATA)
// 0044fbdb: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0044fbe0: ADD ESP,0xc
// 0044fbe3: MOV EBX,EAX
// 0044fbe5: TEST EAX,EAX
// 0044fbe7: JZ 0x0044fbc1
//   XREF to: 0044fbc1 (CONDITIONAL_JUMP)
// 0044fbe9: JMP 0x0044f492
//   XREF to: 0044f492 (UNCONDITIONAL_JUMP)
// 0044fbee: PUSH 0x61a1db
//   Label: LAB_0044fbee
//   XREF to: 0061a1db (DATA)
// 0044fbf3: LEA EAX,[ESP + 0xa8]
//   XREF to: Stack[-0xa0] (DATA)
// 0044fbfa: PUSH EAX
// 0044fbfb: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 0044fc00: ADD ESP,0x8
// 0044fc03: TEST EAX,EAX
// 0044fc05: JZ 0x0044f5fc
//   XREF to: 0044f5fc (CONDITIONAL_JUMP)
// 0044fc0b: PUSH 0x1
// 0044fc0d: PUSH -0x3
// 0044fc0f: PUSH ESI
// 0044fc10: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 0044fc15: ADD ESP,0xc
// 0044fc18: PUSH ESI
// 0044fc19: MOV EAX,[0x01519380]
//   XREF to: 01519380 (READ)
// 0044fc1e: PUSH EAX
// 0044fc1f: PUSH 0x12c00
// 0044fc24: PUSH 0x13ed378
//   XREF to: 013ed378 (DATA)
// 0044fc29: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0044fc2e: ADD ESP,0x10
// 0044fc31: JMP 0x0044f85e
//   XREF to: 0044f85e (UNCONDITIONAL_JUMP)
// 0044fc36: LEA EAX,[ESP + 0x50]
//   Label: LAB_0044fc36
//   XREF to: Stack[-0xf4] (DATA)
// 0044fc3a: PUSH EAX
// 0044fc3b: MOV ECX,0x61a24d
//   XREF to: 0061a24d (PARAM)
// 0044fc40: MOV EBX,0x9d0
// 0044fc45: PUSH 0x61a261
//   XREF to: 0061a261 (DATA)
// 0044fc4a: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0044fc50: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0044fc56: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0044fc5b: ADD ESP,0x8
// 0044fc5e: JMP 0x0044f6f9
//   XREF to: 0044f6f9 (UNCONDITIONAL_JUMP)
// 0044fc63: PUSH 0x12c000
//   Label: LAB_0044fc63
// 0044fc68: PUSH EDI
// 0044fc69: PUSH 0x13ed378
//   XREF to: 013ed378 (DATA)
// 0044fc6e: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0044fc73: ADD ESP,0xc
// 0044fc76: JMP 0x0044f85e
//   XREF to: 0044f85e (UNCONDITIONAL_JUMP)
// 0044fc7b: PUSH 0x61a298
//   Label: LAB_0044fc7b
//   XREF to: 0061a298 (DATA)
// 0044fc80: PUSH EBX
// 0044fc81: PUSH 0x61a29b
//   XREF to: 0061a29b (DATA)
// 0044fc86: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0044fc8b: ADD ESP,0xc
// 0044fc8e: MOV EBP,EAX
// 0044fc90: TEST EAX,EAX
// 0044fc92: JZ 0x0044fbc1
//   XREF to: 0044fbc1 (CONDITIONAL_JUMP)
// 0044fc98: JMP 0x0044f89c
//   XREF to: 0044f89c (UNCONDITIONAL_JUMP)
// 0044fc9d: MOV ECX,EBX
//   Label: LAB_0044fc9d
// 0044fc9f: SHL EDI,0x10
// 0044fca2: SHL ECX,0x8
// 0044fca5: OR ECX,EDI
// 0044fca7: OR ECX,ESI
// 0044fca9: JMP 0x0044f8e3
//   XREF to: 0044f8e3 (UNCONDITIONAL_JUMP)
// 0044fcae: CMP EBX,0x1e0
//   Label: LAB_0044fcae
// 0044fcb4: JNZ 0x0044fcea
//   XREF to: 0044fcea (CONDITIONAL_JUMP)
// 0044fcb6: MOV ECX,dword ptr [ESP + 0x148]
//   XREF to: Stack[0x4] (READ)
// 0044fcbd: MOV EAX,0x151bfa8
//   XREF to: 0151bfa8 (DATA)
// 0044fcc2: XOR EDX,EDX
// 0044fcc4: MOV ECX,dword ptr [ECX + 0x158]
// 0044fcca: XOR EBX,EBX
//   Label: LAB_0044fcca
// 0044fccc: MOV BL,byte ptr [EAX]
//   XREF to: 0151bfa8 (READ)
//   XREF to: 0151bfa9 (READ)
// 0044fcce: INC EAX
// 0044fccf: ADD ECX,0x4
// 0044fcd2: MOV EBX,dword ptr [EBX*0x4 + 0xc199fc]
//   XREF to: 00c199fc (DATA)
// 0044fcd9: INC EDX
// 0044fcda: MOV dword ptr [ECX + -0x4],EBX
// 0044fcdd: CMP EDX,0x4b000
// 0044fce3: JL 0x0044fcca
//   XREF to: 0044fcca (CONDITIONAL_JUMP)
// 0044fce5: JMP 0x0044fa10
//   XREF to: 0044fa10 (UNCONDITIONAL_JUMP)
// 0044fcea: JLE 0x0044fde2
//   Label: LAB_0044fcea
//   XREF to: 0044fde2 (CONDITIONAL_JUMP)
// 0044fcf0: MOV EAX,dword ptr [EAX + 0x158]
// 0044fcf6: MOV dword ptr [ESP + 0xb4],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 0044fcfd: MOV EAX,dword ptr [ESP + 0x148]
//   XREF to: Stack[0x4] (READ)
// 0044fd04: XOR EBP,EBP
// 0044fd06: MOV EDX,dword ptr [EAX + 0x148]
// 0044fd0c: MOV dword ptr [ESP + 0xb8],EBP
//   XREF to: Stack[-0x8c] (WRITE)
// 0044fd13: TEST EDX,EDX
// 0044fd15: JLE 0x0044fa10
//   XREF to: 0044fa10 (CONDITIONAL_JUMP)
// 0044fd1b: MOV dword ptr [ESP + 0x120],EBP
//   XREF to: Stack[-0x24] (WRITE)
// 0044fd22: MOV EAX,dword ptr [ESP + 0x148]
//   Label: LAB_0044fd22
//   XREF to: Stack[0x4] (READ)
// 0044fd29: MOV EDI,dword ptr [EAX + 0x144]
// 0044fd2f: XOR ESI,ESI
// 0044fd31: TEST EDI,EDI
// 0044fd33: JLE 0x0044fda5
//   XREF to: 0044fda5 (CONDITIONAL_JUMP)
// 0044fd35: MOV EBX,dword ptr [ESP + 0x120]
//   XREF to: Stack[-0x24] (READ)
// 0044fd3c: XOR ECX,ECX
// 0044fd3e: MOV EDI,dword ptr [ESP + 0x148]
//   Label: LAB_0044fd3e
//   XREF to: Stack[0x4] (READ)
// 0044fd45: MOV EDX,EBX
// 0044fd47: MOV EAX,EBX
// 0044fd49: SAR EDX,0x1f
// 0044fd4c: IDIV dword ptr [EDI + 0x148]
// 0044fd52: IMUL EDI,EAX,0x280
// 0044fd58: MOV EDX,ECX
// 0044fd5a: MOV EBP,dword ptr [ESP + 0x148]
//   XREF to: Stack[0x4] (READ)
// 0044fd61: SAR EDX,0x1f
// 0044fd64: MOV EAX,ECX
// 0044fd66: IDIV dword ptr [EBP + 0x144]
// 0044fd6c: ADD EAX,EDI
// 0044fd6e: ADD EAX,0x151bfa8
//   XREF to: 0151bfa8 (DATA)
// 0044fd73: MOV AL,byte ptr [EAX]
//   XREF to: 0151bfa8 (DATA)
// 0044fd75: AND EAX,0xff
// 0044fd7a: MOV EDX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x90] (READ)
// 0044fd81: MOV EAX,dword ptr [EAX*0x4 + 0xc199fc]
//   XREF to: 00c199fc (DATA)
// 0044fd88: ADD ECX,0x280
// 0044fd8e: MOV dword ptr [EDX],EAX
// 0044fd90: LEA EAX,[EDX + 0x4]
// 0044fd93: INC ESI
// 0044fd94: MOV EDX,dword ptr [EBP + 0x144]
// 0044fd9a: MOV dword ptr [ESP + 0xb4],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 0044fda1: CMP ESI,EDX
// 0044fda3: JL 0x0044fd3e
//   XREF to: 0044fd3e (CONDITIONAL_JUMP)
// 0044fda5: MOV EBP,dword ptr [ESP + 0x120]
//   Label: LAB_0044fda5
//   XREF to: Stack[-0x24] (READ)
// 0044fdac: MOV EAX,dword ptr [ESP + 0xb8]
//   XREF to: Stack[-0x8c] (READ)
// 0044fdb3: MOV EDX,dword ptr [ESP + 0x148]
//   XREF to: Stack[0x4] (READ)
// 0044fdba: ADD EBP,0x1e0
// 0044fdc0: INC EAX
// 0044fdc1: MOV ECX,dword ptr [EDX + 0x148]
// 0044fdc7: MOV dword ptr [ESP + 0x120],EBP
//   XREF to: Stack[-0x24] (WRITE)
// 0044fdce: MOV dword ptr [ESP + 0xb8],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 0044fdd5: CMP EAX,ECX
// 0044fdd7: JGE 0x0044fa10
//   XREF to: 0044fa10 (CONDITIONAL_JUMP)
// 0044fddd: JMP 0x0044fd22
//   XREF to: 0044fd22 (UNCONDITIONAL_JUMP)
// 0044fde2: MOV EAX,dword ptr [EAX + 0x158]
//   Label: LAB_0044fde2
// 0044fde8: MOV dword ptr [ESP + 0xbc],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 0044fdef: MOV EAX,0x9600000
// 0044fdf4: MOV ECX,dword ptr [ESP + 0x148]
//   XREF to: Stack[0x4] (READ)
// 0044fdfb: MOV EDX,EAX
// 0044fdfd: MOV EBP,dword ptr [ECX + 0x144]
// 0044fe03: SAR EDX,0x1f
// 0044fe06: IDIV EBP
// 0044fe08: MOV EDX,EAX
// 0044fe0a: MOV EBX,dword ptr [ECX + 0x148]
// 0044fe10: SAR EDX,0x1f
// 0044fe13: IDIV EBX
// 0044fe15: XOR ESI,ESI
// 0044fe17: MOV dword ptr [ESP + 0xc8],ESI
//   XREF to: Stack[-0x7c] (WRITE)
// 0044fe1e: MOV dword ptr [ESP + 0xc0],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 0044fe25: TEST EBX,EBX
// 0044fe27: JLE 0x0044fa10
//   XREF to: 0044fa10 (CONDITIONAL_JUMP)
// 0044fe2d: MOV dword ptr [ESP + 0x11c],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 0044fe34: XOR EAX,EAX
//   Label: LAB_0044fe34
// 0044fe36: MOV dword ptr [ESP + 0xc4],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 0044fe3d: MOV EAX,dword ptr [ESP + 0x148]
//   XREF to: Stack[0x4] (READ)
// 0044fe44: CMP dword ptr [EAX + 0x144],0x0
// 0044fe4b: JLE 0x00450299
//   XREF to: 00450299 (CONDITIONAL_JUMP)
// 0044fe51: XOR EBP,EBP
// 0044fe53: MOV EAX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0x28] (READ)
// 0044fe5a: MOV dword ptr [ESP + 0x118],EBP
//   XREF to: Stack[-0x2c] (WRITE)
// 0044fe61: MOV dword ptr [ESP + 0xe0],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 0044fe68: MOV EAX,dword ptr [ESP + 0x118]
//   Label: LAB_0044fe68
//   XREF to: Stack[-0x2c] (READ)
// 0044fe6f: MOV ECX,dword ptr [ESP + 0x148]
//   XREF to: Stack[0x4] (READ)
// 0044fe76: MOV EDX,EAX
// 0044fe78: MOV EBX,dword ptr [ECX + 0x144]
// 0044fe7e: SAR EDX,0x1f
// 0044fe81: IDIV EBX
// 0044fe83: MOV EBX,EAX
// 0044fe85: MOV EAX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[-0x64] (READ)
// 0044fe8c: MOV EDX,EAX
// 0044fe8e: MOV ESI,dword ptr [ECX + 0x148]
// 0044fe94: SAR EDX,0x1f
// 0044fe97: IDIV ESI
// 0044fe99: MOV ECX,EAX
// 0044fe9b: MOV EAX,0x27d80
// 0044fea0: MOV ESI,dword ptr [ESP + 0x148]
//   XREF to: Stack[0x4] (READ)
// 0044fea7: MOV EDX,EAX
// 0044fea9: MOV EDI,dword ptr [ESI + 0x144]
// 0044feaf: SAR EDX,0x1f
// 0044feb2: IDIV EDI
// 0044feb4: ADD EAX,EBX
// 0044feb6: MOV dword ptr [ESP + 0xd8],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 0044febd: MOV EAX,0x1de20
// 0044fec2: MOV EDX,EAX
// 0044fec4: MOV EBP,dword ptr [ESI + 0x148]
// 0044feca: SAR EDX,0x1f
// 0044fecd: IDIV EBP
// 0044fecf: MOV EBP,ECX
// 0044fed1: SAR EBP,0x8
// 0044fed4: IMUL EBP,EBP,0x280
// 0044feda: ADD EAX,ECX
// 0044fedc: MOV dword ptr [ESP + 0xdc],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 0044fee3: MOV EAX,EBX
// 0044fee5: SAR EAX,0x8
// 0044fee8: MOV dword ptr [ESP + 0xe4],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 0044feef: ADD EAX,EBP
// 0044fef1: ADD EAX,0x151bfa8
//   XREF to: 0151bfa8 (DATA)
// 0044fef6: MOV AL,byte ptr [EAX]
//   XREF to: 0151bfa8 (DATA)
// 0044fef8: AND EAX,0xff
// 0044fefd: MOV EAX,dword ptr [EAX*0x4 + 0xc199fc]
//   XREF to: 00c199fc (DATA)
// 0044ff04: MOV EDX,EAX
// 0044ff06: MOV EDI,0xff
// 0044ff0b: AND EDX,0xff
// 0044ff11: AND ECX,0xff
// 0044ff17: MOV dword ptr [ESP + 0xcc],EDX
//   XREF to: Stack[-0x78] (WRITE)
// 0044ff1e: SUB EDI,ECX
// 0044ff20: MOV ECX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x78] (READ)
// 0044ff27: IMUL ECX,EDI
// 0044ff2a: MOV EDX,EAX
// 0044ff2c: SHR EDX,0x8
// 0044ff2f: AND EDX,0xff
// 0044ff35: MOV dword ptr [ESP + 0xd0],EDX
//   XREF to: Stack[-0x74] (WRITE)
// 0044ff3c: MOV ESI,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x74] (READ)
// 0044ff43: IMUL ESI,EDI
// 0044ff46: SHR EAX,0x10
// 0044ff49: AND EAX,0xff
// 0044ff4e: MOV dword ptr [ESP + 0xd4],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 0044ff55: MOV EDX,EBX
// 0044ff57: MOV EBX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x70] (READ)
// 0044ff5e: IMUL EBX,EDI
// 0044ff61: MOV EAX,0xff
// 0044ff66: AND EDX,0xff
// 0044ff6c: SUB EAX,EDX
// 0044ff6e: MOV EDX,EAX
// 0044ff70: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x78] (READ)
// 0044ff77: IMUL EAX,EDX
// 0044ff7a: ADD ECX,EAX
// 0044ff7c: MOV EAX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x74] (READ)
// 0044ff83: IMUL EAX,EDX
// 0044ff86: ADD ESI,EAX
// 0044ff88: MOV EAX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x70] (READ)
// 0044ff8f: IMUL EAX,EDX
// 0044ff92: ADD EBX,EAX
// 0044ff94: MOV EAX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[-0x6c] (READ)
// 0044ff9b: SAR EAX,0x8
// 0044ff9e: ADD EBP,EAX
// 0044ffa0: ADD EBP,0x151bfa8
//   XREF to: 0151bfa8 (DATA)
// 0044ffa6: MOVZX EBP,byte ptr [EBP]
//   XREF to: 0151bfa8 (DATA)
// 0044ffaa: MOV dword ptr [ESP + 0xe8],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 0044ffb1: MOV EAX,dword ptr [EBP*0x4 + 0xc199fc]
//   XREF to: 00c199fc (DATA)
// 0044ffb8: MOV EBP,EAX
// 0044ffba: AND EBP,0xff
// 0044ffc0: MOV dword ptr [ESP + 0xcc],EBP
//   XREF to: Stack[-0x78] (WRITE)
// 0044ffc7: MOV EBP,EAX
// 0044ffc9: SHR EAX,0x10
// 0044ffcc: AND EAX,0xff
// 0044ffd1: MOV dword ptr [ESP + 0xd4],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 0044ffd8: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x78] (READ)
// 0044ffdf: IMUL EAX,EDI
// 0044ffe2: SHR EBP,0x8
// 0044ffe5: AND EBP,0xff
// 0044ffeb: MOV dword ptr [ESP + 0xd0],EBP
//   XREF to: Stack[-0x74] (WRITE)
// 0044fff2: MOV EBP,dword ptr [ESP + 0xd8]
//   XREF to: Stack[-0x6c] (READ)
// 0044fff9: AND EBP,0xff
// 0044ffff: MOV dword ptr [ESP + 0xec],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 00450006: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x78] (READ)
// 0045000d: IMUL EAX,EBP
// 00450010: ADD EAX,dword ptr [ESP + 0xec]
//   XREF to: Stack[-0x58] (READ)
// 00450017: ADD ECX,EAX
// 00450019: MOV EAX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x74] (READ)
// 00450020: IMUL EAX,EDI
// 00450023: MOV dword ptr [ESP + 0xec],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 0045002a: MOV EAX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x74] (READ)
// 00450031: IMUL EAX,EBP
// 00450034: ADD EAX,dword ptr [ESP + 0xec]
//   XREF to: Stack[-0x58] (READ)
// 0045003b: ADD ESI,EAX
// 0045003d: MOV EAX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x70] (READ)
// 00450044: IMUL EDI,EAX
// 00450047: IMUL EAX,EBP
// 0045004a: ADD EDI,EAX
// 0045004c: ADD EBX,EDI
// 0045004e: MOV EAX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x68] (READ)
// 00450055: SAR EAX,0x8
// 00450058: IMUL EAX,EAX,0x280
// 0045005e: MOV EDI,dword ptr [ESP + 0xe4]
//   XREF to: Stack[-0x60] (READ)
// 00450065: MOV dword ptr [ESP + 0xec],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 0045006c: ADD EAX,EDI
// 0045006e: ADD EAX,0x151bfa8
//   XREF to: 0151bfa8 (DATA)
// 00450073: MOV AL,byte ptr [EAX]
//   XREF to: 0151bfa8 (DATA)
// 00450075: AND EAX,0xff
// 0045007a: MOV EAX,dword ptr [EAX*0x4 + 0xc199fc]
//   XREF to: 00c199fc (DATA)
// 00450081: MOV EDI,EAX
// 00450083: AND EDI,0xff
// 00450089: MOV dword ptr [ESP + 0xcc],EDI
//   XREF to: Stack[-0x78] (WRITE)
// 00450090: MOV EDI,EAX
// 00450092: SHR EAX,0x10
// 00450095: AND EAX,0xff
// 0045009a: MOV dword ptr [ESP + 0xd4],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 004500a1: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x78] (READ)
// 004500a8: IMUL EAX,EDX
// 004500ab: SHR EDI,0x8
// 004500ae: AND EDI,0xff
// 004500b4: MOV dword ptr [ESP + 0xd0],EDI
//   XREF to: Stack[-0x74] (WRITE)
// 004500bb: MOV EDI,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x68] (READ)
// 004500c2: AND EDI,0xff
// 004500c8: MOV dword ptr [ESP + 0xf4],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 004500cf: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x78] (READ)
// 004500d6: IMUL EAX,EDI
// 004500d9: MOV dword ptr [ESP + 0xf0],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 004500e0: MOV EAX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[-0x50] (READ)
// 004500e7: ADD EAX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[-0x54] (READ)
// 004500ee: ADD ECX,EAX
// 004500f0: MOV EAX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x74] (READ)
// 004500f7: IMUL EAX,EDX
// 004500fa: MOV dword ptr [ESP + 0xf0],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00450101: MOV EAX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x74] (READ)
// 00450108: IMUL EAX,EDI
// 0045010b: MOV dword ptr [ESP + 0xf4],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00450112: MOV EAX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[-0x54] (READ)
// 00450119: ADD EAX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[-0x50] (READ)
// 00450120: ADD ESI,EAX
// 00450122: MOV EAX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x70] (READ)
// 00450129: IMUL EAX,EDX
// 0045012c: MOV dword ptr [ESP + 0xf4],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00450133: MOV EAX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x70] (READ)
// 0045013a: IMUL EAX,EDI
// 0045013d: ADD EAX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[-0x50] (READ)
// 00450144: MOV EDX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[-0x5c] (READ)
// 0045014b: ADD EBX,EAX
// 0045014d: MOV EAX,dword ptr [ESP + 0xec]
//   XREF to: Stack[-0x58] (READ)
// 00450154: ADD EAX,EDX
// 00450156: ADD EAX,0x151bfa8
//   XREF to: 0151bfa8 (DATA)
// 0045015b: MOV AL,byte ptr [EAX]
//   XREF to: 0151bfa8 (DATA)
// 0045015d: AND EAX,0xff
// 00450162: MOV EAX,dword ptr [EAX*0x4 + 0xc199fc]
//   XREF to: 00c199fc (DATA)
// 00450169: MOV EDX,EAX
// 0045016b: AND EDX,0xff
// 00450171: MOV dword ptr [ESP + 0xcc],EDX
//   XREF to: Stack[-0x78] (WRITE)
// 00450178: MOV EDX,EAX
// 0045017a: SHR EAX,0x10
// 0045017d: AND EAX,0xff
// 00450182: MOV dword ptr [ESP + 0xd4],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 00450189: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x78] (READ)
// 00450190: IMUL EAX,EBP
// 00450193: MOV dword ptr [ESP + 0xf4],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0045019a: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x78] (READ)
// 004501a1: IMUL EAX,EDI
// 004501a4: SHR EDX,0x8
// 004501a7: AND EDX,0xff
// 004501ad: MOV dword ptr [ESP + 0xd0],EDX
//   XREF to: Stack[-0x74] (WRITE)
// 004501b4: ADD EAX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[-0x50] (READ)
// 004501bb: ADD ECX,EAX
// 004501bd: MOV EAX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x74] (READ)
// 004501c4: IMUL EAX,EBP
// 004501c7: MOV dword ptr [ESP + 0xf4],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 004501ce: MOV EAX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x74] (READ)
// 004501d5: IMUL EAX,EDI
// 004501d8: ADD EAX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[-0x50] (READ)
// 004501df: ADD ESI,EAX
// 004501e1: MOV EAX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x70] (READ)
// 004501e8: IMUL EBP,EAX
// 004501eb: IMUL EAX,EDI
// 004501ee: ADD EAX,EBP
// 004501f0: XOR EDX,EDX
// 004501f2: ADD EBX,EAX
// 004501f4: MOV EAX,ECX
// 004501f6: MOV ECX,dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x84] (READ)
// 004501fd: DIV ECX
// 004501ff: MOV ECX,EAX
// 00450201: XOR EDX,EDX
// 00450203: MOV EAX,ESI
// 00450205: DIV dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x84] (READ)
// 0045020c: MOV EDI,dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x84] (READ)
// 00450213: MOV ESI,EAX
// 00450215: XOR EDX,EDX
// 00450217: MOV EAX,EBX
// 00450219: DIV EDI
// 0045021b: MOV EBX,EAX
// 0045021d: CMP ECX,0xff
// 00450223: JBE 0x0045022a
//   XREF to: 0045022a (CONDITIONAL_JUMP)
// 00450225: MOV ECX,0xff
// 0045022a: CMP ESI,0xff
//   Label: LAB_0045022a
// 00450230: JBE 0x00450237
//   XREF to: 00450237 (CONDITIONAL_JUMP)
// 00450232: MOV ESI,0xff
// 00450237: CMP EBX,0xff
//   Label: LAB_00450237
// 0045023d: JBE 0x00450244
//   XREF to: 00450244 (CONDITIONAL_JUMP)
// 0045023f: MOV EBX,0xff
// 00450244: MOV EAX,dword ptr [ESP + 0xbc]
//   Label: LAB_00450244
//   XREF to: Stack[-0x88] (READ)
// 0045024b: MOV EDX,dword ptr [ESP + 0x148]
//   XREF to: Stack[0x4] (READ)
// 00450252: SHL ESI,0x8
// 00450255: SHL EBX,0x10
// 00450258: OR ECX,ESI
// 0045025a: MOV ESI,dword ptr [ESP + 0xc4]
//   XREF to: Stack[-0x80] (READ)
// 00450261: OR ECX,EBX
// 00450263: MOV EBX,dword ptr [ESP + 0x118]
//   XREF to: Stack[-0x2c] (READ)
// 0045026a: INC ESI
// 0045026b: MOV dword ptr [EAX],ECX
//   XREF to: 00ffffff (DATA)
// 0045026d: LEA ECX,[EAX + 0x4]
// 00450270: ADD EBX,0x28000
// 00450276: MOV dword ptr [ESP + 0xc4],ESI
//   XREF to: Stack[-0x80] (WRITE)
// 0045027d: MOV EDI,dword ptr [EDX + 0x144]
// 00450283: MOV dword ptr [ESP + 0xbc],ECX
//   XREF to: Stack[-0x88] (WRITE)
// 0045028a: MOV dword ptr [ESP + 0x118],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 00450291: CMP ESI,EDI
// 00450293: JL 0x0044fe68
//   XREF to: 0044fe68 (CONDITIONAL_JUMP)
// 00450299: MOV EBX,dword ptr [ESP + 0x11c]
//   Label: LAB_00450299
//   XREF to: Stack[-0x28] (READ)
// 004502a0: MOV ESI,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0x7c] (READ)
// 004502a7: MOV EDX,dword ptr [ESP + 0x148]
//   XREF to: Stack[0x4] (READ)
// 004502ae: ADD EBX,0x1e000
// 004502b4: INC ESI
// 004502b5: MOV EDI,dword ptr [EDX + 0x148]
// 004502bb: MOV dword ptr [ESP + 0x11c],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 004502c2: MOV dword ptr [ESP + 0xc8],ESI
//   XREF to: Stack[-0x7c] (WRITE)
// 004502c9: CMP ESI,EDI
// 004502cb: JGE 0x0044fa10
//   XREF to: 0044fa10 (CONDITIONAL_JUMP)
// 004502d1: JMP 0x0044fe34
//   XREF to: 0044fe34 (UNCONDITIONAL_JUMP)
