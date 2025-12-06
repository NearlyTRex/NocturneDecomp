; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_drawsurf.cpp_CDrawSurface_setColorCyan_FUN_00487450(void)
;
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220
;
; *****************************************************************************

section .text

    PUSH 0xff                           ; 00487450
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_setColorCyan_FUN_00487450
    PUSH 0xff                           ; 00487455
    PUSH 0x0                            ; 0048745a
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220 ; 0048745c | void cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220(int red, int green, int blue)
        ;   XREF to: 00487220 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00487461
    RET                                 ; 00487464

