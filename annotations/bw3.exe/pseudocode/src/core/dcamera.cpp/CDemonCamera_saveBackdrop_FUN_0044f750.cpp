// Name: core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_0044f750
// Address: 0044f750
// Address Range: [[0044f750, 0044fdc9]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_saveBackdrop_FUN_0044f750(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_saveBackdrop_FUN_0044f750(CDemonCamera *this_ptr)

{
  bool bVar1;
  _FILE *file_handle;
  undefined3 extraout_var;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var_00;
  char acVar4 [4];
  char cVar5;
  char *pcVar6;
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
  char local_54 [4];
  int local_50;
  int local_4c;
  int local_48;
  char local_44 [4];
  int local_40;
  int local_3c;
  int local_38;
  char local_34 [4];
  _FILE *local_30;
  _FILE *local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  g_INT_0134017c = 1;
  g_INT_0149d6d0 = 0;
  g_INT_0149d6d4 = 0;
  core_dcamera_cpp_resetFogSamplingOffset_FUN_00448720(&g_SFogGrid_0149d6dc);
  g_INT_0149d6d8 = 0x10;
  if ((g_SFogGrid_0149d6dc.scroll_vector.x == 0 && g_SFogGrid_0149d6dc.scroll_vector.y == 0) &&
      g_SFogGrid_0149d6dc.scroll_vector.z == 0) {
    g_INT_0149d6d8 = 1;
  }
  _sprintf(local_20c,"%s.fog");
  file_handle = engine_dosio_cpp_getFile_FUN_004659c0("backdrop",local_20c,"rb");
  if (file_handle == (_FILE *)0x0) {
    _sprintf(local_10c,"backdrop\\%s");
    support_trstream_cpp_COutStreamFile_ctorOpen_FUN_005747e0(&local_5c,local_10c,"wb");
    bVar1 = support_trstream_cpp_COutStreamFile_isOpen_FUN_00574980(&local_5c);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      g_CHAR_PTR_01d71de0 = "..\\core\\dcamera.cpp";
      g_INT_01d71de4 = 0x1344;
      core_main_c_displayErrorAndQuit_FUN_004e4330("Can't create %s");
    }
    support_trstream_cpp_COutStreamFile_write_FUN_005748e0(&local_5c,&g_SFogGrid_0149d6dc,0x1000);
    if (g_SFogGrid_0149d6dc.density_multiplier == 0) {
      flags = 0;
    }
    else {
      local_54[0] = "EFD"[0];
      local_54[1] = "EFD"[1];
      local_54[2] = "EFD"[2];
      local_54[3] = "EFD"[3];
      support_trstream_cpp_COutStreamFile_write_FUN_005748e0(&local_5c,local_54,3);
      dVar10 = 256;
      flags = 0x44f8c1;
      dVar9 = round
                        ((double)(this_ptr->base).position.f.x * 256);
      CStack_74.z = (int)ROUND(dVar9);
      dVar9 = round((double)(this_ptr->base).position.f.y * dVar10);
      CStack_74.z = (int)ROUND(dVar9);
      iVar12 = 0x10000;
      iVar11 = 0x44f8ef;
      dVar10 = round(dVar10 * (double)(this_ptr->base).position.f.z);
      CStack_74.z = (int)ROUND(dVar10);
      support_codec_cpp_CLZWCompress_ctor_FUN_004410f0
                ((CLZWCompress *)(auStack_b4 + 4),iVar11,iVar12);
      support_codec_cpp_CLZWCompress_init_FUN_00441140((CLZWCompress *)auStack_b4);
      local_24 = 0;
      if (0 < g_INT_0149d6d8) {
        local_54[0] = '\0';
        local_54[1] = '\0';
        local_54[2] = '\0';
        local_54[3] = '\0';
        local_5c.file = (_FILE *)0xfffed400;
        do {
          core_dcamera_cpp_updateFogScrollOffset_FUN_00448b60(&g_SFogGrid_0149d6dc,local_24,0);
          local_3c = 1;
          if (1 < unaff_ESI->display_height) {
            local_4c = 0x140;
            local_48 = 0xf00;
            local_50 = 0x500;
            do {
              end_pos = (CVector3i *)((int)&g_CVector3i_ARRAY_00874588[0].x + local_48);
              iVar11 = 1;
              pcVar6 = g_CHAR_ARRAY_0135ead0 + local_4c;
              piVar7 = (int *)((int)g_INT_ARRAY_00b52a48 + local_50);
              if (1 < unaff_ESI->display_width) {
                do {
                  if (*piVar7 == 0x7fffffff) {
                    *pcVar6 = -1;
                  }
                  else {
                    uVar2 = core_dcamera_cpp_sampleFogAlongRay_FUN_00448980
                                      (&g_SFogGrid_0149d6dc,&CStack_74,end_pos,*piVar7);
                    uVar2 = uVar2 * 0xff >> 0xe;
                    if (0xff < uVar2) {
                      uVar2 = 0xff;
                    }
                    *pcVar6 = (char)uVar2;
                  }
                  end_pos = end_pos + 1;
                  pcVar6 = pcVar6 + 1;
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
          core_dcamera_cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_0044fdd0(unaff_ESI,local_24);
          local_40 = 0;
          if (0 < unaff_ESI->display_height) {
            local_30 = local_5c.file;
            local_2c = local_5c.file;
            local_38 = 0;
            local_34[0] = local_54[0];
            local_34[1] = local_54[1];
            local_34[2] = local_54[2];
            local_34[3] = local_54[3];
            local_44[0] = local_54[0];
            local_44[1] = local_54[1];
            local_44[2] = local_54[2];
            local_44[3] = local_54[3];
            do {
              iVar12 = 0;
              iVar11 = 0;
              if (0 < unaff_ESI->display_width) {
                local_20 = local_38;
                local_28 = local_38;
                acVar4 = local_44;
                iVar8 = local_38;
                do {
                  uVar2 = (uint)(byte)g_CHAR_ARRAY_013716d0[(int)local_54 + local_38 + iVar12];
                  if (0 < local_24) {
                    uVar2 = uVar2 - (byte)g_CHAR_ARRAY_013716d0
                                          [(int)&(local_5c.file)->_ptr + local_38 + iVar12];
                  }
                  iVar3 = ((int)uVar2 >> 2) - iVar11;
                  if (iVar3 < -0x20) {
                    iVar3 = -0x20;
                  }
                  else if (0x3f < iVar3) {
                    iVar3 = 0x3f;
                  }
                  g_CHAR_ARRAY_0135ead0[iVar8] = (char)iVar3;
                  iVar11 = iVar3 + iVar11;
                  cVar5 = (char)iVar11 * '\x04';
                  if (0 < local_24) {
                    cVar5 = cVar5 + g_CHAR_ARRAY_013716d0
                                    [(int)&(local_5c.file)->_ptr + local_38 + iVar12];
                  }
                  g_CHAR_ARRAY_013716d0[(int)acVar4] = cVar5;
                  iVar8 = iVar8 + 1;
                  iVar12 = iVar12 + 1;
                  acVar4 = (char  [4])((int)acVar4 + 1);
                } while (iVar12 < unaff_ESI->display_width);
              }
              local_38 = local_38 + 0x140;
              local_44 = (char  [4])((int)local_44 + 0x140);
              local_40 = local_40 + 1;
            } while (local_40 < unaff_ESI->display_height);
          }
          local_5c.base.vtable = (void *)0x12c00;
          iVar11 = support_codec_cpp_CCodec_processFromBuffer_FUN_00440970
                             ((CCodec *)auStack_b4,g_CHAR_ARRAY_0135ead0,(int *)&local_5c,&local_68)
          ;
          if (iVar11 == 0) {
            g_CHAR_PTR_01d71de0 = "..\\core\\dcamera.cpp";
            g_INT_01d71de4 = 0x13b1;
            core_main_c_displayErrorAndQuit_FUN_004e4330("Error compressing %s");
          }
          if (local_5c.base.vtable != (void *)0x0) {
            g_CHAR_PTR_01d71de0 = "..\\core\\dcamera.cpp";
            g_INT_01d71de4 = 0x13b3;
            core_main_c_displayErrorAndQuit_FUN_004e4330("Not all bytes consumed compressing %s");
          }
          bVar1 = support_trstream_cpp_COutStreamFile_isOpen_FUN_00574980(&local_68);
          if (CONCAT31(extraout_var_00,bVar1) == 0) {
            g_CHAR_PTR_01d71de0 = "..\\core\\dcamera.cpp";
            g_INT_01d71de4 = 0x13b4;
            core_main_c_displayErrorAndQuit_FUN_004e4330("Error writing compressed file %s");
          }
          local_54 = (char  [4])((int)local_54 + 0x12c00);
          local_5c.file = (_FILE *)((int)&local_5c.file[0xb89]._bufsize + 2);
          local_24 = local_24 + 1;
        } while (local_24 < g_INT_0149d6d8);
      }
      support_codec_cpp_CLZWCompress_finalize_FUN_00441290
                ((CLZWCompress *)auStack_b4,&local_68.base);
      support_codec_cpp_CLZWDictionary_dtor_FUN_00440bf0((CLZWDictionary *)(auStack_b4 + 4),0);
      support_codec_cpp_CCodec_dtor_FUN_00440810((CCodec *)auStack_b4,1);
    }
    support_trstream_cpp_COutStreamFile_dtor_FUN_00574850(&local_5c,flags);
    return;
  }
  _fclose(file_handle);
  return;
}
