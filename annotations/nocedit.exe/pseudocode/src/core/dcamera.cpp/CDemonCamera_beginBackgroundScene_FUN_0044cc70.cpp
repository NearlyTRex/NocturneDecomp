// Name: core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70
// Address: 0044cc70
// Address Range: [[0044cc70, 0044cdef]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70(CDemonCamera * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c5b6 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056b392 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dcamera_cpp_0061a050
//   TerminatedCString s_CDemonCamera_beginBackgr_0061a064
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   int g_WindowHeight = 0xc8
//   int g_BitsPerPixel = 0x8
//   int g_BackgroundSceneDepth
//   int g_BackgroundSavedBitsPerPixel
//   int g_BackgroundSavedUseExternalRenderer
//   void*[1024] g_BackgroundSavedScreenBufferArray
//   undefined4 DAT_0151abc0
//   int g_BackgroundSavedRedBitPosition
//   int g_BackgroundSavedGreenBitPosition
//   int g_BackgroundSavedBlueBitPosition
//   SCameraViewportState g_BackgroundSavedCameraState
//   CDemonRenderer g_CDemonRendererInstance
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   int g_RedBitPosition
//   int g_GreenBitPosition
//   int g_BlueBitPosition
//   int g_ViewportCenterXFixed
//   int g_ViewportCenterYFixed
//   int g_ViewportRightFixed
//   int g_ViewportBottomFixed
//   int g_UseExternalRenderer
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_0048de20
//   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70(CDemonCamera *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  uint uVar1;
  int iVar2;
  int iVar3;
  void **ppvVar4;
  void **ppvVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (this_ptr->scene_open_flag == 0) {
    g_CurrentFilename = "..\\core\\dcamera.cpp";
    g_CurrentLineNumber = 0x42d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonCamera::beginBackgroundScene - Scene not open");
  }
  g_BackgroundSceneDepth = g_BackgroundSceneDepth + 1;
  if (g_BackgroundSceneDepth == 1) {
    g_BackgroundSavedBitsPerPixel = g_BitsPerPixel;
    g_BackgroundSavedUseExternalRenderer = g_UseExternalRenderer;
    ppvVar4 = g_ScreenBufferArray;
    ppvVar5 = g_BackgroundSavedScreenBufferArray;
    for (uVar1 = g_WindowHeight & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *ppvVar5 = *ppvVar4;
      ppvVar4 = ppvVar4 + (uint)bVar6 * -2 + 1;
      ppvVar5 = ppvVar5 + (uint)bVar6 * -2 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)ppvVar5 = *(undefined1 *)ppvVar4;
      ppvVar4 = (void **)((int)ppvVar4 + (uint)bVar6 * -2 + 1);
      ppvVar5 = (void **)((int)ppvVar5 + (uint)bVar6 * -2 + 1);
    }
    g_BackgroundSavedRedBitPosition = g_RedBitPosition;
    g_BitsPerPixel = 0x20;
    g_UseExternalRenderer = 0;
    g_BackgroundSavedGreenBitPosition = g_GreenBitPosition;
    g_GreenBitPosition = 8;
    g_BackgroundSavedBlueBitPosition = g_BlueBitPosition;
    g_BlueBitPosition = 0;
    g_RedBitPosition = 0x10;
    iVar2 = 0;
    if (0 < this_ptr->framebuffer_height) {
      iVar3 = 0;
      do {
        *(void **)((int)g_ScreenBufferArray + iVar3) =
             (void *)((int)this_ptr->framebuffer_aligned + this_ptr->framebuffer_width * iVar2 * 4);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < this_ptr->framebuffer_height);
    }
    engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
              (g_CDemonRendererPtr,0,0,this_ptr->framebuffer_width + -1,
               this_ptr->framebuffer_height + -1);
    this_ptr_00 = g_CDemonRendererPtr;
    (this_ptr->saved_viewport_rect).left = g_ViewportCenterXFixed;
    (this_ptr->saved_viewport_rect).top = g_ViewportCenterYFixed;
    (this_ptr->saved_viewport_rect).right = g_ViewportRightFixed;
    (this_ptr->saved_viewport_rect).bottom = g_ViewportBottomFixed;
    engine_drender_cpp_CDemonRenderer_getCameraAndViewportState_FUN_0048de20
              (this_ptr_00,&g_BackgroundSavedCameraState);
  }
  return;
}


