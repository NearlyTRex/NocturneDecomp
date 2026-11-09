// Name: core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00441f50
// Address: 00441f50
// Address Range: [[00441f50, 004425c9]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_saveBackdrop_FUN_00441f50(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_saveBackdrop_FUN_00441f50(CDemonCamera *this_ptr)

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
  
  _DAT_013083cc = 1;
  _DAT_01465920 = 0;
  _DAT_01465924 = 0;
  core_dcamera_cpp_resetFogSamplingOffset_FUN_0043af40(0x146592c);
  _DAT_01465928 = 0x10;
  if ((_DAT_01466938 == 0 && _DAT_0146693c == 0) && _DAT_01466940 == 0) {
    _DAT_01465928 = 1;
  }
  FUN_005b7790(local_20c,"%s.fog",&this_ptr->field_0x40);
  p_Var1 = engine_dosio_cpp_FUN_00460c70("backdrop",local_20c,&DAT_005ce64d);
  if (p_Var1 != (_FILE *)0x0) {
    _fclose(p_Var1);
    return;
  }
  FUN_005b7790(local_10c,"backdrop\\%s",local_20c);
  support_trstream_cpp_FUN_0057dba0(&local_5c,local_10c,&DAT_005ce665);
  iVar2 = support_trstream_cpp_FUN_0057dd40(&local_5c);
  if (iVar2 == 0) {
    _DAT_01d046a0 = "..\\core\\dcamera.cpp";
    _DAT_01d046a4 = 0x1325;
    core_main_c_FUN_004e4500("Can't create %s",local_10c);
  }
  support_trstream_cpp_FUN_0057dca0(&local_5c,0x146592c,0x1000);
  if (_DAT_01466948 != 0) {
    local_54 = 0x00444645;
    support_trstream_cpp_FUN_0057dca0(&local_5c,&local_54,3);
    fVar11 = (float10)_DAT_005ce726;
    fVar12 = (float10)*(float *)&this_ptr->field_0x4 * fVar11;
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
    support_codec_cpp_CLZWCompress_ctor_FUN_00434770(this_ptr_00,iVar2,iVar13);
    support_codec_cpp_FUN_004347c0((CLZWCompress *)local_a8);
    local_18 = 0;
    if (0 < _DAT_01465928) {
      local_48 = 0;
      local_4c = -0x12c00;
      do {
        core_dcamera_cpp_updateFogScrollOffset_FUN_0043b380(0x146592c,local_18,0);
        local_30 = 1;
        if (1 < *(int *)&this_ptr->field_0x154) {
          local_40 = 0x140;
          local_3c = 0xf00;
          local_44 = 0x500;
          do {
            puVar10 = &DAT_0083c7d4 + local_3c;
            iVar2 = 1;
            puVar7 = &DAT_01326d20 + local_40;
            piVar8 = (int *)(local_44 + 0xb1ac98);
            if (1 < *(int *)&this_ptr->field_0x150) {
              do {
                if (*piVar8 == 0x7fffffff) {
                  *puVar7 = 0xff;
                }
                else {
                  iVar13 = core_dcamera_cpp_sampleFogAlongRay_FUN_0043b1a0
                                     (0x146592c,&local_68,puVar10,*piVar8);
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
              } while (iVar2 < *(int *)&this_ptr->field_0x150);
            }
            local_44 = local_44 + 0x500;
            local_40 = local_40 + 0x140;
            local_3c = local_3c + 0xf00;
            local_30 = local_30 + 1;
          } while (local_30 < *(int *)&this_ptr->field_0x154);
        }
        core_dcamera_cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_004425d0(this_ptr,local_18);
        local_34 = 0;
        if (0 < *(int *)&this_ptr->field_0x154) {
          local_24 = local_4c;
          local_20 = local_4c;
          local_2c = 0;
          local_28 = local_48;
          local_38 = local_48;
          do {
            iVar13 = 0;
            iVar2 = 0;
            if (0 < *(int *)&this_ptr->field_0x150) {
              local_14 = local_2c;
              local_1c = local_2c;
              iVar5 = local_38;
              iVar9 = local_2c;
              do {
                uVar3 = (uint)*(byte *)(iVar13 + 0x1339920 + local_48 + local_2c);
                if (0 < local_18) {
                  uVar3 = uVar3 - *(byte *)(iVar13 + 0x1339920 + local_4c + local_2c);
                }
                iVar4 = ((int)uVar3 >> 2) - iVar2;
                if (iVar4 < -0x20) {
                  iVar4 = -0x20;
                }
                else if (0x3f < iVar4) {
                  iVar4 = 0x3f;
                }
                (&DAT_01326d20)[iVar9] = (char)iVar4;
                iVar2 = iVar4 + iVar2;
                cVar6 = (char)iVar2 * '\x04';
                if (0 < local_18) {
                  cVar6 = cVar6 + *(char *)(iVar13 + 0x1339920 + local_4c + local_2c);
                }
                *(char *)(iVar5 + 0x1339920) = cVar6;
                iVar9 = iVar9 + 1;
                iVar13 = iVar13 + 1;
                iVar5 = iVar5 + 1;
              } while (iVar13 < *(int *)&this_ptr->field_0x150);
            }
            local_2c = local_2c + 0x140;
            local_38 = local_38 + 0x140;
            local_34 = local_34 + 1;
          } while (local_34 < *(int *)&this_ptr->field_0x154);
        }
        local_50 = 0x12c00;
        iVar2 = support_codec_cpp_FUN_00433ff0(local_a8,&DAT_01326d20,&local_50,&local_5c);
        if (iVar2 == 0) {
          _DAT_01d046a0 = "..\\core\\dcamera.cpp";
          _DAT_01d046a4 = 0x1392;
          core_main_c_FUN_004e4500("Error compressing %s",local_10c);
        }
        if (local_50 != 0) {
          _DAT_01d046a0 = "..\\core\\dcamera.cpp";
          _DAT_01d046a4 = 0x1394;
          core_main_c_FUN_004e4500("Not all bytes consumed compressing %s",local_10c);
        }
        iVar2 = support_trstream_cpp_FUN_0057dd40(&local_5c);
        if (iVar2 == 0) {
          _DAT_01d046a0 = "..\\core\\dcamera.cpp";
          _DAT_01d046a4 = 0x1395;
          core_main_c_FUN_004e4500("Error writing compressed file %s",local_10c);
        }
        local_48 = local_48 + 0x12c00;
        local_4c = local_4c + 0x12c00;
        local_18 = local_18 + 1;
      } while (local_18 < _DAT_01465928);
    }
    support_codec_cpp_FUN_00434910(local_a8,&local_5c);
    support_codec_cpp_CLZWDictionary_dtor_FUN_00434270((CLZWDictionary *)(local_a8 + 4),0);
    support_codec_cpp_CCodec_dtor_FUN_00433e90((CCodec *)local_a8,1);
  }
  support_trstream_cpp_COutStreamFile_dtor_FUN_0057dc10(&local_5c,0);
  return;
}
