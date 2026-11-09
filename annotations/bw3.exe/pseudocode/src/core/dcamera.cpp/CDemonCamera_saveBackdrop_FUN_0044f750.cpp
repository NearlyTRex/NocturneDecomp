// Name: core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_0044f750
// Address: 0044f750
// Address Range: [[0044f750, 0044fdc9]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_saveBackdrop_FUN_0044f750(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_saveBackdrop_FUN_0044f750(CDemonCamera *this_ptr)

{
  _FILE *p_Var1;
  int iVar2;
  CLZWCompress *this_ptr_00;
  int iVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  byte *puVar7;
  int *piVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  int iVar12;
  char local_20c [256];
  byte local_10c [100];
  byte local_a8 [64];
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
  FUN_005a28c0(local_20c,"%s.fog",&this_ptr->field_0x40);
  p_Var1 = engine_dosio_cpp_FUN_004659c0("backdrop",local_20c,&DAT_005b9f7d);
  if (p_Var1 != (_FILE *)0x0) {
    _fclose(p_Var1);
    return;
  }
  FUN_005a28c0(local_10c,"backdrop\\%s",local_20c);
  support_trstream_cpp_FUN_005747e0(&local_5c,local_10c,&DAT_005b9f95);
  iVar2 = support_trstream_cpp_FUN_00574980(&local_5c);
  if (iVar2 == 0) {
    _DAT_01d71de0 = "..\\core\\dcamera.cpp";
    _DAT_01d71de4 = 0x1344;
    core_main_c_FUN_004e4330("Can't create %s",local_10c);
  }
  support_trstream_cpp_FUN_005748e0(&local_5c,0x149d6dc,0x1000);
  if (_DAT_0149e6f8 != 0) {
    local_54 = 0x00444645;
    support_trstream_cpp_FUN_005748e0(&local_5c,&local_54,3);
    fVar10 = (float10)_DAT_005ba056;
    fVar11 = (float10)*(float *)&this_ptr->field_0x4 * fVar10;
    iVar2 = round();
    local_68 = (int)ROUND(fVar11);
    fVar11 = (float10)*(float *)(iVar2 + 8) * fVar10;
    iVar12 = 6;
    iVar2 = round();
    local_64 = (int)ROUND(fVar11);
    fVar10 = fVar10 * (float10)*(float *)(iVar2 + 0xc);
    iVar2 = 0x10000;
    this_ptr_00 = (CLZWCompress *)round();
    local_60 = (int)ROUND(fVar10);
    support_codec_cpp_CLZWCompress_ctor_FUN_004410f0(this_ptr_00,iVar2,iVar12);
    support_codec_cpp_FUN_00441140((CLZWCompress *)local_a8);
    local_18 = 0;
    if (0 < _DAT_0149d6d8) {
      local_48 = 0;
      local_4c = -0x12c00;
      do {
        core_dcamera_cpp_updateFogScrollOffset_FUN_00448b60(0x149d6dc,local_18,0);
        local_30 = 1;
        if (1 < *(int *)&this_ptr->field_0x154) {
          local_40 = 0x140;
          local_3c = 0xf00;
          local_44 = 0x500;
          do {
            iVar12 = local_3c + 0x874588;
            iVar2 = 1;
            puVar7 = &DAT_0135ead0 + local_40;
            piVar8 = (int *)(local_44 + 0xb52a48);
            if (1 < *(int *)&this_ptr->field_0x150) {
              do {
                if (*piVar8 == 0x7fffffff) {
                  *puVar7 = 0xff;
                }
                else {
                  iVar3 = core_dcamera_cpp_sampleFogAlongRay_FUN_00448980
                                    (0x149d6dc,&local_68,iVar12,*piVar8);
                  uVar4 = (uint)(iVar3 * 0xff) >> 0xe;
                  if (0xff < uVar4) {
                    uVar4 = 0xff;
                  }
                  *puVar7 = (char)uVar4;
                }
                iVar12 = iVar12 + 0xc;
                puVar7 = puVar7 + 1;
                iVar2 = iVar2 + 1;
                piVar8 = piVar8 + 1;
              } while (iVar2 < *(int *)&this_ptr->field_0x150);
            }
            local_44 = local_44 + 0x500;
            local_40 = local_40 + 0x140;
            local_3c = local_3c + 0xf00;
            local_30 = local_30 + 1;
          } while (local_30 < *(int *)&this_ptr->field_0x154);
        }
        core_dcamera_cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_0044fdd0(this_ptr,local_18);
        local_34 = 0;
        if (0 < *(int *)&this_ptr->field_0x154) {
          local_24 = local_4c;
          local_20 = local_4c;
          local_2c = 0;
          local_28 = local_48;
          local_38 = local_48;
          do {
            iVar12 = 0;
            iVar2 = 0;
            if (0 < *(int *)&this_ptr->field_0x150) {
              local_14 = local_2c;
              local_1c = local_2c;
              iVar3 = local_38;
              iVar9 = local_2c;
              do {
                uVar4 = (uint)*(byte *)(iVar12 + 0x13716d0 + local_48 + local_2c);
                if (0 < local_18) {
                  uVar4 = uVar4 - *(byte *)(iVar12 + 0x13716d0 + local_4c + local_2c);
                }
                iVar5 = ((int)uVar4 >> 2) - iVar2;
                if (iVar5 < -0x20) {
                  iVar5 = -0x20;
                }
                else if (0x3f < iVar5) {
                  iVar5 = 0x3f;
                }
                (&DAT_0135ead0)[iVar9] = (char)iVar5;
                iVar2 = iVar5 + iVar2;
                cVar6 = (char)iVar2 * '\x04';
                if (0 < local_18) {
                  cVar6 = cVar6 + *(char *)(iVar12 + 0x13716d0 + local_4c + local_2c);
                }
                *(char *)(iVar3 + 0x13716d0) = cVar6;
                iVar9 = iVar9 + 1;
                iVar12 = iVar12 + 1;
                iVar3 = iVar3 + 1;
              } while (iVar12 < *(int *)&this_ptr->field_0x150);
            }
            local_2c = local_2c + 0x140;
            local_38 = local_38 + 0x140;
            local_34 = local_34 + 1;
          } while (local_34 < *(int *)&this_ptr->field_0x154);
        }
        local_50 = 0x12c00;
        iVar2 = support_codec_cpp_FUN_00440970(local_a8,&DAT_0135ead0,&local_50,&local_5c);
        if (iVar2 == 0) {
          _DAT_01d71de0 = "..\\core\\dcamera.cpp";
          _DAT_01d71de4 = 0x13b1;
          core_main_c_FUN_004e4330("Error compressing %s",local_10c);
        }
        if (local_50 != 0) {
          _DAT_01d71de0 = "..\\core\\dcamera.cpp";
          _DAT_01d71de4 = 0x13b3;
          core_main_c_FUN_004e4330("Not all bytes consumed compressing %s",local_10c);
        }
        iVar2 = support_trstream_cpp_FUN_00574980(&local_5c);
        if (iVar2 == 0) {
          _DAT_01d71de0 = "..\\core\\dcamera.cpp";
          _DAT_01d71de4 = 0x13b4;
          core_main_c_FUN_004e4330("Error writing compressed file %s",local_10c);
        }
        local_48 = local_48 + 0x12c00;
        local_4c = local_4c + 0x12c00;
        local_18 = local_18 + 1;
      } while (local_18 < _DAT_0149d6d8);
    }
    support_codec_cpp_FUN_00441290(local_a8,&local_5c);
    support_codec_cpp_CLZWDictionary_dtor_FUN_00440bf0((CLZWDictionary *)(local_a8 + 4),0);
    support_codec_cpp_CCodec_dtor_FUN_00440810((CCodec *)local_a8,1);
  }
  support_trstream_cpp_COutStreamFile_dtor_FUN_00574850(&local_5c,0);
  return;
}
