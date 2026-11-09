; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_004287a0(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004287a0
        ;   Label: core_charactr.cpp_FUN_004287a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004287a4
    MOV dword ptr [EDX + 0x2780],EAX    ; 004287a8
    RET                                 ; 004287ae

