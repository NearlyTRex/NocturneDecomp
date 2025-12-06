; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630(void)
;
;
; XREF[8]:
;   core_game.cpp_CGame_openSomething_FUN_004e2910 at 004e2af2
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004dab22
;   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940 at 0057ac9f
;   engine_texture.cpp_renderTextureAtlas_FUN_005dd990 at 005dd9b4
;   shape_design.c_mouseWheelPolygonReducer_FUN_004648e0 at 00464be7
;   shape_design.c_polygonToolModeManager_FUN_00464c90 at 00464e86
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 at 005edabf
;   wincore_windll.cpp_presentToExternalRenderer_FUN_005b7c30 at 005b7cda
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_006578e0
;   TerminatedCString s_closeScreenDevice_Unable_006578f7
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_BitsPerPixel = 0x8
;   void* g_BackBuffer
;   void* g_SoftwareZBuffer
;   void*[1024] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   uint*[1024] g_ZBufferScanlineArray
;   undefined4 g_ZBufferScanlineArray[1]
;   int g_UseExternalRenderer
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   IDirectDrawSurface* g_SoftwareRenderSurface
;   ... and 2 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005ed630
        ;   Label: wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630
    CMP dword ptr [0x03f9593c],0x0      ; 005ed631 | int g_UseSoftwareRendering
    JNZ 0x005ed6fa                      ; 005ed638 | LAB_005ed6fa
        ;   XREF to: 005ed6fa (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x02d03e94]      ; 005ed63e | int g_UseExternalRenderer
    TEST ECX,ECX                        ; 005ed644
    JNZ 0x005ed6fc                      ; 005ed646 | LAB_005ed6fc
        ;   XREF to: 005ed6fc (CONDITIONAL_JUMP)
    PUSH EDI                            ; 005ed64c
    PUSH ESI                            ; 005ed64d
    CMP dword ptr [0x00679398],0x0      ; 005ed64e | int g_WindowHeight
    JLE 0x005ed6b7                      ; 005ed655 | LAB_005ed6b7
        ;   XREF to: 005ed6b7 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 005ed657
    MOV EAX,[0x0067939c]                ; 005ed658 | int g_BitsPerPixel
    MOV EDX,EAX                         ; 005ed65d
    SAR EDX,0x1f                        ; 005ed65f
    SHL EDX,0x3                         ; 005ed662
    SBB EAX,EDX                         ; 005ed665
    SAR EAX,0x3                         ; 005ed667
    MOV EDI,EAX                         ; 005ed66a
    IMUL EDX,dword ptr [0x00679394],0x0 ; 005ed66c | int g_WindowWidth
    MOV EBP,dword ptr [0x00679394]      ; 005ed673 | int g_WindowWidth
    SHL EBP,0x2                         ; 005ed679
    XOR EAX,EAX                         ; 005ed67c
    MOV ESI,dword ptr [0x00679394]      ; 005ed67e | int g_WindowWidth
        ;   Label: LAB_005ed67e
    IMUL ESI,ECX                        ; 005ed684
    IMUL ESI,EDI                        ; 005ed687
    MOV EBX,dword ptr [0x00688010]      ; 005ed68a | void * g_BackBuffer
    ADD EBX,ESI                         ; 005ed690
    MOV dword ptr [EAX + 0x2cf6a9c],EBX ; 005ed692 | void *[1024] g_ScreenBufferArray
    MOV EBX,dword ptr [0x0077262c]      ; 005ed698 | void * g_SoftwareZBuffer
    ADD EAX,0x4                         ; 005ed69e
    ADD EBX,EDX                         ; 005ed6a1
    INC ECX                             ; 005ed6a3
    MOV dword ptr [EAX + 0x2cf7d58],EBX ; 005ed6a4 | uint *[1024] g_ZBufferScanlineArray
    MOV EBX,dword ptr [0x00679398]      ; 005ed6aa | int g_WindowHeight
    ADD EDX,EBP                         ; 005ed6b0
    CMP ECX,EBX                         ; 005ed6b2
    JL 0x005ed67e                       ; 005ed6b4 | LAB_005ed67e
        ;   XREF to: 005ed67e (CONDITIONAL_JUMP)
    POP EBX                             ; 005ed6b6
    PUSH 0x0                            ; 005ed6b7
        ;   Label: LAB_005ed6b7
    MOV EAX,[0x03f95928]                ; 005ed6b9 | IDirectDrawSurface * g_SoftwareRenderSurface
    PUSH EAX                            ; 005ed6be
    MOV EDX,dword ptr [EAX]             ; 005ed6bf
    CALL dword ptr [EDX + 0x80]         ; 005ed6c1
    TEST EAX,EAX                        ; 005ed6c7
    JZ 0x005ed6ee                       ; 005ed6c9 | LAB_005ed6ee
        ;   XREF to: 005ed6ee (CONDITIONAL_JUMP)
    MOV ESI,0x6578e0                    ; 005ed6cb | = "..\\wincore\\wddvmem.cpp" | s_wincore_wddvmem_cpp_006578e0 = ..\wincore\wddvmem.cpp
    MOV EDI,0x27f                       ; 005ed6d0
    PUSH 0x6578f7                       ; 005ed6d5 | = "closeScreenDevice - Unable to unlock" | s_closeScreenDevice_Unable_006578f7 = closeScreenDevice - Unable to unlock
    MOV dword ptr [0x02f0ca48],ESI      ; 005ed6da | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005ed6e0 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005ed6e6 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005ed6eb
    MOV dword ptr [0x03f95934],0x1      ; 005ed6ee | int g_RenderingInProgress
        ;   Label: LAB_005ed6ee
    POP ESI                             ; 005ed6f8
    POP EDI                             ; 005ed6f9
    POP EBP                             ; 005ed6fa
        ;   Label: LAB_005ed6fa
    RET                                 ; 005ed6fb
    MOV dword ptr [0x03f95934],0x1      ; 005ed6fc | int g_RenderingInProgress
        ;   Label: LAB_005ed6fc
    POP EBP                             ; 005ed706
    RET                                 ; 005ed707

