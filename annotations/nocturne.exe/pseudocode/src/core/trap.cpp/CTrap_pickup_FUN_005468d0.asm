; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_trap_cpp_CTrap_pickup_FUN_005468d0(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005468d0
        ;   Label: core_trap.cpp_CTrap_pickup_FUN_005468d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005468d4
    MOV dword ptr [EDX + 0x2cc],EAX     ; 005468d8
    RET                                 ; 005468de

