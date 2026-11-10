// Name: core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00453610
// Address: 00453610
// Address Range: [[00453610, 00453c89]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_saveBackdrop_FUN_00453610(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_saveBackdrop_FUN_00453610(CDemonCamera *this_ptr)

{
  _FILE *p_Var1;
  int iVar2;
  CLZWCompress *this_ptr_00;
  uint uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  byte *puVar7;
  int *piVar8;
  int iVar9;
  byte *puVar10;
  float10 fVar11;
  float10 fVar12;
  int iVar13;
  char local_20c [256];
  char local_10c [100];
  CLZWCompress local_a8;
  int local_68;
  int local_64;
  int local_60;
  COutStreamFile local_5c;
  uint local_54;
  int local_50;
  int local_4c;
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
  int local_1c;
  int local_18;
  int local_14;
  
  _DAT_013238cc = 1;
  _DAT_01480e20 = 0;
  _DAT_01480e24 = 0;
  core_dcamera_cpp_resetFogSamplingOffset_FUN_0044c5e0(0x1480e2c);
  _DAT_01480e28 = 0x10;
  if ((_DAT_01481e38 == 0 && _DAT_01481e3c == 0) && _DAT_01481e40 == 0) {
    _DAT_01480e28 = 1;
  }
  _sprintf(local_20c,"%s.fog");
  p_Var1 = engine_dosio_cpp_FUN_00479180("backdrop",local_20c,&DAT_005d7916);
  if (p_Var1 != (_FILE *)0x0) {
    _fclose(p_Var1);
    return;
  }
  _sprintf(local_10c,"backdrop\\%s");
  support_trstream_cpp_FUN_005a17f0(&local_5c,local_10c,&DAT_005d792e);
  iVar2 = support_trstream_cpp_FUN_005a1990(&local_5c);
  if (iVar2 == 0) {
    _DAT_01d1d400 = "..\\core\\dcamera.cpp";
    _DAT_01d1d404 = 0x1329;
    core_main_c_FUN_005030e0("Can't create %s",local_10c);
  }
  support_trstream_cpp_FUN_005a18f0(&local_5c,0x1480e2c,0x1000);
  if (_DAT_01481e48 != 0) {
    local_54 = 0x00444645;
    support_trstream_cpp_FUN_005a18f0(&local_5c,&local_54,3);
    fVar11 = (float10)_DAT_005d79ef;
    fVar12 = (float10)(this_ptr->base).position.f.x * fVar11;
    iVar2 = round();
    local_68 = (int)ROUND(fVar12);
    fVar12 = (float10)*(float *)(iVar2 + 8) * fVar11;
    iVar13 = 6;
    iVar2 = round();
    local_64 = (int)ROUND(fVar12);
    fVar11 = fVar11 * (float10)*(float *)(iVar2 + 0xc);
    iVar2 = 0x10000;
    this_ptr_00 = (CLZWCompress *)round();
    local_60 = (int)ROUND(fVar11);
    support_codec_cpp_CLZWCompress_ctor_FUN_00443490(this_ptr_00,iVar2,iVar13);
    support_codec_cpp_CLZWCompress_init_FUN_004434e0(&local_a8);
    local_18 = 0;
    if (0 < _DAT_01480e28) {
      local_48 = 0;
      local_4c = -0x12c00;
      do {
        core_dcamera_cpp_updateFogScrollOffset_FUN_0044ca20(0x1480e2c,local_18,0);
        local_30 = 1;
        if (1 < this_ptr->display_height) {
          local_40 = 0x140;
          local_3c = 0xf00;
          local_44 = 0x500;
          do {
            puVar10 = &DAT_00857cd8 + local_3c;
            iVar2 = 1;
            puVar7 = &DAT_01342220 + local_40;
            piVar8 = (int *)(local_44 + 0xb36198);
            if (1 < this_ptr->display_width) {
              do {
                if (*piVar8 == 0x7fffffff) {
                  *puVar7 = 0xff;
                }
                else {
                  iVar13 = core_dcamera_cpp_sampleFogAlongRay_FUN_0044c840
                                     (0x1480e2c,&local_68,puVar10,*piVar8);
                  uVar3 = (uint)(iVar13 * 0xff) >> 0xe;
                  if (0xff < uVar3) {
                    uVar3 = 0xff;
                  }
                  *puVar7 = (char)uVar3;
                }
                puVar10 = puVar10 + 0xc;
                puVar7 = puVar7 + 1;
                iVar2 = iVar2 + 1;
                piVar8 = piVar8 + 1;
              } while (iVar2 < this_ptr->display_width);
            }
            local_44 = local_44 + 0x500;
            local_40 = local_40 + 0x140;
            local_3c = local_3c + 0xf00;
            local_30 = local_30 + 1;
          } while (local_30 < this_ptr->display_height);
        }
        core_dcamera_cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00453c90(this_ptr,local_18);
        local_34 = 0;
        if (0 < this_ptr->display_height) {
          local_24 = local_4c;
          local_20 = local_4c;
          local_2c = 0;
          local_28 = local_48;
          local_38 = local_48;
          do {
            iVar13 = 0;
            iVar2 = 0;
            if (0 < this_ptr->display_width) {
              local_14 = local_2c;
              local_1c = local_2c;
              iVar5 = local_38;
              iVar9 = local_2c;
              do {
                uVar3 = (uint)*(byte *)(iVar13 + 0x1354e20 + local_48 + local_2c);
                if (0 < local_18) {
                  uVar3 = uVar3 - *(byte *)(iVar13 + 0x1354e20 + local_4c + local_2c);
                }
                iVar4 = ((int)uVar3 >> 2) - iVar2;
                if (iVar4 < -0x20) {
                  iVar4 = -0x20;
                }
                else if (0x3f < iVar4) {
                  iVar4 = 0x3f;
                }
                (&DAT_01342220)[iVar9] = (char)iVar4;
                iVar2 = iVar4 + iVar2;
                cVar6 = (char)iVar2 * '\x04';
                if (0 < local_18) {
                  cVar6 = cVar6 + *(char *)(iVar13 + 0x1354e20 + local_4c + local_2c);
                }
                *(char *)(iVar5 + 0x1354e20) = cVar6;
                iVar9 = iVar9 + 1;
                iVar13 = iVar13 + 1;
                iVar5 = iVar5 + 1;
              } while (iVar13 < this_ptr->display_width);
            }
            local_2c = local_2c + 0x140;
            local_38 = local_38 + 0x140;
            local_34 = local_34 + 1;
          } while (local_34 < this_ptr->display_height);
        }
        local_50 = 0x12c00;
        iVar2 = support_codec_cpp_FUN_00442d10(&local_a8,&DAT_01342220,&local_50,&local_5c);
        if (iVar2 == 0) {
          _DAT_01d1d400 = "..\\core\\dcamera.cpp";
          _DAT_01d1d404 = 0x1396;
          core_main_c_FUN_005030e0("Error compressing %s",local_10c);
        }
        if (local_50 != 0) {
          _DAT_01d1d400 = "..\\core\\dcamera.cpp";
          _DAT_01d1d404 = 0x1398;
          core_main_c_FUN_005030e0("Not all bytes consumed compressing %s",local_10c);
        }
        iVar2 = support_trstream_cpp_FUN_005a1990(&local_5c);
        if (iVar2 == 0) {
          _DAT_01d1d400 = "..\\core\\dcamera.cpp";
          _DAT_01d1d404 = 0x1399;
          core_main_c_FUN_005030e0("Error writing compressed file %s",local_10c);
        }
        local_48 = local_48 + 0x12c00;
        local_4c = local_4c + 0x12c00;
        local_18 = local_18 + 1;
      } while (local_18 < _DAT_01480e28);
    }
    support_codec_cpp_FUN_00443630(&local_a8,&local_5c);
    support_codec_cpp_CLZWDictionary_dtor_FUN_00442f90(&local_a8.dictionary,0);
    support_codec_cpp_CCodec_dtor_FUN_00442bb0(&local_a8.base,1);
  }
  support_trstream_cpp_COutStreamFile_dtor_FUN_005a1860(&local_5c,0);
  return;
}
