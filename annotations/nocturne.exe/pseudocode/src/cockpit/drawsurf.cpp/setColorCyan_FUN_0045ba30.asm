; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_setColorCyan_FUN_0045ba30(void)
;
;
; Called Functions:
;   cockpit_drawsurf.cpp_setColorRGB_FUN_0045b800
;
; *****************************************************************************

section .text

    PUSH 0xff                           ; 0045ba30
        ;   Label: cockpit_drawsurf.cpp_setColorCyan_FUN_0045ba30
    PUSH 0xff                           ; 0045ba35
    PUSH 0x0                            ; 0045ba3a
    CALL cockpit_drawsurf.cpp_setColorRGB_FUN_0045b800 ; 0045ba3c
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColorRGB_FUN_0045b800(int red, int green, int blue)
    ADD ESP,0xc                         ; 0045ba41
    RET                                 ; 0045ba44

