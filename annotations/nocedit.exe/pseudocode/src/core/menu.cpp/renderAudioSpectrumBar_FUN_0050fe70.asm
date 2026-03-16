; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_menu_cpp_renderAudioSpectrumBar_FUN_0050fe70(int x_center,int y_top,int height_half)
;
; Parameters:
; int              Stack[0x4]:4   x_center
; int              Stack[0x8]:4   y_top
; int              Stack[0xc]:4   height_half
; Local Variables:
; SMRGLHeaderPrimitive Stack[-0x2c]:24  local_2c
;
; XREF[2]:
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 00512646
;   core_menu.cpp_renderAudioSpectrumBarByBounds_FUN_00511e00 at 00511e15
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   SMRGLTextureBasic[8] g_AudioSpectrumTextures
;   undefined4 DAT_00f80000
;   CDemonRenderer g_CDemonRendererInstance
;   int g_AudioVisualizationCounter
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0050fe70
        ;   Label: core_menu.cpp_renderAudioSpectrumBar_FUN_0050fe70
    SUB ESP,0x28                        ; 0050fe71
    MOV EBP,dword ptr [ESP + 0x30]      ; 0050fe74
    MOV EDX,dword ptr [ESP + 0x38]      ; 0050fe78
    ADD EDX,EDX                         ; 0050fe7c
    TEST EDX,EDX                        ; 0050fe7e
    JLE 0x0050fff7                      ; 0050fe80
        ;   XREF to: 0050fff7 (CONDITIONAL_JUMP)  ; LAB_0050fff7
    PUSH EDI                            ; 0050fe86
    PUSH ESI                            ; 0050fe87
    PUSH EBX                            ; 0050fe88
    MOV EAX,[0x006703ec]                ; 0050fe89 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    LEA ECX,[EBP + -0x10]               ; 0050fe8e
    MOV EBX,dword ptr [EAX]             ; 0050fe91 | g_CDemonRendererInstance
    SHL ECX,0x10                        ; 0050fe93
    MOV dword ptr [EBX + 0x10],ECX      ; 0050fe96
    MOV ESI,dword ptr [ESP + 0x40]      ; 0050fe99
    MOV EBX,dword ptr [EAX]             ; 0050fe9d | g_CDemonRendererInstance
    SHL ESI,0x10                        ; 0050fe9f
    MOV dword ptr [EBX + 0x14],ESI      ; 0050fea2
    LEA EBX,[EBP + 0x10]                ; 0050fea5
    MOV EDI,dword ptr [EAX]             ; 0050fea8 | g_CDemonRendererInstance
    SHL EBX,0x10                        ; 0050feaa
    MOV dword ptr [EDI + 0x40],EBX      ; 0050fead
    MOV EDI,dword ptr [EAX]             ; 0050feb0 | g_CDemonRendererInstance
    MOV dword ptr [EDI + 0x44],ESI      ; 0050feb2
    MOV ESI,dword ptr [EAX]             ; 0050feb5 | g_CDemonRendererInstance
    MOV dword ptr [ESI + 0x70],EBX      ; 0050feb7
    MOV EBX,dword ptr [ESP + 0x40]      ; 0050feba
    SUB EBX,EDX                         ; 0050febe
    MOV EDX,EBX                         ; 0050fec0
    MOV EBX,dword ptr [EAX]             ; 0050fec2 | g_CDemonRendererInstance
    SHL EDX,0x10                        ; 0050fec4
    MOV dword ptr [EBX + 0x74],EDX      ; 0050fec7
    MOV EBX,dword ptr [EAX]             ; 0050feca | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0xa0],ECX      ; 0050fecc
    MOV ECX,dword ptr [EAX]             ; 0050fed2 | g_CDemonRendererInstance
    MOV dword ptr [ECX + 0xa4],EDX      ; 0050fed4
    MOV EDX,dword ptr [EAX]             ; 0050feda | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x18],0x80000  ; 0050fedc
    MOV EDX,dword ptr [EAX]             ; 0050fee3 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x1c],0xf80000 ; 0050fee5 | DAT_00f80000
    MOV EDX,dword ptr [EAX]             ; 0050feec | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x48],0xf80000 ; 0050feee | DAT_00f80000
    MOV EDX,dword ptr [EAX]             ; 0050fef5 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x4c],0xf80000 ; 0050fef7 | DAT_00f80000
    MOV EDX,dword ptr [EAX]             ; 0050fefe | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x78],0xf80000 ; 0050ff00 | DAT_00f80000
    MOV EDX,dword ptr [EAX]             ; 0050ff07 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x7c],0x80000  ; 0050ff09
    MOV EDX,dword ptr [EAX]             ; 0050ff10 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0xa8],0x80000  ; 0050ff12
    MOV EDX,dword ptr [EAX]             ; 0050ff1c | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0xac],0x80000  ; 0050ff1e
    MOV EDX,0x4                         ; 0050ff28
    MOV EBX,0x2                         ; 0050ff2d
    MOV ESI,0x3                         ; 0050ff32
    PUSH 0x8000                         ; 0050ff37
    XOR ECX,ECX                         ; 0050ff3c
    MOV dword ptr [ESP + 0x14],EDX      ; 0050ff3e
    MOV dword ptr [ESP + 0x24],ECX      ; 0050ff42
    MOV dword ptr [ESP + 0x20],ECX      ; 0050ff46
    MOV dword ptr [ESP + 0x1c],ECX      ; 0050ff4a
    MOV dword ptr [ESP + 0x18],ECX      ; 0050ff4e
    MOV dword ptr [ESP + 0x28],ECX      ; 0050ff52
    MOV dword ptr [ESP + 0x30],EBX      ; 0050ff56
    PUSH EAX                            ; 0050ff5a | g_CDemonRendererInstance
    MOV ECX,0x1                         ; 0050ff5b
    MOV dword ptr [ESP + 0x38],ESI      ; 0050ff60
    MOV dword ptr [ESP + 0x30],ECX      ; 0050ff64
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 0050ff68
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0050ff6d
    PUSH 0x1                            ; 0050ff70
    MOV EDI,dword ptr [0x006703ec]      ; 0050ff72 | g_CDemonRendererPtr2
    PUSH EDI                            ; 0050ff78 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 0050ff79
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    MOV EAX,[0x02f26cb4]                ; 0050ff7e | g_AudioVisualizationCounter
    MOV EDX,EAX                         ; 0050ff83
    SAR EDX,0x1f                        ; 0050ff85
    SHL EDX,0x10                        ; 0050ff88
    SBB EAX,EDX                         ; 0050ff8b
    SAR EAX,0x10                        ; 0050ff8d
    LEA EDX,[EAX + EBP*0x1]             ; 0050ff90
    AND EDX,0x7                         ; 0050ff93
    LEA EAX,[EDX*0x4 + 0x0]             ; 0050ff96
    SUB EAX,EDX                         ; 0050ff9d
    SHL EAX,0x3                         ; 0050ff9f
    ADD ESP,0x8                         ; 0050ffa2
    ADD EAX,0x67d284                    ; 0050ffa5 | g_AudioSpectrumTextures
    PUSH EAX                            ; 0050ffaa
    MOV EBP,dword ptr [0x006703ec]      ; 0050ffab | g_CDemonRendererPtr2
    PUSH EBP                            ; 0050ffb1 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 0050ffb2
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0050ffb7
    PUSH 0x23                           ; 0050ffba
    LEA EAX,[ESP + 0x10]                ; 0050ffbc
    PUSH EAX                            ; 0050ffc0
    MOV EAX,[0x006703ec]                ; 0050ffc1 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 0050ffc6 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10 ; 0050ffc7
        ;   XREF to: 0048ae10 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 0050ffcc
    PUSH 0x0                            ; 0050ffcf
    MOV EDX,dword ptr [0x006703ec]      ; 0050ffd1 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 0050ffd7 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 0050ffd8
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0050ffdd
    PUSH 0xffff                         ; 0050ffe0
    MOV ECX,dword ptr [0x006703ec]      ; 0050ffe5 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 0050ffeb | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 0050ffec
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0050fff1
    POP EBX                             ; 0050fff4
    POP ESI                             ; 0050fff5
    POP EDI                             ; 0050fff6
    ADD ESP,0x28                        ; 0050fff7
        ;   Label: LAB_0050fff7
    POP EBP                             ; 0050fffa
    RET                                 ; 0050fffb

