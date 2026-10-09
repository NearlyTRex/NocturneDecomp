; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_freeTextureCache_FUN_004037a0(void)
;
;
; XREF[1]:
;   core_main.c_finalizeGameSystems_FUN_00508570 at 00508804
;
; Called Functions:
;   engine_texture.cpp_freeTextureCache_FUN_005dd7a0
;
; *****************************************************************************

section .text

    CALL engine_texture.cpp_freeTextureCache_FUN_005dd7a0 ; 004037a0
        ;   XREF to: 005dd7a0 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_freeTextureCache_FUN_005dd7a0()
        ;   Label: engine_3d.c_freeTextureCache_FUN_004037a0
    RET                                 ; 004037a5

