; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_freeTextureCache_FUN_004037f0(void)
;
;
; XREF[1]:
;   core_main.c_FUN_004e4e20 at 004e4e82
;
; Called Functions:
;   engine_texture.cpp_FUN_00574db0
;
; *****************************************************************************

section .text

    CALL engine_texture.cpp_FUN_00574db0 ; 004037f0
        ;   XREF to: 00574db0 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00574db0()
        ;   Label: engine_3d.c_freeTextureCache_FUN_004037f0
    RET                                 ; 004037f5

