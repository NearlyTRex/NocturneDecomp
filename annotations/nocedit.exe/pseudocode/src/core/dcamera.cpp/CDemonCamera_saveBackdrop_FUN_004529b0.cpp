// Name: core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0
// Address: 004529b0
// Address Range: [[004529b0, 00453010]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0(CDemonCamera * this_ptr)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044e360 (0044e360) at 0044e5a7 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_fog_0061a34a
//   TerminatedCString s_rb_0061a351
//   TerminatedCString s_backdrop_0061a354
//   TerminatedCString s_core_dcamera_cpp_0061a35d
//   TerminatedCString s_backdrop_s_0061a371
//   TerminatedCString s_core_dcamera_cpp_0061a37d
//   TerminatedCString s_Can_t_create_s_0061a391
//   TerminatedCString s_core_dcamera_cpp_0061a3a1
//   TerminatedCString s_Error_compressing_s_0061a3b5
//   TerminatedCString s_core_dcamera_cpp_0061a3ca
//   TerminatedCString s_Not_all_bytes_consumed_c_0061a3de
//   TerminatedCString s_core_dcamera_cpp_0061a404
//   TerminatedCString s_Error_writing_compressed_0061a418
//   double g_BackdropColorMultiplier = 256
//   int g_DefaultStreamBufferSize = 0x1a4
//   TerminatedCString s_EFD_0066ed6c
//   CVector3i[15360] g_PrecomputedWorldPositions
//   undefined4 DAT_00903e74
//   undefined4 DAT_00904d80
//   int[76800] g_PrecomputedDepthBuffer
//   undefined4 DAT_00bcebf8
//   undefined4 DAT_00bcebfc
//   undefined4 DAT_00bcf0f8
//   undefined4 DAT_00bcf0fc
//   int g_BackdropSaveActive
//   SFogImagePlane g_CameraPlaneWorkBuffer
//   undefined4 DAT_013da779
//   undefined4 DAT_013da8b8
//   undefined4 DAT_013da9f8
//   SFogImagePlane[16] g_CameraImageDecompressBuffer
//   undefined4 DAT_013ed379
//   int g_ImageProcessingState1
//   int g_ImageProcessingState2
//   int g_ImageBytesPerPixel
//   SFogGrid g_CameraFogGrid
//   undefined4 g_CameraFogGrid.scroll_vector.x
//   undefined4 g_CameraFogGrid.scroll_vector.y
//   undefined4 g_CameraFogGrid.scroll_vector.z
//   undefined4 g_CameraFogGrid.density_multiplier
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dcamera.cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00453020
//   core_dcamera.cpp_resetFogSamplingOffset_FUN_0044bb70
//   core_dcamera.cpp_sampleFogAlongRay_FUN_0044bdd0
//   core_dcamera.cpp_updateFogScrollOffset_FUN_0044bfb0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_fstream.cpp_ofstream_constructor_FUN_005ff710
//   crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdio.c_stream_write_internal_FUN_005ffcb3
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   support_codec.cpp_CCodec_dtor_FUN_0043e9b0
//   support_codec.cpp_CCodec_processFromBuffer_FUN_0043eb30
//   support_codec.cpp_CLZWCompress_ctor_FUN_0043f2d0
//   support_codec.cpp_CLZWCompress_finalize_FUN_0043f440
//   support_codec.cpp_CLZWCompress_init_FUN_0043f320
//   support_codec.cpp_CLZWDictionary_dtor_FUN_0043edf0

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_saveBackdrop_FUN_004529b0(CDemonCamera *this_ptr)

