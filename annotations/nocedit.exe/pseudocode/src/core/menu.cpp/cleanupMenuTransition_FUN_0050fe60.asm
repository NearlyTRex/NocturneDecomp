; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_menu.cpp_cleanupMenuTransition_FUN_0050fe60(void)
;
;
; Called Functions:
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_texture.cpp_clearTextureCache_FUN_005dd8e0
;
; *****************************************************************************

section .text

    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0050fe60
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   Label: core_menu.cpp_cleanupMenuTransition_FUN_0050fe60
    JMP 0x005dd8e0                      ; 0050fe65
        ;   XREF to: 005dd8e0 (UNCONDITIONAL_CALL)

