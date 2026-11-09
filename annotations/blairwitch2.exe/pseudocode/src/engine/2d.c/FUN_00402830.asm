; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_FUN_00402830(void)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_00467f70 at 0046820d
;
; Called Functions:
;   engine_2d.c_FUN_00402810
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00402830
        ;   Label: engine_2d.c_FUN_00402830
    CALL engine_2d.c_FUN_00402810       ; 00402832
        ;   XREF to: 00402810 (UNCONDITIONAL_CALL)  ; void engine_2d.c_FUN_00402810(int enabled)
    ADD ESP,0x4                         ; 00402837
    RET                                 ; 0040283a

