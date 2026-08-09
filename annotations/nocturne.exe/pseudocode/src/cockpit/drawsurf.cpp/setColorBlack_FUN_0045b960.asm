; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_setColorBlack_FUN_0045b960(void)
;
;
; Called Functions:
;   cockpit_drawsurf.cpp_setColorRGB_FUN_0045b800
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 0045b960
        ;   Label: cockpit_drawsurf.cpp_setColorBlack_FUN_0045b960
    PUSH 0x0                            ; 0045b962
    PUSH 0x0                            ; 0045b964
    CALL cockpit_drawsurf.cpp_setColorRGB_FUN_0045b800 ; 0045b966
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColorRGB_FUN_0045b800(int red, int green, int blue)
    ADD ESP,0xc                         ; 0045b96b
    RET                                 ; 0045b96e

