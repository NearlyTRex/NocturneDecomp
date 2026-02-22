; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0(CDemonCamera *this_ptr,int restore_zbuffer)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   restore_zbuffer
;
; XREF[2]:
;   core_set.cpp_CDemonSet_renderScene_FUN_0056c1a0 at 0056c644
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056b453
;
; Referenced Globals:
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
;   CDemonRenderer g_CDemonRendererInstance
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   uint*[1200] g_ZBufferScanlineArray
;   ... and 9 more
;
; Called Functions:
;   core_dstrender.cpp_memcpyMMX_FUN_00492001
;   engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480
;   wincore_windll.cpp_masterZBuffer_FUN_005b7d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044cdf0
        ;   Label: core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0
    PUSH ESI                            ; 0044cdf1
    PUSH EDI                            ; 0044cdf2
    PUSH EBP                            ; 0044cdf3
    MOV EBP,dword ptr [ESP + 0x14]      ; 0044cdf4
    MOV EDX,dword ptr [0x0151abb0]      ; 0044cdf8 | g_BackgroundSceneDepth
    DEC EDX                             ; 0044cdfe
    MOV dword ptr [0x0151abb0],EDX      ; 0044cdff | g_BackgroundSceneDepth
    JZ 0x0044ce0c                       ; 0044ce05
        ;   XREF to: 0044ce0c (CONDITIONAL_JUMP)  ; LAB_0044ce0c
    POP EBP                             ; 0044ce07
        ;   Label: LAB_0044ce07
    POP EDI                             ; 0044ce08
    POP ESI                             ; 0044ce09
    POP EBX                             ; 0044ce0a
    RET                                 ; 0044ce0b
    MOV EBX,dword ptr [0x006703ec]      ; 0044ce0c | g_CDemonRendererInstance | g_CDemonRendererPtr2
        ;   Label: LAB_0044ce0c
    PUSH EBX                            ; 0044ce12 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480 ; 0044ce13
        ;   XREF to: 0048c8c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480()
    MOV EAX,[0x02d02548]                ; 0044ce18 | g_ViewportCenterXFixed
    MOV dword ptr [EBP + 0x1c0],EAX     ; 0044ce1d
    MOV EAX,[0x02d0254c]                ; 0044ce23 | g_ViewportCenterYFixed
    MOV ESI,0x151abbc                   ; 0044ce28 | g_BackgroundSavedScreenBufferArray
    MOV dword ptr [EBP + 0x1c4],EAX     ; 0044ce2d
    MOV EAX,[0x02d02550]                ; 0044ce33 | g_ViewportRightFixed
    MOV EDI,0x2cf6a9c                   ; 0044ce38 | g_ScreenBufferArray
    MOV dword ptr [EBP + 0x1c8],EAX     ; 0044ce3d
    MOV EAX,[0x02d02554]                ; 0044ce43 | g_ViewportBottomFixed
    MOV ECX,dword ptr [0x00679398]      ; 0044ce48 | g_WindowHeight
    MOV dword ptr [EBP + 0x1cc],EAX     ; 0044ce4e
    MOV EAX,[0x0151abb4]                ; 0044ce54 | g_BackgroundSavedBitsPerPixel
    ADD ESP,0x4                         ; 0044ce59
    MOV [0x0067939c],EAX                ; 0044ce5c | g_BitsPerPixel
    MOV EAX,[0x0151abb8]                ; 0044ce61 | g_BackgroundSavedUseExternalRenderer
    SHL ECX,0x2                         ; 0044ce66
    MOV [0x02d03e94],EAX                ; 0044ce69 | g_UseExternalRenderer
    PUSH EDI                            ; 0044ce6e | g_ScreenBufferArray
    MOV EAX,ECX                         ; 0044ce6f
    SHR ECX,0x2                         ; 0044ce71
    MOVSD.REP ES:EDI,ESI                ; 0044ce74 | g_ScreenBufferArray | g_ScreenBufferArray[1] | g_BackgroundSavedScreenBufferArray
    MOV CL,AL                           ; 0044ce76
    AND CL,0x3                          ; 0044ce78
    MOVSB.REP ES:EDI,ESI                ; 0044ce7b | g_ScreenBufferArray | g_ScreenBufferArray[1] | g_BackgroundSavedScreenBufferArray
    POP EDI                             ; 0044ce7d
    MOV EAX,[0x0151be7c]                ; 0044ce7e | g_BackgroundSavedRedBitPosition
    MOV [0x02d01f24],EAX                ; 0044ce83 | g_RedBitPosition
    MOV EAX,[0x0151be80]                ; 0044ce88 | g_BackgroundSavedGreenBitPosition
    MOV [0x02d01f30],EAX                ; 0044ce8d | g_GreenBitPosition
    MOV EAX,[0x0151be84]                ; 0044ce92 | g_BackgroundSavedBlueBitPosition
    MOV ESI,dword ptr [ESP + 0x18]      ; 0044ce97
    MOV [0x02d01f3c],EAX                ; 0044ce9b | g_BlueBitPosition
    TEST ESI,ESI                        ; 0044cea0
    JZ 0x0044ce07                       ; 0044cea2
        ;   XREF to: 0044ce07 (CONDITIONAL_JUMP)  ; LAB_0044ce07
    MOV EDI,dword ptr [EBP + 0x148]     ; 0044cea8
    XOR ESI,ESI                         ; 0044ceae
    TEST EDI,EDI                        ; 0044ceb0
    JLE 0x0044cf00                      ; 0044ceb2
        ;   XREF to: 0044cf00 (CONDITIONAL_JUMP)  ; LAB_0044cf00
    XOR EDI,EDI                         ; 0044ceb4
    MOV EDX,dword ptr [EBP + 0x144]     ; 0044ceb6
        ;   Label: LAB_0044ceb6
    IMUL EDX,ESI                        ; 0044cebc
    MOV EAX,dword ptr [EBP + 0x144]     ; 0044cebf
    MOV ECX,dword ptr [EDI + 0x2cf7d5c] ; 0044cec5 | g_ZBufferScanlineArray | g_ZBufferScanlineArray[1]
    SHL EAX,0x2                         ; 0044cecb
    MOV EBX,dword ptr [EBP + 0x15c]     ; 0044cece
    PUSH EAX                            ; 0044ced4
    ADD ECX,EAX                         ; 0044ced5
    SHL EDX,0x2                         ; 0044ced7
    PUSH ECX                            ; 0044ceda
    ADD EDX,EBX                         ; 0044cedb
    ADD EDI,0x4                         ; 0044cedd
    PUSH EDX                            ; 0044cee0
    INC ESI                             ; 0044cee1
    CALL core_dstrender.cpp_memcpyMMX_FUN_00492001 ; 0044cee2
        ;   XREF to: 00492001 (UNCONDITIONAL_CALL)  ; void * core_dstrender.cpp_memcpyMMX_FUN_00492001(void * dest, void * src, int byte_count)
    MOV EAX,dword ptr [EBP + 0x148]     ; 0044cee7
    ADD ESP,0xc                         ; 0044ceed
    CMP ESI,EAX                         ; 0044cef0
    JL 0x0044ceb6                       ; 0044cef2
        ;   XREF to: 0044ceb6 (CONDITIONAL_JUMP)  ; LAB_0044ceb6
    LEA EAX,[EAX]                       ; 0044cef4
    LEA EDX,[EDX]                       ; 0044cefa
    CMP dword ptr [0x02d03e94],0x0      ; 0044cf00 | g_UseExternalRenderer
        ;   Label: LAB_0044cf00
    JZ 0x0044ce07                       ; 0044cf07
        ;   XREF to: 0044ce07 (CONDITIONAL_JUMP)  ; LAB_0044ce07
    PUSH 0x0                            ; 0044cf0d
    CALL wincore_windll.cpp_masterZBuffer_FUN_005b7d00 ; 0044cf0f
        ;   XREF to: 005b7d00 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_masterZBuffer_FUN_005b7d00(int z_buffer_mode)
    ADD ESP,0x4                         ; 0044cf14
    POP EBP                             ; 0044cf17
    POP EDI                             ; 0044cf18
    POP ESI                             ; 0044cf19
    POP EBX                             ; 0044cf1a
    RET                                 ; 0044cf1b

