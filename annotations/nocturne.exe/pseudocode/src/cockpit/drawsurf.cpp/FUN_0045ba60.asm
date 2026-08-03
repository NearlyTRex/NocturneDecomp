; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_FUN_0045ba60(void)
;
;
; Called Functions:
;   cockpit_drawsurf.cpp_setColorRGB_FUN_0045b800
;
; *****************************************************************************

section .text

    PUSH 0x80                           ; 0045ba60
        ;   Label: cockpit_drawsurf.cpp_FUN_0045ba60
    PUSH 0x80                           ; 0045ba65
    PUSH 0x80                           ; 0045ba6a
    CALL cockpit_drawsurf.cpp_setColorRGB_FUN_0045b800 ; 0045ba6f
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColorRGB_FUN_0045b800(int red, int green, int blue)
    ADD ESP,0xc                         ; 0045ba74
    RET                                 ; 0045ba77

