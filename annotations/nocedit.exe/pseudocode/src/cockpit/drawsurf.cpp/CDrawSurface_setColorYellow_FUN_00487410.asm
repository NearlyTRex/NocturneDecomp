; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_CDrawSurface_setColorYellow_FUN_00487410(void)
;
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00487410
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_setColorYellow_FUN_00487410
    PUSH 0xff                           ; 00487412
    PUSH 0xff                           ; 00487417
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220 ; 0048741c
        ;   XREF to: 00487220 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220(int red, int green, int blue)
    ADD ESP,0xc                         ; 00487421
    RET                                 ; 00487424

