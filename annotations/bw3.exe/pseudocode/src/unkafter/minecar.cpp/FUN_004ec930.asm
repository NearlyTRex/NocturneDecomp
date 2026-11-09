; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_minecar_cpp_FUN_004ec930(void)
;
;
; XREF[1]:
;   unkafter_palette.cpp_FUN_00509d90 at 00509d96
;
; Called Functions:
;   engine_special.cpp_FUN_00565820
;
; *****************************************************************************

section .text

    CALL engine_special.cpp_FUN_00565820 ; 004ec930
        ;   XREF to: 00565820 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00565820()
        ;   Label: unkafter_minecar.cpp_FUN_004ec930
    RET                                 ; 004ec935

