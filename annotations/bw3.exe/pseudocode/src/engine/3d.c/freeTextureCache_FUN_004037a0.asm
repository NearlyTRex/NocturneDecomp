; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_freeTextureCache_FUN_004037a0(void)
;
;
; XREF[1]:
;   core_main.c_FUN_004e4c70 at 004e4cd2
;
; Called Functions:
;   engine_texture.cpp_freeTextureCache_FUN_0056a9c0
;
; *****************************************************************************

section .text

    CALL engine_texture.cpp_freeTextureCache_FUN_0056a9c0 ; 004037a0
        ;   XREF to: 0056a9c0 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_freeTextureCache_FUN_0056a9c0()
        ;   Label: engine_3d.c_freeTextureCache_FUN_004037a0
    RET                                 ; 004037a5

