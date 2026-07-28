; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_updateTextureWithPalette_FUN_00545a10(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c00020
;
; Called Functions:
;   engine_special.cpp_updateTexture_FUN_00532440
;   engine_texture.cpp_ensureTextureLoaded_FUN_00545920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00545a10
        ;   Label: engine_texture.cpp_updateTextureWithPalette_FUN_00545a10
    MOV EDX,dword ptr [ESP + 0x8]       ; 00545a11
    PUSH EDX                            ; 00545a15
    CALL engine_texture.cpp_ensureTextureLoaded_FUN_00545920 ; 00545a16
        ;   XREF to: 00545920 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_texture.cpp_ensureTextureLoaded_FUN_00545920(SMRGLTextureBasic * texture)
    ADD ESP,0x4                         ; 00545a1b
    MOV ECX,dword ptr [0x01c00020]      ; 00545a1e | DAT_01c00020
    PUSH ECX                            ; 00545a24
    MOV EBX,dword ptr [ESP + 0xc]       ; 00545a25
    PUSH EBX                            ; 00545a29
    CALL engine_special.cpp_updateTexture_FUN_00532440 ; 00545a2a
        ;   XREF to: 00532440 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_updateTexture_FUN_00532440(SMRGLTextureBasic * tex, SRGBColorPalette * palette_data)
    ADD ESP,0x8                         ; 00545a2f
    POP EBX                             ; 00545a32
    RET                                 ; 00545a33

