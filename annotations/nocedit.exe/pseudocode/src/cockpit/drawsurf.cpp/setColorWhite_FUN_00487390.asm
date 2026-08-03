; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_setColorWhite_FUN_00487390(void)
;
;
; Called Functions:
;   cockpit_drawsurf.cpp_setColorRGB_FUN_00487220
;
; *****************************************************************************

section .text

    PUSH 0xff                           ; 00487390
        ;   Label: cockpit_drawsurf.cpp_setColorWhite_FUN_00487390
    PUSH 0xff                           ; 00487395
    PUSH 0xff                           ; 0048739a
    CALL cockpit_drawsurf.cpp_setColorRGB_FUN_00487220 ; 0048739f
        ;   XREF to: 00487220 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColorRGB_FUN_00487220(int red, int green, int blue)
    ADD ESP,0xc                         ; 004873a4
    RET                                 ; 004873a7

