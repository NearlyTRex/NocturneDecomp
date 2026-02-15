; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_setColorRed_FUN_004873b0(void)
;
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 004873b0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_setColorRed_FUN_004873b0
    PUSH 0x0                            ; 004873b2
    PUSH 0xff                           ; 004873b4
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220 ; 004873b9
        ;   XREF to: 00487220 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220(int red, int green, int blue)
    ADD ESP,0xc                         ; 004873be
    RET                                 ; 004873c1

