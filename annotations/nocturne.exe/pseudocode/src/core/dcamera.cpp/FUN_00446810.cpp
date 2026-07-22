// Name: FUN_00446810
// Address: 00446810
// Address Range: [[00446810, 00446e94]]
// Convention: unknown
// Signature: void FUN_00446810(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00446810(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  byte *puVar6;
  int *piVar7;
  int unaff_EDI;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  byte local_274 [244];
  byte auStack_180 [12];
  byte local_174 [56];
  byte auStack_13c [12];
  byte local_130 [16];
  int iStack_120;
  int local_114;
  byte auStack_104 [12];
  byte local_f8 [88];
  byte auStack_a0 [4];
  byte auStack_9c [52];
  byte auStack_68 [8];
  int iStack_60;
  int local_58;
  int local_54;
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
  
  _DAT_012b022c = 1;
  _DAT_0140d778 = 0;
  _DAT_0140d77c = 0;
  core_dcamera_cpp_resetFogSamplingOffset_FUN_0043fa20(0x140d784);
  _DAT_0140d780 = 0x10;
  if ((_DAT_0140e790 == 0 && _DAT_0140e794 == 0) && _DAT_0140e798 == 0) {
    _DAT_0140d780 = 1;
  }
  _sprintf(local_274,"%s.fog",param_1);
  iVar1 = engine_dosio_cpp_getFile_FUN_00456a60("backdrop",local_274,"rb");
  if (iVar1 != 0) {
    _fclose(iVar1);
    return;
  }
  _sprintf(local_f8,"backdrop\\%s",local_274);
  crt_fstream_cpp_ofstream_ctor_FUN_0056511e(local_174,0,local_f8,0x110,0x000001A4);
  if (local_114 != 0) {
    _DAT_01cc4800 = "..\\core\\dcamera.cpp";
    _DAT_01cc4804 = 0x12d0;
    FUN_004c8440("Can't create %s",local_f8);
  }
  crt_fstream_cpp_ostream_write_FUN_00565a13(local_130,0x140d784,0x1000);
  if (_DAT_0140e7a0 != 0) {
    local_50 = 0x00444645;
    crt_fstream_cpp_ostream_write_FUN_00565a13(local_130,&local_50,3);
    fVar10 = (float10)256;
    uVar16 = 0x446980;
    fVar11 = (float10)round((float10)*(float *)(param_1 + 0x104) * fVar10);
    iStack_60 = (int)ROUND(fVar11);
    uVar15 = 6;
    uVar14 = 0x446996;
    fVar11 = (float10)round((float10)*(float *)(param_1 + 0x108) * fVar10);
    iStack_60 = (int)ROUND(fVar11);
    uVar13 = 0x10000;
    uVar12 = 0x4469b4;
    fVar10 = (float10)round(fVar10 * (float10)*(float *)(param_1 + 0x10c));
    iStack_60 = (int)ROUND(fVar10);
    support_codec_cpp_CLZWCompress_ctor_FUN_00439830(auStack_9c,uVar12,uVar13,uVar14,uVar15,uVar16);
    support_codec_cpp_CLZWCompress_init_FUN_00439880(auStack_a0);
    local_20 = 0;
    if (0 < _DAT_0140d780) {
      local_50 = 0;
      local_4c = -0x12c00;
      do {
        core_dcamera_cpp_updateFogScrollOffset_FUN_0043fe60(0x140d784,local_20,0);
        local_34 = 1;
        if (1 < *(int *)(unaff_EDI + 0x154)) {
          local_40 = 0x140;
          local_48 = 0xf00;
          local_3c = 0x500;
          do {
            iVar8 = local_48 + 0x7f7378;
            puVar6 = &DAT_012ceb78 + local_40;
            piVar7 = (int *)(local_3c + 0xac2af8);
            iVar1 = 1;
            if (1 < *(int *)(unaff_EDI + 0x150)) {
              do {
                if (*piVar7 == 0x7fffffff) {
                  *puVar6 = 0xff;
                }
                else {
                  iVar2 = core_dcamera_cpp_sampleFogAlongRay_FUN_0043fc80
                                    (0x140d784,auStack_68,iVar8,*piVar7);
                  uVar3 = (uint)(iVar2 * 0xff) >> 0xe;
                  if (0xff < uVar3) {
                    uVar3 = 0xff;
                  }
                  *puVar6 = (char)uVar3;
                }
                iVar8 = iVar8 + 0xc;
                puVar6 = puVar6 + 1;
                iVar1 = iVar1 + 1;
                piVar7 = piVar7 + 1;
              } while (iVar1 < *(int *)(unaff_EDI + 0x150));
            }
            local_3c = local_3c + 0x500;
            local_40 = local_40 + 0x140;
            local_48 = local_48 + 0xf00;
            local_34 = local_34 + 1;
          } while (local_34 < *(int *)(unaff_EDI + 0x154));
        }
        core_dcamera_cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00446ea0(unaff_EDI,local_20);
        local_38 = 0;
        if (0 < *(int *)(unaff_EDI + 0x154)) {
          local_30 = 0;
          local_28 = local_4c;
          local_54 = local_4c;
          local_2c = local_50;
          local_44 = local_50;
          do {
            iVar8 = 0;
            iVar1 = 0;
            if (0 < *(int *)(unaff_EDI + 0x150)) {
              local_1c = local_30;
              local_24 = local_30;
              iVar2 = local_30;
              iVar9 = local_44;
              do {
                uVar3 = (uint)*(byte *)(iVar8 + 0x12e1778 + local_50 + local_30);
                if (0 < local_20) {
                  uVar3 = uVar3 - *(byte *)(iVar8 + 0x12e1778 + local_4c + local_30);
                }
                iVar4 = ((int)uVar3 >> 2) - iVar1;
                if (iVar4 < -0x20) {
                  iVar4 = -0x20;
                }
                else if (0x3f < iVar4) {
                  iVar4 = 0x3f;
                }
                (&DAT_012ceb78)[iVar2] = (char)iVar4;
                iVar1 = iVar4 + iVar1;
                cVar5 = (char)iVar1 * '\x04';
                if (0 < local_20) {
                  cVar5 = cVar5 + *(char *)(iVar8 + 0x12e1778 + local_4c + local_30);
                }
                *(char *)(iVar9 + 0x12e1778) = cVar5;
                iVar2 = iVar2 + 1;
                iVar8 = iVar8 + 1;
                iVar9 = iVar9 + 1;
              } while (iVar8 < *(int *)(unaff_EDI + 0x150));
            }
            local_30 = local_30 + 0x140;
            local_44 = local_44 + 0x140;
            local_38 = local_38 + 1;
          } while (local_38 < *(int *)(unaff_EDI + 0x154));
        }
        local_58 = 0x12c00;
        iVar1 = support_codec_cpp_CCodec_processFromBuffer_FUN_004390b0
                          (auStack_a0,&DAT_012ceb78,&local_58,auStack_13c);
        if (iVar1 == 0) {
          _DAT_01cc4800 = "..\\core\\dcamera.cpp";
          _DAT_01cc4804 = 0x133d;
          FUN_004c8440("Error compressing %s",auStack_104);
        }
        if (local_58 != 0) {
          _DAT_01cc4800 = "..\\core\\dcamera.cpp";
          _DAT_01cc4804 = 0x133f;
          FUN_004c8440("Not all bytes consumed compressing %s",auStack_104);
        }
        if (iStack_120 != 0) {
          _DAT_01cc4800 = "..\\core\\dcamera.cpp";
          _DAT_01cc4804 = 0x1340;
          FUN_004c8440("Error writing compressed file %s",auStack_104);
        }
        local_50 = local_50 + 0x12c00;
        local_4c = local_4c + 0x12c00;
        local_20 = local_20 + 1;
      } while (local_20 < _DAT_0140d780);
    }
    support_codec_cpp_CLZWCompress_finalize_FUN_004399a0(auStack_a0,auStack_13c);
    support_codec_cpp_CLZWDictionary_dtor_FUN_00439370(auStack_9c,0);
    support_codec_cpp_CCodec_dtor_FUN_00438f30(auStack_a0,1);
    crt_fstream_cpp_ofstream_dtor_FUN_005651ca(auStack_180,0);
    return;
  }
  crt_fstream_cpp_ofstream_dtor_FUN_005651ca(local_174,0);
  return;
}
