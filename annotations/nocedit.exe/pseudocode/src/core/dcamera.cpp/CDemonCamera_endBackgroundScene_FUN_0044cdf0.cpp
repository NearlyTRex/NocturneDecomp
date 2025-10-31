// Name: core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0
// Address: 0044cdf0
// Address Range: [[0044cdf0, 0044cf1b]]
// Convention: __cdecl
// Signature: int core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0(CDemonCamera * this_ptr, int restore_zbuffer)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c644 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056b453 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   int g_WindowHeight = 0xc8
//   int g_BitsPerPixel = 0x8
//   int g_BackgroundSceneDepth
//   int g_BackgroundSavedBitsPerPixel
//   int g_BackgroundSavedUseExternalRenderer
//   void*[1024] g_BackgroundSavedScreenBufferArray
//   undefined4 DAT_0151abc0
//   int g_BackgroundSavedGreenBitPosition
//   int g_BackgroundSavedBlueBitPosition
//   CDemonRenderer g_CDemonRendererInstance
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   uint*[1024] g_ZBufferScanlineArray
//   undefined4 g_ZBufferScanlineArray[1]
//   int g_RedBitPosition
//   int g_GreenBitPosition
//   int g_BlueBitPosition
//   int g_ViewportCenterXFixed
//   int g_ViewportCenterYFixed
//   int g_ViewportRightFixed
//   int g_ViewportBottomFixed
//   int g_UseExternalRenderer
// Function calls:
//   core_dstrender.cpp_memcpyMMX_FUN_00492001
//   engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480
//   wincore_windll.cpp_masterZBuffer_FUN_005b7d00

#include "nocturne.h"

int __cdecl
core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0
          (CDemonCamera *this_ptr,int restore_zbuffer)

{
  int *piVar1;
  int in_EAX;
  int byte_count;
  uint uVar2;
  int iVar3;
  int iVar4;
  void **ppvVar5;
  void **ppvVar6;
  int iVar7;
  byte bVar8;
  int in_stack_0000000c;
  
  bVar8 = 0;
  g_BackgroundSceneDepth = g_BackgroundSceneDepth + -1;
  if (g_BackgroundSceneDepth == 0) {
    engine_drender_cpp_CDemonRenderer_popViewport_FUN_0050e480(g_CDemonRendererPtr);
    (this_ptr->saved_viewport_rect).left = g_ViewportCenterXFixed;
    (this_ptr->saved_viewport_rect).top = g_ViewportCenterYFixed;
    (this_ptr->saved_viewport_rect).right = g_ViewportRightFixed;
    iVar3 = g_WindowHeight;
    (this_ptr->saved_viewport_rect).bottom = g_ViewportBottomFixed;
    g_BitsPerPixel = g_BackgroundSavedBitsPerPixel;
    g_UseExternalRenderer = g_BackgroundSavedUseExternalRenderer;
    ppvVar5 = g_BackgroundSavedScreenBufferArray;
    ppvVar6 = g_ScreenBufferArray;
    for (uVar2 = iVar3 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *ppvVar6 = *ppvVar5;
      ppvVar5 = ppvVar5 + (uint)bVar8 * -2 + 1;
      ppvVar6 = ppvVar6 + (uint)bVar8 * -2 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)ppvVar6 = *(undefined1 *)ppvVar5;
      ppvVar5 = (void **)((int)ppvVar5 + (uint)bVar8 * -2 + 1);
      ppvVar6 = (void **)((int)ppvVar6 + (uint)bVar8 * -2 + 1);
    }
    g_RedBitPosition = g_BackgroundSavedRedBitPosition;
    g_GreenBitPosition = g_BackgroundSavedGreenBitPosition;
    g_BlueBitPosition = g_BackgroundSavedBlueBitPosition;
    in_EAX = g_BackgroundSavedBlueBitPosition;
    if (in_stack_0000000c != 0) {
      iVar3 = 0;
      if (0 < this_ptr->framebuffer_height) {
        iVar7 = 0;
        do {
          iVar4 = this_ptr->framebuffer_width * iVar3;
          piVar1 = (int *)((int)g_ZBufferScanlineArray + iVar7);
          byte_count = this_ptr->framebuffer_width * 4;
          iVar7 = iVar7 + 4;
          iVar3 = iVar3 + 1;
          core_dstrender_cpp_memcpyMMX_FUN_00492001
                    ((void *)(iVar4 * 4 + (int)this_ptr->zbuffer_aligned),
                     (void *)(*piVar1 + byte_count),byte_count);
          in_EAX = this_ptr->framebuffer_height;
        } while (iVar3 < in_EAX);
      }
      if (g_UseExternalRenderer != 0) {
        iVar3 = wincore_windll_cpp_masterZBuffer_FUN_005b7d00(0);
        return iVar3;
      }
    }
  }
  return in_EAX;
}


