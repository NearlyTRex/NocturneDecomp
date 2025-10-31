// Name: core_setedit.cpp_WriteActBackdrop_FUN_0057ce80
// Address: 0057ce80
// Address Range: [[0057ce80, 0057d335]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_WriteActBackdrop_FUN_0057ce80()
// Cross-references:
//   core_setedit.cpp_FUN_0057d340 (0057d340) at 0057d4a0 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_setedit_cpp_00647cb5
//   TerminatedCString s_core_setedit_cpp_00647cc9
//   TerminatedCString s_core_setedit_cpp_00647cdd
//   TerminatedCString s_Out_of_memory_00647cf1
//   TerminatedCString s_s_raw_00647cff
//   TerminatedCString s_wb_00647d06
//   TerminatedCString s_backdrop_00647d09
//   TerminatedCString s_core_setedit_cpp_00647d12
//   TerminatedCString s_Unable_to_write_backdrop_00647d26
//   TerminatedCString s_core_setedit_cpp_00647d3f
//   TerminatedCString s_s_act_00647d53
//   TerminatedCString s_wb_00647d5a
//   TerminatedCString s_backdrop_00647d5d
//   TerminatedCString s_core_setedit_cpp_00647d66
//   TerminatedCString s_Unable_to_write_act_00647d7a
//   TerminatedCString s_core_setedit_cpp_00647d8e
//   TerminatedCString s_core_setedit_cpp_00647da2
//   TerminatedCString s_core_setedit_cpp_00647db6
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonRenderer g_CDemonRendererInstance
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   uint*[1024] g_ZBufferScanlineArray
//   undefined4 g_ZBufferScanlineArray[1]
//   uchar[32768] g_ColorCubeLookup
//   int g_RedBitPosition
//   int g_GreenBitPosition
//   int g_BlueBitPosition
//   char[768] g_SourcePaletteData
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonSet g_CDemonSetInstance
//   CDemonRaytrace g_CDemonRaytraceInstance
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
//   crt_stdio.c_fputc_FUN_006007a0
//   crt_stdio.c_fwrite_FUN_005fdc00
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_dosio.c_getFile_FUN_00481a50
//   engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480
//   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890
//   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
//   engine_drender.cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0048c670
//   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugFree_FUN_0050f460
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_windll.cpp_clearZBuffer_FUN_005b3ed4

#include "nocturne.h"

/* Signature: undefined1 core_setedit.cpp_WriteActBackdrop(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4
   param_7, undefined4 param_8) */

void core_setedit_cpp_WriteActBackdrop_FUN_0057ce80(void)

