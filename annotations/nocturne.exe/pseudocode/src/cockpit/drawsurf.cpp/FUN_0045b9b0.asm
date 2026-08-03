; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_FUN_0045b9b0(void)
;
;
; Called Functions:
;   cockpit_drawsurf.cpp_setColorRGB_FUN_0045b800
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 0045b9b0
        ;   Label: cockpit_drawsurf.cpp_FUN_0045b9b0
    PUSH 0xff                           ; 0045b9b2
    PUSH 0x0                            ; 0045b9b7
    CALL cockpit_drawsurf.cpp_setColorRGB_FUN_0045b800 ; 0045b9b9
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColorRGB_FUN_0045b800(int red, int green, int blue)
    ADD ESP,0xc                         ; 0045b9be
    RET                                 ; 0045b9c1

