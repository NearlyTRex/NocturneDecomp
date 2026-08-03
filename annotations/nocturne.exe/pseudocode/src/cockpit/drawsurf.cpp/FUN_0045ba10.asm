; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_FUN_0045ba10(void)
;
;
; Called Functions:
;   cockpit_drawsurf.cpp_setColorRGB_FUN_0045b800
;
; *****************************************************************************

section .text

    PUSH 0xff                           ; 0045ba10
        ;   Label: cockpit_drawsurf.cpp_FUN_0045ba10
    PUSH 0x0                            ; 0045ba15
    PUSH 0xff                           ; 0045ba17
    CALL cockpit_drawsurf.cpp_setColorRGB_FUN_0045b800 ; 0045ba1c
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColorRGB_FUN_0045b800(int red, int green, int blue)
    ADD ESP,0xc                         ; 0045ba21
    RET                                 ; 0045ba24

