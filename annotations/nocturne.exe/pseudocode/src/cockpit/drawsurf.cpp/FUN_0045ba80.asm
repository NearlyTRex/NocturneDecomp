; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_FUN_0045ba80(void)
;
;
; Called Functions:
;   cockpit_drawsurf.cpp_setColorRGB_FUN_0045b800
;
; *****************************************************************************

section .text

    PUSH 0xc0                           ; 0045ba80
        ;   Label: cockpit_drawsurf.cpp_FUN_0045ba80
    PUSH 0xc0                           ; 0045ba85
    PUSH 0xc0                           ; 0045ba8a
    CALL cockpit_drawsurf.cpp_setColorRGB_FUN_0045b800 ; 0045ba8f
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColorRGB_FUN_0045b800(int red, int green, int blue)
    ADD ESP,0xc                         ; 0045ba94
    RET                                 ; 0045ba97