// Assembly code:
// 0044cc70: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70
// 0044cc71: PUSH ESI
// 0044cc72: PUSH EDI
// 0044cc73: PUSH EBP
// 0044cc74: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044cc78: CMP dword ptr [EBX + 0x11e4],0x0
// 0044cc7f: JZ 0x0044cdc8
//   XREF to: 0044cdc8 (CONDITIONAL_JUMP)
// 0044cc85: MOV EDI,dword ptr [0x0151abb0]
//   Label: LAB_0044cc85
//   XREF to: 0151abb0 (READ)
// 0044cc8b: INC EDI
// 0044cc8c: MOV dword ptr [0x0151abb0],EDI
//   XREF to: 0151abb0 (WRITE)
// 0044cc92: CMP EDI,0x1
// 0044cc95: JNZ 0x0044cdc3
//   XREF to: 0044cdc3 (CONDITIONAL_JUMP)
// 0044cc9b: MOV ESI,0x2cf6a9c
//   XREF to: 02cf6a9c (DATA)
// 0044cca0: MOV EDI,0x151abbc
//   XREF to: 0151abbc (DATA)
// 0044cca5: MOV EDX,0x8
// 0044ccaa: MOV EAX,[0x0067939c]
//   XREF to: 0067939c (READ)
// 0044ccaf: MOV ECX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0044ccb5: MOV [0x0151abb4],EAX
//   XREF to: 0151abb4 (WRITE)
// 0044ccba: MOV EAX,[0x02d03e94]
//   XREF to: 02d03e94 (READ)
// 0044ccbf: SHL ECX,0x2
// 0044ccc2: MOV [0x0151abb8],EAX
//   XREF to: 0151abb8 (WRITE)
// 0044ccc7: PUSH EDI
//   XREF to: 0151abbc (DATA)
// 0044ccc8: MOV EAX,ECX
// 0044ccca: SHR ECX,0x2
// 0044cccd: MOVSD.REP ES:EDI,ESI
//   XREF to: 0151abbc (WRITE)
//   XREF to: 0151abc0 (WRITE)
//   XREF to: 02cf6a9c (READ)
//   XREF to: 02cf6aa0 (READ)
// 0044cccf: MOV CL,AL
// 0044ccd1: AND CL,0x3
// 0044ccd4: MOVSB.REP ES:EDI,ESI
//   XREF to: 0151abbc (WRITE)
//   XREF to: 0151abc0 (WRITE)
//   XREF to: 02cf6a9c (READ)
//   XREF to: 02cf6aa0 (READ)
// 0044ccd6: POP EDI
// 0044ccd7: MOV ESI,0x20
// 0044ccdc: MOV EAX,[0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 0044cce1: MOV EBP,dword ptr [EBX + 0x148]
// 0044cce7: XOR ECX,ECX
// 0044cce9: MOV [0x0151be7c],EAX
//   XREF to: 0151be7c (WRITE)
// 0044ccee: MOV dword ptr [0x0067939c],ESI
//   XREF to: 0067939c (WRITE)
// 0044ccf4: MOV EAX,[0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 0044ccf9: MOV dword ptr [0x02d03e94],ECX
//   XREF to: 02d03e94 (WRITE)
// 0044ccff: MOV [0x0151be80],EAX
//   XREF to: 0151be80 (WRITE)
// 0044cd04: MOV EAX,[0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 0044cd09: MOV dword ptr [0x02d01f30],EDX
//   XREF to: 02d01f30 (WRITE)
// 0044cd0f: MOV [0x0151be84],EAX
//   XREF to: 0151be84 (WRITE)
// 0044cd14: MOV EAX,0x10
// 0044cd19: MOV dword ptr [0x02d01f3c],ECX
//   XREF to: 02d01f3c (WRITE)
// 0044cd1f: MOV [0x02d01f24],EAX
//   XREF to: 02d01f24 (WRITE)
// 0044cd24: XOR EAX,EAX
// 0044cd26: TEST EBP,EBP
// 0044cd28: JLE 0x0044cd60
//   XREF to: 0044cd60 (CONDITIONAL_JUMP)
// 0044cd2a: XOR EDX,EDX
// 0044cd2c: MOV ECX,dword ptr [EBX + 0x144]
//   Label: LAB_0044cd2c
// 0044cd32: IMUL ECX,EAX
// 0044cd35: LEA ESI,[ECX*0x4 + 0x0]
// 0044cd3c: MOV ECX,dword ptr [EBX + 0x158]
// 0044cd42: ADD ECX,ESI
// 0044cd44: MOV dword ptr [EDX + 0x2cf6a9c],ECX
//   XREF to: 02cf6a9c (WRITE)
//   XREF to: 02cf6aa0 (WRITE)
// 0044cd4a: INC EAX
// 0044cd4b: MOV ECX,dword ptr [EBX + 0x148]
// 0044cd51: ADD EDX,0x4
// 0044cd54: CMP EAX,ECX
// 0044cd56: JL 0x0044cd2c
//   XREF to: 0044cd2c (CONDITIONAL_JUMP)
// 0044cd58: LEA EAX,[EAX]
// 0044cd5e: MOV EDX,EDX
// 0044cd60: MOV EAX,dword ptr [EBX + 0x148]
//   Label: LAB_0044cd60
// 0044cd66: DEC EAX
// 0044cd67: PUSH EAX
// 0044cd68: MOV EAX,dword ptr [EBX + 0x144]
// 0044cd6e: DEC EAX
// 0044cd6f: PUSH EAX
// 0044cd70: PUSH 0x0
// 0044cd72: PUSH 0x0
// 0044cd74: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0044cd7a: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 0044cd7b: CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890
//   XREF to: 0048c890 (UNCONDITIONAL_CALL)
// 0044cd80: MOV EAX,[0x02d02548]
//   XREF to: 02d02548 (READ)
// 0044cd85: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0044cd8b: MOV dword ptr [EBX + 0x1c0],EAX
// 0044cd91: MOV EAX,[0x02d0254c]
//   XREF to: 02d0254c (READ)
// 0044cd96: ADD ESP,0x14
// 0044cd99: MOV dword ptr [EBX + 0x1c4],EAX
// 0044cd9f: MOV EAX,[0x02d02550]
//   XREF to: 02d02550 (READ)
// 0044cda4: PUSH 0x151be98
//   XREF to: 0151be98 (DATA)
// 0044cda9: MOV dword ptr [EBX + 0x1c8],EAX
// 0044cdaf: MOV EAX,[0x02d02554]
//   XREF to: 02d02554 (READ)
// 0044cdb4: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 0044cdb5: MOV dword ptr [EBX + 0x1cc],EAX
// 0044cdbb: CALL engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_0048de20
//   XREF to: 0048de20 (UNCONDITIONAL_CALL)
// 0044cdc0: ADD ESP,0x8
// 0044cdc3: POP EBP
//   Label: LAB_0044cdc3
// 0044cdc4: POP EDI
// 0044cdc5: POP ESI
// 0044cdc6: POP EBX
// 0044cdc7: RET
// 0044cdc8: MOV ECX,0x61a050
//   Label: LAB_0044cdc8
//   XREF to: 0061a050 (PARAM)
// 0044cdcd: MOV ESI,0x42d
// 0044cdd2: PUSH 0x61a064
//   XREF to: 0061a064 (DATA)
// 0044cdd7: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0044cddd: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0044cde3: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0044cde8: ADD ESP,0x4
// 0044cdeb: JMP 0x0044cc85
//   XREF to: 0044cc85 (UNCONDITIONAL_JUMP)
