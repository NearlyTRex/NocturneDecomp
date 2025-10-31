// Name: wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580
// Address: 005ed580
// Address Range: [[005ed580, 005ed62f]]
// Convention: __cdecl
// Signature: void wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580(void)
// Cross-references:
//   core_game.cpp_CGame_openSomething_FUN_004e2910 (004e2910) at 004e2ad9 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da1d5 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940 (0057a940) at 0057aa96 [UNCONDITIONAL_CALL]
//   engine_texture.cpp_renderTextureAtlas_FUN_005dd990 (005dd990) at 005dd99b [UNCONDITIONAL_CALL]
//   shape_design.c_mouseWheelPolygonReducer_FUN_004648e0 (004648e0) at 00464bfb [UNCONDITIONAL_CALL]
//   shape_design.c_polygonToolModeManager_FUN_00464c90 (00464c90) at 00464f4e [UNCONDITIONAL_CALL]
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0 (0045f1d0) at 0045f325 [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 (005eda20) at 005eda6c [UNCONDITIONAL_CALL]
//   wincore_windll.cpp_presentToExternalRenderer_FUN_005b7c30 (005b7c30) at 005b7c82 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_wincore_wddvmem_cpp_0065789f
//   TerminatedCString s_openScreenDevice_Unable__006578b6
//   int g_WindowHeight = 0xc8
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   int g_UseExternalRenderer
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   IDirectDrawSurface* g_SoftwareRenderSurface
//   int g_UseSoftwareRendering
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_openScreenDevice_FUN_005ed580(void)

{
  int iVar1;
  int iVar2;
  HRESULT HVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  DWORD DStack_70;
  DWORD DStack_68;
  DWORD DStack_44;
  DWORD DStack_30;
  
  if ((g_UseSoftwareRendering == 0) && (g_UseExternalRenderer == 0)) {
    crt_memory_c_memset_FUN_005fde40(&stack0xffffff8c,0,0x6c);
    DStack_70 = 0x6c;
    HVar3 = (*g_SoftwareRenderSurface->vtable->Lock)
                      (g_SoftwareRenderSurface,(RECT *)0x0,(DDSURFACEDESC *)&DStack_70,1,(void *)0x0
                      );
    if (HVar3 != 0) {
      g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
      g_CurrentLineNumber = 0x255;
      DStack_68 = 0x5ed5fb;
      core_main_c_displayErrorAndQuit_FUN_00506f10("openScreenDevice - Unable to lock screen!");
    }
    iVar2 = g_WindowHeight;
    if (0 < g_WindowHeight) {
      iVar1 = g_WindowHeight * 4;
      iVar4 = 0;
      do {
        *(DWORD *)((int)g_ScreenBufferArray + iVar4) = DStack_30;
        iVar4 = iVar4 + 4;
        DStack_30 = DStack_30 + DStack_44;
      } while (SBORROW4(iVar4,iVar1) != iVar4 + iVar2 * -4 < 0);
      return;
    }
  }
  return;
}


// Assembly code:
// 005ed580: PUSH EBX
//   Label: wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580
// 005ed581: PUSH EBP
// 005ed582: SUB ESP,0x6c
// 005ed585: MOV EDX,dword ptr [0x03f9593c]
//   XREF to: 03f9593c (READ)
// 005ed58b: TEST EDX,EDX
// 005ed58d: JNZ 0x005ed5a0
//   XREF to: 005ed5a0 (CONDITIONAL_JUMP)
// 005ed58f: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 005ed596: JZ 0x005ed5a6
//   XREF to: 005ed5a6 (CONDITIONAL_JUMP)
// 005ed598: LEA EAX,[EAX]
// 005ed59e: MOV EDX,EDX
// 005ed5a0: ADD ESP,0x6c
//   Label: LAB_005ed5a0
// 005ed5a3: POP EBP
// 005ed5a4: POP EBX
// 005ed5a5: RET
// 005ed5a6: PUSH 0x6c
//   Label: LAB_005ed5a6
// 005ed5a8: PUSH EDX
// 005ed5a9: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x74] (DATA)
// 005ed5ad: PUSH EAX
// 005ed5ae: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005ed5b3: ADD ESP,0xc
// 005ed5b6: PUSH 0x0
// 005ed5b8: PUSH 0x1
// 005ed5ba: LEA ECX,[ESP + 0x8]
//   XREF to: Stack[-0x74] (DATA)
// 005ed5be: MOV EBX,0x6c
// 005ed5c3: PUSH ECX
// 005ed5c4: MOV EAX,[0x03f95928]
//   XREF to: 03f95928 (READ)
// 005ed5c9: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0x74] (WRITE)
// 005ed5cd: PUSH 0x0
// 005ed5cf: MOV EDX,dword ptr [EAX]
// 005ed5d1: PUSH EAX
// 005ed5d2: CALL dword ptr [EDX + 0x64]
// 005ed5d5: TEST EAX,EAX
// 005ed5d7: JZ 0x005ed600
//   XREF to: 005ed600 (CONDITIONAL_JUMP)
// 005ed5d9: PUSH EDI
// 005ed5da: PUSH ESI
// 005ed5db: MOV ESI,0x65789f
//   XREF to: 0065789f (DATA)
// 005ed5e0: MOV EDI,0x255
// 005ed5e5: PUSH 0x6578b6
//   XREF to: 006578b6 (DATA)
// 005ed5ea: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 005ed5f0: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005ed5f6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005ed5fb: ADD ESP,0x4
// 005ed5fe: POP ESI
// 005ed5ff: POP EDI
// 005ed600: MOV EBP,dword ptr [0x00679398]
//   Label: LAB_005ed600
//   XREF to: 00679398 (READ)
// 005ed606: MOV EDX,dword ptr [ESP + 0x24]
// 005ed60a: TEST EBP,EBP
// 005ed60c: JLE 0x005ed5a0
//   XREF to: 005ed5a0 (CONDITIONAL_JUMP)
// 005ed60e: MOV EBX,dword ptr [ESP + 0x10]
// 005ed612: LEA ECX,[EBP*0x4 + 0x0]
// 005ed619: XOR EAX,EAX
// 005ed61b: MOV dword ptr [EAX + 0x2cf6a9c],EDX
//   Label: LAB_005ed61b
//   XREF to: 02cf6a9c (WRITE)
//   XREF to: 02cf6aa0 (WRITE)
// 005ed621: ADD EAX,0x4
// 005ed624: ADD EDX,EBX
// 005ed626: CMP EAX,ECX
// 005ed628: JL 0x005ed61b
//   XREF to: 005ed61b (CONDITIONAL_JUMP)
// 005ed62a: ADD ESP,0x6c
// 005ed62d: POP EBP
// 005ed62e: POP EBX
// 005ed62f: RET
