; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_set.cpp_CDemonSet_renderScene_FUN_0056c1a0 at 0056c5b6
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056b392
;
; Referenced Globals:
;   TerminatedCString s_core_dcamera_cpp_0061a050
;   TerminatedCString s_CDemonCamera_beginBackgr_0061a064
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   int g_WindowHeight = 0xc8
;   int g_BitsPerPixel = 0x8
;   int g_BackgroundSceneDepth
;   int g_BackgroundSavedBitsPerPixel
;   int g_BackgroundSavedUseExternalRenderer
;   void*[1200] g_BackgroundSavedScreenBufferArray
;   undefined4 DAT_0151abc0
;   int g_BackgroundSavedRedBitPosition
;   int g_BackgroundSavedGreenBitPosition
;   int g_BackgroundSavedBlueBitPosition
;   SCameraViewportState g_BackgroundSavedCameraState
;   CDemonRenderer g_CDemonRendererInstance
;   ... and 12 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_0048de20
;   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044cc70
        ;   Label: core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70
    PUSH ESI                            ; 0044cc71
    PUSH EDI                            ; 0044cc72
    PUSH EBP                            ; 0044cc73
    MOV EBX,dword ptr [ESP + 0x14]      ; 0044cc74
    CMP dword ptr [EBX + 0x11e4],0x0    ; 0044cc78
    JZ 0x0044cdc8                       ; 0044cc7f
        ;   XREF to: 0044cdc8 (CONDITIONAL_JUMP)  ; LAB_0044cdc8
    MOV EDI,dword ptr [0x0151abb0]      ; 0044cc85 | g_BackgroundSceneDepth
        ;   Label: LAB_0044cc85
    INC EDI                             ; 0044cc8b
    MOV dword ptr [0x0151abb0],EDI      ; 0044cc8c | g_BackgroundSceneDepth
    CMP EDI,0x1                         ; 0044cc92
    JNZ 0x0044cdc3                      ; 0044cc95
        ;   XREF to: 0044cdc3 (CONDITIONAL_JUMP)  ; LAB_0044cdc3
    MOV ESI,0x2cf6a9c                   ; 0044cc9b | g_ScreenBufferArray
    MOV EDI,0x151abbc                   ; 0044cca0 | g_BackgroundSavedScreenBufferArray
    MOV EDX,0x8                         ; 0044cca5
    MOV EAX,[0x0067939c]                ; 0044ccaa | g_BitsPerPixel
    MOV ECX,dword ptr [0x00679398]      ; 0044ccaf | g_WindowHeight
    MOV [0x0151abb4],EAX                ; 0044ccb5 | g_BackgroundSavedBitsPerPixel
    MOV EAX,[0x02d03e94]                ; 0044ccba | g_UseExternalRenderer
    SHL ECX,0x2                         ; 0044ccbf
    MOV [0x0151abb8],EAX                ; 0044ccc2 | g_BackgroundSavedUseExternalRenderer
    PUSH EDI                            ; 0044ccc7 | g_BackgroundSavedScreenBufferArray
    MOV EAX,ECX                         ; 0044ccc8
    SHR ECX,0x2                         ; 0044ccca
    MOVSD.REP ES:EDI,ESI                ; 0044cccd | g_BackgroundSavedScreenBufferArray | DAT_0151abc0 | g_ScreenBufferArray
    MOV CL,AL                           ; 0044cccf
    AND CL,0x3                          ; 0044ccd1
    MOVSB.REP ES:EDI,ESI                ; 0044ccd4 | g_BackgroundSavedScreenBufferArray | DAT_0151abc0 | g_ScreenBufferArray
    POP EDI                             ; 0044ccd6
    MOV ESI,0x20                        ; 0044ccd7
    MOV EAX,[0x02d01f24]                ; 0044ccdc | g_RedBitPosition
    MOV EBP,dword ptr [EBX + 0x148]     ; 0044cce1
    XOR ECX,ECX                         ; 0044cce7
    MOV [0x0151be7c],EAX                ; 0044cce9 | g_BackgroundSavedRedBitPosition
    MOV dword ptr [0x0067939c],ESI      ; 0044ccee | g_BitsPerPixel
    MOV EAX,[0x02d01f30]                ; 0044ccf4 | g_GreenBitPosition
    MOV dword ptr [0x02d03e94],ECX      ; 0044ccf9 | g_UseExternalRenderer
    MOV [0x0151be80],EAX                ; 0044ccff | g_BackgroundSavedGreenBitPosition
    MOV EAX,[0x02d01f3c]                ; 0044cd04 | g_BlueBitPosition
    MOV dword ptr [0x02d01f30],EDX      ; 0044cd09 | g_GreenBitPosition
    MOV [0x0151be84],EAX                ; 0044cd0f | g_BackgroundSavedBlueBitPosition
    MOV EAX,0x10                        ; 0044cd14
    MOV dword ptr [0x02d01f3c],ECX      ; 0044cd19 | g_BlueBitPosition
    MOV [0x02d01f24],EAX                ; 0044cd1f | g_RedBitPosition
    XOR EAX,EAX                         ; 0044cd24
    TEST EBP,EBP                        ; 0044cd26
    JLE 0x0044cd60                      ; 0044cd28
        ;   XREF to: 0044cd60 (CONDITIONAL_JUMP)  ; LAB_0044cd60
    XOR EDX,EDX                         ; 0044cd2a
    MOV ECX,dword ptr [EBX + 0x144]     ; 0044cd2c
        ;   Label: LAB_0044cd2c
    IMUL ECX,EAX                        ; 0044cd32
    LEA ESI,[ECX*0x4 + 0x0]             ; 0044cd35
    MOV ECX,dword ptr [EBX + 0x158]     ; 0044cd3c
    ADD ECX,ESI                         ; 0044cd42
    MOV dword ptr [EDX + 0x2cf6a9c],ECX ; 0044cd44 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    INC EAX                             ; 0044cd4a
    MOV ECX,dword ptr [EBX + 0x148]     ; 0044cd4b
    ADD EDX,0x4                         ; 0044cd51
    CMP EAX,ECX                         ; 0044cd54
    JL 0x0044cd2c                       ; 0044cd56
        ;   XREF to: 0044cd2c (CONDITIONAL_JUMP)  ; LAB_0044cd2c
    LEA EAX,[EAX]                       ; 0044cd58
    MOV EDX,EDX                         ; 0044cd5e
    MOV EAX,dword ptr [EBX + 0x148]     ; 0044cd60
        ;   Label: LAB_0044cd60
    DEC EAX                             ; 0044cd66
    PUSH EAX                            ; 0044cd67
    MOV EAX,dword ptr [EBX + 0x144]     ; 0044cd68
    DEC EAX                             ; 0044cd6e
    PUSH EAX                            ; 0044cd6f
    PUSH 0x0                            ; 0044cd70
    PUSH 0x0                            ; 0044cd72
    MOV ESI,dword ptr [0x006703ec]      ; 0044cd74 | g_CDemonRendererPtr2
    PUSH ESI                            ; 0044cd7a | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890 ; 0044cd7b
        ;   XREF to: 0048c890 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890(CDemonRenderer * this_ptr, int x, int y, int width, ...)
    MOV EAX,[0x02d02548]                ; 0044cd80 | g_ViewportCenterXFixed
    MOV EDI,dword ptr [0x006703ec]      ; 0044cd85 | g_CDemonRendererPtr2
    MOV dword ptr [EBX + 0x1c0],EAX     ; 0044cd8b
    MOV EAX,[0x02d0254c]                ; 0044cd91 | g_ViewportCenterYFixed
    ADD ESP,0x14                        ; 0044cd96
    MOV dword ptr [EBX + 0x1c4],EAX     ; 0044cd99
    MOV EAX,[0x02d02550]                ; 0044cd9f | g_ViewportRightFixed
    PUSH 0x151be98                      ; 0044cda4 | g_BackgroundSavedCameraState
    MOV dword ptr [EBX + 0x1c8],EAX     ; 0044cda9
    MOV EAX,[0x02d02554]                ; 0044cdaf | g_ViewportBottomFixed
    PUSH EDI                            ; 0044cdb4 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x1cc],EAX     ; 0044cdb5
    CALL engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_0048de20 ; 0044cdbb
        ;   XREF to: 0048de20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_0048de20(CDemonRenderer * this_ptr, SCameraViewportState * output_state)
    ADD ESP,0x8                         ; 0044cdc0
    POP EBP                             ; 0044cdc3
        ;   Label: LAB_0044cdc3
    POP EDI                             ; 0044cdc4
    POP ESI                             ; 0044cdc5
    POP EBX                             ; 0044cdc6
    RET                                 ; 0044cdc7
    MOV ECX,0x61a050                    ; 0044cdc8 | = "..\\core\\dcamera.cpp"
        ;   Label: LAB_0044cdc8
    MOV ESI,0x42d                       ; 0044cdcd
    PUSH 0x61a064                       ; 0044cdd2 | = "CDemonCamera::beginBackgroundScene - ..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0044cdd7 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0044cddd | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0044cde3
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0044cde8
    JMP 0x0044cc85                      ; 0044cdeb
        ;   XREF to: 0044cc85 (UNCONDITIONAL_JUMP)  ; LAB_0044cc85

