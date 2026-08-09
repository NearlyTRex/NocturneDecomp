// Name: core_dcamera.cpp_CDemonCamera_loadImage_FUN_00443250
// Address: 00443250
// Address Range: [[00443250, 00444135]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_loadImage_FUN_00443250(CDemonCamera *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  char *pcVar24;
  char *pcVar25;
  uchar *puVar26;
  char *pcVar27;
  int *piVar28;
  uchar *puVar29;
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
  pcVar27 = local_144;
  pcVar24 = filename;
  do {
    cVar5 = *pcVar24;
    *pcVar27 = cVar5;
    pcVar25 = local_144;
    if (cVar5 == '\0') break;
    cVar5 = pcVar24[1];
    pcVar24 = pcVar24 + 2;
    pcVar27[1] = cVar5;
    pcVar27 = pcVar27 + 2;
    pcVar25 = local_144;
  } while (cVar5 != '\0');
  do {
    pcVar24 = pcVar25;
    if (*pcVar25 == '.') goto LAB_00443299;
    if (*pcVar25 == '\0') break;
    pcVar24 = pcVar25 + 1;
    if (*pcVar24 == '.') goto LAB_00443299;
    pcVar25 = pcVar25 + 2;
  } while (*pcVar24 != '\0');
  pcVar24 = (char *)0x0;
