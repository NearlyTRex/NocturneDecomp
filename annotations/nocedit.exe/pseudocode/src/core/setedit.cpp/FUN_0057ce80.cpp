// Name: core_setedit.cpp_FUN_0057ce80
// Address: 0057ce80
// Address Range: [[0057ce80, 0057d335]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_FUN_0057ce80(void)

#include "nocturne.h"

void __cdecl core_setedit_cpp_FUN_0057ce80(void)

{
  void *pvVar1;
  int iVar2;
  uint character;
  void *pvVar3;
  uint *puVar4;
  int iVar5;
  CVector3i *in_stack_00000004;
  CVector3f *in_stack_00000008;
  uint in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  float in_stack_00000020;
  CVector3f *in_stack_ffffd990;
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
  
  local_20 = (void *)0x0;
  local_24 = g_WindowWidth;
  local_28 = g_WindowHeight;
  local_1c = (void *)0x0;
  if ((g_WindowWidth <= in_stack_00000018) || (g_WindowHeight <= in_stack_0000001c)) {
    iVar5 = (in_stack_0000001c + 3) * in_stack_00000018 * 4;
    pvVar1 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(iVar5,"..\\core\\setedit.cpp",0xbac);
    local_1c = pvVar1;
    local_20 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(iVar5,"..\\core\\setedit.cpp",0xbad);
    if ((pvVar1 == (void *)0x0) || (local_20 == (void *)0x0)) {
      g_CurrentFilename = "..\\core\\setedit.cpp";
      g_CurrentLineNumber = 0xbaf;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
    }
    if (0 < in_stack_0000001c) {
      iVar5 = 0;
      pvVar1 = local_20;
      pvVar3 = local_1c;
      do {
        iVar2 = iVar5 + 4;
        *(uint *)(&stack0xffffd990 + iVar5) =
             *(uint *)((int)g_ScreenBufferArray + iVar5);
        *(void **)((int)g_ScreenBufferArray + iVar5) = pvVar3;
        pvVar3 = (void *)((int)pvVar3 + in_stack_00000018 * 4);
        *(uint *)((int)auStack_13b0 + iVar5) =
             *(uint *)((int)g_ZBufferScanlineArray + iVar5);
        *(void **)((int)g_ZBufferScanlineArray + iVar5) = pvVar1;
        pvVar1 = (void *)((int)pvVar1 + in_stack_00000018 * 4);
        iVar5 = iVar2;
      } while (iVar2 < in_stack_0000001c * 4);
    }
    g_WindowWidth = in_stack_00000018;
    g_WindowHeight = in_stack_0000001c;
  }
  engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
            (g_CDemonRendererPtr2,0,0,in_stack_00000018 + -1,in_stack_0000001c + -1);
  g_CDemonRaytraceInstance.rendering_mode = 1;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_50,in_stack_00000008);
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
            (g_CDemonRendererPtr2,in_stack_00000004);
  engine_drender_cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0048c670
            (g_CDemonRendererPtr2,in_stack_00000020);
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
            (g_CDemonRendererPtr2,&local_50,in_stack_ffffd990);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
  core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(g_CDemonSetPtr,9999.9,0);
  _sprintf(local_f0,"%s.raw",in_stack_0000000c);
  local_14 = engine_dosio_c_getFile_FUN_00481a50("backdrop",local_f0,"wb");
  if (local_14 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0xbd9;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to write backdrop");
  }
  iVar5 = 0;
  if (0 < in_stack_00000014) {
    local_18 = 0;
    do {
      iVar2 = 0;
      puVar4 = *(uint **)((int)g_ScreenBufferArray + local_18);
      if (0 < in_stack_00000010) {
        do {
          if ((iVar2 < in_stack_00000018) && (iVar5 < in_stack_0000001c)) {
            character = (uint)g_ColorCubeLookup
                              [((*puVar4 >> ((byte)g_BlueBitPosition & 0x1f) & 0xff) >> 3) +
                               ((*puVar4 >> ((byte)g_GreenBitPosition & 0x1f) & 0xff) >> 3) * 0x20 +
                               ((*puVar4 >> ((byte)g_RedBitPosition & 0x1f) & 0xff) >> 3) * 0x400];
          }
          else {
            character = 0;
          }
          _fputc(character,local_14);
          iVar2 = iVar2 + 1;
          puVar4 = puVar4 + 1;
        } while (iVar2 < in_stack_00000010);
      }
      local_18 = local_18 + 4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < in_stack_00000014);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_14,"..\\core\\setedit.cpp",0xbeb);
  _sprintf(local_a0,"%s.act",in_stack_0000000c);
  local_14 = engine_dosio_c_getFile_FUN_00481a50("backdrop",local_a0,"wb");
  if (local_14 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0xbef;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to write act");
  }
  _fwrite(g_SourcePaletteData,0x100,3,local_14);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_14,"..\\core\\setedit.cpp",0xbf1);
  engine_drender_cpp_CDemonRenderer_popViewport_FUN_0050e480(g_CDemonRendererPtr2);
  if (local_1c != (void *)0x0) {
    if (0 < in_stack_0000001c) {
      iVar5 = 0;
      do {
        iVar2 = iVar5 + 4;
        *(uint *)((int)g_ScreenBufferArray + iVar5) =
             *(uint *)(&stack0xffffd990 + iVar5);
        *(uint *)((int)g_ZBufferScanlineArray + iVar5) =
             *(uint *)((int)auStack_13b0 + iVar5);
        iVar5 = iVar2;
      } while (iVar2 < in_stack_0000001c * 4);
    }
    shape_memdbg_cpp_debugFree_FUN_0050f460(local_1c,"..\\core\\setedit.cpp",0xbfc);
    shape_memdbg_cpp_debugFree_FUN_0050f460(local_20,"..\\core\\setedit.cpp",0xbfd);
    g_WindowWidth = local_24;
    g_WindowHeight = local_28;
  }
  return;
}
