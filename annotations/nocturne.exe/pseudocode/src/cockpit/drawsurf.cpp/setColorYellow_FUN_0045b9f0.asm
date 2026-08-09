; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_setColorYellow_FUN_0045b9f0(void)
;
;
; Called Functions:
;   cockpit_drawsurf.cpp_setColorRGB_FUN_0045b800
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 0045b9f0
        ;   Label: cockpit_drawsurf.cpp_setColorYellow_FUN_0045b9f0
    PUSH 0xff                           ; 0045b9f2
    PUSH 0xff                           ; 0045b9f7
    CALL cockpit_drawsurf.cpp_setColorRGB_FUN_0045b800 ; 0045b9fc
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColorRGB_FUN_0045b800(int red, int green, int blue)
    ADD ESP,0xc                         ; 0045ba01
    RET                                 ; 0045ba04

