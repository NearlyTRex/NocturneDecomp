; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_charactr_cpp_FUN_0042b6d0(void)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0042b6d0
        ;   Label: core_charactr.cpp_FUN_0042b6d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042b6d4
    MOV EAX,dword ptr [EAX]             ; 0042b6d8
    MOV dword ptr [EDX],EAX             ; 0042b6da
    MOV EAX,EDX                         ; 0042b6dc
    RET                                 ; 0042b6de

