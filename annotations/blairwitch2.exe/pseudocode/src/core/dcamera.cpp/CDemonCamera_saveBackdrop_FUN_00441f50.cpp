// Name: core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00441f50
// Address: 00441f50
// Address Range: [[00441f50, 004425c9]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_saveBackdrop_FUN_00441f50(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_saveBackdrop_FUN_00441f50(CDemonCamera *this_ptr)

{
  bool bVar1;
  _FILE *p_Var2;
  undefined3 extraout_var;
  int iVar3;
  CLZWCompress *this_ptr_00;
  uint uVar4;
  int iVar5;
  undefined3 extraout_var_00;
  int iVar6;
  char cVar7;
  byte *puVar8;
  int *piVar9;
  int iVar10;
  CVector3i *end_pos;
  float10 fVar11;
  float10 fVar12;
  int iVar13;
  char local_20c [256];
  char local_10c [100];
  CLZWCompress local_a8;
  CVector3i local_68;
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
  core_dcamera_cpp_resetFogSamplingOffset_FUN_0043af40((SFogGrid *)0x146592c);
  _DAT_01465928 = 0x10;
  if ((_DAT_01466938 == 0 && _DAT_0146693c == 0) && _DAT_01466940 == 0) {
    _DAT_01465928 = 1;
  }
  _sprintf(local_20c,"%s.fog");
  p_Var2 = engine_dosio_cpp_FUN_00460c70("backdrop",local_20c,&DAT_005ce64d);
  if (p_Var2 != (_FILE *)0x0) {
    _fclose(p_Var2);
    return;
  }
  _sprintf(local_10c,"backdrop\\%s");
  support_trstream_cpp_COutStreamFile_ctorOpen_FUN_0057dba0(&local_5c,local_10c,&DAT_005ce665);
  bVar1 = support_trstream_cpp_COutStreamFile_isOpen_FUN_0057dd40(&local_5c);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    _DAT_01d046a0 = "..\\core\\dcamera.cpp";
    _DAT_01d046a4 = 0x1325;
    core_main_c_FUN_004e4500("Can't create %s",local_10c);
  }
  support_trstream_cpp_COutStreamFile_write_FUN_0057dca0(&local_5c,0x146592c,0x1000);
  if (_DAT_01466948 != 0) {
    local_54 = 0x00444645;
    support_trstream_cpp_COutStreamFile_write_FUN_0057dca0(&local_5c,&local_54,3);
    fVar11 = (float10)_DAT_005ce726;
    fVar12 = (float10)(this_ptr->base).position.f.x * fVar11;
    iVar3 = round();
    local_68.x = (int)ROUND(fVar12);
    fVar12 = (float10)*(float *)(iVar3 + 8) * fVar11;
    iVar13 = 6;
    iVar3 = round();
    local_68.y = (int)ROUND(fVar12);
    fVar11 = fVar11 * (float10)*(float *)(iVar3 + 0xc);
    iVar3 = 0x10000;
    this_ptr_00 = (CLZWCompress *)round();
    local_68.z = (int)ROUND(fVar11);
    support_codec_cpp_CLZWCompress_ctor_FUN_00434770(this_ptr_00,iVar3,iVar13);
    support_codec_cpp_CLZWCompress_init_FUN_004347c0(&local_a8);
    local_18 = 0;
    if (0 < _DAT_01465928) {
      local_48 = 0;
      local_4c = -0x12c00;
      do {
        core_dcamera_cpp_updateFogScrollOffset_FUN_0043b380((SFogGrid *)0x146592c,local_18,0);
        local_30 = 1;
        if (1 < this_ptr->display_height) {
          local_40 = 0x140;
          local_3c = 0xf00;
          local_44 = 0x500;
          do {
            end_pos = (CVector3i *)(&DAT_0083c7d4 + local_3c);
            iVar3 = 1;
            puVar8 = &DAT_01326d20 + local_40;
            piVar9 = (int *)(local_44 + 0xb1ac98);
            if (1 < this_ptr->display_width) {
              do {
                if (*piVar9 == 0x7fffffff) {
                  *puVar8 = 0xff;
                }
                else {
                  uVar4 = core_dcamera_cpp_sampleFogAlongRay_FUN_0043b1a0
                                    ((SFogGrid *)0x146592c,&local_68,end_pos,*piVar9);
                  uVar4 = uVar4 * 0xff >> 0xe;
                  if (0xff < uVar4) {
                    uVar4 = 0xff;
                  }
                  *puVar8 = (char)uVar4;
                }
                end_pos = end_pos + 1;
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
        core_dcamera_cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_004425d0(this_ptr,local_18);
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
              iVar6 = local_38;
              iVar10 = local_2c;
              do {
                uVar4 = (uint)*(byte *)(iVar13 + 0x1339920 + local_48 + local_2c);
                if (0 < local_18) {
                  uVar4 = uVar4 - *(byte *)(iVar13 + 0x1339920 + local_4c + local_2c);
                }
                iVar5 = ((int)uVar4 >> 2) - iVar3;
                if (iVar5 < -0x20) {
                  iVar5 = -0x20;
                }
                else if (0x3f < iVar5) {
                  iVar5 = 0x3f;
                }
                (&DAT_01326d20)[iVar10] = (char)iVar5;
                iVar3 = iVar5 + iVar3;
                cVar7 = (char)iVar3 * '\x04';
                if (0 < local_18) {
                  cVar7 = cVar7 + *(char *)(iVar13 + 0x1339920 + local_4c + local_2c);
                }
                *(char *)(iVar6 + 0x1339920) = cVar7;
                iVar10 = iVar10 + 1;
                iVar13 = iVar13 + 1;
                iVar6 = iVar6 + 1;
              } while (iVar13 < this_ptr->display_width);
            }
            local_2c = local_2c + 0x140;
            local_38 = local_38 + 0x140;
            local_34 = local_34 + 1;
          } while (local_34 < this_ptr->display_height);
        }
        local_50 = 0x12c00;
        iVar3 = support_codec_cpp_FUN_00433ff0(&local_a8,&DAT_01326d20,&local_50,&local_5c);
        if (iVar3 == 0) {
          _DAT_01d046a0 = "..\\core\\dcamera.cpp";
          _DAT_01d046a4 = 0x1392;
          core_main_c_FUN_004e4500("Error compressing %s",local_10c);
        }
        if (local_50 != 0) {
          _DAT_01d046a0 = "..\\core\\dcamera.cpp";
          _DAT_01d046a4 = 0x1394;
          core_main_c_FUN_004e4500("Not all bytes consumed compressing %s",local_10c);
        }
        bVar1 = support_trstream_cpp_COutStreamFile_isOpen_FUN_0057dd40(&local_5c);
        if (CONCAT31(extraout_var_00,bVar1) == 0) {
          _DAT_01d046a0 = "..\\core\\dcamera.cpp";
          _DAT_01d046a4 = 0x1395;
          core_main_c_FUN_004e4500("Error writing compressed file %s",local_10c);
        }
        local_48 = local_48 + 0x12c00;
        local_4c = local_4c + 0x12c00;
        local_18 = local_18 + 1;
      } while (local_18 < _DAT_01465928);
    }
    support_codec_cpp_FUN_00434910(&local_a8,&local_5c);
    support_codec_cpp_CLZWDictionary_dtor_FUN_00434270(&local_a8.dictionary,0);
    support_codec_cpp_CCodec_dtor_FUN_00433e90(&local_a8.base,1);
  }
  support_trstream_cpp_COutStreamFile_dtor_FUN_0057dc10(&local_5c,0);
  return;
}