{
  FILE *file_ptr;
  uint uVar1;
  int iVar2;
  undefined4 extraout_EDX;
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
  float10 fVar11;
  double dVar12;
  int unaff_retaddr;
  int in_stack_00000008;
  CDemonCamera *in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000024;
  SIZE_T in_stack_fffffd9c;
  char *output_length;
  undefined1 *in_stack_fffffda8;
  uint in_stack_fffffdac;
  uint in_stack_fffffdb0;
  undefined1 auStack_164 [68];
  undefined1 auStack_120 [12];
  FILE local_114;
  char acStack_ec [4];
  undefined1 auStack_e8 [12];
  int iStack_dc;
  undefined1 auStack_d8 [72];
  undefined1 local_90 [8];
  undefined1 auStack_88 [12];
  CLZWDictionary CStack_7c;
  int local_5c;
  int local_54;
  int local_4c;
  CVector3i local_48;
  char local_34 [4];
  int local_30;
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  int local_14;
  int iVar13;
  
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
    fVar10 = (float10)g_BackdropColorMultiplier;
    fVar11 = (float10)*(float *)(in_stack_00000024 + 4) * fVar10;
    dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,in_stack_00000024));
    local_5c = (int)ROUND(fVar11);
    fVar11 = (float10)*(float *)(SUB84(dVar12,0) + 8) * fVar10;
    dVar12 = crt_math_c_round_FUN_005fe6b0(dVar12);
    local_54 = (int)ROUND(fVar11);
    fVar10 = fVar10 * (float10)*(float *)(SUB84(dVar12,0) + 0xc);
    dVar12 = crt_math_c_round_FUN_005fe6b0
                       ((double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),local_90));
    local_4c = (int)ROUND(fVar10);
    support_codec_cpp_CLZWCompress_ctor_FUN_0043f2d0(SUB84(dVar12,0));
    support_codec_cpp_CLZWCompress_init_FUN_0043f320((CLZWCompress *)auStack_88);
    iVar13 = 0;
    if (0 < g_ImageBytesPerPixel) {
      local_34[0] = '\0';
      local_34[1] = '\0';
      local_34[2] = '\0';
      local_34[3] = '\0';
      local_30 = -0x12c00;
      do {
        core_dcamera_cpp_updateFogScrollOffset_FUN_0044bfb0(&g_CameraFogGrid,iVar13,0);
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
            iVar13 = iVar7;
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
                g_CameraPlaneWorkBuffer.pixels[0][iVar13] = (char)iVar2;
                iVar6 = iVar2 + iVar6;
                cVar4 = (char)iVar6 * '\x04';
                if (0 < unaff_retaddr) {
                  cVar4 = cVar4 + g_CameraImageDecompressBuffer[0].pixels[0]
                                  [local_28 + iVar7 + iVar3];
                }
                g_CameraImageDecompressBuffer[0].pixels[0][iVar9] = cVar4;
                iVar3 = iVar3 + 1;
                iVar13 = iVar13 + 1;
                iVar9 = iVar9 + 1;
              } while (iVar3 < *(int *)(in_stack_0000001c + 0x150));
            }
            iVar7 = iVar7 + 0x140;
            local_20 = local_20 + 0x140;
            local_14 = local_14 + 1;
            iVar13 = local_2c;
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
        iVar13 = iVar13 + 1;
      } while (iVar13 < g_ImageBytesPerPixel);
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


