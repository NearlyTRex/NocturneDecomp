// Name: core_dcamera.cpp_FUN_00446810
// Address: 00446810
// Address Range: [[00446810, 00446e94]]
// Convention: unknown
// Signature: void core_dcamera_cpp_FUN_00446810(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcamera_cpp_FUN_00446810(int param_1)

{
  _FILE *file_handle;
  int iVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  byte *puVar5;
  int *piVar6;
  CDemonCamera *unaff_EDI;
  int iVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  int iVar11;
  char local_274 [244];
  byte auStack_180 [12];
  byte local_174 [56];
  byte auStack_13c [28];
  int iStack_120;
  void *local_114;
  byte auStack_104 [12];
  char local_f8 [88];
  byte auStack_a0 [56];
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
  file_handle = engine_dosio_cpp_getFile_FUN_00456a60("backdrop",local_274,"rb");
  if (file_handle != (_FILE *)0x0) {
    _fclose(file_handle);
    return;
  }
  _sprintf(local_f8,"backdrop\\%s",local_274);
  crt_fstream_cpp_ofstream_ctor_FUN_0056511e(local_174,0,local_f8,0x110,0x000001A4);
  if (local_114 != (void *)0x0) {
    PTR_01cc4800 = "..\\core\\dcamera.cpp";
    INT_01cc4804 = 0x12d0;
    core_main_c_FUN_004c8440("Can't create %s",local_f8);
  }
  crt_fstream_cpp_ostream_write_FUN_00565a13
            ((_ostream *)(auStack_13c + 0xc),(void *)0x140d784,0x1000);
  if (_DAT_0140e7a0 != 0) {
    local_50 = 0x00444645;
    crt_fstream_cpp_ostream_write_FUN_00565a13((_ostream *)(auStack_13c + 0xc),&local_50,3);
    dVar9 = 256;
    dVar8 = round((double)*(float *)(param_1 + 0x104) * 256);
    iStack_60 = (int)ROUND(dVar8);
    dVar8 = round((double)*(float *)(param_1 + 0x108) * dVar9);
    iStack_60 = (int)ROUND(dVar8);
    iVar11 = 0x10000;
    iVar10 = 0x4469b4;
    dVar9 = round(dVar9 * (double)*(float *)(param_1 + 0x10c));
    iStack_60 = (int)ROUND(dVar9);
    support_codec_cpp_CLZWCompress_ctor_FUN_00439830((CLZWCompress *)(auStack_a0 + 4),iVar10,iVar11)
    ;
    support_codec_cpp_CLZWCompress_init_FUN_00439880((CLZWCompress *)auStack_a0);
    local_20 = 0;
    if (0 < _DAT_0140d780) {
      local_50 = 0;
      local_4c = -0x12c00;
      do {
        core_dcamera_cpp_updateFogScrollOffset_FUN_0043fe60((SFogGrid *)0x140d784,local_20,0);
        local_34 = 1;
        if (1 < unaff_EDI->display_height) {
          local_40 = 0x140;
          local_48 = 0xf00;
          local_3c = 0x500;
          do {
            iVar11 = local_48 + 0x7f7378;
            puVar5 = &DAT_012ceb78 + local_40;
            piVar6 = (int *)(local_3c + 0xac2af8);
            iVar10 = 1;
            if (1 < unaff_EDI->display_width) {
              do {
                if (*piVar6 == 0x7fffffff) {
                  *puVar5 = 0xff;
                }
                else {
                  iVar1 = core_dcamera_cpp_sampleFogAlongRay_FUN_0043fc80
                                    (0x140d784,auStack_68,iVar11,*piVar6);
                  uVar2 = (uint)(iVar1 * 0xff) >> 0xe;
                  if (0xff < uVar2) {
                    uVar2 = 0xff;
                  }
                  *puVar5 = (char)uVar2;
                }
                iVar11 = iVar11 + 0xc;
                puVar5 = puVar5 + 1;
                iVar10 = iVar10 + 1;
                piVar6 = piVar6 + 1;
              } while (iVar10 < unaff_EDI->display_width);
            }
            local_3c = local_3c + 0x500;
            local_40 = local_40 + 0x140;
            local_48 = local_48 + 0xf00;
            local_34 = local_34 + 1;
          } while (local_34 < unaff_EDI->display_height);
        }
        core_dcamera_cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00446ea0(unaff_EDI,local_20);
        local_38 = 0;
        if (0 < unaff_EDI->display_height) {
          local_30 = 0;
          local_28 = local_4c;
          local_54 = local_4c;
          local_2c = local_50;
          local_44 = local_50;
          do {
            iVar11 = 0;
            iVar10 = 0;
            if (0 < unaff_EDI->display_width) {
              local_1c = local_30;
              local_24 = local_30;
              iVar1 = local_30;
              iVar7 = local_44;
              do {
                uVar2 = (uint)*(byte *)(iVar11 + 0x12e1778 + local_50 + local_30);
                if (0 < local_20) {
                  uVar2 = uVar2 - *(byte *)(iVar11 + 0x12e1778 + local_4c + local_30);
                }
                iVar3 = ((int)uVar2 >> 2) - iVar10;
                if (iVar3 < -0x20) {
                  iVar3 = -0x20;
                }
                else if (0x3f < iVar3) {
                  iVar3 = 0x3f;
                }
                (&DAT_012ceb78)[iVar1] = (char)iVar3;
                iVar10 = iVar3 + iVar10;
                cVar4 = (char)iVar10 * '\x04';
                if (0 < local_20) {
                  cVar4 = cVar4 + *(char *)(iVar11 + 0x12e1778 + local_4c + local_30);
                }
                *(char *)(iVar7 + 0x12e1778) = cVar4;
                iVar1 = iVar1 + 1;
                iVar11 = iVar11 + 1;
                iVar7 = iVar7 + 1;
              } while (iVar11 < unaff_EDI->display_width);
            }
            local_30 = local_30 + 0x140;
            local_44 = local_44 + 0x140;
            local_38 = local_38 + 1;
          } while (local_38 < unaff_EDI->display_height);
        }
        local_58 = 0x12c00;
        iVar10 = support_codec_cpp_CCodec_processFromBuffer_FUN_004390b0
                           ((CCodec *)auStack_a0,&DAT_012ceb78,&local_58,(_ostream *)auStack_13c);
        if (iVar10 == 0) {
          PTR_01cc4800 = "..\\core\\dcamera.cpp";
          INT_01cc4804 = 0x133d;
          core_main_c_FUN_004c8440("Error compressing %s",auStack_104);
        }
        if (local_58 != 0) {
          PTR_01cc4800 = "..\\core\\dcamera.cpp";
          INT_01cc4804 = 0x133f;
          core_main_c_FUN_004c8440("Not all bytes consumed compressing %s",auStack_104);
        }
        if (iStack_120 != 0) {
          PTR_01cc4800 = "..\\core\\dcamera.cpp";
          INT_01cc4804 = 0x1340;
          core_main_c_FUN_004c8440("Error writing compressed file %s",auStack_104);
        }
        local_50 = local_50 + 0x12c00;
        local_4c = local_4c + 0x12c00;
        local_20 = local_20 + 1;
      } while (local_20 < _DAT_0140d780);
    }
    support_codec_cpp_CLZWCompress_finalize_FUN_004399a0
              ((CLZWCompress *)auStack_a0,(_ostream *)auStack_13c);
    support_codec_cpp_CLZWDictionary_dtor_FUN_00439370((CLZWDictionary *)(auStack_a0 + 4),0);
    support_codec_cpp_CCodec_dtor_FUN_00438f30((CCodec *)auStack_a0,1);
    crt_fstream_cpp_ofstream_dtor_FUN_005651ca(auStack_180,0);
    return;
  }
  crt_fstream_cpp_ofstream_dtor_FUN_005651ca(local_174,0);
  return;
}
