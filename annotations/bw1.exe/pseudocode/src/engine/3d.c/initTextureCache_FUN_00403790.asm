; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTextureCache * __cdecl engine_3d_c_initTextureCache_FUN_00403790(void)
;
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_005032a0 at 00503387
;
; Called Functions:
;   engine_texture.cpp_FUN_00597970
;
; *****************************************************************************

section .text

    CALL engine_texture.cpp_FUN_00597970 ; 00403790
        ;   XREF to: 00597970 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00597970()
        ;   Label: engine_3d.c_initTextureCache_FUN_00403790
    RET                                 ; 00403795

