// Name: core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0
// Address: 004529b0
// Address Range: [[004529b0, 00453010]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0(CDemonCamera * this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_saveBackdrop_FUN_004529b0(CDemonCamera *this_ptr)

{
  FILE *file_ptr;
  int extraout_EAX;
  int extraout_EAX_00;
  CLZWCompress *this_ptr_00;
  uint uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int unaff_EBX;
  int *piVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  int iVar7;
  char *pcVar8;
  CVector3i *end_pos;
  int iVar9;
  float10 fVar10;
  double dVar11;
  int unaff_retaddr;
  int in_stack_00000008;
  CDemonCamera *in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000024;
  SIZE_T in_stack_fffffd9c;
  char *output_length;
  byte *in_stack_fffffda8;
  uint in_stack_fffffdac;
  uint in_stack_fffffdb0;
  byte auStack_164 [68];
  byte auStack_120 [12];
  FILE local_114;
  char acStack_ec [4];
  byte auStack_e8 [12];
  int iStack_dc;
  byte auStack_d8 [80];
  byte auStack_88 [12];
  CLZWDictionary CStack_7c;
  int local_4c;
  CVector3i local_48;
  char local_34 [4];
  int local_30;
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  int local_14;
  int iVar12;
  
  g_BackdropSaveActive = 1;
  g_ImageProcessingState1 = 0;
  g_ImageProcessingState2 = 0;
  core_dcamera_cpp_resetFogSamplingOffset_FUN_0044bb70(&g_CameraFogGrid);
  g_ImageBytesPerPixel = 0x10;
  if ((g_CameraFogGrid.scroll_vector.x == 0 && g_CameraFogGrid.scroll_vector.y == 0) &&
      g_CameraFogGrid.scroll_vector.z == 0) {
    g_ImageBytesPerPixel = 1;
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffd90,"%s.fog",in_stack_00000008 + 0x40);
  file_ptr = engine_dosio_c_getFile_FUN_00481a50("backdrop",&stack0xfffffd94,"rb")
  ;
  if (file_ptr != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\dcamera.cpp",0x12d5);
    return;
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_ec,"backdrop\\%s");
  crt_fstream_cpp_ofstream_constructor_FUN_005ff710
            ((ofstream *)auStack_164,0,(int)auStack_e8,0x110,(char *)g_DefaultStreamBufferSize,
             in_stack_fffffd9c);
  if (local_114._bufsize != 0) {
    g_CurrentFilename = "..\\core\\dcamera.cpp";
    g_CurrentLineNumber = 0x12dc;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create %s");
  }
  crt_stdio_c_stream_write_internal_FUN_005ffcb3((FILE *)(auStack_120 + 8),&g_CameraFogGrid,0x1000);
  if (g_CameraFogGrid.density_multiplier != 0) {
    output_length = (char *)0x3;
    local_34[0] = "EFD"[0];
    local_34[1] = "EFD"[1];
    local_34[2] = "EFD"[2];
    local_34[3] = "EFD"[3];
    crt_stdio_c_stream_write_internal_FUN_005ffcb3(&local_114,local_34,3);
    fVar10 = (float10)256;
    dVar11 = crt_math_c_round_FUN_005fe6b0
                       ((double)((float10)*(float *)(in_stack_00000024 + 4) * fVar10));
    local_4c = (int)ROUND(dVar11);
    dVar11 = crt_math_c_round_FUN_005fe6b0((double)((float10)*(float *)(extraout_EAX + 8) * fVar10))
    ;
    local_4c = (int)ROUND(dVar11);
    dVar11 = crt_math_c_round_FUN_005fe6b0
                       ((double)(fVar10 * (float10)*(float *)(extraout_EAX_00 + 0xc)));
    local_4c = (int)ROUND(dVar11);
    support_codec_cpp_CLZWCompress_ctor_FUN_0043f2d0(this_ptr_00);
    support_codec_cpp_CLZWCompress_init_FUN_0043f320((CLZWCompress *)auStack_88);
    iVar12 = 0;
    if (0 < g_ImageBytesPerPixel) {
      local_34[0] = '\0';
      local_34[1] = '\0';
      local_34[2] = '\0';
      local_34[3] = '\0';
      local_30 = -0x12c00;
      do {
        core_dcamera_cpp_updateFogScrollOffset_FUN_0044bfb0(&g_CameraFogGrid,iVar12,0);
        local_14 = 1;
        if (1 < in_stack_00000018->display_height) {
          local_28 = 0x140;
          local_20 = 0xf00;
          local_1c = 0x500;
          do {
            end_pos = (CVector3i *)((int)&g_PrecomputedWorldPositions[0].x + local_20);
            piVar5 = (int *)((int)g_PrecomputedDepthBuffer + local_1c);
            pcVar8 = g_CameraPlaneWorkBuffer.pixels[0] + local_28;
            iVar7 = 1;
            if (1 < in_stack_00000018->display_width) {
              do {
                if (*piVar5 == 0x7fffffff) {
                  *pcVar8 = -1;
                }
                else {
                  uVar1 = core_dcamera_cpp_sampleFogAlongRay_FUN_0044bdd0
                                    (&g_CameraFogGrid,&local_48,end_pos,*piVar5);
                  uVar1 = uVar1 * 0xff >> 0xe;
                  if (0xff < uVar1) {
                    uVar1 = 0xff;
                  }
                  *pcVar8 = (char)uVar1;
                }
                end_pos = end_pos + 1;
                pcVar8 = pcVar8 + 1;
                iVar7 = iVar7 + 1;
                piVar5 = piVar5 + 1;
              } while (iVar7 < in_stack_00000018->display_width);
            }
            local_1c = local_1c + 0x500;
            local_28 = local_28 + 0x140;
            local_20 = local_20 + 0xf00;
            local_14 = local_14 + 1;
          } while (local_14 < in_stack_00000018->display_height);
        }
        core_dcamera_cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00453020(in_stack_00000018,unaff_EBX)
        ;
        local_14 = 0;
        if (0 < in_stack_00000018->display_height) {
          local_30 = local_28;
          iVar7 = 0;
          local_20 = local_2c;
          do {
            iVar3 = 0;
            iVar6 = 0;
            iVar12 = iVar7;
            iVar9 = local_20;
            if (0 < *(int *)(in_stack_0000001c + 0x150)) {
              do {
                uVar1 = (uint)(byte)g_CameraImageDecompressBuffer[0].pixels[0]
                                    [local_2c + iVar7 + iVar3];
                if (0 < unaff_retaddr) {
                  uVar1 = uVar1 - (byte)g_CameraImageDecompressBuffer[0].pixels[0]
                                        [local_28 + iVar7 + iVar3];
                }
                iVar2 = ((int)uVar1 >> 2) - iVar6;
                if (iVar2 < -0x20) {
                  iVar2 = -0x20;
                }
                else if (0x3f < iVar2) {
                  iVar2 = 0x3f;
                }
                g_CameraPlaneWorkBuffer.pixels[0][iVar12] = (char)iVar2;
                iVar6 = iVar2 + iVar6;
                cVar4 = (char)iVar6 * '\x04';
                if (0 < unaff_retaddr) {
                  cVar4 = cVar4 + g_CameraImageDecompressBuffer[0].pixels[0]
                                  [local_28 + iVar7 + iVar3];
                }
                g_CameraImageDecompressBuffer[0].pixels[0][iVar9] = cVar4;
                iVar3 = iVar3 + 1;
                iVar12 = iVar12 + 1;
                iVar9 = iVar9 + 1;
              } while (iVar3 < *(int *)(in_stack_0000001c + 0x150));
            }
            iVar7 = iVar7 + 0x140;
            local_20 = local_20 + 0x140;
            local_14 = local_14 + 1;
            iVar12 = local_2c;
            unaff_EBX = local_28;
          } while (local_14 < *(int *)(in_stack_0000001c + 0x154));
        }
        local_34[0] = '\0';
        local_34[1] = ',';
        local_34[2] = '\x01';
        local_34[3] = '\0';
        iVar7 = support_codec_cpp_CCodec_processFromBuffer_FUN_0043eb30
                          ((CCodec *)&CStack_7c,(byte *)&g_CameraPlaneWorkBuffer,(int *)local_34,
                           auStack_120 + 8,(int *)output_length);
        if (iVar7 == 0) {
          g_CurrentFilename = "..\\core\\dcamera.cpp";
          output_length = (char *)&iStack_dc;
          g_CurrentLineNumber = 0x1349;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Error compressing %s");
        }
        if (local_2c != 0) {
          in_stack_fffffda8 = auStack_d8;
          output_length = "Not all bytes consumed compressing %s";
          g_CurrentFilename = "..\\core\\dcamera.cpp";
          g_CurrentLineNumber = 0x134b;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Not all bytes consumed compressing %s");
        }
        if (local_114._handle != 0) {
          g_CurrentLineNumber = 0x134c;
          g_CurrentFilename = "..\\core\\dcamera.cpp";
          core_main_c_displayErrorAndQuit_FUN_00506f10("Error writing compressed file %s");
        }
        local_34 = (char  [4])((int)local_34 + 0x12c00);
        local_30 = local_30 + 0x12c00;
        iVar12 = iVar12 + 1;
      } while (iVar12 < g_ImageBytesPerPixel);
    }
    support_codec_cpp_CLZWCompress_finalize_FUN_0043f440
              ((CLZWCompress *)(auStack_88 + 4),(FILE *)auStack_120);
    support_codec_cpp_CLZWDictionary_dtor_FUN_0043edf0(&CStack_7c);
    support_codec_cpp_CCodec_dtor_FUN_0043e9b0((CCodec *)&CStack_7c,1);
  }
  crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc
            ((ofstream *)(auStack_164 + 0xc),0,(uint)in_stack_fffffda8,in_stack_fffffdac,
             in_stack_fffffdb0);
  return;
}
