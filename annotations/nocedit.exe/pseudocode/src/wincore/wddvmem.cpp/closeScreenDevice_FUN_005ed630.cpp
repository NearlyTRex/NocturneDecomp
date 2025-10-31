// Name: wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630
// Address: 005ed630
// Address Range: [[005ed630, 005ed707]]
// Convention: __cdecl
// Signature: void wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630(void)
// Cross-references:
//   core_game.cpp_CGame_openSomething_FUN_004e2910 (004e2910) at 004e2af2 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004dab22 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940 (0057a940) at 0057ac9f [UNCONDITIONAL_CALL]
//   engine_texture.cpp_renderTextureAtlas_FUN_005dd990 (005dd990) at 005dd9b4 [UNCONDITIONAL_CALL]
//   shape_design.c_mouseWheelPolygonReducer_FUN_004648e0 (004648e0) at 00464be7 [UNCONDITIONAL_CALL]
//   shape_design.c_polygonToolModeManager_FUN_00464c90 (00464c90) at 00464e86 [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 (005eda20) at 005edabf [UNCONDITIONAL_CALL]
//   wincore_windll.cpp_presentToExternalRenderer_FUN_005b7c30 (005b7c30) at 005b7cda [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_wincore_wddvmem_cpp_006578e0
//   TerminatedCString s_closeScreenDevice_Unable_006578f7
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_BitsPerPixel = 0x8
//   void* g_BackBuffer
//   void* g_SoftwareZBuffer
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   uint*[1024] g_ZBufferScanlineArray
//   undefined4 g_ZBufferScanlineArray[1]
//   int g_UseExternalRenderer
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   IDirectDrawSurface* g_SoftwareRenderSurface
//   int g_RenderingInProgress
//   int g_UseSoftwareRendering
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_closeScreenDevice_FUN_005ed630(void)

{
  int iVar1;
  int iVar2;
  HRESULT HVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (g_UseSoftwareRendering == 0) {
    if (g_UseExternalRenderer != 0) {
      g_RenderingInProgress = 1;
      return;
    }
    if (0 < g_WindowHeight) {
      iVar5 = g_BitsPerPixel >> 0x1f;
      iVar1 = g_BitsPerPixel + iVar5 * -8;
      iVar6 = 0;
      iVar7 = g_WindowWidth * 4;
      iVar4 = 0;
      iVar2 = 0;
      do {
        *(void **)((int)g_ScreenBufferArray + iVar2) =
             (void *)((int)g_BackBuffer +
                     g_WindowWidth * iVar4 * ((int)(iVar1 - (uint)(iVar5 << 2 < 0)) >> 3));
        iVar4 = iVar4 + 1;
        *(int *)((int)g_ZBufferScanlineArray + iVar2) = (int)g_SoftwareZBuffer + iVar6;
        iVar6 = iVar6 + iVar7;
        iVar2 = iVar2 + 4;
      } while (iVar4 < g_WindowHeight);
    }
    HVar3 = (*g_SoftwareRenderSurface->vtable->Unlock)(g_SoftwareRenderSurface,(void *)0x0);
    if (HVar3 != 0) {
      g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
      g_CurrentLineNumber = 0x27f;
      core_main_c_displayErrorAndQuit_FUN_00506f10("closeScreenDevice - Unable to unlock");
    }
    g_RenderingInProgress = 1;
  }
  return;
}