// Assembly code:
// 0044cdf0: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0
// 0044cdf1: PUSH ESI
// 0044cdf2: PUSH EDI
// 0044cdf3: PUSH EBP
// 0044cdf4: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044cdf8: MOV EDX,dword ptr [0x0151abb0]
//   XREF to: 0151abb0 (READ)
// 0044cdfe: DEC EDX
// 0044cdff: MOV dword ptr [0x0151abb0],EDX
//   XREF to: 0151abb0 (WRITE)
// 0044ce05: JZ 0x0044ce0c
//   XREF to: 0044ce0c (CONDITIONAL_JUMP)
// 0044ce07: POP EBP
//   Label: LAB_0044ce07
// 0044ce08: POP EDI
// 0044ce09: POP ESI
// 0044ce0a: POP EBX
// 0044ce0b: RET
// 0044ce0c: MOV EBX,dword ptr [0x006703ec]
//   Label: LAB_0044ce0c
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0044ce12: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 0044ce13: CALL engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480
//   XREF to: 0048c8c0 (UNCONDITIONAL_CALL)
// 0044ce18: MOV EAX,[0x02d02548]
//   XREF to: 02d02548 (READ)
// 0044ce1d: MOV dword ptr [EBP + 0x1c0],EAX
// 0044ce23: MOV EAX,[0x02d0254c]
//   XREF to: 02d0254c (READ)
// 0044ce28: MOV ESI,0x151abbc
//   XREF to: 0151abbc (DATA)
// 0044ce2d: MOV dword ptr [EBP + 0x1c4],EAX
// 0044ce33: MOV EAX,[0x02d02550]
//   XREF to: 02d02550 (READ)
// 0044ce38: MOV EDI,0x2cf6a9c
//   XREF to: 02cf6a9c (DATA)
// 0044ce3d: MOV dword ptr [EBP + 0x1c8],EAX
// 0044ce43: MOV EAX,[0x02d02554]
//   XREF to: 02d02554 (READ)
// 0044ce48: MOV ECX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0044ce4e: MOV dword ptr [EBP + 0x1cc],EAX
// 0044ce54: MOV EAX,[0x0151abb4]
//   XREF to: 0151abb4 (READ)
// 0044ce59: ADD ESP,0x4
// 0044ce5c: MOV [0x0067939c],EAX
//   XREF to: 0067939c (WRITE)
// 0044ce61: MOV EAX,[0x0151abb8]
//   XREF to: 0151abb8 (READ)
// 0044ce66: SHL ECX,0x2
// 0044ce69: MOV [0x02d03e94],EAX
//   XREF to: 02d03e94 (WRITE)
// 0044ce6e: PUSH EDI
//   XREF to: 02cf6a9c (DATA)
// 0044ce6f: MOV EAX,ECX
// 0044ce71: SHR ECX,0x2
// 0044ce74: MOVSD.REP ES:EDI,ESI
//   XREF to: 02cf6a9c (WRITE)
//   XREF to: 02cf6aa0 (WRITE)
//   XREF to: 0151abbc (READ)
//   XREF to: 0151abc0 (READ)
// 0044ce76: MOV CL,AL
// 0044ce78: AND CL,0x3
// 0044ce7b: MOVSB.REP ES:EDI,ESI
//   XREF to: 02cf6a9c (WRITE)
//   XREF to: 02cf6aa0 (WRITE)
//   XREF to: 0151abbc (READ)
//   XREF to: 0151abc0 (READ)
// 0044ce7d: POP EDI
// 0044ce7e: MOV EAX,[0x0151be7c]
//   XREF to: 0151be7c (READ)
// 0044ce83: MOV [0x02d01f24],EAX
//   XREF to: 02d01f24 (WRITE)
// 0044ce88: MOV EAX,[0x0151be80]
//   XREF to: 0151be80 (READ)
// 0044ce8d: MOV [0x02d01f30],EAX
//   XREF to: 02d01f30 (WRITE)
// 0044ce92: MOV EAX,[0x0151be84]
//   XREF to: 0151be84 (READ)
// 0044ce97: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0044ce9b: MOV [0x02d01f3c],EAX
//   XREF to: 02d01f3c (WRITE)
// 0044cea0: TEST ESI,ESI
// 0044cea2: JZ 0x0044ce07
//   XREF to: 0044ce07 (CONDITIONAL_JUMP)
// 0044cea8: MOV EDI,dword ptr [EBP + 0x148]
// 0044ceae: XOR ESI,ESI
// 0044ceb0: TEST EDI,EDI
// 0044ceb2: JLE 0x0044cf00
//   XREF to: 0044cf00 (CONDITIONAL_JUMP)
// 0044ceb4: XOR EDI,EDI
// 0044ceb6: MOV EDX,dword ptr [EBP + 0x144]
//   Label: LAB_0044ceb6
// 0044cebc: IMUL EDX,ESI
// 0044cebf: MOV EAX,dword ptr [EBP + 0x144]
// 0044cec5: MOV ECX,dword ptr [EDI + 0x2cf7d5c]
//   XREF to: 02cf7d5c (READ)
//   XREF to: 02cf7d60 (READ)
// 0044cecb: SHL EAX,0x2
// 0044cece: MOV EBX,dword ptr [EBP + 0x15c]
// 0044ced4: PUSH EAX
// 0044ced5: ADD ECX,EAX
// 0044ced7: SHL EDX,0x2
// 0044ceda: PUSH ECX
// 0044cedb: ADD EDX,EBX
// 0044cedd: ADD EDI,0x4
// 0044cee0: PUSH EDX
// 0044cee1: INC ESI
// 0044cee2: CALL core_dstrender.cpp_memcpyMMX_FUN_00492001
//   XREF to: 00492001 (UNCONDITIONAL_CALL)
// 0044cee7: MOV EAX,dword ptr [EBP + 0x148]
// 0044ceed: ADD ESP,0xc
// 0044cef0: CMP ESI,EAX
// 0044cef2: JL 0x0044ceb6
//   XREF to: 0044ceb6 (CONDITIONAL_JUMP)
// 0044cef4: LEA EAX,[EAX]
// 0044cefa: LEA EDX,[EDX]
// 0044cf00: CMP dword ptr [0x02d03e94],0x0
//   Label: LAB_0044cf00
//   XREF to: 02d03e94 (READ)
// 0044cf07: JZ 0x0044ce07
//   XREF to: 0044ce07 (CONDITIONAL_JUMP)
// 0044cf0d: PUSH 0x0
// 0044cf0f: CALL wincore_windll.cpp_masterZBuffer_FUN_005b7d00
//   XREF to: 005b7d00 (UNCONDITIONAL_CALL)
// 0044cf14: ADD ESP,0x4
// 0044cf17: POP EBP
// 0044cf18: POP EDI
// 0044cf19: POP ESI
// 0044cf1a: POP EBX
// 0044cf1b: RET
