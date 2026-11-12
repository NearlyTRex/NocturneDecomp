; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f23e0(void)
;
;
; XREF[1]:
;   engine_palette.cpp_FUN_00510d50 at 00510da6
;
; Called Functions:
;   engine_special.cpp_FUN_0055f550
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 004f23e0
        ;   Label: engine_mini3d.cpp_FUN_004f23e0
    CALL engine_special.cpp_FUN_0055f550 ; 004f23e2
        ;   XREF to: 0055f550 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_FUN_0055f550(int clear_lock_flag)
    ADD ESP,0x4                         ; 004f23e7
    RET                                 ; 004f23ea

