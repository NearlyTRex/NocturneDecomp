; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_event_cpp_FUN_00481970(void)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00481970
        ;   Label: core_event.cpp_FUN_00481970
    MOV EAX,dword ptr [ESP + 0x8]       ; 00481974
    MOV EAX,dword ptr [EAX]             ; 00481978
    MOV dword ptr [EDX],EAX             ; 0048197a
    MOV EAX,EDX                         ; 0048197c
    RET                                 ; 0048197e