{
  void *pvVar1;
  int iVar2;
  FILE *pFVar3;
  uint character;
  uint *puVar4;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iVar5;
  CVector3f *in_stack_00000018;
  int in_stack_0000001c;
  int iStack00000020;
  FILE *in_stack_00000024;
  int in_stack_00000028;
  FILE *in_stack_00000034;
  FILE *in_stack_00000038;
  int in_stack_00000048;
  int in_stack_0000004c;
  int in_stack_00000050;
  int in_stack_00000054;
  int in_stack_00000070;
  CVector3f *in_stack_ffffd9ac;
  undefined4 auStack_13a4 [18];
  undefined4 auStack_135c [1190];
  char acStack_c4 [4];
  char acStack_c0 [92];
  char acStack_64 [4];
  char acStack_60 [32];
  undefined1 auStack_40 [24];
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  void *local_18;
  int local_14;
  
  local_20 = 0.0;
  local_24 = (float)g_WindowWidth;
  local_28 = (float)g_WindowHeight;
  local_1c = 0;
  if ((g_WindowWidth <= (int)in_stack_00000018) || (g_WindowHeight <= in_stack_0000001c)) {
    iVar5 = (in_stack_0000001c + 3) * (int)in_stack_00000018 * 4;
    pvVar1 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(iVar5,"..\\core\\setedit.cpp",0xbac);
    local_18 = pvVar1;
    local_18 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(iVar5,"..\\core\\setedit.cpp",0xbad);
    if ((pvVar1 == (void *)0x0) || (local_18 == (void *)0x0)) {
      g_CurrentFilename = "..\\core\\setedit.cpp";
      g_CurrentLineNumber = 0xbaf;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
    }
    if (0 < in_stack_00000028) {
      iVar5 = 0;
      do {
        iVar2 = iVar5 + 4;
        *(undefined4 *)(&stack0xffffd99c + iVar5) =
             *(undefined4 *)((int)g_ScreenBufferArray + iVar5);
        *(int *)((int)g_ScreenBufferArray + iVar5) = unaff_EBP;
        unaff_EBP = unaff_EBP + (int)in_stack_00000024 * 4;
        *(undefined4 *)((int)auStack_13a4 + iVar5) =
             *(undefined4 *)((int)g_ZBufferScanlineArray + iVar5);
        *(int *)((int)g_ZBufferScanlineArray + iVar5) = local_14;
        local_14 = local_14 + (int)in_stack_00000024 * 4;
        iVar5 = iVar2;
      } while (iVar2 < in_stack_00000028 * 4);
    }
    g_WindowWidth = (int)in_stack_00000024;
    g_WindowHeight = in_stack_00000028;
  }
  engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
            (g_CDemonRendererPtr,0,0,(int)((int)in_stack_00000024 + -1),in_stack_00000028 + -1);
  g_CDemonRaytraceInstance.rendering_mode = 1;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)auStack_40,in_stack_00000018);
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
            (g_CDemonRendererPtr,(CVector3i *)in_stack_00000018);
  engine_drender_cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0048c670
            (g_CDemonRendererPtr,(float)in_stack_00000038);
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
            (g_CDemonRendererPtr,(CMatrix3x3f *)(auStack_40 + 0xc),in_stack_ffffd9ac);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
  core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(g_CDemonSetPtr,9999.9,0);
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_c4,"%s.raw");
  pFVar3 = engine_dosio_c_getFile_FUN_00481a50("backdrop",acStack_c0,"wb");
  if (pFVar3 == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0xbd9;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to write backdrop");
  }
  iVar5 = 0;
  if (0 < in_stack_0000004c) {
    iStack00000020 = 0;
    do {
      iVar2 = 0;
      puVar4 = *(uint **)((int)g_ScreenBufferArray + iStack00000020);
      if (0 < in_stack_00000048) {
        do {
          if ((iVar2 < in_stack_00000050) && (iVar5 < in_stack_00000054)) {
            character = (uint)g_ColorCubeLookup
                              [((*puVar4 >> ((byte)g_BlueBitPosition & 0x1f) & 0xff) >> 3) +
                               ((*puVar4 >> ((byte)g_GreenBitPosition & 0x1f) & 0xff) >> 3) * 0x20 +
                               ((*puVar4 >> ((byte)g_RedBitPosition & 0x1f) & 0xff) >> 3) * 0x400];
          }
          else {
            character = 0;
          }
          crt_stdio_c_fputc_FUN_006007a0(character,in_stack_00000024);
          iVar2 = iVar2 + 1;
          puVar4 = puVar4 + 1;
        } while (iVar2 < in_stack_00000048);
      }
      iStack00000020 = iStack00000020 + 4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < in_stack_0000004c);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_00000024,"..\\core\\setedit.cpp",0xbeb);
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_64,"%s.act");
  pFVar3 = engine_dosio_c_getFile_FUN_00481a50("backdrop",acStack_60,"wb");
  if (pFVar3 == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0xbef;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to write act");
  }
  crt_stdio_c_fwrite_FUN_005fdc00(g_SourcePaletteData,0x100,3,in_stack_00000034);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_00000038,"..\\core\\setedit.cpp",0xbf1);
  engine_drender_cpp_CDemonRenderer_popViewport_FUN_0050e480(g_CDemonRendererPtr);
  if (in_stack_00000038 != (FILE *)0x0) {
    if (0 < in_stack_00000070) {
      iVar5 = 0;
      do {
        iVar2 = iVar5 + 4;
        *(undefined4 *)((int)g_ScreenBufferArray + iVar5) =
             *(undefined4 *)(&stack0xffffd9e4 + iVar5);
        *(undefined4 *)((int)g_ZBufferScanlineArray + iVar5) =
             *(undefined4 *)((int)auStack_135c + iVar5);
        iVar5 = iVar2;
      } while (SBORROW4(iVar2,in_stack_00000070 * 4) != iVar2 + in_stack_00000070 * -4 < 0);
    }
    shape_memdbg_cpp_debugFree_FUN_0050f460(in_stack_00000038,"..\\core\\setedit.cpp",0xbfc);
    shape_memdbg_cpp_debugFree_FUN_0050f460(in_stack_00000038,"..\\core\\setedit.cpp",0xbfd);
    g_WindowWidth = (int)in_stack_00000038;
    g_WindowHeight = (int)in_stack_00000034;
  }
  return;
}


