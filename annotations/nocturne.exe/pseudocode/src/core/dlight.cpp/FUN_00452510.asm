; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_dlight_cpp_FUN_00452510(void)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00452510
        ;   Label: core_dlight.cpp_FUN_00452510
    MOV EAX,dword ptr [ESP + 0x8]       ; 00452514
    MOV EAX,dword ptr [EAX]             ; 00452518
    MOV dword ptr [EDX],EAX             ; 0045251a
    MOV EAX,EDX                         ; 0045251c
    RET                                 ; 0045251e

