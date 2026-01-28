; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_CDrawSurface_setColorGreen_FUN_004873d0(void)
;
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 004873d0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_setColorGreen_FUN_004873d0
    PUSH 0xff                           ; 004873d2
    PUSH 0x0                            ; 004873d7
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220 ; 004873d9
        ;   XREF to: 00487220 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220(int red, int green, int blue)
    ADD ESP,0xc                         ; 004873de
    RET                                 ; 004873e1