LAB_00443299:
  if (pcVar24 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\dcamera.cpp";
    g_CurrentLineNumber = 2434;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonCamera::loadImage - no extention");
  }
  pcVar27 = ".ACT";
  do {
    cVar5 = *pcVar27;
    *pcVar24 = cVar5;
    if (cVar5 == '\0') break;
    cVar5 = pcVar27[1];
    pcVar27 = pcVar27 + 2;
    pcVar24[1] = cVar5;
    pcVar24 = pcVar24 + 2;
  } while (cVar5 != '\0');
  p_Var6 = engine_dosio_cpp_getFile_FUN_00456a60("backdrop",local_144,"rb");
  if ((p_Var6 != (_FILE *)0x0) ||
     (p_Var6 = engine_dosio_cpp_getFile_FUN_00456a60("art",local_144,"rb"),
     p_Var6 != (_FILE *)0x0)) {
    _fread(&DAT_00b0daf8,0x100,3,p_Var6);
    _fclose(p_Var6);
    pcVar24 = local_f4;
    pcVar27 = filename;
    do {
      cVar5 = *pcVar27;
      *pcVar24 = cVar5;
      if (cVar5 == '\0') break;
      cVar5 = pcVar27[1];
      pcVar27 = pcVar27 + 2;
      pcVar24[1] = cVar5;
      pcVar24 = pcVar24 + 2;
    } while (cVar5 != '\0');
    pcVar24 = local_f4;
    do {
      pcVar27 = pcVar24;
      if (*pcVar24 == '.') goto LAB_00443363;
      if (*pcVar24 == '\0') break;
      pcVar27 = pcVar24 + 1;
      if (*pcVar27 == '.') goto LAB_00443363;
      pcVar24 = pcVar24 + 2;
    } while (*pcVar27 != '\0');
    pcVar27 = (char *)0x0;
LAB_00443363:
    if (pcVar27 == (char *)0x0) {
      g_CurrentFilename = "..\\core\\dcamera.cpp";
      g_CurrentLineNumber = 2453;
      core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonCamera::loadImage - no ext");
    }
    pcVar24 = ".fog";
    do {
      cVar5 = *pcVar24;
      *pcVar27 = cVar5;
      if (cVar5 == '\0') break;
      cVar5 = pcVar24[1];
      pcVar24 = pcVar24 + 2;
      pcVar27[1] = cVar5;
      pcVar27 = pcVar27 + 2;
    } while (cVar5 != '\0');
    local_14 = engine_dosio_cpp_getFile_FUN_00456a60("backdrop",local_f4,"rb");
    if (local_14 != (_FILE *)0x0) {
      _fread(&g_SFogGrid_0140d784,0x1000,1,local_14);
      p_Var6 = local_14;
      if (g_SFogGrid_0140d784.density_multiplier == 0) {
        memset(&g_VOID_PTR_012e1778,0,0x12c000);
      }
      else {
        _DAT_0140d780 = 0x10;
        if ((g_SFogGrid_0140d784.scroll_vector.x == 0 && g_SFogGrid_0140d784.scroll_vector.y == 0)
            && g_SFogGrid_0140d784.scroll_vector.z == 0) {
          _DAT_0140d780 = 1;
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
            core_main_c_displayErrorAndQuit_FUN_004c8440("Hell froze loading %s");
          }
          if (500000 < local_9c) {
            g_CurrentFilename = "..\\core\\dcamera.cpp";
            g_CurrentLineNumber = 2491;
            core_main_c_displayErrorAndQuit_FUN_004c8440("%s too big to fit in decompress buffer");
          }
          _fread(&DAT_0077d250,local_9c,1,local_14);
          support_codec_cpp_CLZWDecompress_init_FUN_00439a30(&g_CLZWDecompress_012cdb28);
          local_98 = _DAT_0140d780 * 0x12c00;
          iVar7 = support_codec_cpp_CLZWDecompress_processBuffer_FUN_00439b30
                            (&g_CLZWDecompress_012cdb28,&DAT_0077d250,(int *)&local_9c,
                             (char *)&g_VOID_PTR_012e1778,&local_98,1);
          if (iVar7 == 0) {
            g_CurrentFilename = "..\\core\\dcamera.cpp";
            g_CurrentLineNumber = 2500;
            core_main_c_displayErrorAndQuit_FUN_004c8440("Error decompressing %s");
          }
          local_a4 = 0;
          if (0 < (int)_DAT_0140d780) {
            local_34 = 0;
            local_30 = -0x12c00;
            local_38 = 0x12c00;
            do {
              local_48 = local_34;
              local_44 = local_30;
              local_40 = local_34;
              local_3c = local_38;
              do {
                iVar17 = 0;
                iVar21 = 0;
                iVar7 = local_40;
                do {
                  iVar21 = (*(int *)(iVar17 + local_48 + 0x12e1775) >> 0x18) + iVar21;
                  cVar5 = (char)iVar21 * '\x04';
                  if (0 < local_a4) {
                    cVar5 = cVar5 + *(char *)((int)&g_VOID_PTR_012e1778 + local_44 + iVar17);
                  }
                  iVar17 = iVar17 + 1;
                  *(char *)((int)&g_VOID_PTR_012e1778 + iVar7) = cVar5;
                  iVar7 = iVar7 + 1;
                } while (iVar17 < 0x140);
                local_44 = local_44 + 0x140;
                local_40 = local_40 + 0x140;
                local_48 = local_48 + 0x140;
              } while (local_40 != local_38);
              local_38 = local_38 + 0x12c00;
              local_34 = local_34 + 0x12c00;
              local_30 = local_30 + 0x12c00;
              local_a4 = local_a4 + 1;
            } while (local_a4 < (int)_DAT_0140d780);
          }
        }
        else {
          _fseek(p_Var6,-3,1);
          _fread(&g_VOID_PTR_012e1778,0x12c00,_DAT_0140d780,p_Var6);
        }
      }
      _fclose(local_14);
    }
    p_Var6 = engine_dosio_cpp_getFile_FUN_00456a60("backdrop",filename,"rb");
    if ((p_Var6 != (_FILE *)0x0) ||
       (p_Var6 = engine_dosio_cpp_getFile_FUN_00456a60("art",filename,"rb"),
       p_Var6 != (_FILE *)0x0)) {
      iVar21 = 0;
      iVar7 = 0;
      do {
        if (g_BitsPerPixel == 0x20) {
          uVar14 = (uint)*(byte *)(iVar21 + 0xb0dafa) << (g_BlueBitPosition.bytes[0] & 0x1f) |
                   (uint)*(byte *)(iVar21 + 0xb0daf9) << (g_GreenBitPosition.bytes[0] & 0x1f) |
                   (uint)(byte)(&DAT_00b0daf8)[iVar21] << (g_RedBitPosition.bytes[0] & 0x1f);
        }
        else {
          uVar14 = (uint)*(byte *)(iVar21 + 0xb0daf9) << 8 |
                   (uint)(byte)(&DAT_00b0daf8)[iVar21] << 0x10 | (uint)*(byte *)(iVar21 + 0xb0dafa);
        }
        iVar17 = iVar7 + 4;
        iVar21 = iVar21 + 3;
        *(uint *)(iVar7 + 0xb0ddfc) = uVar14;
        iVar7 = iVar17;
      } while (iVar17 != 0x400);
      _fread(&DAT_01410290,0x280,0x1e0,p_Var6);
      _fclose(p_Var6);
      fVar2 = this_ptr->max_distance;
      if (fVar2 == 3.36312e-43) {
        local_20 = 0;
        do {
          local_94 = 0;
          pbVar8 = &DAT_01410290 + local_20;
          piVar28 = (int *)((int)this_ptr->framebuffer_aligned + local_20);
          do {
            local_94 = local_94 + 1;
            *piVar28 = ((*(uint *)((uint)*pbVar8 * 4 + 0xb0ddfc) & 0xfcfcfc) >> 2) +
                       ((*(uint *)((uint)pbVar8[1] * 4 + 0xb0ddfc) & 0xfcfcfc) >> 2) +
                       ((*(uint *)((uint)pbVar8[0x280] * 4 + 0xb0ddfc) & 0xfcfcfc) >> 2) +
                       ((*(uint *)((uint)pbVar8[0x281] * 4 + 0xb0ddfc) & 0xfcfcfc) >> 2);
            pbVar8 = pbVar8 + 2;
            piVar28 = piVar28 + 1;
          } while (local_94 < 0x140);
          local_20 = local_20 + 0x500;
        } while (local_20 != 0x4b000);
        local_20 = 0x4b000;
      }
      else if (fVar2 == 6.72623e-43) {
        pbVar8 = &DAT_01410290;
        iVar7 = 0;
        puVar16 = this_ptr->framebuffer_aligned;
        do {
          bVar1 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          iVar7 = iVar7 + 1;
          *puVar16 = *(uint *)((uint)bVar1 * 4 + 0xb0ddfc);
          puVar16 = puVar16 + 1;
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
                uVar10 = local_28 / (int)this_ptr->max_distance;
                local_6c = (int)(0x27d80 / (longlong)this_ptr->screen_width) + uVar9;
                iVar21 = ((int)uVar10 >> 8) * 0x280;
                local_68 = (int)(0x1de20 / (longlong)(int)this_ptr->max_distance) + uVar10;
                local_60 = (int)uVar9 >> 8;
                uVar14 = *(uint *)((uint)(byte)(&DAT_01410290)[local_60 + iVar21] * 4 + 0xb0ddfc);
                iVar17 = 0xff - (uVar10 & 0xff);
                uVar20 = uVar14 >> 8 & 0xff;
                uVar11 = uVar14 >> 0x10 & 0xff;
                iVar7 = 0xff - (uVar9 & 0xff);
                local_5c = (int)local_6c >> 8;
                uVar9 = *(uint *)((uint)(byte)(&DAT_01410290)[iVar21 + local_5c] * 4 + 0xb0ddfc);
                uVar12 = uVar9 >> 0x10 & 0xff;
                uVar22 = uVar9 >> 8 & 0xff;
                uVar23 = local_6c & 0xff;
                local_58 = ((int)local_68 >> 8) * 0x280;
                uVar10 = *(uint *)((uint)(byte)(&DAT_01410290)[local_58 + local_60] * 4 + 0xb0ddfc);
                uVar13 = uVar10 >> 0x10 & 0xff;
                uVar31 = uVar10 >> 8 & 0xff;
                uVar32 = local_68 & 0xff;
                local_54 = uVar31 * iVar7;
                uVar3 = *(uint *)((uint)(byte)(&DAT_01410290)[local_58 + local_5c] * 4 + 0xb0ddfc);
                local_78 = uVar3 & 0xff;
                local_70 = uVar3 >> 0x10 & 0xff;
                local_74 = uVar3 >> 8 & 0xff;
                local_50 = local_74 * uVar23;
                uVar14 = ((uVar14 & 0xff) * iVar17 + (uVar14 & 0xff) * iVar7 +
                          (uVar9 & 0xff) * uVar23 + (uVar9 & 0xff) * iVar17 +
                          (uVar10 & 0xff) * iVar7 + (uVar10 & 0xff) * uVar32 +
                         local_78 * uVar32 + local_78 * uVar23) / local_84;
                uVar9 = (uVar20 * iVar17 + uVar20 * iVar7 + uVar22 * uVar23 + uVar22 * iVar17 +
                         local_54 + uVar31 * uVar32 + local_74 * uVar32 + local_50) / local_84;
                uVar10 = (uVar11 * iVar17 + uVar11 * iVar7 + iVar17 * uVar12 + uVar12 * uVar23 +
                          uVar13 * uVar32 + uVar13 * iVar7 + local_70 * uVar32 + uVar23 * local_70)
                         / local_84;
                if (0xff < uVar14) {
                  uVar14 = 0xff;
                }
                if (0xff < uVar9) {
                  uVar9 = 0xff;
                }
                if (0xff < uVar10) {
                  uVar10 = 0xff;
                }
                local_80 = local_80 + 1;
                *local_88 = uVar14 | uVar9 << 8 | uVar10 << 0x10;
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
              iVar21 = 0;
              do {
                iVar17 = iVar21 / this_ptr->screen_width;
                iVar21 = iVar21 + 0x280;
                *local_90 = *(uint *)
                             ((uint)(byte)(&DAT_01410290)
                                          [iVar17 + (local_24 / (int)this_ptr->max_distance) * 0x280
                                          ] * 4 + 0xb0ddfc);
                local_90 = local_90 + 1;
                iVar7 = iVar7 + 1;
              } while (iVar7 < this_ptr->screen_width);
            }
            local_24 = local_24 + 0x1e0;
            local_8c = local_8c + 1;
          } while (local_8c < (int)this_ptr->max_distance);
        }
      }
      iVar21 = 0;
      iVar7 = 0;
      do {
        iVar15 = 0;
        iVar17 = iVar7;
        do {
          iVar18 = iVar15 >> 0x1f;
          iVar19 = iVar15 + iVar18 * -0x100;
          iVar15 = iVar15 + 0x280;
          (&DAT_0145b290)[iVar17] =
               (&DAT_01410290)
               [((int)(iVar19 - (uint)(iVar18 << 7 < 0)) >> 8) +
                ((int)((iVar21 + (iVar21 >> 0x1f) * -0x100) - (uint)((iVar21 >> 0x1f) << 7 < 0)) >>
                8) * 0x280];
          iVar17 = iVar17 + 1;
        } while (iVar15 != 0x28000);
        iVar7 = iVar7 + 0x100;
        iVar21 = iVar21 + 0x1e0;
      } while (iVar7 != 0x10000);
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
                (g_CDemonRenderer_PTR_005ae704,(SMRGLTextureBasic *)&DAT_005ad49c);
      puVar26 = &DAT_0145b290;
      puVar29 = g_CurrentTextureData;
      for (iVar7 = 0x4000; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(uint *)puVar29 = *(uint *)puVar26;
        puVar26 = puVar26 + (uint)bVar33 * -8 + 4;
        puVar29 = puVar29 + (uint)bVar33 * -8 + 4;
      }
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar29 = *puVar26;
        puVar26 = puVar26 + (uint)bVar33 * -2 + 1;
        puVar29 = puVar29 + (uint)bVar33 * -2 + 1;
      }
      puVar26 = &DAT_00b0daf8;
      pSVar30 = g_CurrentPalette;
      for (iVar7 = 0xc0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(uint *)pSVar30->colors = *(uint *)puVar26;
        puVar26 = puVar26 + ((uint)bVar33 * -2 + 1) * 4;
        pSVar30 = (SRGBColorPalette *)((int)pSVar30 + (uint)bVar33 * -8 + 4);
      }
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        pSVar30->colors[0].r = *puVar26;
        puVar26 = puVar26 + (uint)bVar33 * -2 + 1;
        pSVar30 = (SRGBColorPalette *)((int)pSVar30 + (uint)bVar33 * -2 + 1);
      }
      engine_drender_cpp_CDemonRenderer_updateTexture_FUN_00461f60
                (g_CDemonRenderer_PTR_005ae704,(SMRGLTextureBasic *)&DAT_005ad49c,
                 (SRGBColorPalette *)&DAT_00b0daf8);
      _memset((void *)0xaafdb8,0,0x12d40);
      if (g_WindowHeight == 0x180) {
        iStack_18 = 0;
        iStack_1c = 0;
        do {
          iVar21 = 0;
          iVar7 = 0;
          do {
            iVar17 = 0;
            if (0 < (int)_DAT_0140d780) {
              iVar15 = ((int)((iVar7 + (iVar7 >> 0x1f) * -0x100) - (uint)((iVar7 >> 0x1f) << 7 < 0))
                       >> 8) + (iStack_18 / 0xc0) * 0x140;
              iVar19 = iStack_1c + iVar21;
              do {
                iVar17 = iVar17 + 1;
                *(byte *)((int)&g_VOID_PTR_012e1778 + iVar19) =
                     *(byte *)((int)&g_VOID_PTR_012e1778 + iVar15);
                iVar15 = iVar15 + 0x12c00;
                iVar19 = iVar19 + 0x12c00;
              } while (iVar17 < (int)_DAT_0140d780);
            }
            iVar21 = iVar21 + 1;
            iVar7 = iVar7 + 0x140;
          } while (iVar21 < 0x100);
          iStack_18 = iStack_18 + 0xf0;
          iStack_1c = iStack_1c + 0x140;
        } while (iStack_18 != 0xb400);
      }
    }
  }
  return;
}
