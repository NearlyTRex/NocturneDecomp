; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_openScreenDevice_FUN_005ed580(void)
;
; Local Variables:
; DDSURFACEDESC    Stack[-0x74]:108  local_74
;
; XREF[9]:
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da1d5
;   core_game.cpp_CGame_showFullscreenBitmap_FUN_004e2910 at 004e2ad9
;   core_setedit.cpp_CDemonSet_showScenePreview_FUN_0057a940 at 0057aa96
;   engine_special.cpp_presentToExternalRenderer_FUN_005b7c30 at 005b7c82
;   engine_texture.cpp_renderTextureAtlas_FUN_005dd990 at 005dd99b
;   shape_design.c_mouseWheelPolygonReducer_FUN_004648e0 at 00464bfb
;   shape_design.c_polygonToolModeManager_FUN_00464c90 at 00464f4e
;   shape_design.c_showFacetPartEditor_FUN_0045f1d0 at 0045f325
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 at 005eda6c
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_0065789f
;   TerminatedCString s_openScreenDevice_Unable__006578b6
;   int g_WindowHeight = 0xc8
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   int g_UseExternalRenderer
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   IDirectDrawSurface* g_SoftwareRenderSurface
;   int g_UseSoftwareRendering
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ed580
        ;   Label: wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580
    PUSH EBP                            ; 005ed581
    SUB ESP,0x6c                        ; 005ed582
    MOV EDX,dword ptr [0x03f9593c]      ; 005ed585 | g_UseSoftwareRendering
    TEST EDX,EDX                        ; 005ed58b
    JNZ 0x005ed5a0                      ; 005ed58d
        ;   XREF to: 005ed5a0 (CONDITIONAL_JUMP)  ; LAB_005ed5a0
    CMP dword ptr [0x02d03e94],0x0      ; 005ed58f | g_UseExternalRenderer
    JZ 0x005ed5a6                       ; 005ed596
        ;   XREF to: 005ed5a6 (CONDITIONAL_JUMP)  ; LAB_005ed5a6
    LEA EAX,[EAX]                       ; 005ed598
    MOV EDX,EDX                         ; 005ed59e
    ADD ESP,0x6c                        ; 005ed5a0
        ;   Label: LAB_005ed5a0
    POP EBP                             ; 005ed5a3
    POP EBX                             ; 005ed5a4
    RET                                 ; 005ed5a5
    PUSH 0x6c                           ; 005ed5a6
        ;   Label: LAB_005ed5a6
    PUSH EDX                            ; 005ed5a8
    LEA EAX,[ESP + 0x8]                 ; 005ed5a9
    PUSH EAX                            ; 005ed5ad
    CALL crt_memory.c_memset_FUN_005fde40 ; 005ed5ae
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005ed5b3
    PUSH 0x0                            ; 005ed5b6
    PUSH 0x1                            ; 005ed5b8
    LEA ECX,[ESP + 0x8]                 ; 005ed5ba
    MOV EBX,0x6c                        ; 005ed5be
    PUSH ECX                            ; 005ed5c3
    MOV EAX,[0x03f95928]                ; 005ed5c4 | g_SoftwareRenderSurface
    MOV dword ptr [ESP + 0xc],EBX       ; 005ed5c9
    PUSH 0x0                            ; 005ed5cd
    MOV EDX,dword ptr [EAX]             ; 005ed5cf
    PUSH EAX                            ; 005ed5d1
    CALL dword ptr [EDX + 0x64]         ; 005ed5d2
    TEST EAX,EAX                        ; 005ed5d5
    JZ 0x005ed600                       ; 005ed5d7
        ;   XREF to: 005ed600 (CONDITIONAL_JUMP)  ; LAB_005ed600
    PUSH EDI                            ; 005ed5d9
    PUSH ESI                            ; 005ed5da
    MOV ESI,0x65789f                    ; 005ed5db | = "..\\wincore\\wddvmem.cpp"
    MOV EDI,0x255                       ; 005ed5e0
    PUSH 0x6578b6                       ; 005ed5e5 | = "openScreenDevice - Unable to lock scr..."
    MOV dword ptr [0x02f0ca48],ESI      ; 005ed5ea | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005ed5f0 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005ed5f6
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005ed5fb
    POP ESI                             ; 005ed5fe
    POP EDI                             ; 005ed5ff
    MOV EBP,dword ptr [0x00679398]      ; 005ed600 | g_WindowHeight
        ;   Label: LAB_005ed600
    MOV EDX,dword ptr [ESP + 0x24]      ; 005ed606
    TEST EBP,EBP                        ; 005ed60a
    JLE 0x005ed5a0                      ; 005ed60c
        ;   XREF to: 005ed5a0 (CONDITIONAL_JUMP)  ; LAB_005ed5a0
    MOV EBX,dword ptr [ESP + 0x10]      ; 005ed60e
    LEA ECX,[EBP*0x4 + 0x0]             ; 005ed612
    XOR EAX,EAX                         ; 005ed619
    MOV dword ptr [EAX + 0x2cf6a9c],EDX ; 005ed61b | g_ScreenBufferArray | g_ScreenBufferArray[1]
        ;   Label: LAB_005ed61b
    ADD EAX,0x4                         ; 005ed621
    ADD EDX,EBX                         ; 005ed624
    CMP EAX,ECX                         ; 005ed626
    JL 0x005ed61b                       ; 005ed628
        ;   XREF to: 005ed61b (CONDITIONAL_JUMP)  ; LAB_005ed61b
    ADD ESP,0x6c                        ; 005ed62a
    POP EBP                             ; 005ed62d
    POP EBX                             ; 005ed62e
    RET                                 ; 005ed62f

