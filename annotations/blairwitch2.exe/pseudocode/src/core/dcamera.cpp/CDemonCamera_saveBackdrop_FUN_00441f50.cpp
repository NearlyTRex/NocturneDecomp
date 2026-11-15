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
  _FILE *file_handle;
  undefined3 extraout_var;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var_00;
  int iVar4;
  char cVar5;
  byte *puVar6;
  CDemonCamera *unaff_ESI;
  int *piVar7;
  int iVar8;
  CVector3i *end_pos;
  double dVar9;
  double dVar10;
  int iVar11;
  int iVar12;
  uint flags;
  char local_20c [256];
  char local_10c [88];
  byte auStack_b4 [64];
  CVector3i CStack_74;
  COutStreamFile local_68;
  COutStreamFile local_5c;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  _FILE *local_30;
  _FILE *local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  _DAT_013083cc = 1;
  _DAT_01465920 = 0;
  _DAT_01465924 = 0;
  core_dcamera_cpp_resetFogSamplingOffset_FUN_0043af40((SFogGrid *)0x146592c);
  _DAT_01465928 = 0x10;
  if ((_DAT_01466938 == 0 && _DAT_0146693c == 0) && _DAT_01466940 == 0) {
    _DAT_01465928 = 1;
  }
  _sprintf(local_20c,"%s.fog");
  file_handle = engine_dosio_cpp_getFile_FUN_00460c70("backdrop",local_20c,&DAT_005ce64d);
  if (file_handle == (_FILE *)0x0) {
    _sprintf(local_10c,"backdrop\\%s");
    support_trstream_cpp_COutStreamFile_ctorOpen_FUN_0057dba0(&local_5c,local_10c,&DAT_005ce665);
    bVar1 = support_trstream_cpp_COutStreamFile_isOpen_FUN_0057dd40(&local_5c);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      _DAT_01d046a0 = "..\\core\\dcamera.cpp";
      _DAT_01d046a4 = 0x1325;
      core_main_c_displayErrorAndQuit_FUN_004e4500("Can't create %s");
    }
    support_trstream_cpp_COutStreamFile_write_FUN_0057dca0(&local_5c,0x146592c,0x1000);
    if (_DAT_01466948 == 0) {
      flags = 0;
    }
    else {
      local_54 = 0x00444645;
      support_trstream_cpp_COutStreamFile_write_FUN_0057dca0(&local_5c,&local_54,3);
      dVar10 = _DAT_005ce726;
      flags = 0x4420c1;
      dVar9 = round((double)(this_ptr->base).position.f.x * _DAT_005ce726);
      CStack_74.z = (int)ROUND(dVar9);
      dVar9 = round((double)(this_ptr->base).position.f.y * dVar10);
      CStack_74.z = (int)ROUND(dVar9);
      iVar12 = 0x10000;
      iVar11 = 0x4420ef;
      dVar10 = round(dVar10 * (double)(this_ptr->base).position.f.z);
      CStack_74.z = (int)ROUND(dVar10);
      support_codec_cpp_CLZWCompress_ctor_FUN_00434770
                ((CLZWCompress *)(auStack_b4 + 4),iVar11,iVar12);
      support_codec_cpp_CLZWCompress_init_FUN_004347c0((CLZWCompress *)auStack_b4);
      local_24 = 0;
      if (0 < _DAT_01465928) {
        local_54 = 0;
        local_5c.file = (_FILE *)0xfffed400;
        do {
          core_dcamera_cpp_updateFogScrollOffset_FUN_0043b380((SFogGrid *)0x146592c,local_24,0);
          local_3c = 1;
          if (1 < unaff_ESI->display_height) {
            local_4c = 0x140;
            local_48 = 0xf00;
            local_50 = 0x500;
            do {
              end_pos = (CVector3i *)(&DAT_0083c7d4 + local_48);
              iVar11 = 1;
              puVar6 = &DAT_01326d20 + local_4c;
              piVar7 = (int *)(local_50 + 0xb1ac98);
              if (1 < unaff_ESI->display_width) {
                do {
                  if (*piVar7 == 0x7fffffff) {
                    *puVar6 = 0xff;
                  }
                  else {
                    uVar2 = core_dcamera_cpp_sampleFogAlongRay_FUN_0043b1a0
                                      ((SFogGrid *)0x146592c,&CStack_74,end_pos,*piVar7);
                    uVar2 = uVar2 * 0xff >> 0xe;
                    if (0xff < uVar2) {
                      uVar2 = 0xff;
                    }
                    *puVar6 = (char)uVar2;
                  }
                  end_pos = end_pos + 1;
                  puVar6 = puVar6 + 1;
                  iVar11 = iVar11 + 1;
                  piVar7 = piVar7 + 1;
                } while (iVar11 < unaff_ESI->display_width);
              }
              local_50 = local_50 + 0x500;
              local_4c = local_4c + 0x140;
              local_48 = local_48 + 0xf00;
              local_3c = local_3c + 1;
            } while (local_3c < unaff_ESI->display_height);
          }
          core_dcamera_cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_004425d0(unaff_ESI,local_24);
          local_40 = 0;
          if (0 < unaff_ESI->display_height) {
            local_30 = local_5c.file;
            local_2c = local_5c.file;
            local_38 = 0;
            local_34 = local_54;
            local_44 = local_54;
            do {
              iVar12 = 0;
              iVar11 = 0;
              if (0 < unaff_ESI->display_width) {
                local_20 = local_38;
                local_28 = local_38;
                iVar4 = local_44;
                iVar8 = local_38;
                do {
                  uVar2 = (uint)*(byte *)(iVar12 + 0x1339920 + local_54 + local_38);
                  if (0 < local_24) {
                    uVar2 = uVar2 - *(byte *)((int)&local_5c.file[0xbd4a8]._handle +
                                             iVar12 + local_38);
                  }
                  iVar3 = ((int)uVar2 >> 2) - iVar11;
                  if (iVar3 < -0x20) {
                    iVar3 = -0x20;
                  }
                  else if (0x3f < iVar3) {
                    iVar3 = 0x3f;
                  }
                  (&DAT_01326d20)[iVar8] = (char)iVar3;
                  iVar11 = iVar3 + iVar11;
                  cVar5 = (char)iVar11 * '\x04';
                  if (0 < local_24) {
                    cVar5 = cVar5 + *(char *)((int)&local_5c.file[0xbd4a8]._handle +
                                             iVar12 + local_38);
                  }
                  *(char *)(iVar4 + 0x1339920) = cVar5;
                  iVar8 = iVar8 + 1;
                  iVar12 = iVar12 + 1;
                  iVar4 = iVar4 + 1;
                } while (iVar12 < unaff_ESI->display_width);
              }
              local_38 = local_38 + 0x140;
              local_44 = local_44 + 0x140;
              local_40 = local_40 + 1;
            } while (local_40 < unaff_ESI->display_height);
          }
          local_5c.base.vtable = (void *)0x12c00;
          iVar11 = support_codec_cpp_CCodec_processFromBuffer_FUN_00433ff0
                             ((CCodec *)auStack_b4,&DAT_01326d20,(int *)&local_5c,&local_68);
          if (iVar11 == 0) {
            _DAT_01d046a0 = "..\\core\\dcamera.cpp";
            _DAT_01d046a4 = 0x1392;
            core_main_c_displayErrorAndQuit_FUN_004e4500("Error compressing %s");
          }
          if (local_5c.base.vtable != (void *)0x0) {
            _DAT_01d046a0 = "..\\core\\dcamera.cpp";
            _DAT_01d046a4 = 0x1394;
            core_main_c_displayErrorAndQuit_FUN_004e4500("Not all bytes consumed compressing %s");
          }
          bVar1 = support_trstream_cpp_COutStreamFile_isOpen_FUN_0057dd40(&local_68);
          if (CONCAT31(extraout_var_00,bVar1) == 0) {
            _DAT_01d046a0 = "..\\core\\dcamera.cpp";
            _DAT_01d046a4 = 0x1395;
            core_main_c_displayErrorAndQuit_FUN_004e4500("Error writing compressed file %s");
          }
          local_54 = local_54 + 0x12c00;
          local_5c.file = (_FILE *)((int)&local_5c.file[0xb89]._bufsize + 2);
          local_24 = local_24 + 1;
        } while (local_24 < _DAT_01465928);
      }
      support_codec_cpp_CLZWCompress_finalize_FUN_00434910
                ((CLZWCompress *)auStack_b4,&local_68.base);
      support_codec_cpp_CLZWDictionary_dtor_FUN_00434270((CLZWDictionary *)(auStack_b4 + 4),0);
      support_codec_cpp_CCodec_dtor_FUN_00433e90((CCodec *)auStack_b4,1);
    }
    support_trstream_cpp_COutStreamFile_dtor_FUN_0057dc10(&local_5c,flags);
    return;
  }
  _fclose(file_handle);
  return;
}
