; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_freeTextureCache_FUN_004037a0(void)
;
;
; XREF[1]:
;   core_main.c_FUN_00503a30 at 00503a92
;
; Called Functions:
;   engine_texture.cpp_freeTextureCache_FUN_005979d0
;
; *****************************************************************************

section .text

    CALL engine_texture.cpp_freeTextureCache_FUN_005979d0 ; 004037a0
        ;   XREF to: 005979d0 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_freeTextureCache_FUN_005979d0()
        ;   Label: engine_3d.c_freeTextureCache_FUN_004037a0
    RET                                 ; 004037a5

