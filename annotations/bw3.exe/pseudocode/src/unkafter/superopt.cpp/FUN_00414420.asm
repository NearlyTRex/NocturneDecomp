; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_superopt_cpp_FUN_00414420(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00414420
        ;   Label: unkafter_superopt.cpp_FUN_00414420
    MOV EDX,dword ptr [EAX + 0x28]      ; 00414424
    MOV dword ptr [EAX + 0x30],0x0      ; 00414427
    MOV dword ptr [EAX + 0x2c],EDX      ; 0041442e
    MOV EDX,dword ptr [ESP + 0x14]      ; 00414431
    MOV dword ptr [EAX + 0x28],EDX      ; 00414435
    RET                                 ; 00414438