// Assembly code:
// 005ed630: PUSH EBP
//   Label: wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630
// 005ed631: CMP dword ptr [0x03f9593c],0x0
//   XREF to: 03f9593c (READ)
// 005ed638: JNZ 0x005ed6fa
//   XREF to: 005ed6fa (CONDITIONAL_JUMP)
// 005ed63e: MOV ECX,dword ptr [0x02d03e94]
//   XREF to: 02d03e94 (READ)
// 005ed644: TEST ECX,ECX
// 005ed646: JNZ 0x005ed6fc
//   XREF to: 005ed6fc (CONDITIONAL_JUMP)
// 005ed64c: PUSH EDI
// 005ed64d: PUSH ESI
// 005ed64e: CMP dword ptr [0x00679398],0x0
//   XREF to: 00679398 (READ)
// 005ed655: JLE 0x005ed6b7
//   XREF to: 005ed6b7 (CONDITIONAL_JUMP)
// 005ed657: PUSH EBX
// 005ed658: MOV EAX,[0x0067939c]
//   XREF to: 0067939c (READ)
// 005ed65d: MOV EDX,EAX
// 005ed65f: SAR EDX,0x1f
// 005ed662: SHL EDX,0x3
// 005ed665: SBB EAX,EDX
// 005ed667: SAR EAX,0x3
// 005ed66a: MOV EDI,EAX
// 005ed66c: IMUL EDX,dword ptr [0x00679394],0x0
//   XREF to: 00679394 (READ)
// 005ed673: MOV EBP,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 005ed679: SHL EBP,0x2
// 005ed67c: XOR EAX,EAX
// 005ed67e: MOV ESI,dword ptr [0x00679394]
//   Label: LAB_005ed67e
//   XREF to: 00679394 (READ)
// 005ed684: IMUL ESI,ECX
// 005ed687: IMUL ESI,EDI
// 005ed68a: MOV EBX,dword ptr [0x00688010]
//   XREF to: 00688010 (READ)
// 005ed690: ADD EBX,ESI
// 005ed692: MOV dword ptr [EAX + 0x2cf6a9c],EBX
//   XREF to: 02cf6a9c (WRITE)
//   XREF to: 02cf6aa0 (WRITE)
// 005ed698: MOV EBX,dword ptr [0x0077262c]
//   XREF to: 0077262c (READ)
// 005ed69e: ADD EAX,0x4
// 005ed6a1: ADD EBX,EDX
// 005ed6a3: INC ECX
// 005ed6a4: MOV dword ptr [EAX + 0x2cf7d58],EBX
//   XREF to: 02cf7d5c (WRITE)
//   XREF to: 02cf7d60 (WRITE)
// 005ed6aa: MOV EBX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005ed6b0: ADD EDX,EBP
// 005ed6b2: CMP ECX,EBX
// 005ed6b4: JL 0x005ed67e
//   XREF to: 005ed67e (CONDITIONAL_JUMP)
// 005ed6b6: POP EBX
// 005ed6b7: PUSH 0x0
//   Label: LAB_005ed6b7
// 005ed6b9: MOV EAX,[0x03f95928]
//   XREF to: 03f95928 (READ)
// 005ed6be: PUSH EAX
// 005ed6bf: MOV EDX,dword ptr [EAX]
// 005ed6c1: CALL dword ptr [EDX + 0x80]
// 005ed6c7: TEST EAX,EAX
// 005ed6c9: JZ 0x005ed6ee
//   XREF to: 005ed6ee (CONDITIONAL_JUMP)
// 005ed6cb: MOV ESI,0x6578e0
//   XREF to: 006578e0 (DATA)
// 005ed6d0: MOV EDI,0x27f
// 005ed6d5: PUSH 0x6578f7
//   XREF to: 006578f7 (DATA)
// 005ed6da: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 005ed6e0: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005ed6e6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005ed6eb: ADD ESP,0x4
// 005ed6ee: MOV dword ptr [0x03f95934],0x1
//   Label: LAB_005ed6ee
//   XREF to: 03f95934 (WRITE)
// 005ed6f8: POP ESI
// 005ed6f9: POP EDI
// 005ed6fa: POP EBP
//   Label: LAB_005ed6fa
// 005ed6fb: RET
// 005ed6fc: MOV dword ptr [0x03f95934],0x1
//   Label: LAB_005ed6fc
//   XREF to: 03f95934 (WRITE)
// 005ed706: POP EBP
// 005ed707: RET