// Assembly code:
// 0057ce80: PUSH EBX
//   Label: core_setedit.cpp_WriteActBackdrop_FUN_0057ce80
// 0057ce81: PUSH ESI
// 0057ce82: PUSH EDI
// 0057ce83: PUSH EBP
// 0057ce84: SUB ESP,0x2660
// 0057ce8a: XOR EDX,EDX
// 0057ce8c: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0057ce91: MOV dword ptr [ESP + 0x2650],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0057ce98: MOV dword ptr [ESP + 0x264c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0057ce9f: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0057cea4: MOV EBX,dword ptr [ESP + 0x264c]
//   XREF to: Stack[-0x24] (READ)
// 0057ceab: MOV dword ptr [ESP + 0x2648],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0057ceb2: MOV EAX,dword ptr [ESP + 0x2688]
//   XREF to: Stack[0x18] (READ)
// 0057ceb9: MOV dword ptr [ESP + 0x2654],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0057cec0: CMP EAX,EBX
// 0057cec2: JGE 0x0057ced8
//   XREF to: 0057ced8 (CONDITIONAL_JUMP)
// 0057cec4: MOV EAX,dword ptr [ESP + 0x268c]
//   XREF to: Stack[0x1c] (READ)
// 0057cecb: CMP EAX,dword ptr [ESP + 0x2648]
//   XREF to: Stack[-0x28] (READ)
// 0057ced2: JL 0x0057cfd8
//   XREF to: 0057cfd8 (CONDITIONAL_JUMP)
// 0057ced8: MOV ESI,dword ptr [ESP + 0x268c]
//   Label: LAB_0057ced8
//   XREF to: Stack[0x1c] (READ)
// 0057cedf: MOV EDI,dword ptr [ESP + 0x2688]
//   XREF to: Stack[0x18] (READ)
// 0057cee6: ADD ESI,0x3
// 0057cee9: IMUL ESI,EDI
// 0057ceec: PUSH 0xbac
// 0057cef1: PUSH 0x647cb5
//   XREF to: 00647cb5 (DATA)
// 0057cef6: SHL ESI,0x2
// 0057cef9: PUSH ESI
// 0057cefa: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 0057ceff: ADD ESP,0xc
// 0057cf02: PUSH 0xbad
// 0057cf07: PUSH 0x647cc9
//   XREF to: 00647cc9 (DATA)
// 0057cf0c: PUSH ESI
// 0057cf0d: MOV EBX,EAX
// 0057cf0f: MOV dword ptr [ESP + 0x2660],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0057cf16: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 0057cf1b: ADD ESP,0xc
// 0057cf1e: MOV dword ptr [ESP + 0x2650],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0057cf25: TEST EBX,EBX
// 0057cf27: JNZ 0x0057d2c7
//   XREF to: 0057d2c7 (CONDITIONAL_JUMP)
// 0057cf2d: MOV EBP,0x647cdd
//   Label: LAB_0057cf2d
//   XREF to: 00647cdd (DATA)
// 0057cf32: MOV EAX,0xbaf
// 0057cf37: PUSH 0x647cf1
//   XREF to: 00647cf1 (DATA)
// 0057cf3c: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 0057cf42: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0057cf47: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0057cf4c: ADD ESP,0x4
// 0057cf4f: CMP dword ptr [ESP + 0x268c],0x0
//   Label: LAB_0057cf4f
//   XREF to: Stack[0x1c] (READ)
// 0057cf57: JLE 0x0057cfc0
//   XREF to: 0057cfc0 (CONDITIONAL_JUMP)
// 0057cf59: IMUL EAX,dword ptr [ESP + 0x2688],0x0
//   XREF to: Stack[0x18] (READ)
// 0057cf61: MOV EDI,dword ptr [ESP + 0x2688]
//   XREF to: Stack[0x18] (READ)
// 0057cf68: MOV EDX,dword ptr [ESP + 0x2654]
//   XREF to: Stack[-0x1c] (READ)
// 0057cf6f: MOV ESI,dword ptr [ESP + 0x268c]
//   XREF to: Stack[0x1c] (READ)
// 0057cf76: SHL EDI,0x2
// 0057cf79: SHL ESI,0x2
// 0057cf7c: MOV EBP,EDI
// 0057cf7e: MOV ECX,dword ptr [ESP + 0x2650]
//   XREF to: Stack[-0x20] (READ)
// 0057cf85: ADD EDX,EAX
// 0057cf87: ADD ECX,EAX
// 0057cf89: XOR EAX,EAX
// 0057cf8b: ADD EAX,0x4
//   Label: LAB_0057cf8b
// 0057cf8e: MOV EBX,dword ptr [EAX + 0x2cf6a98]
//   XREF to: 02cf6a9c (READ)
//   XREF to: 02cf6aa0 (READ)
// 0057cf94: MOV dword ptr [ESP + EAX*0x1 + -0x4],EBX
//   XREF to: Stack[-0x2670] (DATA)
// 0057cf98: MOV dword ptr [EAX + 0x2cf6a98],EDX
//   XREF to: 02cf6a9c (WRITE)
//   XREF to: 02cf6aa0 (WRITE)
// 0057cf9e: MOV EBX,dword ptr [EAX + 0x2cf7d58]
//   XREF to: 02cf7d5c (READ)
//   XREF to: 02cf7d60 (READ)
// 0057cfa4: ADD EDX,EBP
// 0057cfa6: MOV dword ptr [ESP + EAX*0x1 + 0x12bc],EBX
// 0057cfad: MOV dword ptr [EAX + 0x2cf7d58],ECX
//   XREF to: 02cf7d5c (WRITE)
//   XREF to: 02cf7d60 (WRITE)
// 0057cfb3: ADD ECX,EDI
// 0057cfb5: CMP EAX,ESI
// 0057cfb7: JL 0x0057cf8b
//   XREF to: 0057cf8b (CONDITIONAL_JUMP)
// 0057cfb9: LEA EAX,[EAX]
// 0057cfbf: NOP
// 0057cfc0: MOV EAX,dword ptr [ESP + 0x2688]
//   Label: LAB_0057cfc0
//   XREF to: Stack[0x18] (READ)
// 0057cfc7: MOV [0x00679394],EAX
//   XREF to: 00679394 (WRITE)
// 0057cfcc: MOV EAX,dword ptr [ESP + 0x268c]
//   XREF to: Stack[0x1c] (READ)
// 0057cfd3: MOV [0x00679398],EAX
//   XREF to: 00679398 (WRITE)
// 0057cfd8: MOV EAX,dword ptr [ESP + 0x268c]
//   Label: LAB_0057cfd8
//   XREF to: Stack[0x1c] (READ)
// 0057cfdf: DEC EAX
// 0057cfe0: PUSH EAX
// 0057cfe1: MOV EAX,dword ptr [ESP + 0x268c]
//   XREF to: Stack[0x18] (READ)
// 0057cfe8: DEC EAX
// 0057cfe9: PUSH EAX
// 0057cfea: PUSH 0x0
// 0057cfec: PUSH 0x0
// 0057cfee: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0057cff4: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 0057cff5: CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890
//   XREF to: 0048c890 (UNCONDITIONAL_CALL)
// 0057cffa: ADD ESP,0x14
// 0057cffd: MOV EDI,dword ptr [ESP + 0x2678]
//   XREF to: Stack[0x8] (READ)
// 0057d004: PUSH EDI
// 0057d005: LEA EAX,[ESP + 0x2624]
//   XREF to: Stack[-0x50] (DATA)
// 0057d00c: MOV ESI,0x1
// 0057d011: PUSH EAX
// 0057d012: MOV dword ptr [0x03277d14],ESI
//   XREF to: 03277d14 (WRITE)
// 0057d018: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 0057d01d: ADD ESP,0x8
// 0057d020: MOV EBP,dword ptr [ESP + 0x2674]
//   XREF to: Stack[0x4] (READ)
// 0057d027: PUSH EBP
// 0057d028: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0057d02d: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0057d02e: CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
//   XREF to: 0048c150 (UNCONDITIONAL_CALL)
// 0057d033: ADD ESP,0x8
// 0057d036: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0057d03c: PUSH dword ptr [ESP + 0x2690]
//   XREF to: Stack[0x20] (READ)
// 0057d043: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0057d044: CALL engine_drender.cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0048c670
//   XREF to: 0048c670 (UNCONDITIONAL_CALL)
// 0057d049: ADD ESP,0x8
// 0057d04c: LEA EAX,[ESP + 0x2620]
//   XREF to: Stack[-0x50] (DATA)
// 0057d053: PUSH EAX
// 0057d054: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0057d05a: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0057d05b: CALL engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
//   XREF to: 0048c200 (UNCONDITIONAL_CALL)
// 0057d060: ADD ESP,0x8
// 0057d063: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0057d068: CALL wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
//   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)
// 0057d06d: PUSH 0x0
// 0057d06f: MOV EBX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0057d075: PUSH 0x461c3f9a
// 0057d07a: PUSH EBX
//   XREF to: 03114278 (DATA)
// 0057d07b: CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
//   XREF to: 0056a190 (UNCONDITIONAL_CALL)
// 0057d080: ADD ESP,0xc
// 0057d083: MOV ESI,dword ptr [ESP + 0x267c]
//   XREF to: Stack[0xc] (READ)
// 0057d08a: PUSH ESI
// 0057d08b: PUSH 0x647cff
//   XREF to: 00647cff (DATA)
// 0057d090: LEA EAX,[ESP + 0x2588]
//   XREF to: Stack[-0xf0] (DATA)
// 0057d097: PUSH EAX
// 0057d098: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057d09d: ADD ESP,0xc
// 0057d0a0: PUSH 0x647d06
//   XREF to: 00647d06 (DATA)
// 0057d0a5: LEA EAX,[ESP + 0x2584]
//   XREF to: Stack[-0xf0] (DATA)
// 0057d0ac: PUSH EAX
// 0057d0ad: PUSH 0x647d09
//   XREF to: 00647d09 (DATA)
// 0057d0b2: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0057d0b7: ADD ESP,0xc
// 0057d0ba: MOV dword ptr [ESP + 0x265c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0057d0c1: TEST EAX,EAX
// 0057d0c3: JNZ 0x0057d0e8
//   XREF to: 0057d0e8 (CONDITIONAL_JUMP)
// 0057d0c5: MOV EDI,0x647d12
//   XREF to: 00647d12 (DATA)
// 0057d0ca: MOV EBP,0xbd9
// 0057d0cf: PUSH 0x647d26
//   XREF to: 00647d26 (DATA)
// 0057d0d4: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0057d0da: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 0057d0e0: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0057d0e5: ADD ESP,0x4
// 0057d0e8: MOV EAX,dword ptr [ESP + 0x2684]
//   Label: LAB_0057d0e8
//   XREF to: Stack[0x14] (READ)
// 0057d0ef: XOR EBP,EBP
// 0057d0f1: TEST EAX,EAX
// 0057d0f3: JLE 0x0057d162
//   XREF to: 0057d162 (CONDITIONAL_JUMP)
// 0057d0f5: MOV dword ptr [ESP + 0x2658],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 0057d0fc: MOV EBX,dword ptr [ESP + 0x2658]
//   Label: LAB_0057d0fc
//   XREF to: Stack[-0x18] (READ)
// 0057d103: MOV EAX,dword ptr [ESP + 0x2680]
//   XREF to: Stack[0x10] (READ)
// 0057d10a: XOR ESI,ESI
// 0057d10c: MOV EBX,dword ptr [EBX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 0057d112: TEST EAX,EAX
// 0057d114: JLE 0x0057d145
//   XREF to: 0057d145 (CONDITIONAL_JUMP)
// 0057d116: CMP ESI,dword ptr [ESP + 0x2688]
//   Label: LAB_0057d116
//   XREF to: Stack[0x18] (READ)
// 0057d11d: JL 0x0057d2d4
//   XREF to: 0057d2d4 (CONDITIONAL_JUMP)
// 0057d123: XOR EAX,EAX
//   Label: LAB_0057d123
// 0057d125: MOV EDI,dword ptr [ESP + 0x265c]
//   Label: LAB_0057d125
//   XREF to: Stack[-0x14] (READ)
// 0057d12c: PUSH EDI
// 0057d12d: PUSH EAX
// 0057d12e: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 0057d133: ADD ESP,0x8
// 0057d136: INC ESI
// 0057d137: MOV EAX,dword ptr [ESP + 0x2680]
//   XREF to: Stack[0x10] (READ)
// 0057d13e: ADD EBX,0x4
// 0057d141: CMP ESI,EAX
// 0057d143: JL 0x0057d116
//   XREF to: 0057d116 (CONDITIONAL_JUMP)
// 0057d145: MOV EDX,dword ptr [ESP + 0x2658]
//   Label: LAB_0057d145
//   XREF to: Stack[-0x18] (READ)
// 0057d14c: MOV ECX,dword ptr [ESP + 0x2684]
//   XREF to: Stack[0x14] (READ)
// 0057d153: ADD EDX,0x4
// 0057d156: INC EBP
// 0057d157: MOV dword ptr [ESP + 0x2658],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0057d15e: CMP EBP,ECX
// 0057d160: JL 0x0057d0fc
//   XREF to: 0057d0fc (CONDITIONAL_JUMP)
// 0057d162: PUSH 0xbeb
//   Label: LAB_0057d162
// 0057d167: PUSH 0x647d3f
//   XREF to: 00647d3f (DATA)
// 0057d16c: MOV EBX,dword ptr [ESP + 0x2664]
//   XREF to: Stack[-0x14] (READ)
// 0057d173: PUSH EBX
// 0057d174: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0057d179: ADD ESP,0xc
// 0057d17c: MOV ESI,dword ptr [ESP + 0x267c]
//   XREF to: Stack[0xc] (READ)
// 0057d183: PUSH ESI
// 0057d184: PUSH 0x647d53
//   XREF to: 00647d53 (DATA)
// 0057d189: LEA EAX,[ESP + 0x25d8]
//   XREF to: Stack[-0xa0] (DATA)
// 0057d190: PUSH EAX
// 0057d191: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057d196: ADD ESP,0xc
// 0057d199: PUSH 0x647d5a
//   XREF to: 00647d5a (DATA)
// 0057d19e: LEA EAX,[ESP + 0x25d4]
//   XREF to: Stack[-0xa0] (DATA)
// 0057d1a5: PUSH EAX
// 0057d1a6: PUSH 0x647d5d
//   XREF to: 00647d5d (DATA)
// 0057d1ab: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0057d1b0: ADD ESP,0xc
// 0057d1b3: MOV dword ptr [ESP + 0x265c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0057d1ba: TEST EAX,EAX
// 0057d1bc: JNZ 0x0057d1e1
//   XREF to: 0057d1e1 (CONDITIONAL_JUMP)
// 0057d1be: MOV EDI,0x647d66
//   XREF to: 00647d66 (DATA)
// 0057d1c3: MOV EBP,0xbef
// 0057d1c8: PUSH 0x647d7a
//   XREF to: 00647d7a (DATA)
// 0057d1cd: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0057d1d3: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 0057d1d9: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0057d1de: ADD ESP,0x4
// 0057d1e1: MOV EAX,dword ptr [ESP + 0x265c]
//   Label: LAB_0057d1e1
//   XREF to: Stack[-0x14] (READ)
// 0057d1e8: PUSH EAX
// 0057d1e9: PUSH 0x3
// 0057d1eb: PUSH 0x100
// 0057d1f0: PUSH 0x2d01f48
//   XREF to: 02d01f48 (DATA)
// 0057d1f5: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0057d1fa: ADD ESP,0x10
// 0057d1fd: PUSH 0xbf1
// 0057d202: PUSH 0x647d8e
//   XREF to: 00647d8e (DATA)
// 0057d207: MOV EDX,dword ptr [ESP + 0x2664]
//   XREF to: Stack[-0x14] (READ)
// 0057d20e: PUSH EDX
// 0057d20f: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0057d214: ADD ESP,0xc
// 0057d217: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0057d21d: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0057d21e: CALL engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480
//   XREF to: 0048c8c0 (UNCONDITIONAL_CALL)
// 0057d223: ADD ESP,0x4
// 0057d226: CMP dword ptr [ESP + 0x2654],0x0
//   XREF to: Stack[-0x1c] (READ)
// 0057d22e: JZ 0x0057d2bc
//   XREF to: 0057d2bc (CONDITIONAL_JUMP)
// 0057d234: MOV ESI,dword ptr [ESP + 0x268c]
//   XREF to: Stack[0x1c] (READ)
// 0057d23b: TEST ESI,ESI
// 0057d23d: JLE 0x0057d270
//   XREF to: 0057d270 (CONDITIONAL_JUMP)
// 0057d23f: LEA ECX,[ESI*0x4 + 0x0]
// 0057d246: XOR EAX,EAX
// 0057d248: ADD EAX,0x4
//   Label: LAB_0057d248
// 0057d24b: MOV EDX,dword ptr [ESP + EAX*0x1 + -0x4]
//   XREF to: Stack[-0x2670] (DATA)
// 0057d24f: MOV dword ptr [EAX + 0x2cf6a98],EDX
//   XREF to: 02cf6a9c (WRITE)
//   XREF to: 02cf6aa0 (WRITE)
// 0057d255: MOV EDX,dword ptr [ESP + EAX*0x1 + 0x12bc]
// 0057d25c: MOV dword ptr [EAX + 0x2cf7d58],EDX
//   XREF to: 02cf7d5c (WRITE)
//   XREF to: 02cf7d60 (WRITE)
// 0057d262: CMP EAX,ECX
// 0057d264: JL 0x0057d248
//   XREF to: 0057d248 (CONDITIONAL_JUMP)
// 0057d266: LEA EAX,[EAX]
// 0057d26c: LEA EDX,[EDX]
// 0057d270: PUSH 0xbfc
//   Label: LAB_0057d270
// 0057d275: PUSH 0x647da2
//   XREF to: 00647da2 (DATA)
// 0057d27a: MOV EDX,dword ptr [ESP + 0x265c]
//   XREF to: Stack[-0x1c] (READ)
// 0057d281: PUSH EDX
// 0057d282: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 0057d287: ADD ESP,0xc
// 0057d28a: PUSH 0xbfd
// 0057d28f: PUSH 0x647db6
//   XREF to: 00647db6 (DATA)
// 0057d294: MOV ECX,dword ptr [ESP + 0x2658]
//   XREF to: Stack[-0x20] (READ)
// 0057d29b: PUSH ECX
// 0057d29c: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 0057d2a1: ADD ESP,0xc
// 0057d2a4: MOV EAX,dword ptr [ESP + 0x264c]
//   XREF to: Stack[-0x24] (READ)
// 0057d2ab: MOV [0x00679394],EAX
//   XREF to: 00679394 (WRITE)
// 0057d2b0: MOV EAX,dword ptr [ESP + 0x2648]
//   XREF to: Stack[-0x28] (READ)
// 0057d2b7: MOV [0x00679398],EAX
//   XREF to: 00679398 (WRITE)
// 0057d2bc: ADD ESP,0x2660
//   Label: LAB_0057d2bc
// 0057d2c2: POP EBP
// 0057d2c3: POP EDI
// 0057d2c4: POP ESI
// 0057d2c5: POP EBX
// 0057d2c6: RET
// 0057d2c7: TEST EAX,EAX
//   Label: LAB_0057d2c7
// 0057d2c9: JZ 0x0057cf2d
//   XREF to: 0057cf2d (CONDITIONAL_JUMP)
// 0057d2cf: JMP 0x0057cf4f
//   XREF to: 0057cf4f (UNCONDITIONAL_JUMP)
// 0057d2d4: CMP EBP,dword ptr [ESP + 0x268c]
//   Label: LAB_0057d2d4
//   XREF to: Stack[0x1c] (READ)
// 0057d2db: JGE 0x0057d123
//   XREF to: 0057d123 (CONDITIONAL_JUMP)
// 0057d2e1: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 0057d2e7: MOV EDX,dword ptr [EBX]
// 0057d2e9: MOV EDI,dword ptr [EBX]
// 0057d2eb: SHR EDX,CL
// 0057d2ed: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 0057d2f3: MOV EAX,dword ptr [EBX]
// 0057d2f5: SHR EDI,CL
// 0057d2f7: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 0057d2fd: AND EDX,0xff
// 0057d303: SHR EAX,CL
// 0057d305: AND EDI,0xff
// 0057d30b: AND EAX,0xff
// 0057d310: MOV ECX,EDX
// 0057d312: MOV EDX,EDI
// 0057d314: SHR ECX,0x3
// 0057d317: SHR EDX,0x3
// 0057d31a: SHL ECX,0xa
// 0057d31d: SHL EDX,0x5
// 0057d320: SHR EAX,0x3
// 0057d323: ADD EDX,ECX
// 0057d325: MOV AL,byte ptr [EDX + EAX*0x1 + 0x2cf9020]
//   XREF to: 02cf9020 (DATA)
// 0057d32c: AND EAX,0xff
// 0057d331: JMP 0x0057d125
//   XREF to: 0057d125 (UNCONDITIONAL_JUMP)
