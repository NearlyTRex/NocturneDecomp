; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTextureCache * __cdecl engine_3d_c_initTextureCache_FUN_00403790(void)
;
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_004e44e0 at 004e45c7
;
; Called Functions:
;   engine_texture.cpp_FUN_0056a960
;
; *****************************************************************************

section .text

    CALL engine_texture.cpp_FUN_0056a960 ; 00403790
        ;   XREF to: 0056a960 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_0056a960()
        ;   Label: engine_3d.c_initTextureCache_FUN_00403790
    RET                                 ; 00403795

