// Name: core_setedit.cpp_CDemonSet_editCameraPosition_FUN_0057d660
// Address: 0057d660
// MANUAL RECONSTRUCTION
// Address Range: [[0057d660, 0057e425]]
// Convention: __cdecl
// Signature: int __cdecl core_setedit_cpp_CDemonSet_editCameraPosition_FUN_0057d660(CDemonSet *this_ptr,int camera_index)

#include "nocturne.h"

int __cdecl core_setedit_cpp_CDemonSet_editCameraPosition_FUN_0057d660(CDemonSet *this_ptr,int camera_index)

{
  int result;
  int strobe_enable;
  int strobe_blink;
  int show_pvs;
  int diff_mode;
  int fullscreen;
  int coverage_built;
  void *backdrop_buf;
  char *coverage_map;
  _FILE *file;
  CKeyFramedModel *kfm_model;
  CKeyFramedModel *ptr;
  char kfm_path [64];
  char status_text [256];
  char *dot;
  float prev_px;
  float prev_py;
  float prev_pz;
  float prev_ox;
  float prev_oy;
  float prev_oz;
  float prev_rate;
  int byte_r;
  int byte_g;
  int byte_b;
  int i;
  int x;
  int y;
  int row;
  int count;
  uint key;
  int level;
  uint packed;
  int cur_brightness;
  int prev_brightness;
  byte *src;
  uint *px;
  uint colorTable [256];
  int brightnessTable [256];
  int visibleCameras [254];
  char acStack_f0 [92];
  CPickList CStack_574;

  result = 0;
  strobe_enable = 0;
  strobe_blink = 0;
  show_pvs = 0;
  diff_mode = 0;
  fullscreen = 0;
  coverage_built = 0;
  backdrop_buf = (void *)0x0;
  file = (_FILE *)0x0;
  kfm_model = (CKeyFramedModel *)0x0;

  // Build "<geometry>.KFM" from the set's geometry filename (validates the name).
  strcpy(kfm_path,this_ptr->geometry_filename);
  dot = strchr(kfm_path,'.');
  if (dot == (char *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 3131;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't find .GEO");
  }
  _sprintf(dot,".KFM");

  core_slew_cpp_CSlew_init_FUN_005a2060(g_CSlewPtr);
  g_CSlewPtr->position = this_ptr->cameras[camera_index].position;
  g_CSlewPtr->orientation.vec = this_ptr->cameras[camera_index].orientation;
  g_CSlewPtr->slew_rate = this_ptr->cameras[camera_index].projection_scale;

  // Load the camera's "<name>.raw" backdrop image and its "<name>.act" palette.
  _sprintf(acStack_f0,"%s.raw",this_ptr->cameras[camera_index].name);
  file = engine_dosio_cpp_getFile_FUN_00481a50("backdrop",acStack_f0,"rb");
  if (file != (_FILE *)0x0) {
    backdrop_buf = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                             (0x4b000,"..\\core\\setedit.cpp",3172);
    if (backdrop_buf != (void *)0x0) {
      _fread(backdrop_buf,0x280,0x1e0,file);
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\setedit.cpp",3176);
    _sprintf(acStack_f0,"%s.act",this_ptr->cameras[camera_index].name);
    file = engine_dosio_cpp_getFile_FUN_00481a50("backdrop",acStack_f0,"rb");
    if (file != (_FILE *)0x0) {
      for (i = 0; i < 256; i = i + 1) {
        byte_r = _fgetc(file);
        byte_g = _fgetc(file);
        byte_b = _fgetc(file);
        if (g_BitsPerPixel == 0x20) {
          colorTable[i] = byte_r << (g_RedBitPosition.bytes[0] & 0x1f) |
                          byte_g << (g_GreenBitPosition.bytes[0] & 0x1f) |
                          byte_b << (g_BlueBitPosition.bytes[0] & 0x1f);
        }
        else {
          colorTable[i] = byte_r << 0x10 | byte_g << 8 | byte_b;
        }
        brightnessTable[i] = byte_b / 3 + byte_r + byte_g;
      }
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\setedit.cpp",3187);
    }
  }
  engine_special_cpp_clearScreen_FUN_005b3e70();
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  coverage_map = (char *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                         (g_WindowWidth * g_WindowHeight,"..\\core\\setedit.cpp",3201);
  if (coverage_map == (char *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 3202;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  core_dcamera_cpp_CDemonCamera_init_FUN_0044c190(&g_CDemonCameraInstance,0x1e0);
  do {
    (*g_CKeysPtr->vtable->clearKeyPresses)(g_CKeysPtr);
    strobe_blink = (uint)(strobe_blink == 0);
    if ((backdrop_buf == (void *)0x0) ||
       (((strobe_enable == 0 || (strobe_blink == 0)) &&
        ((*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_O) == 0)))) {
      // ---- Render the live 3D view from the slew camera ----
      prev_px = (g_CSlewPtr->position).x;
      prev_py = (g_CSlewPtr->position).y;
      prev_pz = (g_CSlewPtr->position).z;
      prev_ox = g_CSlewPtr->orientation.vec.x;
      prev_oy = g_CSlewPtr->orientation.vec.y;
      prev_oz = g_CSlewPtr->orientation.vec.z;
      prev_rate = g_CSlewPtr->slew_rate;
      core_slew_cpp_CSlew_processInput_FUN_005a20b0(g_CSlewPtr);
      g_CDemonCameraInstance.base.position.f = g_CSlewPtr->position;
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                (&g_CDemonCameraInstance.base.rotation_matrix,&g_CSlewPtr->orientation.vec);
      g_CDemonCameraInstance.base.focal_length = g_CSlewPtr->slew_rate;
      core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,0);
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr2,&g_ZeroVector.f);
      if (show_pvs == 0) {
        g_CDemonRaytraceInstance.rendering_mode = 1;
      }
      else {
        g_CDemonRaytraceInstance.rendering_mode = 4;
      }
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(this_ptr,9999.9,0);
      core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
      if ((*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_SPACE) != 0) {
        // SPACE: store the slew transform back into the camera and finish.
        this_ptr->cameras[camera_index].position = g_CSlewPtr->position;
        this_ptr->cameras[camera_index].orientation = g_CSlewPtr->orientation.vec;
        this_ptr->cameras[camera_index].projection_scale = g_CSlewPtr->slew_rate;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  (&this_ptr->cameras[camera_index].rotation_matrix,&g_CSlewPtr->orientation.vec);
        this_ptr->cameras[camera_index].box.min.x =
                  this_ptr->cameras[camera_index].position.x + -500.0f;
        this_ptr->cameras[camera_index].box.min.y =
                  this_ptr->cameras[camera_index].position.y + -500.0f;
        this_ptr->cameras[camera_index].box.min.z =
                  this_ptr->cameras[camera_index].position.z + -500.0f;
        this_ptr->cameras[camera_index].box.max.x =
                  this_ptr->cameras[camera_index].position.x + 500.0f;
        this_ptr->cameras[camera_index].box.max.y =
                  this_ptr->cameras[camera_index].position.y + 500.0f;
        this_ptr->cameras[camera_index].box.max.z =
                  this_ptr->cameras[camera_index].position.z + 500.0f;
        core_setedit_cpp_CDemonSet_renderCameraBackdrop_FUN_0057d340
                  (this_ptr,this_ptr->cameras + camera_index);
        result = 1;
        goto cleanup;
      }
      // If the slew camera moved this frame, invalidate the cached coverage map.
      if (((((prev_px != (g_CSlewPtr->position).x) || (prev_py != (g_CSlewPtr->position).y)) ||
           ((prev_pz != (g_CSlewPtr->position).z ||
            ((prev_ox != g_CSlewPtr->orientation.vec.x ||
             (prev_oy != g_CSlewPtr->orientation.vec.y)))))) ||
          (prev_oz != g_CSlewPtr->orientation.vec.z)) || (prev_rate != g_CSlewPtr->slew_rate)) {
        coverage_built = 0;
      }
      if (show_pvs != 0) {
        if (coverage_built == 0) {
          core_setedit_cpp_CDemonSet_buildCameraCoverageMap_FUN_0057fd00
                    (this_ptr,coverage_map,camera_index);
          coverage_built = 1;
        }
        core_setedit_cpp_CDemonSet_drawCameraCoverageMap_FUN_0057ff70(this_ptr,coverage_map);
        count = core_setedit_cpp_CDemonSet_findVisibleCamerasAtScreenPoint_FUN_005800d0
                           (this_ptr,g_MouseX,g_MouseY,visibleCameras,camera_index);
        if (0 < count) {
          y = 0x21;
          for (i = 0; i < count; i = i + 1) {
            engine_2d_c_drawTextXY_FUN_00402130
                      (0,y,this_ptr->cameras[visibleCameras[i]].name);
            y = y + 0xb;
          }
        }
        shape_edittool_cpp_CEditorTools_drawMousePointer_FUN_004a1380(g_CEditorToolsPtr,0);
      }
      engine_2d_c_drawText_FUN_00401fd0
                ("Move camera with slew keys.  Press SPACE when done.  ESC to cancel",0,0);
      _sprintf(status_text,"%f",
               (double)(1.0f / g_CGamePtr->delta_time_float));
      engine_2d_c_drawText_FUN_00401fd0
                (status_text,0,g_WindowHeight + -0xb);
      if (this_ptr->cameras[camera_index].is_panning == 0) {
        _sprintf(status_text,
                 "FIXED CAMERA: x: %f, y: %f, z: %f, p : %f, h : %f, fov : %f",
                 (double)(g_CSlewPtr->position).x,(double)(g_CSlewPtr->position).y,
                 (double)(g_CSlewPtr->position).z,
                 (double)g_CSlewPtr->orientation.vec.x * 180.0 * 0.31830988619288902,
                 (double)g_CSlewPtr->orientation.vec.y * 180.0 * 0.31830988619288902,
                 (double)g_CSlewPtr->slew_rate);
      }
      else {
        _sprintf(status_text,
                 "PANNING CAMERA: x: %f, y: %f, z: %f",
                 (double)(g_CSlewPtr->position).x,(double)(g_CSlewPtr->position).y,
                 (double)(g_CSlewPtr->position).z);
      }
      engine_2d_c_drawText_FUN_00401fd0(status_text,0,0xb);
    }
    else {
      // ---- "Hold O" / strobe: blit the original backdrop image instead ----
      if ((g_WindowWidth != 0x280) || (g_WindowHeight != 0x1e0)) {
        g_CurrentFilename = "..\\core\\setedit.cpp";
        g_CurrentLineNumber = 3218;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Screen must be 640x480!");
      }
      src = (byte *)backdrop_buf;
      for (row = 0; row < 0x1e0; row = row + 1) {
        px = (uint *)g_ScreenBufferArray[row];
        prev_brightness = 0;
        for (x = 0; x < 0x280; x = x + 1) {
          if (diff_mode == 0) {
            *px = colorTable[*src];
          }
          else {
            cur_brightness = brightnessTable[*src];
            level = (cur_brightness - prev_brightness) / 2 + 0x80;
            if (level < 0) {
              level = 0;
            }
            else if (0xff < level) {
              level = 0xff;
            }
            if (g_BitsPerPixel == 0x20) {
              packed = level << (g_RedBitPosition.bytes[0] & 0x1f) |
                       level << (g_GreenBitPosition.bytes[0] & 0x1f) |
                       level << (g_BlueBitPosition.bytes[0] & 0x1f);
            }
            else {
              packed = level << 0x10 | level << 8 | level;
            }
            *px = packed;
            prev_brightness = cur_brightness;
          }
          src = src + 1;
          px = px + 1;
        }
      }
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDT_FUN_004d7d90(g_CGamePtr);
    if ((*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE) != 0) goto cleanup;
    if ((*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F1) != 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_574);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&CStack_574.base,"W\tToggle full screen mode");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_574.base,"S\tToggle strobe mode");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&CStack_574.base,"O\tHold to show original background");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&CStack_574.base,"F\tEnter fov value manually");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&CStack_574.base,"D\tToggle original background 'difference' mode");
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                (&CStack_574,"Camera editor hot keys",-1,0);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&CStack_574,0);
    }
    while (wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00() != 0) {
      key = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
      if (key == 'C') {
        show_pvs = (uint)(show_pvs == 0);
      }
      else if (key == 'D') {
        diff_mode = (uint)(diff_mode == 0);
      }
      else if (key == 'F') {
        if (this_ptr->cameras[camera_index].is_panning == 0) {
          shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                    (g_CEditorToolsPtr,"Enter FOV",&g_CSlewPtr->slew_rate,0,0.0,0.0,1);
        }
        else {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Can't set FOV on panning camera");
        }
      }
      else if (key == 'S') {
        strobe_enable = (uint)(strobe_enable == 0);
      }
      else if (key == 'W') {
        fullscreen = (uint)(fullscreen == 0);
        core_dcamera_cpp_CDemonCamera_init_FUN_0044c190
                  (&g_CDemonCameraInstance,fullscreen == 0 ? 0x1e0 : 0xf0);
        engine_special_cpp_clearScreen_FUN_005b3e70();
      }
    }
  } while( true );
cleanup:
  g_CurrentDebugFilename = "..\\core\\setedit.cpp";
  g_CurrentDebugLine = 0xd78;
  shape_memdbg_cpp_free_FUN_005fe659(coverage_map);
  core_slew_cpp_CSlew_free_FUN_005a20a0(g_CSlewPtr);
  g_CurrentDebugLine = 0xd80;
  g_CurrentDebugFilename = "..\\core\\setedit.cpp";
  if (kfm_model != (CKeyFramedModel *)0x0) {
    ptr = core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00476d90(kfm_model,0);
    shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  engine_2d_c_setupViewportAndClipping_FUN_00401800(0,0,g_WindowWidth + -1,g_WindowHeight + -1);
  if (backdrop_buf != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(backdrop_buf,"..\\core\\setedit.cpp",3468);
  }
  return result;
}
