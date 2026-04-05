// Name: core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0
// Address: 004529b0
// MANUAL RECONSTRUCTION
// Address Range: [[004529b0, 00453010]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_saveBackdrop_FUN_004529b0(CDemonCamera *this_ptr)

#include "nocturne.h"
#include "system/stream_compat.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dcamera_cpp_CDemonCamera_saveBackdrop_FUN_004529b0(CDemonCamera *this_ptr)

{
  _FILE *file_ptr;
  uint uVar1;
  uint uVar2;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int iVar4;
  int iVar6;
  char *pcVar7;
  int iVar8;
  CVector3i *end_pos;
  int iVar9;
  char local_274 [256];
  char local_f8 [100];
  CLZWCompress local_94;
  CVector3i local_5c;
  char local_50 [4];
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
  
  g_BackdropSaveActive = 1;
  g_ImageProcessingState1 = 0;
  g_ImageProcessingState2 = 0;
  core_dcamera_cpp_resetFogSamplingOffset_FUN_0044bb70(&g_CameraFogGrid);
  g_ImageBytesPerPixel = 0x10;
  if ((g_CameraFogGrid.scroll_vector.x == 0 && g_CameraFogGrid.scroll_vector.y == 0) &&
      g_CameraFogGrid.scroll_vector.z == 0) {
    g_ImageBytesPerPixel = 1;
  }
  _sprintf(local_274,"%s.fog",this_ptr->camera_name);
  file_ptr = engine_dosio_c_getFile_FUN_00481a50("backdrop",local_274,"rb");
  if (file_ptr != (_FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\dcamera.cpp",0x12d5);
    return;
  }
  _sprintf(local_f8,"backdrop\\%s",local_274);
  std::ofstream ofs(local_f8, std::ios::out | std::ios::binary);
  if (ofs.fail()) {
    g_CurrentFilename = "..\\core\\dcamera.cpp";
    g_CurrentLineNumber = 0x12dc;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create %s",local_f8);
  }
  ofs.write((char *)&g_CameraFogGrid, 0x1000);
  if (g_CameraFogGrid.density_multiplier != 0) {
    ofs.write("EFD", 3);
    local_5c.x = (int)ROUND(ROUND((double)(this_ptr->base).position.f.x * 256)
                           );
    local_5c.y = (int)ROUND(ROUND((double)(this_ptr->base).position.f.y * 256)
                           );
    local_5c.z = (int)ROUND(ROUND(256 * (double)(this_ptr->base).position.f.z)
                           );
    support_codec_cpp_CLZWCompress_ctor_FUN_0043f2d0(&local_94,0x10000,6);
    support_codec_cpp_CLZWCompress_init_FUN_0043f320(&local_94);
    local_18 = 0;
    if (0 < g_ImageBytesPerPixel) {
      local_44 = 0;
      local_40 = -0x12c00;
      do {
        core_dcamera_cpp_updateFogScrollOffset_FUN_0044bfb0(&g_CameraFogGrid,local_18,0);
        local_28 = 1;
        if (1 < this_ptr->display_height) {
          local_3c = 0x140;
          local_34 = 0xf00;
          local_30 = 0x500;
          do {
            end_pos = (CVector3i *)((int)&g_PrecomputedWorldPositions[0].x + local_34);
            piVar5 = (int *)((int)g_PrecomputedDepthBuffer + local_30);
            pcVar7 = g_CameraPlaneWorkBuffer.pixels[0] + local_3c;
            iVar6 = 1;
            if (1 < this_ptr->display_width) {
              do {
                if (*piVar5 == 0x7fffffff) {
                  *pcVar7 = -1;
                }
                else {
                  uVar1 = core_dcamera_cpp_sampleFogAlongRay_FUN_0044bdd0
                                    (&g_CameraFogGrid,&local_5c,end_pos,*piVar5);
                  uVar2 = uVar1 * 0xff >> 0xe;
                  if (0xff < uVar2) {
                    uVar2 = 0xff;
                  }
                  *pcVar7 = (char)uVar2;
                }
                end_pos = end_pos + 1;
                pcVar7 = pcVar7 + 1;
                iVar6 = iVar6 + 1;
                piVar5 = piVar5 + 1;
              } while (iVar6 < this_ptr->display_width);
            }
            local_30 = local_30 + 0x500;
            local_3c = local_3c + 0x140;
            local_34 = local_34 + 0xf00;
            local_28 = local_28 + 1;
          } while (local_28 < this_ptr->display_height);
        }
        core_dcamera_cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00453020(this_ptr,local_18);
        local_2c = 0;
        if (0 < this_ptr->display_height) {
          local_1c = local_40;
          local_48 = local_40;
          local_24 = 0;
          local_20 = local_44;
          local_38 = local_44;
          do {
            iVar3 = 0;
            iVar4 = 0;
            if (0 < this_ptr->display_width) {
              local_14 = local_24;
              iVar8 = local_24;
              iVar9 = local_38;
              do {
                uVar2 = (uint)(byte)g_CameraImageDecompressBuffer[0].pixels[0]
                                    [local_44 + local_24 + iVar3];
                if (0 < local_18) {
                  uVar2 = uVar2 - (byte)g_CameraImageDecompressBuffer[0].pixels[0]
                                        [local_40 + local_24 + iVar3];
                }
                iVar2 = ((int)uVar2 >> 2) - iVar4;
                if (iVar2 < -0x20) {
                  iVar2 = -0x20;
                }
                else if (0x3f < iVar2) {
                  iVar2 = 0x3f;
                }
                g_CameraPlaneWorkBuffer.pixels[0][iVar8] = (char)iVar2;
                iVar4 = iVar2 + iVar4;
                cVar4 = (char)iVar4 * '\x04';
                if (0 < local_18) {
                  cVar4 = cVar4 + g_CameraImageDecompressBuffer[0].pixels[0]
                                  [local_40 + local_24 + iVar3];
                }
                g_CameraImageDecompressBuffer[0].pixels[0][iVar9] = cVar4;
                iVar8 = iVar8 + 1;
                iVar3 = iVar3 + 1;
                iVar9 = iVar9 + 1;
              } while (iVar3 < this_ptr->display_width);
            }
            local_24 = local_24 + 0x140;
            local_38 = local_38 + 0x140;
            local_2c = local_2c + 1;
          } while (local_2c < this_ptr->display_height);
        }
        local_4c = 0x12c00;
        iVar4 = support_codec_cpp_CCodec_processFromBuffer_FUN_0043eb30
                          (&local_94.base,(char *)&g_CameraPlaneWorkBuffer,&local_4c,
                           watcom_ostream_from(ofs));
        if (iVar4 == 0) {
          g_CurrentFilename = "..\\core\\dcamera.cpp";
          g_CurrentLineNumber = 0x1349;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Error compressing %s",local_f8);
        }
        if (local_4c != 0) {
          g_CurrentFilename = "..\\core\\dcamera.cpp";
          g_CurrentLineNumber = 0x134b;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Not all bytes consumed compressing %s",local_f8)
          ;
        }
        if (ofs.fail()) {
          g_CurrentLineNumber = 0x134c;
          g_CurrentFilename = "..\\core\\dcamera.cpp";
          core_main_c_displayErrorAndQuit_FUN_00506f10("Error writing compressed file %s",local_f8)
          ;
        }
        local_44 = local_44 + 0x12c00;
        local_40 = local_40 + 0x12c00;
        local_18 = local_18 + 1;
      } while (local_18 < g_ImageBytesPerPixel);
    }
    support_codec_cpp_CLZWCompress_finalize_FUN_0043f440(&local_94,watcom_ostream_from(ofs));
    support_codec_cpp_CLZWDictionary_dtor_FUN_0043edf0(&local_94.dictionary,0);
    support_codec_cpp_CCodec_dtor_FUN_0043e9b0(&local_94.base,1);
  }
  return;
}
