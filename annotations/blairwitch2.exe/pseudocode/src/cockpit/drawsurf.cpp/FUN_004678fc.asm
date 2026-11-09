; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_004678fc(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0060b270
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 004678fc
        ;   Label: cockpit_drawsurf.cpp_FUN_004678fc
    MOV EAX,dword ptr [ESP + 0x4]       ; 00467900
    MOV [0x0060b270],EAX                ; 00467904 | DAT_0060b270
    RET                                 ; 00467909

