; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_drawsurf.cpp_CDrawSurface_setColorGray_FUN_00487480(void)
;
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220
;
; *****************************************************************************

section .text

    PUSH 0x80                           ; 00487480
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_setColorGray_FUN_00487480
    PUSH 0x80                           ; 00487485
    PUSH 0x80                           ; 0048748a
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220 ; 0048748f | void cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220(int red, int green, int blue)
        ;   XREF to: 00487220 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00487494
    RET                                 ; 00487497

