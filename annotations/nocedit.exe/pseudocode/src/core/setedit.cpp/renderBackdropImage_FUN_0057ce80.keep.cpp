// Name: core_setedit.cpp_renderBackdropImage_FUN_0057ce80
// Address: 0057ce80
// MANUAL RECONSTRUCTION
// Address Range: [[0057ce80, 0057d335]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_renderBackdropImage_FUN_0057ce80(CVector3i *position,CVector3f *orientation,char *name,int output_width,int output_height,int render_width,int render_height,float projection_scale)

#include "nocturne.h"

void __cdecl core_setedit_cpp_renderBackdropImage_FUN_0057ce80(CVector3i *position,CVector3f *orientation,char *name,int output_width,int output_height,int render_width,int render_height,float projection_scale)

{
  void *pvVar1;
  int iVar2;
  _FILE *p_Var2;
  uint character;
  uint *puVar4;
  int iVar6;
  int iVar5;
  int iVar7;
  void *auStack_266c [1200];
  uint *auStack_13b0 [1200];
  char local_f0 [80];
  char local_a0 [80];
  CMatrix3x3f local_50;
  int local_28;
  int local_24;
  void *local_20;
  void *local_1c;
  int local_18;

  local_24 = g_WindowWidth;
  local_28 = g_WindowHeight;
  local_20 = (void *)0x0;
  local_1c = (void *)0x0;
  if ((g_WindowWidth <= render_width) || (g_WindowHeight <= render_height)) {
    iVar5 = (render_height + 3) * render_width * 4;
    pvVar1 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(iVar5,"..\\core\\setedit.cpp",2988);
    local_20 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(iVar5,"..\\core\\setedit.cpp",2989);
    if ((pvVar1 == (void *)0x0) || (local_20 == (void *)0x0)) {
      g_CurrentFilename = "..\\core\\setedit.cpp";
      g_CurrentLineNumber = 2991;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
    }
    for (iVar2 = 0; iVar2 < render_height; iVar2++) {
      auStack_266c[iVar2] = g_ScreenBufferArray[iVar2];
      g_ScreenBufferArray[iVar2] = (char *)pvVar1 + iVar2 * render_width * 4;
      auStack_13b0[iVar2] = g_ZBufferScanlineArray[iVar2];
      g_ZBufferScanlineArray[iVar2] = (uint *)((char *)local_20 + iVar2 * render_width * 4);
    }
    g_WindowWidth = render_width;
    g_WindowHeight = render_height;
    local_1c = pvVar1;
  }
  engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
            (g_CDemonRendererPtr2,0,0,render_width + -1,render_height + -1);
  g_CDemonRaytraceInstance.rendering_mode = 1;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_50,orientation);
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
            (g_CDemonRendererPtr2,(CVector3f *)position);
  engine_drender_cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0048c670
            (g_CDemonRendererPtr2,projection_scale);
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
            (g_CDemonRendererPtr2,&local_50);
  engine_special_cpp_clearScreen_FUN_005b3e70();
  engine_special_cpp_clearZBufferNative_FUN_005b3ed4();
  core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(g_CDemonSetPtr,9999.9,0);
  _sprintf(local_f0,"%s.raw",name);
  p_Var2 = engine_dosio_cpp_getFile_FUN_00481a50("backdrop",local_f0,"wb");
  if (p_Var2 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 3033;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to write backdrop");
  }
  iVar6 = 0;
  if (0 < output_height) {
    local_18 = 0;
    do {
      iVar7 = 0;
      puVar4 = (uint *)g_ScreenBufferArray[local_18 / 4];
      if (0 < output_width) {
        do {
          if ((iVar7 < render_width) && (iVar6 < render_height)) {
            character = (uint)g_ColorCubeLookup
                              [((*puVar4 >> (g_BlueBitPosition.bytes[0] & 0x1f) & 0xff) >> 3) +
                               ((*puVar4 >> (g_GreenBitPosition.bytes[0] & 0x1f) & 0xff) >> 3) *
                               0x20 + ((*puVar4 >> (g_RedBitPosition.bytes[0] & 0x1f) & 0xff) >> 3)
                                      * 0x400];
          }
          else {
            character = 0;
          }
          _fputc(character,p_Var2);
          iVar7 = iVar7 + 1;
          puVar4 = puVar4 + 1;
        } while (iVar7 < output_width);
      }
      local_18 = local_18 + 4;
      iVar6 = iVar6 + 1;
    } while (iVar6 < output_height);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var2,"..\\core\\setedit.cpp",3051);
  _sprintf(local_a0,"%s.act",name);
  p_Var2 = engine_dosio_cpp_getFile_FUN_00481a50("backdrop",local_a0,"wb");
  if (p_Var2 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 3055;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to write act");
  }
  _fwrite(g_SourcePaletteData,0x100,3,p_Var2);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var2,"..\\core\\setedit.cpp",3057);
  engine_drender_cpp_CDemonRenderer_popViewport_FUN_0048c8c0(g_CDemonRendererPtr2);
  if (local_1c != (void *)0x0) {
    for (iVar6 = 0; iVar6 < render_height; iVar6++) {
      g_ScreenBufferArray[iVar6] = auStack_266c[iVar6];
      g_ZBufferScanlineArray[iVar6] = auStack_13b0[iVar6];
    }
    shape_memdbg_cpp_debugFree_FUN_0050f460(local_1c,"..\\core\\setedit.cpp",3068);
    shape_memdbg_cpp_debugFree_FUN_0050f460(local_20,"..\\core\\setedit.cpp",3069);
    g_WindowWidth = local_24;
    g_WindowHeight = local_28;
  }
  return;
}
