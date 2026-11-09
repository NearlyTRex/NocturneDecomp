// Name: core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044fff0
// Address: 0044fff0
// Address Range: [[0044fff0, 00450ed5]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_loadImage_FUN_0044fff0(CDemonCamera *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_loadImage_FUN_0044fff0(CDemonCamera *this_ptr,char *filename)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  char cVar4;
  _FILE *p_Var5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  char *pcVar23;
  char *pcVar24;
  char *pcVar25;
  int *piVar26;
  uint *puVar27;
  uint uVar28;
  uint uVar29;
  byte bVar30;
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
  _FILE *local_14;
  
  bVar30 = 0;
  pcVar25 = local_144;
  pcVar23 = filename;
  do {
    cVar4 = *pcVar23;
    *pcVar25 = cVar4;
    pcVar24 = local_144;
    if (cVar4 == '\0') break;
    cVar4 = pcVar23[1];
    pcVar23 = pcVar23 + 2;
    pcVar25[1] = cVar4;
    pcVar25 = pcVar25 + 2;
    pcVar24 = local_144;
  } while (cVar4 != '\0');
  do {
    pcVar23 = pcVar24;
    if (*pcVar24 == '.') goto LAB_00450039;
    if (*pcVar24 == '\0') break;
    pcVar23 = pcVar24 + 1;
    if (*pcVar23 == '.') goto LAB_00450039;
    pcVar24 = pcVar24 + 2;
  } while (*pcVar23 != '\0');
  pcVar23 = (char *)0x0;
