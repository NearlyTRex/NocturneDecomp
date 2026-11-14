; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTextureCache * __cdecl engine_3d_c_initTextureCache_FUN_004037e0(void)
;
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_004e46c0 at 004e47a7
;
; Called Functions:
;   engine_texture.cpp_FUN_00574d50
;
; *****************************************************************************

section .text

    CALL engine_texture.cpp_FUN_00574d50 ; 004037e0
        ;   XREF to: 00574d50 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00574d50()
        ;   Label: engine_3d.c_initTextureCache_FUN_004037e0
    RET                                 ; 004037e5

