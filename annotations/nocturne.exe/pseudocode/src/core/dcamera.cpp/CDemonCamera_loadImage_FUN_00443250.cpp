// Name: core_dcamera.cpp_CDemonCamera_loadImage_FUN_00443250
// Address: 00443250
// Address Range: [[00443250, 00444135]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_loadImage_FUN_00443250(CDemonCamera *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_loadImage_FUN_00443250(CDemonCamera *this_ptr,char *filename)

{
  byte bVar1;
  float fVar2;
  uint uVar3;
  ulonglong uVar4;
  char cVar5;
  _FILE *p_Var6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  char *pcVar22;
  char *pcVar23;
  uint uVar24;
  SRGBColorPalette *pSVar25;
  char *pcVar26;
  uint uVar27;
  int *piVar28;
  uint *puVar29;
  SRGBColorPalette *pSVar30;
  uint uVar31;
  uint uVar32;
  byte bVar33;
  char local_144 [80];
  char local_f4 [80];
  int local_a4;
  char local_a0 [3];
  byte local_9d;
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
  
  bVar33 = 0;
  pcVar26 = local_144;
  pcVar22 = filename;
  do {
    cVar5 = *pcVar22;
    *pcVar26 = cVar5;
    pcVar23 = local_144;
    if (cVar5 == '\0') break;
    cVar5 = pcVar22[1];
    pcVar22 = pcVar22 + 2;
    pcVar26[1] = cVar5;
    pcVar26 = pcVar26 + 2;
    pcVar23 = local_144;
  } while (cVar5 != '\0');
  do {
    pcVar22 = pcVar23;
    if (*pcVar23 == '.') goto LAB_00443299;
    if (*pcVar23 == '\0') break;
    pcVar22 = pcVar23 + 1;
    if (*pcVar22 == '.') goto LAB_00443299;
    pcVar23 = pcVar23 + 2;
  } while (*pcVar22 != '\0');
  pcVar22 = (char *)0x0;
LAB_00443299:
  if (pcVar22 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\dcamera.cpp";
    g_CurrentLineNumber = 2434;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonCamera::loadImage - no extention");
  }
  pcVar26 = ".ACT";
  do {
    cVar5 = *pcVar26;
    *pcVar22 = cVar5;
    if (cVar5 == '\0') break;
    cVar5 = pcVar26[1];
    pcVar26 = pcVar26 + 2;
    pcVar22[1] = cVar5;
    pcVar22 = pcVar22 + 2;
  } while (cVar5 != '\0');
  p_Var6 = engine_dosio_cpp_getFile_FUN_00456a60("backdrop",local_144,"rb");
  if ((p_Var6 != (_FILE *)0x0) ||
     (p_Var6 = engine_dosio_cpp_getFile_FUN_00456a60("art",local_144,"rb"),
     p_Var6 != (_FILE *)0x0)) {
    _fread(&g_SRGBColorPalette_00b0daf8,0x100,3,p_Var6);
    _fclose(p_Var6);
    pcVar22 = local_f4;
    pcVar26 = filename;
    do {
      cVar5 = *pcVar26;
      *pcVar22 = cVar5;
      if (cVar5 == '\0') break;
      cVar5 = pcVar26[1];
      pcVar26 = pcVar26 + 2;
      pcVar22[1] = cVar5;
      pcVar22 = pcVar22 + 2;
    } while (cVar5 != '\0');
    pcVar22 = local_f4;
    do {
      pcVar26 = pcVar22;
      if (*pcVar22 == '.') goto LAB_00443363;
      if (*pcVar22 == '\0') break;
      pcVar26 = pcVar22 + 1;
      if (*pcVar26 == '.') goto LAB_00443363;
      pcVar22 = pcVar22 + 2;
    } while (*pcVar26 != '\0');
    pcVar26 = (char *)0x0;
LAB_00443363:
    if (pcVar26 == (char *)0x0) {
      g_CurrentFilename = "..\\core\\dcamera.cpp";
      g_CurrentLineNumber = 2453;
      core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonCamera::loadImage - no ext");
    }
    pcVar22 = ".fog";
    do {
      cVar5 = *pcVar22;
      *pcVar26 = cVar5;
      if (cVar5 == '\0') break;
      cVar5 = pcVar22[1];
      pcVar22 = pcVar22 + 2;
      pcVar26[1] = cVar5;
      pcVar26 = pcVar26 + 2;
    } while (cVar5 != '\0');
    local_14 = engine_dosio_cpp_getFile_FUN_00456a60("backdrop",local_f4,"rb");
    if (local_14 != (_FILE *)0x0) {
      _fread(&g_SFogGrid_0140d784,0x1000,1,local_14);
      p_Var6 = local_14;
      if (g_SFogGrid_0140d784.density_multiplier == 0) {
        memset(g_SFogImagePlane_ARRAY_012e1778,0,0x12c000);
      }
      else {
        g_INT_0140d780 = 0x10;
        if ((g_SFogGrid_0140d784.scroll_vector.x == 0 && g_SFogGrid_0140d784.scroll_vector.y == 0)
            && g_SFogGrid_0140d784.scroll_vector.z == 0) {
          g_INT_0140d780 = 1;
        }
        _fread(local_a0,3,1,local_14);
        local_9d = 0;
        iVar7 = _strcmp(local_a0,"LZW");
        if ((iVar7 == 0) ||
           (iVar7 = _strcmp(local_a0,"EFD"), iVar7 == 0)) {
          iVar7 = engine_dosio_cpp_getFileSize_FUN_004568c0("backdrop",local_f4);
          local_9c = iVar7 - 0x1003;
          if ((int)local_9c < 1) {
            g_CurrentFilename = "..\\core\\dcamera.cpp";
            g_CurrentLineNumber = 2485;
            core_main_c_displayErrorAndQuit_FUN_004c8440("Hell froze loading %s",local_f4);
          }
          if (500000 < local_9c) {
            g_CurrentFilename = "..\\core\\dcamera.cpp";
            g_CurrentLineNumber = 2491;
            core_main_c_displayErrorAndQuit_FUN_004c8440
                      ("%s too big to fit in decompress buffer",local_f4);
          }
          _fread(g_CHAR_ARRAY_0077d250,local_9c,1,local_14);
          support_codec_cpp_CLZWDecompress_init_FUN_00439a30(&g_CLZWDecompressInstance);
          local_98 = g_INT_0140d780 * 0x12c00;
          iVar7 = support_codec_cpp_CLZWDecompress_processBuffer_FUN_00439b30
                            (&g_CLZWDecompressInstance,g_CHAR_ARRAY_0077d250,(int *)&local_9c,
                             (char *)g_SFogImagePlane_ARRAY_012e1778,&local_98,1);
          if (iVar7 == 0) {
            g_CurrentFilename = "..\\core\\dcamera.cpp";
            g_CurrentLineNumber = 2500;
            core_main_c_displayErrorAndQuit_FUN_004c8440("Error decompressing %s",local_f4);
          }
          local_a4 = 0;
          if (0 < g_INT_0140d780) {
            local_34 = 0;
            local_30 = -0x12c00;
            local_38 = 0x12c00;
            do {
              local_48 = local_34;
              local_44 = local_30;
              local_40 = local_34;
              local_3c = local_38;
              do {
                iVar15 = 0;
                iVar19 = 0;
                iVar7 = local_40;
                do {
                  iVar19 = (*(int *)(g_SFogImagePlane_012ceb78.pixels[0xef] +
                                    iVar15 + local_48 + 0x13d) >> 0x18) + iVar19;
                  cVar5 = (char)iVar19 * '\x04';
                  if (0 < local_a4) {
                    cVar5 = cVar5 + g_SFogImagePlane_ARRAY_012e1778[0].pixels[0][local_44 + iVar15];
                  }
                  iVar15 = iVar15 + 1;
                  g_SFogImagePlane_ARRAY_012e1778[0].pixels[0][iVar7] = cVar5;
                  iVar7 = iVar7 + 1;
                } while (iVar15 < 0x140);
                local_44 = local_44 + 0x140;
                local_40 = local_40 + 0x140;
                local_48 = local_48 + 0x140;
              } while (local_40 != local_38);
              local_38 = local_38 + 0x12c00;
              local_34 = local_34 + 0x12c00;
              local_30 = local_30 + 0x12c00;
              local_a4 = local_a4 + 1;
            } while (local_a4 < g_INT_0140d780);
          }
        }
        else {
          _fseek(p_Var6,-3,1);
          _fread(g_SFogImagePlane_ARRAY_012e1778,0x12c00,g_INT_0140d780,p_Var6);
        }
      }
      _fclose(local_14);
    }
    p_Var6 = engine_dosio_cpp_getFile_FUN_00456a60("backdrop",filename,"rb");
    if ((p_Var6 != (_FILE *)0x0) ||
       (p_Var6 = engine_dosio_cpp_getFile_FUN_00456a60("art",filename,"rb"),
       p_Var6 != (_FILE *)0x0)) {
      iVar19 = 0;
      iVar7 = 0;
      do {
        uVar24 = (uint)(&g_SRGBColorPalette_00b0daf8.colors[0].b)[iVar19];
        uVar27 = (uint)(&g_SRGBColorPalette_00b0daf8.colors[0].r)[iVar19];
        uVar9 = (uint)(&g_SRGBColorPalette_00b0daf8.colors[0].g)[iVar19];
        if (g_BitsPerPixel == 0x20) {
          uVar24 = uVar24 << (g_BlueBitPosition.bytes[0] & 0x1f) |
                   uVar9 << (g_GreenBitPosition.bytes[0] & 0x1f) |
                   uVar27 << (g_RedBitPosition.bytes[0] & 0x1f);
        }
        else {
          uVar24 = uVar9 << 8 | uVar27 << 0x10 | uVar24;
        }
        iVar15 = iVar7 + 4;
        iVar19 = iVar19 + 3;
        *(uint *)((int)g_UINT_ARRAY_00b0ddfc + iVar7) = uVar24;
        iVar7 = iVar15;
      } while (iVar15 != 0x400);
      _fread(g_CHAR_ARRAY_01410290,0x280,0x1e0,p_Var6);
      _fclose(p_Var6);
      fVar2 = this_ptr->max_distance;
      if (fVar2 == 3.36312e-43) {
        local_20 = 0;
        do {
          local_94 = 0;
          pbVar8 = (byte *)(g_CHAR_ARRAY_01410290 + local_20);
          piVar28 = (int *)((int)this_ptr->framebuffer_aligned + local_20);
          do {
            local_94 = local_94 + 1;
            *piVar28 = ((g_UINT_ARRAY_00b0ddfc[*pbVar8] & 0xfcfcfc) >> 2) +
                       ((g_UINT_ARRAY_00b0ddfc[pbVar8[1]] & 0xfcfcfc) >> 2) +
                       ((g_UINT_ARRAY_00b0ddfc[pbVar8[0x280]] & 0xfcfcfc) >> 2) +
                       ((g_UINT_ARRAY_00b0ddfc[pbVar8[0x281]] & 0xfcfcfc) >> 2);
            pbVar8 = pbVar8 + 2;
            piVar28 = piVar28 + 1;
          } while (local_94 < 0x140);
          local_20 = local_20 + 0x500;
        } while (local_20 != 0x4b000);
        local_20 = 0x4b000;
      }
      else if (fVar2 == 6.72623e-43) {
        pcVar22 = g_CHAR_ARRAY_01410290;
        iVar7 = 0;
        puVar14 = this_ptr->framebuffer_aligned;
        do {
          bVar1 = *pcVar22;
          pcVar22 = pcVar22 + 1;
          iVar7 = iVar7 + 1;
          *puVar14 = g_UINT_ARRAY_00b0ddfc[bVar1];
          puVar14 = puVar14 + 1;
        } while (iVar7 < 0x4b000);
      }
      else if ((int)fVar2 < 0x1e1) {
        local_88 = this_ptr->framebuffer_aligned;
        uVar4 = 0x9600000 / (longlong)this_ptr->screen_width;
        local_84 = (uint)((longlong)
                          ((ulonglong)(uint)((int)uVar4 >> 0x1f) << 0x20 | uVar4 & 0xffffffff) /
                         (longlong)(int)this_ptr->max_distance);
        local_7c = 0;
        if (0 < (int)this_ptr->max_distance) {
          local_28 = 0;
          do {
            local_80 = 0;
            if (0 < this_ptr->screen_width) {
              local_2c = 0;
              local_64 = local_28;
              do {
                uVar9 = local_2c / this_ptr->screen_width;
                uVar27 = local_28 / (int)this_ptr->max_distance;
                local_6c = (int)(0x27d80 / (longlong)this_ptr->screen_width) + uVar9;
                iVar19 = ((int)uVar27 >> 8) * 0x280;
                local_68 = (int)(0x1de20 / (longlong)(int)this_ptr->max_distance) + uVar27;
                local_60 = (int)uVar9 >> 8;
                uVar24 = g_UINT_ARRAY_00b0ddfc[(byte)g_CHAR_ARRAY_01410290[local_60 + iVar19]];
                iVar15 = 0xff - (uVar27 & 0xff);
                uVar18 = uVar24 >> 8 & 0xff;
                uVar10 = uVar24 >> 0x10 & 0xff;
                iVar7 = 0xff - (uVar9 & 0xff);
                local_5c = (int)local_6c >> 8;
                uVar9 = g_UINT_ARRAY_00b0ddfc[(byte)g_CHAR_ARRAY_01410290[iVar19 + local_5c]];
                uVar11 = uVar9 >> 0x10 & 0xff;
                uVar20 = uVar9 >> 8 & 0xff;
                uVar21 = local_6c & 0xff;
                local_58 = ((int)local_68 >> 8) * 0x280;
                uVar27 = g_UINT_ARRAY_00b0ddfc[(byte)g_CHAR_ARRAY_01410290[local_58 + local_60]];
                uVar12 = uVar27 >> 0x10 & 0xff;
                uVar31 = uVar27 >> 8 & 0xff;
                uVar32 = local_68 & 0xff;
                local_54 = uVar31 * iVar7;
                uVar3 = g_UINT_ARRAY_00b0ddfc[(byte)g_CHAR_ARRAY_01410290[local_58 + local_5c]];
                local_78 = uVar3 & 0xff;
                local_70 = uVar3 >> 0x10 & 0xff;
                local_74 = uVar3 >> 8 & 0xff;
                local_50 = local_74 * uVar21;
                uVar24 = ((uVar24 & 0xff) * iVar15 + (uVar24 & 0xff) * iVar7 +
                          (uVar9 & 0xff) * uVar21 + (uVar9 & 0xff) * iVar15 +
                          (uVar27 & 0xff) * iVar7 + (uVar27 & 0xff) * uVar32 +
                         local_78 * uVar32 + local_78 * uVar21) / local_84;
                uVar9 = (uVar18 * iVar15 + uVar18 * iVar7 + uVar20 * uVar21 + uVar20 * iVar15 +
                         local_54 + uVar31 * uVar32 + local_74 * uVar32 + local_50) / local_84;
                uVar27 = (uVar10 * iVar15 + uVar10 * iVar7 + iVar15 * uVar11 + uVar11 * uVar21 +
                          uVar12 * uVar32 + uVar12 * iVar7 + local_70 * uVar32 + uVar21 * local_70)
                         / local_84;
                if (0xff < uVar24) {
                  uVar24 = 0xff;
                }
                if (0xff < uVar9) {
                  uVar9 = 0xff;
                }
                if (0xff < uVar27) {
                  uVar27 = 0xff;
                }
                local_80 = local_80 + 1;
                *local_88 = uVar24 | uVar9 << 8 | uVar27 << 0x10;
                local_88 = local_88 + 1;
                local_2c = local_2c + 0x28000;
              } while (local_80 < this_ptr->screen_width);
            }
            local_28 = local_28 + 0x1e000;
            local_7c = local_7c + 1;
          } while (local_7c < (int)this_ptr->max_distance);
        }
      }
      else {
        local_90 = this_ptr->framebuffer_aligned;
        local_8c = 0;
        if (0 < (int)this_ptr->max_distance) {
          local_24 = 0;
          do {
            iVar7 = 0;
            if (0 < this_ptr->screen_width) {
              iVar19 = 0;
              do {
                iVar15 = iVar19 / this_ptr->screen_width;
                iVar19 = iVar19 + 0x280;
                *local_90 = g_UINT_ARRAY_00b0ddfc
                            [(byte)g_CHAR_ARRAY_01410290
                                   [iVar15 + (local_24 / (int)this_ptr->max_distance) * 0x280]];
                local_90 = local_90 + 1;
                iVar7 = iVar7 + 1;
              } while (iVar7 < this_ptr->screen_width);
            }
            local_24 = local_24 + 0x1e0;
            local_8c = local_8c + 1;
          } while (local_8c < (int)this_ptr->max_distance);
        }
      }
      iVar19 = 0;
      iVar7 = 0;
      do {
        iVar13 = 0;
        iVar15 = iVar7;
        do {
          iVar16 = iVar13 >> 0x1f;
          iVar17 = iVar13 + iVar16 * -0x100;
          iVar13 = iVar13 + 0x280;
          *(char *)((int)g_UINT_ARRAY_0145b290 + iVar15) =
               g_CHAR_ARRAY_01410290
               [((int)(iVar17 - (uint)(iVar16 << 7 < 0)) >> 8) +
                ((int)((iVar19 + (iVar19 >> 0x1f) * -0x100) - (uint)((iVar19 >> 0x1f) << 7 < 0)) >>
                8) * 0x280];
          iVar15 = iVar15 + 1;
        } while (iVar13 != 0x28000);
        iVar7 = iVar7 + 0x100;
        iVar19 = iVar19 + 0x1e0;
      } while (iVar7 != 0x10000);
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
                (g_CDemonRenderer_PTR_005ae704,&g_SMRGLTextureBasic_005ad49c);
      puVar14 = g_UINT_ARRAY_0145b290;
      puVar29 = (uint *)g_CurrentTextureData;
      for (iVar7 = 0x4000; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar29 = *puVar14;
        puVar14 = puVar14 + (uint)bVar33 * -2 + 1;
        puVar29 = puVar29 + (uint)bVar33 * -2 + 1;
      }
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(uchar *)puVar29 = (uchar)*puVar14;
        puVar14 = (uint *)((int)puVar14 + (uint)bVar33 * -2 + 1);
        puVar29 = (uint *)((int)puVar29 + (uint)bVar33 * -2 + 1);
      }
      pSVar25 = &g_SRGBColorPalette_00b0daf8;
      pSVar30 = g_CurrentPalette;
      for (iVar7 = 0xc0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(uint *)pSVar30->colors = *(uint *)pSVar25->colors;
        pSVar25 = (SRGBColorPalette *)((int)pSVar25 + (uint)bVar33 * -8 + 4);
        pSVar30 = (SRGBColorPalette *)((int)pSVar30 + (uint)bVar33 * -8 + 4);
      }
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        pSVar30->colors[0].r = pSVar25->colors[0].r;
        pSVar25 = (SRGBColorPalette *)((int)pSVar25 + (uint)bVar33 * -2 + 1);
        pSVar30 = (SRGBColorPalette *)((int)pSVar30 + (uint)bVar33 * -2 + 1);
      }
      engine_drender_cpp_CDemonRenderer_updateTexture_FUN_00461f60
                (g_CDemonRenderer_PTR_005ae704,&g_SMRGLTextureBasic_005ad49c,
                 &g_SRGBColorPalette_00b0daf8);
      _memset(g_CHAR_ARRAY_ARRAY_00aafdb8,0,0x12d40);
      if (g_WindowHeight == 0x180) {
        iStack_18 = 0;
        iStack_1c = 0;
        do {
          iVar19 = 0;
          iVar7 = 0;
          do {
            iVar15 = 0;
            if (0 < g_INT_0140d780) {
              iVar13 = ((int)((iVar7 + (iVar7 >> 0x1f) * -0x100) - (uint)((iVar7 >> 0x1f) << 7 < 0))
                       >> 8) + (iStack_18 / 0xc0) * 0x140;
              iVar17 = iStack_1c + iVar19;
              do {
                iVar15 = iVar15 + 1;
                g_SFogImagePlane_ARRAY_012e1778[0].pixels[0][iVar17] =
                     g_SFogImagePlane_ARRAY_012e1778[0].pixels[0][iVar13];
                iVar13 = iVar13 + 0x12c00;
                iVar17 = iVar17 + 0x12c00;
              } while (iVar15 < g_INT_0140d780);
            }
            iVar19 = iVar19 + 1;
            iVar7 = iVar7 + 0x140;
          } while (iVar19 < 0x100);
          iStack_18 = iStack_18 + 0xf0;
          iStack_1c = iStack_1c + 0x140;
        } while (iStack_18 != 0xb400);
      }
    }
  }
  return;
}
