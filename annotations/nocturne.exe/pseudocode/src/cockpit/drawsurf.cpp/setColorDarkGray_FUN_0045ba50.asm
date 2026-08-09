; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_setColorDarkGray_FUN_0045ba50(void)
;
;
; Called Functions:
;   cockpit_drawsurf.cpp_setColorRGB_FUN_0045b800
;
; *****************************************************************************

section .text

    PUSH 0x40                           ; 0045ba50
        ;   Label: cockpit_drawsurf.cpp_setColorDarkGray_FUN_0045ba50
    PUSH 0x40                           ; 0045ba52
    PUSH 0x40                           ; 0045ba54
    CALL cockpit_drawsurf.cpp_setColorRGB_FUN_0045b800 ; 0045ba56
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColorRGB_FUN_0045b800(int red, int green, int blue)
    ADD ESP,0xc                         ; 0045ba5b
    RET                                 ; 0045ba5e

