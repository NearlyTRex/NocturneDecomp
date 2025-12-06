; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_drawsurf.cpp_CDrawSurface_setColorDarkGray_FUN_00487470(void)
;
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220
;
; *****************************************************************************

section .text

    PUSH 0x40                           ; 00487470
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_setColorDarkGray_FUN_00487470
    PUSH 0x40                           ; 00487472
    PUSH 0x40                           ; 00487474
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220 ; 00487476 | void cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220(int red, int green, int blue)
        ;   XREF to: 00487220 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0048747b
    RET                                 ; 0048747e

