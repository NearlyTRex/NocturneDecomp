; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_CDrawSurface_setColorLightGray_FUN_004874a0(void)
;
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220
;
; *****************************************************************************

section .text

    PUSH 0xc0                           ; 004874a0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_setColorLightGray_FUN_004874a0
    PUSH 0xc0                           ; 004874a5
    PUSH 0xc0                           ; 004874aa
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220 ; 004874af
        ;   XREF to: 00487220 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220(int red, int green, int blue)
    ADD ESP,0xc                         ; 004874b4
    RET                                 ; 004874b7

