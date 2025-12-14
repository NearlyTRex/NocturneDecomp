; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_loadGunFlameTextures_FUN_004c4d50(void)
;
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_loadAssets_FUN_004c7ab0 at 004c7b01
;
; Referenced Globals:
;   TerminatedCString s_fr46_03d_raw_00629f33
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   SMRGLTextureBasic[20] g_GunFlameTextures
;   undefined4 DAT_02d13cdc
;   undefined4 DAT_02d13cf4
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c4d50
        ;   Label: core_fire.cpp_loadGunFlameTextures_FUN_004c4d50
    PUSH ESI                            ; 004c4d51
    PUSH EDI                            ; 004c4d52
    PUSH EBP                            ; 004c4d53
    MOV EDI,0x2d13cd4                   ; 004c4d54 | g_GunFlameTextures
    MOV ESI,0xbe                        ; 004c4d59
    XOR EBX,EBX                         ; 004c4d5e
    ADD EDI,0x8                         ; 004c4d60
    IMUL EAX,EBX,0x18                   ; 004c4d63
        ;   Label: LAB_004c4d63
    PUSH ESI                            ; 004c4d66
    PUSH 0x629f33                       ; 004c4d67 | = "fr46%03d.raw"
    MOV EBP,0x2d13cd4                   ; 004c4d6c | g_GunFlameTextures
    PUSH EDI                            ; 004c4d71 | DAT_02d13cdc | DAT_02d13cf4
    ADD EBP,EAX                         ; 004c4d72
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004c4d74
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004c4d79
    PUSH EBP                            ; 004c4d7c | g_GunFlameTextures
    MOV EDX,dword ptr [0x006703ec]      ; 004c4d7d | g_CDemonRendererInstance | g_CDemonRendererPtr
    INC ESI                             ; 004c4d83
    PUSH EDX                            ; 004c4d84 | g_CDemonRendererInstance
    ADD EDI,0x18                        ; 004c4d85
    INC EBX                             ; 004c4d88
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004c4d89
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004c4d8e
    CMP EBX,0x14                        ; 004c4d91
    JL 0x004c4d63                       ; 004c4d94
        ;   XREF to: 004c4d63 (CONDITIONAL_JUMP)  ; LAB_004c4d63
    POP EBP                             ; 004c4d96
    POP EDI                             ; 004c4d97
    POP ESI                             ; 004c4d98
    POP EBX                             ; 004c4d99
    RET                                 ; 004c4d9a