LAB_00450039:
  if (pcVar23 == (char *)0x0) {
    _DAT_01d1d400 = "..\\core\\dcamera.cpp";
    _DAT_01d1d404 = 0x9c1;
    core_main_c_FUN_005030e0("CDemonCamera::loadImage - no extention");
  }
  pcVar25 = ".ACT";
  do {
    cVar4 = *pcVar25;
    *pcVar23 = cVar4;
    if (cVar4 == '\0') break;
    cVar4 = pcVar25[1];
    pcVar25 = pcVar25 + 2;
    pcVar23[1] = cVar4;
    pcVar23 = pcVar23 + 2;
  } while (cVar4 != '\0');
  p_Var5 = engine_dosio_cpp_FUN_00479180("backdrop",local_144,"rb");
  if ((p_Var5 != (_FILE *)0x0) ||
     (p_Var5 = engine_dosio_cpp_FUN_00479180("art",local_144,"rb"),
     p_Var5 != (_FILE *)0x0)) {
    _fread(&DAT_00b81198,0x100,3,p_Var5);
    _fclose(p_Var5);
    pcVar23 = local_f4;
    pcVar25 = filename;
    do {
      cVar4 = *pcVar25;
      *pcVar23 = cVar4;
      if (cVar4 == '\0') break;
      cVar4 = pcVar25[1];
      pcVar25 = pcVar25 + 2;
      pcVar23[1] = cVar4;
      pcVar23 = pcVar23 + 2;
    } while (cVar4 != '\0');
    pcVar23 = local_f4;
    do {
      pcVar25 = pcVar23;
      if (*pcVar23 == '.') goto LAB_00450103;
      if (*pcVar23 == '\0') break;
      pcVar25 = pcVar23 + 1;
      if (*pcVar25 == '.') goto LAB_00450103;
      pcVar23 = pcVar23 + 2;
    } while (*pcVar25 != '\0');
    pcVar25 = (char *)0x0;
LAB_00450103:
    if (pcVar25 == (char *)0x0) {
      _DAT_01d1d400 = "..\\core\\dcamera.cpp";
      _DAT_01d1d404 = 0x9d4;
      core_main_c_FUN_005030e0("CDemonCamera::loadImage - no ext");
    }
    pcVar23 = ".fog";
    do {
      cVar4 = *pcVar23;
      *pcVar25 = cVar4;
      if (cVar4 == '\0') break;
      cVar4 = pcVar23[1];
      pcVar23 = pcVar23 + 2;
      pcVar25[1] = cVar4;
      pcVar25 = pcVar25 + 2;
    } while (cVar4 != '\0');
    local_14 = engine_dosio_cpp_FUN_00479180("backdrop",local_f4,"rb");
    if (local_14 != (_FILE *)0x0) {
      _fread(0x1480e2c,0x1000,1,local_14);
      p_Var5 = local_14;
      if (_DAT_01481e48 == 0) {
        memset((void *)0x1354e20,0,0x12c000);
      }
      else {
        _DAT_01480e28 = 0x10;
        if ((_DAT_01481e38 == 0 && _DAT_01481e3c == 0) && _DAT_01481e40 == 0) {
          _DAT_01480e28 = 1;
        }
        _fread(local_a0,3,1,local_14);
        local_9d = 0;
        iVar6 = _strcmp(local_a0,"LZW");
        if ((iVar6 == 0) ||
           (iVar6 = _strcmp(local_a0,"EFD"), iVar6 == 0)) {
          iVar6 = engine_dosio_cpp_getFileSize_FUN_00478fb0("backdrop",local_f4);
          local_9c = iVar6 - 0x1003;
          if ((int)local_9c < 1) {
            _DAT_01d1d400 = "..\\core\\dcamera.cpp";
            _DAT_01d1d404 = 0x9f4;
            core_main_c_FUN_005030e0("Hell froze loading %s",local_f4);
          }
          if (500000 < local_9c) {
            _DAT_01d1d400 = "..\\core\\dcamera.cpp";
            _DAT_01d1d404 = 0x9fa;
            core_main_c_FUN_005030e0("%s too big to fit in decompress buffer",local_f4);
          }
          _fread(&DAT_007ddbb4,local_9c,1,local_14);
          support_codec_cpp_FUN_004436f0(&g_CLZWDecompressInstance);
          local_98 = _DAT_01480e28 * 0x12c00;
          iVar6 = support_codec_cpp_FUN_00442d90
                            (&g_CLZWDecompressInstance,&DAT_007ddbb4,&local_9c,0x1354e20,&local_98,1
                            );
          if (iVar6 == 0) {
            _DAT_01d1d400 = "..\\core\\dcamera.cpp";
            _DAT_01d1d404 = 0xa03;
            core_main_c_FUN_005030e0("Error decompressing %s",local_f4);
          }
          local_a4 = 0;
          if (0 < _DAT_01480e28) {
            local_34 = 0;
            local_30 = -0x12c00;
            local_38 = 0x12c00;
            do {
              local_48 = local_34;
              local_44 = local_30;
              local_40 = local_34;
              local_3c = local_38;
              do {
                iVar16 = 0;
                iVar20 = 0;
                iVar6 = local_40;
                do {
                  iVar20 = (*(int *)(iVar16 + local_48 + 0x1354e1d) >> 0x18) + iVar20;
                  cVar4 = (char)iVar20 * '\x04';
                  if (0 < local_a4) {
                    cVar4 = cVar4 + *(char *)(local_44 + iVar16 + 0x1354e20);
                  }
                  iVar16 = iVar16 + 1;
                  *(char *)(iVar6 + 0x1354e20) = cVar4;
                  iVar6 = iVar6 + 1;
                } while (iVar16 < 0x140);
                local_44 = local_44 + 0x140;
                local_40 = local_40 + 0x140;
                local_48 = local_48 + 0x140;
              } while (local_40 != local_38);
              local_38 = local_38 + 0x12c00;
              local_34 = local_34 + 0x12c00;
              local_30 = local_30 + 0x12c00;
              local_a4 = local_a4 + 1;
            } while (local_a4 < _DAT_01480e28);
          }
        }
        else {
          _fseek(p_Var5,0xfffffffd,1);
          _fread(0x1354e20,0x12c00,_DAT_01480e28,p_Var5);
        }
      }
      _fclose(local_14);
    }
    p_Var5 = engine_dosio_cpp_FUN_00479180("backdrop",filename,&DAT_005d7869);
    if ((p_Var5 != (_FILE *)0x0) ||
       (p_Var5 = engine_dosio_cpp_FUN_00479180(&DAT_005d7878,filename,&DAT_005d7875),
       p_Var5 != (_FILE *)0x0)) {
      iVar20 = 0;
      iVar6 = 0;
      do {
        if (DAT_0061b4a0 == 0x20) {
          uVar13 = (uint)*(byte *)(iVar20 + 0xb8119a) << (DAT_01c4e9ec & 0x1f) |
                   (uint)*(byte *)(iVar20 + 0xb81199) << (DAT_01c4e9e0 & 0x1f) |
                   (uint)(byte)(&DAT_00b81198)[iVar20] << (DAT_01c4e9d4 & 0x1f);
        }
        else {
          uVar13 = (uint)*(byte *)(iVar20 + 0xb81199) << 8 |
                   (uint)(byte)(&DAT_00b81198)[iVar20] << 0x10 | (uint)*(byte *)(iVar20 + 0xb8119a);
        }
        iVar16 = iVar6 + 4;
        iVar20 = iVar20 + 3;
        *(uint *)(iVar6 + 0xb8149c) = uVar13;
        iVar6 = iVar16;
      } while (iVar16 != 0x400);
      _fread(&DAT_01483a50,0x280,0x1e0,p_Var5);
      _fclose(p_Var5);
      iVar6 = *(int *)&this_ptr->field_0x148;
      if (iVar6 == 0xf0) {
        local_20 = 0;
        do {
          local_94 = 0;
          pbVar7 = &DAT_01483a50 + local_20;
          piVar26 = (int *)(*(int *)&this_ptr->field_0x158 + local_20);
          do {
            local_94 = local_94 + 1;
            *piVar26 = ((*(uint *)((uint)*pbVar7 * 4 + 0xb8149c) & 0xfcfcfc) >> 2) +
                       ((*(uint *)((uint)pbVar7[1] * 4 + 0xb8149c) & 0xfcfcfc) >> 2) +
                       ((*(uint *)((uint)pbVar7[0x280] * 4 + 0xb8149c) & 0xfcfcfc) >> 2) +
                       ((*(uint *)((uint)pbVar7[0x281] * 4 + 0xb8149c) & 0xfcfcfc) >> 2);
            pbVar7 = pbVar7 + 2;
            piVar26 = piVar26 + 1;
          } while (local_94 < 0x140);
          local_20 = local_20 + 0x500;
        } while (local_20 != 0x4b000);
        local_20 = 0x4b000;
      }
      else if (iVar6 == 0x1e0) {
        pbVar7 = &DAT_01483a50;
        iVar6 = 0;
        puVar15 = *(uint **)&this_ptr->field_0x158;
        do {
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          iVar6 = iVar6 + 1;
          *puVar15 = *(uint *)((uint)bVar1 * 4 + 0xb8149c);
          puVar15 = puVar15 + 1;
        } while (iVar6 < 0x4b000);
      }
      else if (iVar6 < 0x1e1) {
        local_88 = *(uint **)&this_ptr->field_0x158;
        uVar3 = 0x9600000 / (longlong)*(int *)&this_ptr->field_0x144;
        local_84 = (uint)((longlong)
                          ((ulonglong)(uint)((int)uVar3 >> 0x1f) << 0x20 | uVar3 & 0xffffffff) /
                         (longlong)*(int *)&this_ptr->field_0x148);
        local_7c = 0;
        if (0 < *(int *)&this_ptr->field_0x148) {
          local_28 = 0;
          do {
            local_80 = 0;
            if (0 < *(int *)&this_ptr->field_0x144) {
              local_2c = 0;
              local_64 = local_28;
              do {
                uVar8 = local_2c / *(int *)&this_ptr->field_0x144;
                uVar9 = local_28 / *(int *)&this_ptr->field_0x148;
                local_6c = (int)(0x27d80 / (longlong)*(int *)&this_ptr->field_0x144) + uVar8;
                iVar20 = ((int)uVar9 >> 8) * 0x280;
                local_68 = (int)(0x1de20 / (longlong)*(int *)&this_ptr->field_0x148) + uVar9;
                local_60 = (int)uVar8 >> 8;
                uVar13 = *(uint *)((uint)(byte)(&DAT_01483a50)[local_60 + iVar20] * 4 + 0xb8149c);
                iVar16 = 0xff - (uVar9 & 0xff);
                uVar19 = uVar13 >> 8 & 0xff;
                uVar10 = uVar13 >> 0x10 & 0xff;
                iVar6 = 0xff - (uVar8 & 0xff);
                local_5c = (int)local_6c >> 8;
                uVar8 = *(uint *)((uint)(byte)(&DAT_01483a50)[iVar20 + local_5c] * 4 + 0xb8149c);
                uVar11 = uVar8 >> 0x10 & 0xff;
                uVar21 = uVar8 >> 8 & 0xff;
                uVar22 = local_6c & 0xff;
                local_58 = ((int)local_68 >> 8) * 0x280;
                uVar9 = *(uint *)((uint)(byte)(&DAT_01483a50)[local_58 + local_60] * 4 + 0xb8149c);
                uVar12 = uVar9 >> 0x10 & 0xff;
                uVar28 = uVar9 >> 8 & 0xff;
                uVar29 = local_68 & 0xff;
                local_54 = uVar28 * iVar6;
                uVar2 = *(uint *)((uint)(byte)(&DAT_01483a50)[local_58 + local_5c] * 4 + 0xb8149c);
                local_78 = uVar2 & 0xff;
                local_70 = uVar2 >> 0x10 & 0xff;
                local_74 = uVar2 >> 8 & 0xff;
                local_50 = local_74 * uVar22;
                uVar13 = ((uVar13 & 0xff) * iVar16 + (uVar13 & 0xff) * iVar6 +
                          (uVar8 & 0xff) * uVar22 + (uVar8 & 0xff) * iVar16 +
                          (uVar9 & 0xff) * iVar6 + (uVar9 & 0xff) * uVar29 +
                         local_78 * uVar29 + local_78 * uVar22) / local_84;
                uVar8 = (uVar19 * iVar16 + uVar19 * iVar6 + uVar21 * uVar22 + uVar21 * iVar16 +
                         local_54 + uVar28 * uVar29 + local_74 * uVar29 + local_50) / local_84;
                uVar9 = (uVar10 * iVar16 + uVar10 * iVar6 + iVar16 * uVar11 + uVar11 * uVar22 +
                         uVar12 * uVar29 + uVar12 * iVar6 + local_70 * uVar29 + uVar22 * local_70) /
                        local_84;
                if (0xff < uVar13) {
                  uVar13 = 0xff;
                }
                if (0xff < uVar8) {
                  uVar8 = 0xff;
                }
                if (0xff < uVar9) {
                  uVar9 = 0xff;
                }
                local_80 = local_80 + 1;
                *local_88 = uVar13 | uVar8 << 8 | uVar9 << 0x10;
                local_88 = local_88 + 1;
                local_2c = local_2c + 0x28000;
              } while (local_80 < *(int *)&this_ptr->field_0x144);
            }
            local_28 = local_28 + 0x1e000;
            local_7c = local_7c + 1;
          } while (local_7c < *(int *)&this_ptr->field_0x148);
        }
      }
      else {
        local_90 = *(uint **)&this_ptr->field_0x158;
        local_8c = 0;
        if (0 < *(int *)&this_ptr->field_0x148) {
          local_24 = 0;
          do {
            iVar6 = 0;
            if (0 < *(int *)&this_ptr->field_0x144) {
              iVar20 = 0;
              do {
                iVar16 = iVar20 / *(int *)&this_ptr->field_0x144;
                iVar20 = iVar20 + 0x280;
                *local_90 = *(uint *)
                             ((uint)(byte)(&DAT_01483a50)
                                          [iVar16 + (local_24 / *(int *)&this_ptr->field_0x148) *
                                                    0x280] * 4 + 0xb8149c);
                local_90 = local_90 + 1;
                iVar6 = iVar6 + 1;
              } while (iVar6 < *(int *)&this_ptr->field_0x144);
            }
            local_24 = local_24 + 0x1e0;
            local_8c = local_8c + 1;
          } while (local_8c < *(int *)&this_ptr->field_0x148);
        }
      }
      iVar20 = 0;
      iVar6 = 0;
      do {
        iVar14 = 0;
        iVar16 = iVar6;
        do {
          iVar17 = iVar14 >> 0x1f;
          iVar18 = iVar14 + iVar17 * -0x100;
          iVar14 = iVar14 + 0x280;
          (&DAT_014cea50)[iVar16] =
               (&DAT_01483a50)
               [((int)(iVar18 - (uint)(iVar17 << 7 < 0)) >> 8) +
                ((int)((iVar20 + (iVar20 >> 0x1f) * -0x100) - (uint)((iVar20 >> 0x1f) << 7 < 0)) >>
                8) * 0x280];
          iVar16 = iVar16 + 1;
        } while (iVar14 != 0x28000);
        iVar6 = iVar6 + 0x100;
        iVar20 = iVar20 + 0x1e0;
      } while (iVar6 != 0x10000);
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
                (DAT_00612560,(SMRGLTextureBasic *)&DAT_0061127c);
      puVar15 = (uint *)&DAT_014cea50;
      puVar27 = _DAT_01c50930;
      for (iVar6 = 0x4000; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar27 = *puVar15;
        puVar15 = puVar15 + (uint)bVar30 * -2 + 1;
        puVar27 = puVar27 + (uint)bVar30 * -2 + 1;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(byte *)puVar27 = *(byte *)puVar15;
        puVar15 = (uint *)((int)puVar15 + (uint)bVar30 * -2 + 1);
        puVar27 = (uint *)((int)puVar27 + (uint)bVar30 * -2 + 1);
      }
      puVar15 = (uint *)&DAT_00b81198;
      puVar27 = _DAT_01c4e3d0;
      for (iVar6 = 0xc0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar27 = *puVar15;
        puVar15 = puVar15 + (uint)bVar30 * -2 + 1;
        puVar27 = puVar27 + (uint)bVar30 * -2 + 1;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(byte *)puVar27 = *(byte *)puVar15;
        puVar15 = (uint *)((int)puVar15 + (uint)bVar30 * -2 + 1);
        puVar27 = (uint *)((int)puVar27 + (uint)bVar30 * -2 + 1);
      }
      engine_drender_cpp_FUN_00484fb0
                (DAT_00612560,(SMRGLTextureBasic *)&DAT_0061127c,(SRGBColorPalette *)&DAT_00b81198);
      _memset(0x12d40);
      if (DAT_0061b49c == 0x180) {
        iStack_1c = 0;
        local_20 = 0;
        do {
          iVar20 = 0;
          iVar6 = 0;
          do {
            iVar16 = 0;
            if (0 < _DAT_01480e28) {
              iVar14 = ((int)((iVar6 + (iVar6 >> 0x1f) * -0x100) - (uint)((iVar6 >> 0x1f) << 7 < 0))
                       >> 8) + (iStack_1c / 0xc0) * 0x140;
              iVar18 = local_20 + iVar20;
              do {
                iVar16 = iVar16 + 1;
                *(byte *)(iVar18 + 0x1354e20) = *(byte *)(iVar14 + 0x1354e20);
                iVar14 = iVar14 + 0x12c00;
                iVar18 = iVar18 + 0x12c00;
              } while (iVar16 < _DAT_01480e28);
            }
            iVar20 = iVar20 + 1;
            iVar6 = iVar6 + 0x140;
          } while (iVar20 < 0x100);
          iStack_1c = iStack_1c + 0xf0;
          local_20 = local_20 + 0x140;
        } while (iStack_1c != 0xb400);
      }
    }
  }
  return;
}
