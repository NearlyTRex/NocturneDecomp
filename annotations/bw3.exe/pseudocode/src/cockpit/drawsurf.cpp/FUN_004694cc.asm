; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_004694cc(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2aec
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 004694cc
        ;   Label: cockpit_drawsurf.cpp_FUN_004694cc
    MOV EAX,dword ptr [ESP + 0x4]       ; 004694d0
    MOV [0x005f2aec],EAX                ; 004694d4 | DAT_005f2aec
    RET                                 ; 004694d9

