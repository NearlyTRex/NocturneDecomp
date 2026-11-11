// Name: core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_0044f750
// Address: 0044f750
// Address Range: [[0044f750, 0044fdc9]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_saveBackdrop_FUN_0044f750(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_saveBackdrop_FUN_0044f750(CDemonCamera *this_ptr)

{
  bool bVar1;
  _FILE *p_Var2;
  undefined3 extraout_var;
  int iVar3;
  CLZWCompress *this_ptr_00;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined3 extraout_var_00;
  char cVar7;
  byte *puVar8;
  int *piVar9;
  int iVar10;
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
  
  _DAT_0134017c = 1;
  _DAT_0149d6d0 = 0;
  _DAT_0149d6d4 = 0;
  core_dcamera_cpp_resetFogSamplingOffset_FUN_00448720(0x149d6dc);
  _DAT_0149d6d8 = 0x10;
  if ((_DAT_0149e6e8 == 0 && _DAT_0149e6ec == 0) && _DAT_0149e6f0 == 0) {
    _DAT_0149d6d8 = 1;
  }
  _sprintf(local_20c,"%s.fog");
  p_Var2 = engine_dosio_cpp_FUN_004659c0("backdrop",local_20c,&DAT_005b9f7d);
  if (p_Var2 != (_FILE *)0x0) {
    _fclose(p_Var2);
    return;
  }
  _sprintf(local_10c,"backdrop\\%s");
  support_trstream_cpp_COutStreamFile_ctorOpen_FUN_005747e0(&local_5c,local_10c,&DAT_005b9f95);
  bVar1 = support_trstream_cpp_COutStreamFile_isOpen_FUN_00574980(&local_5c);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    _DAT_01d71de0 = "..\\core\\dcamera.cpp";
    _DAT_01d71de4 = 0x1344;
    core_main_c_FUN_004e4330("Can't create %s",local_10c);
  }
  support_trstream_cpp_COutStreamFile_write_FUN_005748e0(&local_5c,0x149d6dc,0x1000);
  if (_DAT_0149e6f8 != 0) {
    local_54 = 0x00444645;
    support_trstream_cpp_COutStreamFile_write_FUN_005748e0(&local_5c,&local_54,3);
    fVar11 = (float10)_DAT_005ba056;
    fVar12 = (float10)(this_ptr->base).position.f.x * fVar11;
    iVar3 = round();
    local_68 = (int)ROUND(fVar12);
    fVar12 = (float10)*(float *)(iVar3 + 8) * fVar11;
    iVar13 = 6;
    iVar3 = round();
    local_64 = (int)ROUND(fVar12);
    fVar11 = fVar11 * (float10)*(float *)(iVar3 + 0xc);
    iVar3 = 0x10000;
    this_ptr_00 = (CLZWCompress *)round();
    local_60 = (int)ROUND(fVar11);
    support_codec_cpp_CLZWCompress_ctor_FUN_004410f0(this_ptr_00,iVar3,iVar13);
    support_codec_cpp_CLZWCompress_init_FUN_00441140(&local_a8);
    local_18 = 0;
    if (0 < _DAT_0149d6d8) {
      local_48 = 0;
      local_4c = -0x12c00;
      do {
        core_dcamera_cpp_updateFogScrollOffset_FUN_00448b60(0x149d6dc,local_18,0);
        local_30 = 1;
        if (1 < this_ptr->display_height) {
          local_40 = 0x140;
          local_3c = 0xf00;
          local_44 = 0x500;
          do {
            iVar13 = local_3c + 0x874588;
            iVar3 = 1;
            puVar8 = &DAT_0135ead0 + local_40;
            piVar9 = (int *)(local_44 + 0xb52a48);
            if (1 < this_ptr->display_width) {
              do {
                if (*piVar9 == 0x7fffffff) {
                  *puVar8 = 0xff;
                }
                else {
                  iVar4 = core_dcamera_cpp_sampleFogAlongRay_FUN_00448980
                                    (0x149d6dc,&local_68,iVar13,*piVar9);
                  uVar5 = (uint)(iVar4 * 0xff) >> 0xe;
                  if (0xff < uVar5) {
                    uVar5 = 0xff;
                  }
                  *puVar8 = (char)uVar5;
                }
                iVar13 = iVar13 + 0xc;
                puVar8 = puVar8 + 1;
                iVar3 = iVar3 + 1;
                piVar9 = piVar9 + 1;
              } while (iVar3 < this_ptr->display_width);
            }
            local_44 = local_44 + 0x500;
            local_40 = local_40 + 0x140;
            local_3c = local_3c + 0xf00;
            local_30 = local_30 + 1;
          } while (local_30 < this_ptr->display_height);
        }
        core_dcamera_cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_0044fdd0(this_ptr,local_18);
        local_34 = 0;
        if (0 < this_ptr->display_height) {
          local_24 = local_4c;
          local_20 = local_4c;
          local_2c = 0;
          local_28 = local_48;
          local_38 = local_48;
          do {
            iVar13 = 0;
            iVar3 = 0;
            if (0 < this_ptr->display_width) {
              local_14 = local_2c;
              local_1c = local_2c;
              iVar4 = local_38;
              iVar10 = local_2c;
              do {
                uVar5 = (uint)*(byte *)(iVar13 + 0x13716d0 + local_48 + local_2c);
                if (0 < local_18) {
                  uVar5 = uVar5 - *(byte *)(iVar13 + 0x13716d0 + local_4c + local_2c);
                }
                iVar6 = ((int)uVar5 >> 2) - iVar3;
                if (iVar6 < -0x20) {
                  iVar6 = -0x20;
                }
                else if (0x3f < iVar6) {
                  iVar6 = 0x3f;
                }
                (&DAT_0135ead0)[iVar10] = (char)iVar6;
                iVar3 = iVar6 + iVar3;
                cVar7 = (char)iVar3 * '\x04';
                if (0 < local_18) {
                  cVar7 = cVar7 + *(char *)(iVar13 + 0x13716d0 + local_4c + local_2c);
                }
                *(char *)(iVar4 + 0x13716d0) = cVar7;
                iVar10 = iVar10 + 1;
                iVar13 = iVar13 + 1;
                iVar4 = iVar4 + 1;
              } while (iVar13 < this_ptr->display_width);
            }
            local_2c = local_2c + 0x140;
            local_38 = local_38 + 0x140;
            local_34 = local_34 + 1;
          } while (local_34 < this_ptr->display_height);
        }
        local_50 = 0x12c00;
        iVar3 = support_codec_cpp_FUN_00440970(&local_a8,&DAT_0135ead0,&local_50,&local_5c);
        if (iVar3 == 0) {
          _DAT_01d71de0 = "..\\core\\dcamera.cpp";
          _DAT_01d71de4 = 0x13b1;
          core_main_c_FUN_004e4330("Error compressing %s",local_10c);
        }
        if (local_50 != 0) {
          _DAT_01d71de0 = "..\\core\\dcamera.cpp";
          _DAT_01d71de4 = 0x13b3;
          core_main_c_FUN_004e4330("Not all bytes consumed compressing %s",local_10c);
        }
        bVar1 = support_trstream_cpp_COutStreamFile_isOpen_FUN_00574980(&local_5c);
        if (CONCAT31(extraout_var_00,bVar1) == 0) {
          _DAT_01d71de0 = "..\\core\\dcamera.cpp";
          _DAT_01d71de4 = 0x13b4;
          core_main_c_FUN_004e4330("Error writing compressed file %s",local_10c);
        }
        local_48 = local_48 + 0x12c00;
        local_4c = local_4c + 0x12c00;
        local_18 = local_18 + 1;
      } while (local_18 < _DAT_0149d6d8);
    }
    support_codec_cpp_FUN_00441290(&local_a8,&local_5c);
    support_codec_cpp_CLZWDictionary_dtor_FUN_00440bf0(&local_a8.dictionary,0);
    support_codec_cpp_CCodec_dtor_FUN_00440810(&local_a8.base,1);
  }
  support_trstream_cpp_COutStreamFile_dtor_FUN_00574850(&local_5c,0);
  return;
}
