; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_crate_cpp_FUN_00439ec0(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00439ec0
        ;   Label: core_crate.cpp_FUN_00439ec0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00439ec4
    MOV dword ptr [EDX + 0x430],EAX     ; 00439ec8
    RET                                 ; 00439ece

