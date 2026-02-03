// Name: core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0
// Address: 004529b0
// Address Range: [[004529b0, 00453010]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_saveBackdrop_FUN_004529b0(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_saveBackdrop_FUN_004529b0(CDemonCamera *this_ptr)

{
  _FILE *file_ptr;
  uint uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  CDemonCamera *unaff_ESI;
  char *pcVar7;
  int iVar8;
  CVector3i *end_pos;
  char acVar9 [4];
  double dVar10;
  double dVar11;
  int *output_length;
  uint flags;
  SIZE_T in_stack_fffffd8c;
  byte local_174 [68];
  _FILE local_130;
  int local_114;
  byte auStack_104 [12];
  char local_f8 [88];
  byte auStack_a0 [56];
  CVector3i CStack_68;
  int local_58;
  int local_54;
  char local_50 [4];
  int local_4c;
  int local_48;
  char local_44 [4];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  char local_2c [4];
  int local_28;
  int local_24;
  int local_20;
  
  g_BackdropSaveActive = 1;
  g_ImageProcessingState1 = 0;
  g_ImageProcessingState2 = 0;
  core_dcamera_cpp_resetFogSamplingOffset_FUN_0044bb70(&g_CameraFogGrid);
  g_ImageBytesPerPixel = 0x10;
  if ((g_CameraFogGrid.scroll_vector.x == 0 && g_CameraFogGrid.scroll_vector.y == 0) &&
      g_CameraFogGrid.scroll_vector.z == 0) {
    g_ImageBytesPerPixel = 1;
  }
  sprintf(&stack0xfffffd8c,"%s.fog",this_ptr->camera_name);
  file_ptr = engine_dosio_c_getFile_FUN_00481a50("backdrop",&stack0xfffffd8c,"rb")
  ;
  if (file_ptr == (_FILE *)0x0) {
    sprintf(local_f8,"backdrop\\%s",&stack0xfffffd8c);
    crt_fstream_cpp_ofstream_constructor_FUN_005ff710
              ((ofstream *)local_174,0,(int)local_f8,0x110,(char *)g_DefaultStreamBufferSize,
               in_stack_fffffd8c);
    if (local_114 != 0) {
      g_CurrentFilename = "..\\core\\dcamera.cpp";
      g_CurrentLineNumber = 0x12dc;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create %s",local_f8);
    }
    stream_write_internal(&local_130,&g_CameraFogGrid,0x1000);
    if (g_CameraFogGrid.density_multiplier == 0) {
      flags = 0;
    }
    else {
      local_50[0] = "EFD"[0];
      local_50[1] = "EFD"[1];
      local_50[2] = "EFD"[2];
      local_50[3] = "EFD"[3];
      stream_write_internal(&local_130,local_50,3);
      dVar11 = 256;
      flags = 0x452b20;
      dVar10 = round
                         ((double)(float)(this_ptr->base).position.x * 256);
      CStack_68.z = (int)ROUND(dVar10);
      output_length = (int *)0x452b33;
      dVar10 = round((double)(float)(this_ptr->base).position.y * dVar11);
      CStack_68.z = (int)ROUND(dVar10);
      dVar11 = round(dVar11 * (double)(float)(this_ptr->base).position.z);
      CStack_68.z = (int)ROUND(dVar11);
      support_codec_cpp_CLZWCompress_ctor_FUN_0043f2d0((CLZWCompress *)(auStack_a0 + 4));
      support_codec_cpp_CLZWCompress_init_FUN_0043f320((CLZWCompress *)auStack_a0);
      local_24 = 0;
      if (0 < g_ImageBytesPerPixel) {
        local_50[0] = '\0';
        local_50[1] = '\0';
        local_50[2] = '\0';
        local_50[3] = '\0';
        local_4c = -0x12c00;
        do {
          core_dcamera_cpp_updateFogScrollOffset_FUN_0044bfb0(&g_CameraFogGrid,local_24,0);
          local_34 = 1;
          if (1 < unaff_ESI->display_height) {
            local_48 = 0x140;
            local_40 = 0xf00;
            local_3c = 0x500;
            do {
              end_pos = (CVector3i *)((int)&g_PrecomputedWorldPositions[0].x + local_40);
              piVar5 = (int *)((int)g_PrecomputedDepthBuffer + local_3c);
              pcVar7 = g_CameraPlaneWorkBuffer.pixels[0] + local_48;
              iVar6 = 1;
              if (1 < unaff_ESI->display_width) {
                do {
                  if (*piVar5 == 0x7fffffff) {
                    *pcVar7 = -1;
                  }
                  else {
                    uVar1 = core_dcamera_cpp_sampleFogAlongRay_FUN_0044bdd0
                                      (&g_CameraFogGrid,&CStack_68,end_pos,*piVar5);
                    uVar1 = uVar1 * 0xff >> 0xe;
                    if (0xff < uVar1) {
                      uVar1 = 0xff;
                    }
                    *pcVar7 = (char)uVar1;
                  }
                  end_pos = end_pos + 1;
                  pcVar7 = pcVar7 + 1;
                  iVar6 = iVar6 + 1;
                  piVar5 = piVar5 + 1;
                } while (iVar6 < unaff_ESI->display_width);
              }
              local_3c = local_3c + 0x500;
              local_48 = local_48 + 0x140;
              local_40 = local_40 + 0xf00;
              local_34 = local_34 + 1;
            } while (local_34 < unaff_ESI->display_height);
          }
          core_dcamera_cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00453020(unaff_ESI,local_24);
          local_38 = 0;
          if (0 < unaff_ESI->display_height) {
            local_28 = local_4c;
            local_54 = local_4c;
            local_30 = 0;
            local_2c[0] = local_50[0];
            local_2c[1] = local_50[1];
            local_2c[2] = local_50[2];
            local_2c[3] = local_50[3];
            local_44[0] = local_50[0];
            local_44[1] = local_50[1];
            local_44[2] = local_50[2];
            local_44[3] = local_50[3];
            do {
              iVar3 = 0;
              iVar6 = 0;
              if (0 < unaff_ESI->display_width) {
                local_20 = local_30;
                iVar8 = local_30;
                acVar9 = local_44;
                do {
                  uVar1 = (uint)(byte)g_CameraImageDecompressBuffer[0].pixels[0]
                                      [(int)local_50 + local_30 + iVar3];
                  if (0 < local_24) {
                    uVar1 = uVar1 - (byte)g_CameraImageDecompressBuffer[0].pixels[0]
                                          [local_4c + local_30 + iVar3];
                  }
                  iVar2 = ((int)uVar1 >> 2) - iVar6;
                  if (iVar2 < -0x20) {
                    iVar2 = -0x20;
                  }
                  else if (0x3f < iVar2) {
                    iVar2 = 0x3f;
                  }
                  g_CameraPlaneWorkBuffer.pixels[0][iVar8] = (char)iVar2;
                  iVar6 = iVar2 + iVar6;
                  cVar4 = (char)iVar6 * '\x04';
                  if (0 < local_24) {
                    cVar4 = cVar4 + g_CameraImageDecompressBuffer[0].pixels[0]
                                    [local_4c + local_30 + iVar3];
                  }
                  g_CameraImageDecompressBuffer[0].pixels[0][(int)acVar9] = cVar4;
                  iVar8 = iVar8 + 1;
                  iVar3 = iVar3 + 1;
                  acVar9 = (char  [4])((int)acVar9 + 1);
                } while (iVar3 < unaff_ESI->display_width);
              }
              local_30 = local_30 + 0x140;
              local_44 = (char  [4])((int)local_44 + 0x140);
              local_38 = local_38 + 1;
            } while (local_38 < unaff_ESI->display_height);
          }
          local_58 = 0x12c00;
          iVar6 = support_codec_cpp_CCodec_processFromBuffer_FUN_0043eb30
                            ((CCodec *)auStack_a0,(byte *)&g_CameraPlaneWorkBuffer,&local_58,
                             local_174 + 0x38,output_length);
          if (iVar6 == 0) {
            g_CurrentFilename = "..\\core\\dcamera.cpp";
            g_CurrentLineNumber = 0x1349;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Error compressing %s",auStack_104)
            ;
          }
          if (local_58 != 0) {
            g_CurrentFilename = "..\\core\\dcamera.cpp";
            g_CurrentLineNumber = 0x134b;
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("Not all bytes consumed compressing %s",auStack_104);
          }
          if ((ostream *)local_130._handle != (ostream *)0x0) {
            g_CurrentLineNumber = 0x134c;
            g_CurrentFilename = "..\\core\\dcamera.cpp";
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("Error writing compressed file %s",auStack_104);
          }
          local_50 = (char  [4])((int)local_50 + 0x12c00);
          local_4c = local_4c + 0x12c00;
          local_24 = local_24 + 1;
        } while (local_24 < g_ImageBytesPerPixel);
      }
      support_codec_cpp_CLZWCompress_finalize_FUN_0043f440
                ((CLZWCompress *)auStack_a0,(_FILE *)(local_174 + 0x38));
      support_codec_cpp_CLZWDictionary_dtor_FUN_0043edf0((CLZWDictionary *)(auStack_a0 + 4));
      support_codec_cpp_CCodec_dtor_FUN_0043e9b0((CCodec *)auStack_a0,1);
    }
    crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc((ofstream *)local_174,flags);
    return;
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\dcamera.cpp",0x12d5);
  return;
}
