; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_setColorMagenta_FUN_00487430(void)
;
;
; Called Functions:
;   cockpit_drawsurf.cpp_setColorRGB_FUN_00487220
;
; *****************************************************************************

section .text

    PUSH 0xff                           ; 00487430
        ;   Label: cockpit_drawsurf.cpp_setColorMagenta_FUN_00487430
    PUSH 0x0                            ; 00487435
    PUSH 0xff                           ; 00487437
    CALL cockpit_drawsurf.cpp_setColorRGB_FUN_00487220 ; 0048743c
        ;   XREF to: 00487220 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColorRGB_FUN_00487220(int red, int green, int blue)
    ADD ESP,0xc                         ; 00487441
    RET                                 ; 00487444

