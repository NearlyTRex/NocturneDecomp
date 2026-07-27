; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_texture_cpp_loadAndUpdateTexture_FUN_00545a40(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_updateTexture_FUN_00461f60 at 00461f6a
;
; Called Functions:
;   engine_special.cpp_updateTexture_FUN_00532440
;   engine_texture.cpp_ensureTextureLoaded_FUN_00545920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00545a40
        ;   Label: engine_texture.cpp_loadAndUpdateTexture_FUN_00545a40
    MOV EDX,dword ptr [ESP + 0x8]       ; 00545a41
    PUSH EDX                            ; 00545a45
    CALL engine_texture.cpp_ensureTextureLoaded_FUN_00545920 ; 00545a46
        ;   XREF to: 00545920 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_ensureTextureLoaded_FUN_00545920()
    ADD ESP,0x4                         ; 00545a4b
    MOV ECX,dword ptr [ESP + 0xc]       ; 00545a4e
    PUSH ECX                            ; 00545a52
    MOV EBX,dword ptr [ESP + 0xc]       ; 00545a53
    PUSH EBX                            ; 00545a57
    CALL engine_special.cpp_updateTexture_FUN_00532440 ; 00545a58
        ;   XREF to: 00532440 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_updateTexture_FUN_00532440()
    ADD ESP,0x8                         ; 00545a5d
    POP EBX                             ; 00545a60
    RET                                 ; 00545a61

