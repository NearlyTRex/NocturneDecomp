; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_setColorRed_FUN_0045b990(void)
;
;
; Called Functions:
;   cockpit_drawsurf.cpp_setColorRGB_FUN_0045b800
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 0045b990
        ;   Label: cockpit_drawsurf.cpp_setColorRed_FUN_0045b990
    PUSH 0x0                            ; 0045b992
    PUSH 0xff                           ; 0045b994
    CALL cockpit_drawsurf.cpp_setColorRGB_FUN_0045b800 ; 0045b999
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColorRGB_FUN_0045b800(int red, int green, int blue)
    ADD ESP,0xc                         ; 0045b99e
    RET                                 ; 0045b9a1

