// Name: core_setedit.cpp_renderBackdropImage_FUN_0057ce80
// Address: 0057ce80
// Address Range: [[0057ce80, 0057d335]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_renderBackdropImage_FUN_0057ce80(CVector3i *position,CVector3f *orientation,char *name,int output_width,int output_height,int render_width,int render_height,float projection_scale)

#include "nocturne.h"

void __cdecl core_setedit_cpp_renderBackdropImage_FUN_0057ce80(CVector3i *position,CVector3f *orientation,char *name,int output_width,int output_height,int render_width,int render_height,float projection_scale)

{
  int iVar1;
  void *pvVar1;
  int iVar2;
  _FILE *p_Var2;
  uint character;
  void *pvVar4;
  void *pvVar3;
  uint *puVar4;
  int iVar6;
  int iVar5;
  int iVar7;
  uint auStack_266c [1199];
  uint auStack_13b0 [1200];
  char local_f0 [80];
  char local_a0 [80];
  CMatrix3x3f local_50;
  int local_28;
  int local_24;
  void *local_20;
  void *local_1c;
  int local_18;
  _FILE *local_14;
  
  iVar1 = g_WindowWidth;
  local_20 = (void *)0x0;
  local_1c = (void *)0x0;
  if ((g_WindowWidth <= render_width) || (g_WindowHeight <= render_height)) {
    iVar5 = (render_height + 3) * render_width * 4;
    pvVar1 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(iVar5,"..\\core\\setedit.cpp",0xbac);
    local_20 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(iVar5,"..\\core\\setedit.cpp",0xbad);
    if ((pvVar1 == (void *)0x0) || (local_20 == (void *)0x0)) {
      g_CurrentFilename = "..\\core\\setedit.cpp";
      g_CurrentLineNumber = 0xbaf;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
    }
    if (0 < render_height) {
      iVar2 = 0;
      pvVar4 = local_20;
      pvVar3 = pvVar1;
      do {
        iVar2 = iVar2 + 4;
        *(uint *)((int)auStack_266c + iVar2 + -4) =
             *(uint *)((int)g_ScreenBufferArray + iVar2);
        *(void **)((int)g_ScreenBufferArray + iVar2) = pvVar3;
        pvVar3 = (void *)((int)pvVar3 + render_width * 4);
        *(uint *)((int)auStack_13b0 + iVar2) =
             *(uint *)((int)g_ZBufferScanlineArray + iVar2);
        *(void **)((int)g_ZBufferScanlineArray + iVar2) = pvVar4;
        pvVar4 = (void *)((int)pvVar4 + render_width * 4);
        iVar2 = iVar2;
      } while (iVar2 < render_height * 4);
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
            (g_CDemonRendererPtr2,position);
  engine_drender_cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0048c670
            (g_CDemonRendererPtr2,projection_scale);
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
            (g_CDemonRendererPtr2,&local_50);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  wincore_windll_cpp_clearZBufferNative_FUN_005b3ed4();
  core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(g_CDemonSetPtr,9999.9,0);
  _sprintf(local_f0,"%s.raw",name);
  p_Var2 = engine_dosio_c_getFile_FUN_00481a50("backdrop",local_f0,"wb");
  if (p_Var2 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0xbd9;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to write backdrop");
  }
  iVar6 = 0;
  if (0 < output_height) {
    local_18 = 0;
    do {
      iVar7 = 0;
      puVar4 = *(uint **)((int)g_ScreenBufferArray + local_18);
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
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var2,"..\\core\\setedit.cpp",0xbeb);
  _sprintf(local_a0,"%s.act",name);
  p_Var2 = engine_dosio_c_getFile_FUN_00481a50("backdrop",local_a0,"wb");
  if (p_Var2 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0xbef;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to write act");
  }
  _fwrite(g_SourcePaletteData,0x100,3,p_Var2);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var2,"..\\core\\setedit.cpp",0xbf1);
  engine_drender_cpp_CDemonRenderer_popViewport_FUN_0048c8c0(g_CDemonRendererPtr2);
  if (local_18 != 0) {
    if (0 < (int)projection_scale) {
      iVar6 = 0;
      do {
        iVar7 = iVar6 + 4;
        *(uint *)((int)g_ScreenBufferArray + iVar6) =
             *(uint *)((int)auStack_266c + iVar6);
        *(uint *)((int)g_ZBufferScanlineArray + iVar6) =
             *(uint *)((int)auStack_13b0 + iVar6 + 4);
        iVar6 = iVar7;
      } while (iVar7 < (int)projection_scale * 4);
    }
    shape_memdbg_cpp_debugFree_FUN_0050f460((void *)local_18,"..\\core\\setedit.cpp",0xbfc);
    shape_memdbg_cpp_debugFree_FUN_0050f460(local_1c,"..\\core\\setedit.cpp",0xbfd);
    g_WindowWidth = (int)local_20;
    g_WindowHeight = iVar1;
  }
  return;
}
