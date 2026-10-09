; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTextureCache * __cdecl engine_3d_c_initTextureCache_FUN_00403790(void)
;
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_00507a60 at 00507bc6
;
; Called Functions:
;   engine_texture.cpp_initTextureCache_FUN_005dd760
;
; *****************************************************************************

section .text

    CALL engine_texture.cpp_initTextureCache_FUN_005dd760 ; 00403790
        ;   XREF to: 005dd760 (UNCONDITIONAL_CALL)  ; CTextureCache * engine_texture.cpp_initTextureCache_FUN_005dd760()
        ;   Label: engine_3d.c_initTextureCache_FUN_00403790
    RET                                 ; 00403795

