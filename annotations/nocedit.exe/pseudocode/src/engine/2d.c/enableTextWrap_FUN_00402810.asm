; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_2d.c_enableTextWrap_FUN_00402810(void)
;
;
; Called Functions:
;   engine_2d.c_setTextWrapEnabled_FUN_00402800
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00402810
        ;   Label: engine_2d.c_enableTextWrap_FUN_00402810
    CALL engine_2d.c_setTextWrapEnabled_FUN_00402800 ; 00402812
        ;   XREF to: 00402800 (UNCONDITIONAL_CALL)  ; void engine_2d.c_setTextWrapEnabled_FUN_00402800(int enabled)
    ADD ESP,0x4                         ; 00402817
    RET                                 ; 0040281a

