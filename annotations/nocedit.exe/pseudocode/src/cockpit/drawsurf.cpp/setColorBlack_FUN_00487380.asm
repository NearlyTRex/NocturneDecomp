; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_setColorBlack_FUN_00487380(void)
;
;
; Called Functions:
;   cockpit_drawsurf.cpp_setColorRGB_FUN_00487220
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00487380
        ;   Label: cockpit_drawsurf.cpp_setColorBlack_FUN_00487380
    PUSH 0x0                            ; 00487382
    PUSH 0x0                            ; 00487384
    CALL cockpit_drawsurf.cpp_setColorRGB_FUN_00487220 ; 00487386
        ;   XREF to: 00487220 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColorRGB_FUN_00487220(int red, int green, int blue)
    ADD ESP,0xc                         ; 0048738b
    RET                                 ; 0048738e

