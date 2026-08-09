; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_setColorWhite_FUN_0045b970(void)
;
;
; Called Functions:
;   cockpit_drawsurf.cpp_setColorRGB_FUN_0045b800
;
; *****************************************************************************

section .text

    PUSH 0xff                           ; 0045b970
        ;   Label: cockpit_drawsurf.cpp_setColorWhite_FUN_0045b970
    PUSH 0xff                           ; 0045b975
    PUSH 0xff                           ; 0045b97a
    CALL cockpit_drawsurf.cpp_setColorRGB_FUN_0045b800 ; 0045b97f
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColorRGB_FUN_0045b800(int red, int green, int blue)
    ADD ESP,0xc                         ; 0045b984
    RET                                 ; 0045b987

