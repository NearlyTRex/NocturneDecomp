; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_setColorCyan_FUN_00487450(void)
;
;
; Called Functions:
;   cockpit_drawsurf.cpp_setColorRGB_FUN_00487220
;
; *****************************************************************************

section .text

    PUSH 0xff                           ; 00487450
        ;   Label: cockpit_drawsurf.cpp_setColorCyan_FUN_00487450
    PUSH 0xff                           ; 00487455
    PUSH 0x0                            ; 0048745a
    CALL cockpit_drawsurf.cpp_setColorRGB_FUN_00487220 ; 0048745c
        ;   XREF to: 00487220 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColorRGB_FUN_00487220(int red, int green, int blue)
    ADD ESP,0xc                         ; 00487461
    RET                                 ; 00487464

