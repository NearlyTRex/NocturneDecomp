; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_drawsurf.cpp_CDrawSurface_setColorMagenta_FUN_00487430(void)
;
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220
;
; *****************************************************************************

section .text

    PUSH 0xff                           ; 00487430
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_setColorMagenta_FUN_00487430
    PUSH 0x0                            ; 00487435
    PUSH 0xff                           ; 00487437
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220 ; 0048743c | void cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220(int red, int green, int blue)
        ;   XREF to: 00487220 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00487441
    RET                                 ; 00487444