// Assembly code:
// 004529b0: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0
// 004529b1: PUSH ESI
// 004529b2: PUSH EDI
// 004529b3: PUSH EBP
// 004529b4: SUB ESP,0x264
// 004529ba: MOV EDX,0x1
// 004529bf: PUSH 0x1519384
//   XREF to: 01519384 (DATA)
// 004529c4: MOV ESI,0x10
// 004529c9: XOR ECX,ECX
// 004529cb: MOV dword ptr [0x013bbe2c],EDX
//   XREF to: 013bbe2c (WRITE)
// 004529d1: MOV dword ptr [0x01519378],ECX
//   XREF to: 01519378 (WRITE)
// 004529d7: MOV dword ptr [0x0151937c],ECX
//   XREF to: 0151937c (WRITE)
// 004529dd: CALL core_dcamera.cpp_resetFogSamplingOffset_FUN_0044bb70
//   XREF to: 0044bb70 (UNCONDITIONAL_CALL)
// 004529e2: MOV EAX,[0x0151a390]
//   XREF to: 0151a390 (READ)
// 004529e7: MOV EDI,dword ptr [0x0151a394]
//   XREF to: 0151a394 (READ)
// 004529ed: MOV EBP,dword ptr [0x0151a398]
//   XREF to: 0151a398 (READ)
// 004529f3: ADD ESP,0x4
// 004529f6: OR EAX,EDI
// 004529f8: MOV dword ptr [0x01519380],ESI
//   XREF to: 01519380 (WRITE)
// 004529fe: OR EAX,EBP
// 00452a00: JNZ 0x00452a0c
//   XREF to: 00452a0c (CONDITIONAL_JUMP)
// 00452a02: MOV dword ptr [0x01519380],0x1
//   XREF to: 01519380 (WRITE)
// 00452a0c: MOV EAX,dword ptr [ESP + 0x278]
//   Label: LAB_00452a0c
//   XREF to: Stack[0x4] (READ)
// 00452a13: ADD EAX,0x40
// 00452a16: PUSH EAX
// 00452a17: PUSH 0x61a34a
//   XREF to: 0061a34a (DATA)
// 00452a1c: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x274] (DATA)
// 00452a20: PUSH EAX
// 00452a21: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00452a26: ADD ESP,0xc
// 00452a29: PUSH 0x61a351
//   XREF to: 0061a351 (DATA)
// 00452a2e: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x274] (DATA)
// 00452a32: PUSH EAX
// 00452a33: PUSH 0x61a354
//   XREF to: 0061a354 (DATA)
// 00452a38: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00452a3d: ADD ESP,0xc
// 00452a40: TEST EAX,EAX
// 00452a42: JNZ 0x00452f77
//   XREF to: 00452f77 (CONDITIONAL_JUMP)
// 00452a48: MOV EAX,ESP
// 00452a4a: PUSH EAX
// 00452a4b: PUSH 0x61a371
//   XREF to: 0061a371 (DATA)
// 00452a50: LEA EAX,[ESP + 0x184]
//   XREF to: Stack[-0xf8] (DATA)
// 00452a57: PUSH EAX
// 00452a58: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00452a5d: ADD ESP,0xc
// 00452a60: MOV EDX,dword ptr [0x00665c50]
//   XREF to: 00665c50 (READ)
// 00452a66: PUSH EDX
// 00452a67: PUSH 0x110
// 00452a6c: LEA EAX,[ESP + 0x184]
//   XREF to: Stack[-0xf8] (DATA)
// 00452a73: PUSH EAX
// 00452a74: PUSH 0x0
// 00452a76: LEA EAX,[ESP + 0x110]
//   XREF to: Stack[-0x174] (DATA)
// 00452a7d: PUSH EAX
// 00452a7e: CALL crt_fstream.cpp_ofstream_constructor_FUN_005ff710
//   XREF to: 005ff710 (UNCONDITIONAL_CALL)
// 00452a83: ADD ESP,0x14
// 00452a86: CMP dword ptr [ESP + 0x160],0x0
//   XREF to: Stack[-0x114] (READ)
// 00452a8e: JZ 0x00452abb
//   XREF to: 00452abb (CONDITIONAL_JUMP)
// 00452a90: LEA EAX,[ESP + 0x17c]
//   XREF to: Stack[-0xf8] (DATA)
// 00452a97: PUSH EAX
// 00452a98: MOV EBX,0x61a37d
//   XREF to: 0061a37d (PARAM)
// 00452a9d: MOV ESI,0x12dc
// 00452aa2: PUSH 0x61a391
//   XREF to: 0061a391 (DATA)
// 00452aa7: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 00452aad: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00452ab3: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00452ab8: ADD ESP,0x8
// 00452abb: PUSH 0x1000
//   Label: LAB_00452abb
// 00452ac0: PUSH 0x1519384
//   XREF to: 01519384 (DATA)
// 00452ac5: LEA EAX,[ESP + 0x14c]
//   XREF to: Stack[-0x130] (DATA)
// 00452acc: PUSH EAX
// 00452acd: CALL crt_stdio.c_stream_write_internal_FUN_005ffcb3
//   XREF to: 005ffcb3 (UNCONDITIONAL_CALL)
// 00452ad2: MOV EDI,dword ptr [0x0151a3a0]
//   XREF to: 0151a3a0 (READ)
// 00452ad8: ADD ESP,0xc
// 00452adb: TEST EDI,EDI
// 00452add: JZ 0x00452f95
//   XREF to: 00452f95 (CONDITIONAL_JUMP)
// 00452ae3: MOV EAX,[0x0066ed6c]
//   XREF to: 0066ed6c (READ)
// 00452ae8: PUSH 0x3
// 00452aea: MOV dword ptr [ESP + 0x228],EAX
//   XREF to: Stack[-0x50] (WRITE)
//   XREF to: 00444645 (DATA)
// 00452af1: LEA EAX,[ESP + 0x228]
//   XREF to: Stack[-0x50] (DATA)
// 00452af8: PUSH EAX
// 00452af9: LEA EAX,[ESP + 0x14c]
//   XREF to: Stack[-0x130] (DATA)
// 00452b00: PUSH EAX
// 00452b01: CALL crt_stdio.c_stream_write_internal_FUN_005ffcb3
//   XREF to: 005ffcb3 (UNCONDITIONAL_CALL)
// 00452b06: ADD ESP,0xc
// 00452b09: MOV EAX,dword ptr [ESP + 0x278]
//   XREF to: Stack[0x4] (READ)
// 00452b10: FLD double ptr [0x0061a43a]
//   XREF to: 0061a43a (READ)
// 00452b16: FLD float ptr [EAX + 0x4]
// 00452b19: FMUL ST1
// 00452b1b: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00452b20: FISTP dword ptr [ESP + 0x218]
//   XREF to: Stack[-0x5c] (WRITE)
// 00452b27: FLD float ptr [EAX + 0x8]
// 00452b2a: FMUL ST1
// 00452b2c: PUSH 0x6
// 00452b2e: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00452b33: FISTP dword ptr [ESP + 0x220]
//   XREF to: Stack[-0x58] (WRITE)
// 00452b3a: FMUL float ptr [EAX + 0xc]
// 00452b3d: PUSH 0x10000
// 00452b42: LEA EAX,[ESP + 0x1e8]
//   XREF to: Stack[-0x94] (DATA)
// 00452b49: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00452b4e: PUSH EAX
// 00452b4f: FISTP dword ptr [ESP + 0x22c]
//   XREF to: Stack[-0x54] (WRITE)
// 00452b56: CALL support_codec.cpp_CLZWCompress_ctor_FUN_0043f2d0
//   XREF to: 0043f2d0 (UNCONDITIONAL_CALL)
// 00452b5b: ADD ESP,0xc
// 00452b5e: LEA EAX,[ESP + 0x1e0]
//   XREF to: Stack[-0x94] (DATA)
// 00452b65: PUSH EAX
// 00452b66: XOR EBP,EBP
// 00452b68: CALL support_codec.cpp_CLZWCompress_init_FUN_0043f320
//   XREF to: 0043f320 (UNCONDITIONAL_CALL)
// 00452b6d: ADD ESP,0x4
// 00452b70: MOV EAX,[0x01519380]
//   XREF to: 01519380 (READ)
// 00452b75: MOV dword ptr [ESP + 0x25c],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 00452b7c: TEST EAX,EAX
// 00452b7e: JLE 0x00452f1e
//   XREF to: 00452f1e (CONDITIONAL_JUMP)
// 00452b84: MOV dword ptr [ESP + 0x230],EBP
//   XREF to: Stack[-0x44] (WRITE)
// 00452b8b: MOV dword ptr [ESP + 0x234],0xfffed400
//   XREF to: Stack[-0x40] (WRITE)
// 00452b96: PUSH 0x0
//   Label: LAB_00452b96
// 00452b98: MOV EAX,dword ptr [ESP + 0x260]
//   XREF to: Stack[-0x18] (READ)
// 00452b9f: PUSH EAX
// 00452ba0: PUSH 0x1519384
//   XREF to: 01519384 (DATA)
// 00452ba5: CALL core_dcamera.cpp_updateFogScrollOffset_FUN_0044bfb0
//   XREF to: 0044bfb0 (UNCONDITIONAL_CALL)
// 00452baa: ADD ESP,0xc
// 00452bad: MOV EAX,dword ptr [ESP + 0x278]
//   XREF to: Stack[0x4] (READ)
// 00452bb4: MOV EDX,0x1
// 00452bb9: MOV ECX,dword ptr [EAX + 0x154]
// 00452bbf: MOV dword ptr [ESP + 0x24c],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 00452bc6: CMP ECX,EDX
// 00452bc8: JLE 0x00452ce4
//   XREF to: 00452ce4 (CONDITIONAL_JUMP)
// 00452bce: MOV EDX,0x140
// 00452bd3: MOV ECX,0xf00
// 00452bd8: MOV EAX,0x500
// 00452bdd: MOV dword ptr [ESP + 0x238],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 00452be4: MOV dword ptr [ESP + 0x240],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 00452beb: MOV dword ptr [ESP + 0x244],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00452bf2: MOV EDI,0x902f74
//   Label: LAB_00452bf2
//   XREF to: 00902f74 (DATA)
// 00452bf7: MOV EBX,dword ptr [ESP + 0x240]
//   XREF to: Stack[-0x34] (READ)
// 00452bfe: MOV ESI,0x13da778
//   XREF to: 013da778 (DATA)
// 00452c03: MOV EAX,dword ptr [ESP + 0x244]
//   XREF to: Stack[-0x30] (READ)
// 00452c0a: ADD EDI,EBX
// 00452c0c: MOV EBX,0xbce6f8
//   XREF to: 00bce6f8 (DATA)
// 00452c11: MOV EBP,dword ptr [ESP + 0x238]
//   XREF to: Stack[-0x3c] (READ)
// 00452c18: ADD EBX,EAX
//   XREF to: 00bcebf8 (PARAM)
// 00452c1a: MOV EAX,dword ptr [ESP + 0x278]
//   XREF to: Stack[0x4] (READ)
// 00452c21: ADD ESI,EBP
// 00452c23: MOV EBP,0x1
// 00452c28: CMP EBP,dword ptr [EAX + 0x150]
// 00452c2e: JGE 0x00452c84
//   XREF to: 00452c84 (CONDITIONAL_JUMP)
// 00452c30: MOV EAX,dword ptr [EBX]
//   Label: LAB_00452c30
//   XREF to: 00bcebf8 (READ)
//   XREF to: 00bcebfc (READ)
//   XREF to: 00bcf0f8 (READ)
//   XREF to: 00bcf0fc (READ)
// 00452c32: CMP EAX,0x7fffffff
// 00452c37: JZ 0x00452f98
//   XREF to: 00452f98 (CONDITIONAL_JUMP)
// 00452c3d: PUSH EAX
// 00452c3e: PUSH EDI
//   XREF to: 00903e74 (DATA)
//   XREF to: 00904d80 (DATA)
// 00452c3f: LEA EAX,[ESP + 0x220]
//   XREF to: Stack[-0x5c] (DATA)
// 00452c46: PUSH EAX
// 00452c47: PUSH 0x1519384
//   XREF to: 01519384 (DATA)
// 00452c4c: CALL core_dcamera.cpp_sampleFogAlongRay_FUN_0044bdd0
//   XREF to: 0044bdd0 (UNCONDITIONAL_CALL)
// 00452c51: IMUL EAX,EAX,0xff
// 00452c57: SHR EAX,0xe
// 00452c5a: ADD ESP,0x10
// 00452c5d: CMP EAX,0xff
// 00452c62: JBE 0x00452c69
//   XREF to: 00452c69 (CONDITIONAL_JUMP)
// 00452c64: MOV EAX,0xff
// 00452c69: MOV byte ptr [ESI],AL
//   Label: LAB_00452c69
//   XREF to: 013da8b8 (WRITE)
// 00452c6b: MOV EAX,dword ptr [ESP + 0x278]
//   Label: LAB_00452c6b
//   XREF to: Stack[0x4] (READ)
// 00452c72: ADD EDI,0xc
// 00452c75: INC ESI
// 00452c76: INC EBP
// 00452c77: MOV ECX,dword ptr [EAX + 0x150]
// 00452c7d: ADD EBX,0x4
//   XREF to: 00bcf0fc (PARAM)
// 00452c80: CMP EBP,ECX
// 00452c82: JL 0x00452c30
//   XREF to: 00452c30 (CONDITIONAL_JUMP)
// 00452c84: MOV EBX,dword ptr [ESP + 0x244]
//   Label: LAB_00452c84
//   XREF to: Stack[-0x30] (READ)
// 00452c8b: MOV ESI,dword ptr [ESP + 0x238]
//   XREF to: Stack[-0x3c] (READ)
// 00452c92: MOV EDI,dword ptr [ESP + 0x240]
//   XREF to: Stack[-0x34] (READ)
// 00452c99: MOV EBP,dword ptr [ESP + 0x24c]
//   XREF to: Stack[-0x28] (READ)
// 00452ca0: MOV EDX,dword ptr [ESP + 0x278]
//   XREF to: Stack[0x4] (READ)
// 00452ca7: ADD EBX,0x500
// 00452cad: ADD ESI,0x140
// 00452cb3: ADD EDI,0xf00
// 00452cb9: INC EBP
// 00452cba: MOV ECX,dword ptr [EDX + 0x154]
// 00452cc0: MOV dword ptr [ESP + 0x244],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 00452cc7: MOV dword ptr [ESP + 0x238],ESI
//   XREF to: Stack[-0x3c] (WRITE)
// 00452cce: MOV dword ptr [ESP + 0x240],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 00452cd5: MOV dword ptr [ESP + 0x24c],EBP
//   XREF to: Stack[-0x28] (WRITE)
// 00452cdc: CMP EBP,ECX
// 00452cde: JL 0x00452bf2
//   XREF to: 00452bf2 (CONDITIONAL_JUMP)
// 00452ce4: MOV EBX,dword ptr [ESP + 0x25c]
//   Label: LAB_00452ce4
//   XREF to: Stack[-0x18] (READ)
// 00452ceb: PUSH EBX
// 00452cec: MOV ESI,dword ptr [ESP + 0x27c]
//   XREF to: Stack[0x4] (READ)
// 00452cf3: PUSH ESI
// 00452cf4: XOR EDI,EDI
// 00452cf6: CALL core_dcamera.cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00453020
//   XREF to: 00453020 (UNCONDITIONAL_CALL)
// 00452cfb: ADD ESP,0x8
// 00452cfe: MOV EBP,dword ptr [ESI + 0x154]
// 00452d04: MOV dword ptr [ESP + 0x248],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 00452d0b: TEST EBP,EBP
// 00452d0d: JLE 0x00452e5d
//   XREF to: 00452e5d (CONDITIONAL_JUMP)
// 00452d13: MOV EAX,dword ptr [ESP + 0x234]
//   XREF to: Stack[-0x40] (READ)
// 00452d1a: MOV dword ptr [ESP + 0x258],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00452d21: MOV dword ptr [ESP + 0x22c],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 00452d28: MOV EAX,dword ptr [ESP + 0x230]
//   XREF to: Stack[-0x44] (READ)
// 00452d2f: MOV dword ptr [ESP + 0x250],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 00452d36: MOV dword ptr [ESP + 0x254],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00452d3d: MOV dword ptr [ESP + 0x23c],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00452d44: MOV EAX,dword ptr [ESP + 0x278]
//   Label: LAB_00452d44
//   XREF to: Stack[0x4] (READ)
// 00452d4b: XOR EDX,EDX
// 00452d4d: MOV ECX,dword ptr [EAX + 0x150]
// 00452d53: XOR EBX,EBX
// 00452d55: TEST ECX,ECX
// 00452d57: JLE 0x00452e11
//   XREF to: 00452e11 (CONDITIONAL_JUMP)
// 00452d5d: MOV ECX,dword ptr [ESP + 0x250]
//   XREF to: Stack[-0x24] (READ)
// 00452d64: MOV EDI,dword ptr [ESP + 0x23c]
//   XREF to: Stack[-0x38] (READ)
// 00452d6b: MOV ESI,ECX
// 00452d6d: MOV dword ptr [ESP + 0x260],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00452d74: MOV EAX,dword ptr [ESP + 0x254]
//   Label: LAB_00452d74
//   XREF to: Stack[-0x20] (READ)
// 00452d7b: ADD EAX,dword ptr [ESP + 0x260]
//   XREF to: Stack[-0x14] (READ)
// 00452d82: MOV AL,byte ptr [EDX + EAX*0x1 + 0x13ed378]
//   XREF to: 013ed378 (DATA)
//   XREF to: 013ed379 (DATA)
// 00452d89: MOV EBP,dword ptr [ESP + 0x25c]
//   XREF to: Stack[-0x18] (READ)
// 00452d90: AND EAX,0xff
// 00452d95: TEST EBP,EBP
// 00452d97: JLE 0x00452db1
//   XREF to: 00452db1 (CONDITIONAL_JUMP)
// 00452d99: MOV EBP,dword ptr [ESP + 0x258]
//   XREF to: Stack[-0x1c] (READ)
// 00452da0: ADD EBP,dword ptr [ESP + 0x260]
//   XREF to: Stack[-0x14] (READ)
// 00452da7: MOVZX EBP,byte ptr [EDX + EBP*0x1 + 0x13ed378]
//   XREF to: 013ed378 (DATA)
//   XREF to: 013ed379 (DATA)
// 00452daf: SUB EAX,EBP
// 00452db1: SAR EAX,0x2
//   Label: LAB_00452db1
// 00452db4: SUB EAX,EBX
// 00452db6: CMP EAX,-0x20
// 00452db9: JGE 0x00452fa0
//   XREF to: 00452fa0 (CONDITIONAL_JUMP)
// 00452dbf: MOV EAX,0xffffffe0
// 00452dc4: MOV byte ptr [ESI + 0x13da778],AL
//   Label: LAB_00452dc4
//   XREF to: 013da778 (DATA)
//   XREF to: 013da779 (DATA)
// 00452dca: ADD EAX,EBX
// 00452dcc: MOV EBP,dword ptr [ESP + 0x25c]
//   XREF to: Stack[-0x18] (READ)
// 00452dd3: LEA EBX,[EAX*0x4 + 0x0]
// 00452dda: TEST EBP,EBP
// 00452ddc: JLE 0x00452df1
//   XREF to: 00452df1 (CONDITIONAL_JUMP)
// 00452dde: MOV EBP,dword ptr [ESP + 0x22c]
//   XREF to: Stack[-0x48] (READ)
// 00452de5: ADD EBP,ECX
// 00452de7: MOVZX EBP,byte ptr [EDX + EBP*0x1 + 0x13ed378]
//   XREF to: 013ed378 (DATA)
//   XREF to: 013ed379 (DATA)
// 00452def: ADD EBX,EBP
// 00452df1: MOV byte ptr [EDI + 0x13ed378],BL
//   Label: LAB_00452df1
//   XREF to: 013ed378 (DATA)
//   XREF to: 013ed379 (DATA)
// 00452df7: MOV EBX,EAX
// 00452df9: MOV EAX,dword ptr [ESP + 0x278]
//   XREF to: Stack[0x4] (READ)
// 00452e00: INC ESI
// 00452e01: INC EDX
// 00452e02: MOV EBP,dword ptr [EAX + 0x150]
// 00452e08: INC EDI
// 00452e09: CMP EDX,EBP
// 00452e0b: JL 0x00452d74
//   XREF to: 00452d74 (CONDITIONAL_JUMP)
// 00452e11: MOV ECX,dword ptr [ESP + 0x250]
//   Label: LAB_00452e11
//   XREF to: Stack[-0x24] (READ)
// 00452e18: MOV EBX,dword ptr [ESP + 0x23c]
//   XREF to: Stack[-0x38] (READ)
// 00452e1f: MOV ESI,dword ptr [ESP + 0x248]
//   XREF to: Stack[-0x2c] (READ)
// 00452e26: MOV EDX,dword ptr [ESP + 0x278]
//   XREF to: Stack[0x4] (READ)
// 00452e2d: ADD ECX,0x140
// 00452e33: ADD EBX,0x140
// 00452e39: INC ESI
// 00452e3a: MOV EDI,dword ptr [EDX + 0x154]
// 00452e40: MOV dword ptr [ESP + 0x250],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 00452e47: MOV dword ptr [ESP + 0x23c],EBX
//   XREF to: Stack[-0x38] (WRITE)
// 00452e4e: MOV dword ptr [ESP + 0x248],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 00452e55: CMP ESI,EDI
// 00452e57: JL 0x00452d44
//   XREF to: 00452d44 (CONDITIONAL_JUMP)
// 00452e5d: LEA EAX,[ESP + 0x144]
//   Label: LAB_00452e5d
//   XREF to: Stack[-0x130] (DATA)
// 00452e64: PUSH EAX
// 00452e65: LEA EAX,[ESP + 0x22c]
//   XREF to: Stack[-0x4c] (DATA)
// 00452e6c: PUSH EAX
// 00452e6d: PUSH 0x13da778
//   XREF to: 013da778 (DATA)
// 00452e72: LEA EAX,[ESP + 0x1ec]
//   XREF to: Stack[-0x94] (DATA)
// 00452e79: MOV EBP,0x12c00
// 00452e7e: PUSH EAX
// 00452e7f: MOV dword ptr [ESP + 0x238],EBP
//   XREF to: Stack[-0x4c] (WRITE)
// 00452e86: CALL support_codec.cpp_CCodec_processFromBuffer_FUN_0043eb30
//   XREF to: 0043eb30 (UNCONDITIONAL_CALL)
// 00452e8b: ADD ESP,0x10
// 00452e8e: TEST EAX,EAX
// 00452e90: JZ 0x00452fb3
//   XREF to: 00452fb3 (CONDITIONAL_JUMP)
// 00452e96: CMP dword ptr [ESP + 0x228],0x0
//   Label: LAB_00452e96
//   XREF to: Stack[-0x4c] (READ)
// 00452e9e: JZ 0x00452ecb
//   XREF to: 00452ecb (CONDITIONAL_JUMP)
// 00452ea0: LEA EAX,[ESP + 0x17c]
//   XREF to: Stack[-0xf8] (DATA)
// 00452ea7: PUSH EAX
// 00452ea8: MOV EBX,0x61a3ca
//   XREF to: 0061a3ca (PARAM)
// 00452ead: MOV ESI,0x134b
// 00452eb2: PUSH 0x61a3de
//   XREF to: 0061a3de (DATA)
// 00452eb7: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 00452ebd: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00452ec3: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00452ec8: ADD ESP,0x8
// 00452ecb: CMP dword ptr [ESP + 0x160],0x0
//   Label: LAB_00452ecb
//   XREF to: Stack[-0x114] (READ)
// 00452ed3: JNZ 0x00452fe2
//   XREF to: 00452fe2 (CONDITIONAL_JUMP)
// 00452ed9: MOV EDX,dword ptr [ESP + 0x230]
//   Label: LAB_00452ed9
//   XREF to: Stack[-0x44] (READ)
// 00452ee0: MOV ECX,dword ptr [ESP + 0x234]
//   XREF to: Stack[-0x40] (READ)
// 00452ee7: MOV EBX,dword ptr [ESP + 0x25c]
//   XREF to: Stack[-0x18] (READ)
// 00452eee: MOV ESI,dword ptr [0x01519380]
//   XREF to: 01519380 (READ)
// 00452ef4: ADD EDX,0x12c00
// 00452efa: ADD ECX,0x12c00
// 00452f00: INC EBX
// 00452f01: MOV dword ptr [ESP + 0x230],EDX
//   XREF to: Stack[-0x44] (WRITE)
// 00452f08: MOV dword ptr [ESP + 0x234],ECX
//   XREF to: Stack[-0x40] (WRITE)
// 00452f0f: MOV dword ptr [ESP + 0x25c],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 00452f16: CMP EBX,ESI
// 00452f18: JL 0x00452b96
//   XREF to: 00452b96 (CONDITIONAL_JUMP)
// 00452f1e: LEA EAX,[ESP + 0x144]
//   Label: LAB_00452f1e
//   XREF to: Stack[-0x130] (DATA)
// 00452f25: PUSH EAX
// 00452f26: LEA EAX,[ESP + 0x1e4]
//   XREF to: Stack[-0x94] (DATA)
// 00452f2d: PUSH EAX
// 00452f2e: CALL support_codec.cpp_CLZWCompress_finalize_FUN_0043f440
//   XREF to: 0043f440 (UNCONDITIONAL_CALL)
// 00452f33: ADD ESP,0x8
// 00452f36: PUSH 0x0
// 00452f38: LEA EAX,[ESP + 0x1e8]
//   XREF to: Stack[-0x90] (DATA)
// 00452f3f: PUSH EAX
// 00452f40: CALL support_codec.cpp_CLZWDictionary_dtor_FUN_0043edf0
//   XREF to: 0043edf0 (UNCONDITIONAL_CALL)
// 00452f45: ADD ESP,0x8
// 00452f48: PUSH 0x1
// 00452f4a: LEA EAX,[ESP + 0x1e4]
//   XREF to: Stack[-0x94] (DATA)
// 00452f51: PUSH EAX
// 00452f52: CALL support_codec.cpp_CCodec_dtor_FUN_0043e9b0
//   XREF to: 0043e9b0 (UNCONDITIONAL_CALL)
// 00452f57: ADD ESP,0x8
// 00452f5a: PUSH 0x0
// 00452f5c: LEA EAX,[ESP + 0x104]
//   Label: LAB_00452f5c
//   XREF to: Stack[-0x174] (DATA)
// 00452f63: PUSH EAX
// 00452f64: CALL crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc
//   XREF to: 005ff7bc (UNCONDITIONAL_CALL)
// 00452f69: ADD ESP,0x8
// 00452f6c: ADD ESP,0x264
// 00452f72: POP EBP
//   Label: LAB_00452f72
// 00452f73: POP EDI
// 00452f74: POP ESI
// 00452f75: POP EBX
// 00452f76: RET
// 00452f77: PUSH 0x12d5
//   Label: LAB_00452f77
// 00452f7c: PUSH 0x61a35d
//   XREF to: 0061a35d (DATA)
// 00452f81: PUSH EAX
// 00452f82: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00452f87: ADD ESP,0xc
// 00452f8a: ADD ESP,0x264
// 00452f90: POP EBP
// 00452f91: POP EDI
// 00452f92: POP ESI
// 00452f93: POP EBX
// 00452f94: RET
// 00452f95: PUSH EDI
//   Label: LAB_00452f95
// 00452f96: JMP 0x00452f5c
//   XREF to: 00452f5c (UNCONDITIONAL_JUMP)
// 00452f98: MOV byte ptr [ESI],0xff
//   Label: LAB_00452f98
//   XREF to: 013da8b8 (WRITE)
//   XREF to: 013da9f8 (WRITE)
// 00452f9b: JMP 0x00452c6b
//   XREF to: 00452c6b (UNCONDITIONAL_JUMP)
// 00452fa0: CMP EAX,0x3f
//   Label: LAB_00452fa0
// 00452fa3: JLE 0x00452dc4
//   XREF to: 00452dc4 (CONDITIONAL_JUMP)
// 00452fa9: MOV EAX,0x3f
// 00452fae: JMP 0x00452dc4
//   XREF to: 00452dc4 (UNCONDITIONAL_JUMP)
// 00452fb3: MOV dword ptr [0x02f0ca48],0x61a3a1
//   Label: LAB_00452fb3
//   XREF to: 02f0ca48 (WRITE)
//   XREF to: 0061a3a1 (DATA)
// 00452fbd: LEA EAX,[ESP + 0x17c]
//   XREF to: Stack[-0xf8] (DATA)
// 00452fc4: PUSH EAX
// 00452fc5: MOV EDX,0x1349
// 00452fca: PUSH 0x61a3b5
//   XREF to: 0061a3b5 (DATA)
// 00452fcf: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00452fd5: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00452fda: ADD ESP,0x8
// 00452fdd: JMP 0x00452e96
//   XREF to: 00452e96 (UNCONDITIONAL_JUMP)
// 00452fe2: MOV dword ptr [0x02f0ca4c],0x134c
//   Label: LAB_00452fe2
//   XREF to: 02f0ca4c (WRITE)
// 00452fec: LEA EAX,[ESP + 0x17c]
//   XREF to: Stack[-0xf8] (DATA)
// 00452ff3: PUSH EAX
// 00452ff4: MOV EBP,0x61a404
//   XREF to: 0061a404 (DATA)
// 00452ff9: PUSH 0x61a418
//   XREF to: 0061a418 (DATA)
// 00452ffe: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00453004: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00453009: ADD ESP,0x8
// 0045300c: JMP 0x00452ed9
//   XREF to: 00452ed9 (UNCONDITIONAL_JUMP)
