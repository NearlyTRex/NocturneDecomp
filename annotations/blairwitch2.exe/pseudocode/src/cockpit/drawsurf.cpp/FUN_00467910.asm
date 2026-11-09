; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_00467910(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0060b274
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00467910
        ;   Label: cockpit_drawsurf.cpp_FUN_00467910
    MOV [0x0060b274],EAX                ; 00467914 | DAT_0060b274
    RET                                 ; 00467919

